%define parse.trace
%define lr.type canonical-lr;


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
int var_ja_decl = 0;
int escopo_max = 0;
int escopo_atual = 0;
int esc_aux;
int num_args = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(char *);
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
%token <tok> LIST_OP_BIN
%token <tok> LIST_OP_UN
%token <tok> ARIT_OP_MAIS ARIT_OP_MENOS
%left ARIT_OP_MAIS ARIT_OP_MENOS
%token <tok> ARIT_OP_ALTA
%left ARIT_OP_ALTA
%token <tok> LOG_OP_NEG
%token <tok> CONST_INT CONST_FLOAT STRING NIL ID
%token <tok> ABRE_P FECHA_P ABRE_C FECHA_C
%left ABRE_P FECHA_P

%type <lista> declarations
%type <no> declaration function funcDecl parameters 
%type <lista> moreStmt
%type <no> stmt conditional bracesStmt iteration expIte  io varDecl iteArgs
%type <no> attribuition expList expLogic andLogic expComp expRel expArit expMul
%type <no> negElement element ret
%type <lista> arguments


%start program

%%

program:        declarations                            {raiz = montaNo("program", NULL, NULL, NULL, $1, retUlt(&primeiro));
                                                        if(num_erros_lexicos == 0)
                                                            printf("Sem erros lexicos\n");
                                                        else
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && var_ja_decl == 0) {
                                                            printf("Sem erros sintaticos\n\n");
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            desalocar(raiz);
                                                            printf("\n\n");
                                                        } else 
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
                | /* empty */
                ;

declarations:   declarations declaration                {$$ = novaListaNo(&$1, $2);}
                | declaration                           {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

declaration:    function                                {$$ = $1;}
                | varDecl PV                            {$$ = $1;}
                | error PV                              {}
                ;

                
                // Inclui na lista o escopo novo para definir o escopo de argumentos (apos isso, retira da lista)
function:       funcDecl ABRE_P {pushEsc(&primeiro, escopo_max + 1);} parameters FECHA_P {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);} ABRE_C moreStmt FECHA_C       {$$ = montaNo("function", $1, $4, NULL, $8, retUlt(&primeiro));}
                | error ABRE_P {pushEsc(&primeiro, escopo_max + 1);} parameters FECHA_P {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);} ABRE_C moreStmt FECHA_C        {$$ = montaNo("function",$4, NULL, NULL, $8, retUlt(&primeiro));}
                | funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C                                       {$$ = montaNo("function", $1, NULL, NULL, $5, retUlt(&primeiro));}
                | error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C                                          {$$ = montaNo("function", NULL, NULL, NULL, $5, retUlt(&primeiro));}
                ;

funcDecl:       TIPO ID                                 {$$ = NULL;
                                                        strcpy(aux, $2.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, $2.lexema, "funcao", $1.lexema, "", retUlt(&primeiro), $1.linha, $1.coluna);}

                | TIPO LIST ID                          {$$ = NULL;
                                                        strcpy(aux, $3.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, $3.lexema, "funcao", strcat($1.lexema, " list"), "", retUlt(&primeiro), $1.linha, $1.coluna);}
                ;

parameters:     parameters VIRG varDecl                 {$$ = $1; num_args++;}
                | varDecl                               {$$ = $1; num_args++;}
                ;

