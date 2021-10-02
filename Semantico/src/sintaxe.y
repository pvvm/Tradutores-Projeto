%define parse.error verbose
%define lr.type canonical-lr

/*
TODO: 
    ERROS:
        Tipos errados                                   QUASE LA
        Numero de argumentos em chamada de funcao
        Tipos de argumentos na chamada?
        Variáveis e funcoes não declaradas              FEITO
        Return                                          APARENTEMENTE É DA GERAÇÃO DE CÓDIGO
        Variáveis e funcoes redeclaradas                FEITO
        Existência da main                              FEITO
        Ver se a função de >> e << é unária             FEITO
*/

%{
#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"
#include "../lib/lista.h"


extern int yylex(void);
extern int yylex_destroy(void);
extern char * yytext;
extern FILE *yyin;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;
int num_erros_semanticos = 0;
int escopo_max = 0;
int escopo_atual = 0;
int esc_aux;
int num_args = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(const char *);
%}

// Estrutura do token
%code requires {
    struct token {
        char lexema[50];
        int linha;
        int coluna;
    };
}

%union {
    struct token tok;
    struct No* no;              // Estrutura do no
    struct listaNo* lista;      // Estrutura de lista de nos
}

%token <tok> IF ELSE FOR RETURN TIPO LIST
%right IF ELSE
%token <tok> ENTRADA SAIDA
%token <tok> VIRG
%token <tok> PV
%token <tok> ATRIB
%right ATRIB
%token <tok> LOG_OP_OU
%left LOG_OP_OU
%token <tok> LOG_OP_E
%left LOG_OP_E
%token <tok> REL_OP_BAIXA
%left REL_OP_BAIXA
%token <tok> REL_OP_ALTA
%left REL_OP_ALTA
%token <tok> LIST_OP_BIN LIST_OP_CONSTRUTOR
%token <tok> LIST_OP_UN LIST_OP_HEADER
%right LIST_OP_BIN LIST_OP_CONSTRUTOR LIST_OP_UN LIST_OP_HEADER
%token <tok> ARIT_OP_MAIS ARIT_OP_MENOS
%left ARIT_OP_MAIS ARIT_OP_MENOS
%token <tok> ARIT_OP_ALTA
%left ARIT_OP_ALTA
%token <tok> LOG_OP_NEG
%token <tok> CONST_INT CONST_FLOAT STRING NIL ID
%token <tok> ABRE_P FECHA_P ABRE_C FECHA_C
%left ABRE_P FECHA_P

%type <lista> declarations
%type <no> declaration function funcDecl parameters block
%type <lista> moreStmt
%type <no> stmt conditional bracesStmt iteration expIte  io varDecl iteArgs
%type <no> attribuition expList expLogic andLogic expComp expRel expArit expMul
%type <no> negElement element ret
%type <lista> arguments


%start program

%%

program:        declarations                            {raiz = montaNo("program", NULL, NULL, NULL, $1, retUlt(&primeiro), NULL);

                                                        // Checa se existe main
                                                        if(procuraLista(&cabeca, "main", 0)) {
                                                            printf("Erro semantico: funcao main nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        
                                                        // Caso nao hajam erros lexicos, sintaticos e semanticos, imprime a arvore
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0/* && num_erros_semanticos == 0*/) {
                                                            printf("Sem erros lexicos\n");
                                                            printf("Sem erros sintaticos\n");
                                                            printf("Sem erros semanticos\n\n");
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            //desalocar(raiz);      // Ver se tem problema tirar o desalocar daqui
                                                            printf("\n\n");
                                                        } else {
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                            printf("Foram encontrados %d erros semanticos\n", num_erros_semanticos);
                                                        }
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        desalocar(raiz);
                                                        liberaEsc(primeiro);}
                | /* empty */
                ;

                // Regras como essa nao sao colocadas na arvore.
                // O no declaration foi colocado em uma lista de nos, a qual sera posta na arvore
declarations:   declarations declaration                {$$ = novaListaNo(&$1, $2);}
                | declaration                           {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

declaration:    function                                {$$ = $1;}
                | varDecl PV                            {$$ = $1;}
                | error PV                              {}
                ;

                // Inclui na lista o escopo novo para definir o escopo de argumentos (apos isso, retira da lista)
function:       funcDecl ABRE_P {pushEsc(&primeiro, escopo_max + 1);} parameters FECHA_P {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);} ABRE_C moreStmt FECHA_C       {$$ = montaNo("function", $1, $4, NULL, $8, retUlt(&primeiro), NULL);}
                | error ABRE_P {pushEsc(&primeiro, escopo_max + 1);} parameters FECHA_P {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);} ABRE_C moreStmt FECHA_C        {$$ = montaNo("function",$4, NULL, NULL, $8, retUlt(&primeiro), NULL);}
                | funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C                                       {$$ = montaNo("function", $1, NULL, NULL, $5, retUlt(&primeiro), NULL);}
                | error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C                                          {$$ = montaNo("function", NULL, NULL, NULL, $5, retUlt(&primeiro), NULL);}
                ;

funcDecl:       TIPO ID                                 {$$ = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, $2.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, $2.lexema, "funcao", $1.lexema, "", retUlt(&primeiro), $1.linha, $1.coluna);}

                | TIPO LIST ID                          {$$ = NULL;
                                                        strcpy(aux, $3.lexema);
                                                        num_erros_semanticos += push(&cabeca, $3.lexema, "funcao", strcat($1.lexema, " list"), "", retUlt(&primeiro), $1.linha, $1.coluna);}
                ;

parameters:     parameters VIRG varDecl                 {$$ = $1; num_args++;}
                | varDecl                               {$$ = $1; num_args++;}
                ;

moreStmt:       moreStmt block                          {$$ = novaListaNo(&$1, $2);}
                | block                                 {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

block:          stmt                                    {$$ = $1;}                          
                | ABRE_C moreStmt FECHA_C               {$$ = montaNo("block", NULL, NULL, NULL, $2, retUlt(&primeiro), NULL);}
                ;

stmt:           conditional                             {$$ = $1;}
                | iteration                             {$$ = $1;}
                | varDecl PV                            {$$ = $1;}
                | attribuition PV                       {$$ = $1;}
                | io PV                                 {$$ = $1;}
                | ret PV                                {$$ = $1;}
                | error                                 {}
                ;

conditional:    IF ABRE_P attribuition FECHA_P bracesStmt                                   {$$ = montaNo($1.lexema, NULL, $5, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            $$->no1 = montaNo("condArg", $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                | IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt %prec ELSE      {$$ = montaNo($1.lexema, NULL, $5, $7, NULL, retUlt(&primeiro), NULL);
                                                                                            $$->no1 = montaNo("condArg", $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                | IF ABRE_P error FECHA_P bracesStmt                                        {}
                ;

bracesStmt:     ABRE_C moreStmt FECHA_C                 {$$ = montaNo("statements", NULL, NULL, NULL, $2, retUlt(&primeiro), NULL);}
                | stmt                                  {$$ = montaNo("statements", $1, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                ;

iteration:      FOR ABRE_P iteArgs FECHA_P bracesStmt              {$$ = montaNo($1.lexema, $3, $5, NULL, NULL, retUlt(&primeiro), NULL);}
                | FOR ABRE_P error {yyerrok;} FECHA_P bracesStmt   {}
                ;

iteArgs:        expIte PV expIte PV expIte              {$$ = montaNo("iteArgs", $1, $3, $5, NULL, retUlt(&primeiro), NULL);}
                ;

expIte:         attribuition                            {$$ = $1;}
                | /* empty */                           {$$ = NULL;}
                ;


                                                        // simb recebe o ponteiro para a entrada do ID
                                                        // apos isso, esse ponteiro eh associado ao no em que ele aparece na arvore
io:             ENTRADA ABRE_P ID FECHA_P               {struct tabelaSimb *simb = retSimb(&cabeca, $3.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}

                | SAIDA ABRE_P attribuition FECHA_P     {$$ = montaNo($1.lexema, $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);}

                | SAIDA ABRE_P STRING FECHA_P           {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, $3.lexema, "constante", "string", "", retUlt(&primeiro), $3.linha, $3.coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, $3.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}

                | ENTRADA ABRE_P error FECHA_P          {}
                | SAIDA ABRE_P error FECHA_P            {}
                ;


varDecl:        TIPO ID                                 {$$ = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, $2.lexema, "variavel", $1.lexema, "", retUlt(&primeiro), $1.linha, $1.coluna);}

                | TIPO LIST ID                          {$$ = NULL;
                                                        num_erros_semanticos += push(&cabeca, $3.lexema, "variavel", strcat($1.lexema, " list"), "", retUlt(&primeiro), $1.linha, $1.coluna);}
                ;

attribuition:   ID ATRIB expLogic                       {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($2.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        //printf("%s e %s\n", simb->tipo, $3->tipo);
                                                        if((!strcmp($3->tipo, "int") && !strcmp($$->no1->simbolo->tipo, "float")) || (!strcmp($3->tipo, "float") && !strcmp($$->no1->simbolo->tipo, "int"))) {
                                                            char aux[15];
                                                            strcpy(aux, "(");
                                                            strcat(aux, simb->tipo);
                                                            strcat(aux, ")");
                                                            struct No* no = montaNo(aux, $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                            $$->no2 = no;
                                                        } else if(!strcmp($3->tipo, "int list")){
                                                            if(strcmp($$->no1->simbolo->tipo, "int list")) {
                                                                printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            $$->no2 = $3;
                                                        } else if(!strcmp($3->tipo, "float list")){
                                                            if(strcmp($$->no1->simbolo->tipo, "float list")) {
                                                                printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            $$->no2 = $3;
                                                        } else {
                                                            //printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            //++num_erros_semanticos;
                                                            $$->no2 = $3;
                                                        }}
                | expLogic                              {$$ = $1;}
                ;

expLogic:       expLogic LOG_OP_OU andLogic             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | andLogic                              {$$ = $1;}
                ;

andLogic:       andLogic LOG_OP_E expComp               {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | expComp                               {$$ = $1;}
                ;

expComp:        expComp REL_OP_BAIXA expRel             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | expRel                                {$$ = $1;}
                ;

expRel:         expRel REL_OP_ALTA expArit              {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | expArit                               {$$ = $1;}
                ;

expArit:        expArit ARIT_OP_MAIS expMul             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | expArit ARIT_OP_MENOS expMul          {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | expMul                                {$$ = $1;}
                ;

expMul:         expMul ARIT_OP_ALTA negElement          {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
                | negElement                            {$$ = $1;}
                ;

negElement:     LOG_OP_NEG expList                      {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, $2->tipo);}
                | ARIT_OP_MENOS expList                 {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, $2->tipo);}
                | expList                               {$$ = $1;}
                ;

expList:        LIST_OP_UN element                      {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, $2->tipo);}
                | LIST_OP_HEADER element                {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        char* aux = strtok($2->tipo, " ");
                                                        strcpy($$->tipo, aux);}

                | expList LIST_OP_BIN element           {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro), NULL);
                                                        char aux[15];
                                                        strcpy(aux, $1->simbolo->tipo);
                                                        strcat(aux, " list");
                                                        strcpy($$->tipo, aux);
                                                        if(strcmp($1->simbolo->varOuFunc, "funcao")) {
                                                            printf("Erro semantico: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        } else if($1->simbolo->numArgs != 1) {
                                                            printf("Erro semantico: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}
                | expList LIST_OP_CONSTRUTOR element    {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, $3->tipo);}
                | element                               {$$ = $1;}
                ;

                                                        // simb recebe o ponteiro para a entrada do ID
                                                        // apos isso, esse ponteiro eh associado ao no em que ele aparece na arvore
element:        ID                                      {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if($$->simbolo != NULL)
                                                            strcpy($$->tipo, $$->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: variavel nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}

                | ABRE_P attribuition FECHA_P           {$$ = $2;}

                | ID ABRE_P arguments FECHA_P           {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, $3, retUlt(&primeiro), simb);
                                                        if($$->simbolo != NULL)
                                                            strcpy($$->tipo, $$->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: funcao nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}

                | ID ABRE_P FECHA_P                     {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if($$->simbolo != NULL)
                                                            strcpy($$->tipo, $$->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: funcao nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}

                | CONST_INT                             {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "int");}

                | CONST_FLOAT                           {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "float");}

                | NIL                                   {$$ = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "NIL");}
                ;

arguments:      arguments VIRG attribuition             {$$ = novaListaNo(&$1, $3);}
                | attribuition                          {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

ret:            RETURN attribuition                     {$$ = montaNo("return", $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                ;

%%


/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
void yyerror(const char *s) {
    printf("ERRO: %s\nLinha: %d\tColuna: %d\n\n", s, yylval.tok.linha, yylval.tok.coluna);
    ++num_erros_sintaticos;
}

int main(int argc, char **argv) {
    pushEsc(&primeiro, 0);
    FILE *fp = fopen(argv[1], "r");
    if(!fp) {
        printf("Arquivo nao existente\n");
    } else {
        yyin = fp;
        yyparse();
    }
    fclose(yyin);

    yylex_destroy();

    return 0;
}