moreStmt:       moreStmt stmt                           {$$ = novaListaNo(&$1, $2);}
                | stmt                                  {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

stmt:           conditional                             {$$ = $1;}
                | iteration                             {$$ = $1;}
                | varDecl PV                            {$$ = $1;}
                | attribuition PV                       {$$ = $1;}
                | io PV                                 {$$ = $1;}
                | ret PV                                {$$ = $1;}
                | error                                 {}     //COM ESSE DETECTA O ERRO DA LINHA 13 DE TEST
                ;

//multLineStmt:   conditional                             {$$ = $1;}
//                | iteration                             {$$ = $1;}
//                ;

conditional:    IF ABRE_P attribuition FECHA_P bracesStmt                       {$$ = montaNo($1.lexema, $3, $5, NULL, NULL, retUlt(&primeiro));}
                | IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt %prec ELSE     {$$ = montaNo($1.lexema, $3, $5, $7, NULL, retUlt(&primeiro));}
                | IF ABRE_P error FECHA_P bracesStmt                            {}
                ;

bracesStmt:     ABRE_C moreStmt FECHA_C                 {$$ = montaNo("QUESTAO PARA RESOLVER", NULL, NULL, NULL, $2, retUlt(&primeiro));}
                | stmt                                  {$$ = $1;}
                ;

iteration:      FOR ABRE_P iteArgs FECHA_P bracesStmt   {$$ = montaNo($1.lexema, $3, $5, NULL, NULL, retUlt(&primeiro));}
                | FOR ABRE_P error {yyerrok;} FECHA_P bracesStmt   {}
                ;

iteArgs:        expIte PV expIte PV expIte              {$$ = montaNo("iteArgs", $1, $3, $5, NULL, retUlt(&primeiro));}
                ;

expIte:         attribuition                            {$$ = $1;}
                | /* empty */                           {$$ = NULL;}
                ;

//oneLineStmt:    varDecl PV                              {$$ = $1;}
//                | attribuition PV                       {$$ = $1;}
//                | io PV                                 {$$ = $1;}
//                | ret PV                                {$$ = $1;}
//                | error                                 {}     //COM ESSE DETECTA O ERRO DA LINHA 13 DE TEST
//                ;

io:             ENTRADA ABRE_P ID FECHA_P               {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | SAIDA ABRE_P attribuition FECHA_P     {$$ = montaNo($1.lexema, $3, NULL, NULL, NULL, retUlt(&primeiro));}
                | SAIDA ABRE_P STRING FECHA_P           {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, $3.lexema, "constante", "string", "", retUlt(&primeiro), $3.linha, $3.coluna);}
                | ENTRADA ABRE_P error FECHA_P          {}
                | SAIDA ABRE_P error FECHA_P            {}
                ;


varDecl:        TIPO ID                                 {$$ = NULL;
                                                        char aux[50];
                                                        strcpy(aux, $2.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", $1.lexema, "", retUlt(&primeiro), $1.linha, $1.coluna);}

                | TIPO LIST ID                          {$$ = NULL;
                                                        char aux[50];
                                                        strcpy(aux, $3.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", strcat($1.lexema, " list"), "", retUlt(&primeiro), $1.linha, $1.coluna);}
                ;

attribuition:   ID ATRIB expLogic                       {$$ = montaNo($2.lexema, NULL, $3, NULL, NULL, retUlt(&primeiro));
                                                        $$->no1 = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | expLogic                              {$$ = $1;}
                ;

expLogic:       expLogic LOG_OP_OU andLogic             {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | andLogic                              {$$ = $1;}
                ;

andLogic:       andLogic LOG_OP_E expComp               {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | expComp                               {$$ = $1;}
                ;

expComp:        expComp REL_OP_BAIXA expRel             {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | expRel                                {$$ = $1;}
                ;

expRel:         expRel REL_OP_ALTA expArit              {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | expArit                               {$$ = $1;}
                ;

expArit:        expArit ARIT_OP_MAIS expMul             {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | expArit ARIT_OP_MENOS expMul          {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | expMul                                {$$ = $1;}
                ;

expMul:         expMul ARIT_OP_ALTA negElement          {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | negElement                            {$$ = $1;}
                ;

negElement:     LOG_OP_NEG expList                      {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro));}
                | ARIT_OP_MENOS expList                 {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro));}
                | expList                               {$$ = $1;}
                ;

expList:        LIST_OP_UN element                      {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro));}
                | expList LIST_OP_BIN element           {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro));}
                | element                               {$$ = $1;}
                ;

element:        ID                                      {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | ABRE_P attribuition FECHA_P           {$$ = $2;}
                | ID ABRE_P arguments FECHA_P           {$$ = montaNo($1.lexema, NULL, NULL, NULL, $3, retUlt(&primeiro));}
                | ID ABRE_P FECHA_P                     {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | CONST_INT                             {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | CONST_FLOAT                           {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                | NIL                                   {$$ = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro));}
                ;

arguments:      arguments VIRG attribuition             {$$ = novaListaNo(&$1, $3);}
                | attribuition                          {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

ret:            RETURN attribuition                     {$$ = montaNo("return", $2, NULL, NULL, NULL, retUlt(&primeiro));}
                ;

%%


/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
void yyerror(char *s) {
    printf("ERRO sintático\nLinha: %d\tColuna: %d\n\n", yylval.tok.linha, yylval.tok.coluna);
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