/*
Pedro Vitor Valenca Mizuno
17/0043665
*/

%define parse.error verbose
%define lr.type canonical-lr

%{
#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"
#include "../lib/lista.h"
#include "../lib/ger_cod.h"
#include "../lib/pilha.h"


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
int num_args_chamada = 0;
int argumentos = 0;
int ger_codigo_var = 0;
int label_cont = 0;
int tem_else = 0;
int flag_incremento = 0;
int string_cont = 0;
int eh_global = 1;
int na_main = 0;
int flag_brz = 0;
char aux[50];
char tipo_func[50];
char tipo_func_return[50];
char nome_arq[200];
char retorno_expressao[50];
char instrucao_incremento[200] = "";
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;
struct listaArgs* args = NULL;
struct pilhaLabel* topo = NULL;
struct pilhaIncremento* topoInc = NULL;
FILE *escrita;

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
%type <no> stmt conditional ifBracesOrNot forBracesOrNot iteration expIte  io varDecl iteArgs
%type <no> attribuition expList expLogic andLogic expComp expRel expArit expMul
%type <no> expUn element ret
%type <lista> arguments


%start program

%%

program:        declarations                            {raiz = montaNo("program", NULL, NULL, NULL, $1, retUlt(&primeiro), NULL);
                                                        fputs("nop\n", escrita);

                                                        // Checa se existe main
                                                        if(procuraLista(&cabeca, "main", 0)) {
                                                            printf("ERRO SEMANTICO: funcao main nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("Foram encontrados %d erros semanticos\n\n", num_erros_semanticos);
                                                        // Caso nao hajam erros lexicos e sintaticos, imprime a arvore
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0/* && num_erros_semanticos == 0*/) {
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            desalocar(raiz);     
                                                            printf("\n\n");
                                                        }
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);

                                                        FILE *final = fopen(nome_arq, "w");
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            FILE *table = fopen("tabela123.tac", "w");
                                                            fputs(".table\n\n", table);
                                                            int contador_string = 0;
                                                            // Cria o arquivo com o .table
                                                            escreveTable(table, cabeca, contador_string);
                                                            fclose(table);
                                                            fclose(escrita);

                                                            FILE *f1 = fopen("code321.tac", "r");
                                                            FILE *f2 = fopen("tabela123.tac", "r");
                                                            // Unifica o arquivo do .table com o .code
                                                            uneArquivos(final, f1, f2);
                                                            fclose(f1);
                                                            fclose(f2);
                                                            remove("tabela123.tac");
                                                        } else
                                                            fclose(escrita);
                                                        remove("code321.tac");
                                                        if(num_erros_sintaticos != 0 || num_erros_lexicos != 0 || num_erros_semanticos != 0) {
                                                            remove(nome_arq);
                                                        }
                                                        fclose(final);
                                                        
                                                        liberaLista(cabeca);
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
                | error                                 {}
                ;

                // Inclui na lista o escopo novo para definir o escopo de argumentos (apos isso, retira da lista)
function:       funcDecl ABRE_P {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0; eh_global = 0;} parameters FECHA_P
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;} ABRE_C moreStmt FECHA_C       
                    {$$ = montaNo("function", $1, $4, NULL, $8, retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "NIL");
                    }

                    // Caso nao seja a main, gera a instrucao de retorno default
                    if(strcmp(aux, "main")) { 
                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                            geraOperacoes("return", ret_default->no1->nome, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                    }
                    $$->lista = novaListaNo(&$$->lista, ret_default);
                    strcpy(tipo_func_return, "");
                    eh_global = 1;
                    na_main = 0;
                    }
                
                | error ABRE_P {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func);} parameters FECHA_P
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;} ABRE_C moreStmt FECHA_C        {$$ = montaNo("function",$4, NULL, NULL, $8, retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
                
                | funcDecl ABRE_P FECHA_P {strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0; eh_global = 0;} ABRE_C moreStmt FECHA_C    
                    {$$ = montaNo("function", $1, NULL, NULL, $6, retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, tipo_func_return);
                    }
                    // Caso nao seja a main, gera a instrucao de retorno default
                    if(strcmp(aux, "main")) {
                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                            geraOperacoes("return", ret_default->no1->nome, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                    }
                    $$->lista = novaListaNo(&$$->lista, ret_default);
                    strcpy(tipo_func_return, "");
                    eh_global = 1;
                    na_main = 0;
                    }
                
                | error ABRE_P FECHA_P {strcpy(tipo_func_return, tipo_func);} ABRE_C moreStmt FECHA_C       {$$ = montaNo("function", NULL, NULL, NULL, $6, retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
                ;

funcDecl:       TIPO ID                                 {$$ = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, $2.lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, $2.lexema, "funcao", $1.lexema, retUlt(&primeiro), $1.linha, $1.coluna, "");
                                                        strcpy(tipo_func, $1.lexema);

                                                        // Adiciona o label da funcao no codigo
                                                        char nome_func[200];
                                                        strcpy(nome_func, "\n");
                                                        strcat(nome_func, $2.lexema);
                                                        strcat(nome_func, ":\n");
                                                        fputs(nome_func, escrita);
                                                        
                                                        // Identifica se esta na main
                                                        if(!strcmp($2.lexema, "main"))
                                                            na_main = 1;
                                                        }

                | TIPO LIST ID                          {$$ = NULL;
                                                        strcpy(aux, $3.lexema);
                                                        num_erros_semanticos += push(&cabeca, $3.lexema, "funcao", strcat($1.lexema, " list"), retUlt(&primeiro), $1.linha, $1.coluna, "");
                                                        strcpy(tipo_func, $1.lexema);

                                                        // Adiciona o label da funcao no codigo
                                                        char nome_func[200];
                                                        strcpy(nome_func, "\n");
                                                        strcat(nome_func, $3.lexema);
                                                        strcat(nome_func, ":\n");
                                                        fputs(nome_func, escrita);
                                                        
                                                        // Identifica se esta na main
                                                        if(!strcmp($2.lexema, "main"))
                                                            na_main = 1;
                                                        }
                ;

parameters:     parameters VIRG varDecl                 {$$ = $1; num_args++;}
                | varDecl                               {$$ = $1; num_args++;}
                ;

moreStmt:       moreStmt block                          {$$ = novaListaNo(&$1, $2);}
                | block                                 {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);}
                ;

block:          stmt                                    {$$ = $1;}
                | varDecl PV                            {$$ = $1;}                          
                | ABRE_C moreStmt FECHA_C               {$$ = montaNo("block", NULL, NULL, NULL, $2, retUlt(&primeiro), NULL);}
                ;

stmt:           conditional                             {$$ = $1;}
                | iteration                             {$$ = $1;}
                | attribuition PV                       {$$ = $1;}
                | io PV                                 {$$ = $1;}
                | ret PV                                {$$ = $1;}
                | error                                 {}
                ;

                // A professora falou que esse ELSE ?? desnecessario
conditional:    IF ABRE_P attribuition FECHA_P ifBracesOrNot                                {$$ = montaNo($1.lexema, NULL, $5, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            $$->no1 = montaNo("condArg", $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            char aux[50];
                                                                                            // Adiciona a label apos os statements
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                            }}

                | IF ABRE_P attribuition FECHA_P ifBracesOrNot ELSE                         {char jump[50];
                                                                                            char aux_num[10];
                                                                                            // Adiciona o jump apos o primeiro statement
                                                                                            strcpy(jump, "jump L");
                                                                                            sprintf(aux_num, "%d", label_cont);
                                                                                            strcat(jump, aux_num);
                                                                                            strcat(jump, "\n");
                                                                                            fputs(jump, escrita);
                                                                                            char aux[50];
                                                                                            // Adiciona a label apos o primeiro statement
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                                tem_else = 1;
                                                                                            }
                                                                                            // Empilha a label do jump
                                                                                            strcpy(jump, "L");
                                                                                            strcat(jump, aux_num);
                                                                                            pushLabel(&topo, jump);
                                                                                            label_cont++;}

                ifBracesOrNot/* %prec ELSE*/                                                  {$$ = montaNo($1.lexema, NULL, $5, $8, NULL, retUlt(&primeiro), NULL);
                                                                                            $$->no1 = montaNo("condArg", $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            char aux[50];
                                                                                            // Adiciona a label apos o segundo statement
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                                tem_else = 0;
                                                                                            }
                                                                                            label_cont++;}
                | IF ABRE_P error FECHA_P ifBracesOrNot                                       {}
                ;

                    // Adiciona a instrucao brz
ifBracesOrNot:    ABRE_C {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo, &flag_brz);} moreStmt FECHA_C                 {$$ = montaNo("statements", NULL, NULL, NULL, $3, retUlt(&primeiro), NULL);}
                | {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo, &flag_brz);} stmt                                  {$$ = montaNo("statements", $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                ;

iteration:      FOR ABRE_P iteArgs FECHA_P forBracesOrNot                           {$$ = montaNo($1.lexema, $3, $5, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                    fputs(topoInc->incremento, escrita);
                                                                                    popIncremento(&topoInc);
                                                                                    char labelInicio[15];
                                                                                    char labelCondicional[15];
                                                                                    // Label para onde deve pular ao depender da condicao
                                                                                    strcpy(labelCondicional, topo->label);
                                                                                    popLabel(&topo);
                                                                                    // Label do inicio da iteracao
                                                                                    strcpy(labelInicio, topo->label);
                                                                                    popLabel(&topo);
                                                                                    char jump[50];
                                                                                    // Adiciona as instrucoes jump e do label
                                                                                    strcpy(jump, "jump ");
                                                                                    strcat(jump, labelInicio);
                                                                                    strcat(jump, "\n");
                                                                                    fputs(jump, escrita);
                                                                                    strcpy(jump, labelCondicional);
                                                                                    strcat(jump, ":\n");
                                                                                    fputs(jump, escrita);
                                                                                    }
                | FOR ABRE_P error {yyerrok;} FECHA_P forBracesOrNot                   {}
                ;

                                        // Cria a instrucao da label e a de brz
iteArgs:        expIte PV               {mandaLabel(&label_cont, 1, retorno_expressao, escrita, &topo, &flag_brz);}
                expIte PV               {mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo, &flag_brz); strcpy(instrucao_incremento, ""); flag_incremento = 1;}
                                        // As instrucoes de incremento nao sao escritas agora, mas sao empilhadas para serem escritas no fim da iteracao
                expIte                  {$$ = montaNo("iteArgs", $1, $4, $7, NULL, retUlt(&primeiro), NULL); pushIncremento(&topoInc, instrucao_incremento); flag_incremento = 0;}
                ;

forBracesOrNot: ABRE_C moreStmt FECHA_C                 {$$ = montaNo("statements", NULL, NULL, NULL, $2, retUlt(&primeiro), NULL);}
                | stmt                                  {$$ = montaNo("statements", $1, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
                ;

expIte:         attribuition                            {$$ = $1;}
                | /* empty */                           {$$ = NULL;}
                ;


                                                        // simb recebe o ponteiro para a entrada do ID
                                                        // apos isso, esse ponteiro eh associado ao no em que ele aparece na arvore
io:             ENTRADA ABRE_P ID FECHA_P               {struct tabelaSimb *simb = retSimb(&cabeca, $3.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if(simb != NULL) {
                                                            strcpy($$->no1->tipo, $$->no1->simbolo->tipo);
                                                            if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                geraOperacoes($1.lexema, simb->var_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        } else {
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha:%d\nColuna:%d\n\n", $3.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        }

                | SAIDA ABRE_P expLogic FECHA_P         {$$ = montaNo($1.lexema, $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                            geraOperacoes($1.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);}

                | SAIDA ABRE_P STRING FECHA_P           {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, $3.lexema, "constante", "string", retUlt(&primeiro), $3.linha, $3.coluna, "");
                                                        struct tabelaSimb *simb = retSimb(&cabeca, $3.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($3.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                            geraOperacoes($1.lexema, $3.lexema, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 1, &label_cont, &string_cont, &flag_brz);
                                                        }

                | ENTRADA ABRE_P error FECHA_P          {}
                | SAIDA ABRE_P error FECHA_P            {}
                ;


varDecl:        TIPO ID                                 {$$ = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        char num_var[50];
                                                        char aux_num[15];
                                                        sprintf(aux_num, "%d", ger_codigo_var);
                                                        if(argumentos == 0) {
                                                            if(eh_global == 0) {
                                                                strcpy(num_var, "$");
                                                                strcat(num_var, aux_num);
                                                                num_erros_semanticos += push(&cabeca, $2.lexema, "variavel", $1.lexema, retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                                // Inicializacao default da variavel na geracao de codigo
                                                                inicioDefault(ger_codigo_var, escrita, $1.lexema);
                                                            } else if(eh_global == 1) {
                                                                strcpy(num_var, $2.lexema);
                                                                num_erros_semanticos += push(&cabeca, $2.lexema, "variavel", $1.lexema, retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                            }
                                                        }
                                                        // Caso seja o argumento de uma funcao
                                                        else if(argumentos == 1) {
                                                            strcpy(num_var, "$");
                                                            strcat(num_var, aux_num);
                                                            char string[100];
                                                            // Copiamos o valor do argumento para uma variavel temporaria
                                                            strcpy(string, "mov ");
                                                            strcat(string, num_var);
                                                            strcat(string, ", #");
                                                            strcat(string, aux_num);
                                                            strcat(string, "\n");
                                                            fputs(string, escrita);
                                                            num_erros_semanticos += push(&cabeca, $2.lexema, "variavel", $1.lexema, retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                            pushArgs(&args, $1.lexema, num_var);
                                                        }
                                                        
                                                        ger_codigo_var++;
                                                        }

                | TIPO LIST ID                          {$$ = NULL;

                                                        char num_var[15];
                                                        char aux_num[15];
                                                        sprintf(aux_num, "%d", ger_codigo_var);
                                                        if(argumentos == 0) {
                                                            if(eh_global == 0) {
                                                                strcpy(num_var, "$");
                                                                strcat(num_var, aux_num);
                                                                num_erros_semanticos += push(&cabeca, $3.lexema, "variavel", strcat($1.lexema, " list"), retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                                inicioDefault(ger_codigo_var, escrita, $1.lexema);
                                                            } else if(eh_global == 1) {
                                                                strcpy(num_var, $3.lexema);
                                                                num_erros_semanticos += push(&cabeca, $3.lexema, "variavel", strcat($1.lexema, " list"), retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                            }
                                                        } else if(argumentos == 1) {
                                                            strcpy(num_var, "$");
                                                            strcat(num_var, aux_num);
                                                            char string[100];
                                                            strcpy(string, "mov ");
                                                            strcat(string, num_var);
                                                            strcat(string, ", #");
                                                            strcat(string, aux_num);
                                                            strcat(string, "\n");
                                                            fputs(string, escrita);
                                                            num_erros_semanticos += push(&cabeca, $3.lexema, "variavel", strcat($1.lexema, " list"), retUlt(&primeiro), $1.linha, $1.coluna, num_var);
                                                            pushArgs(&args, $1.lexema, num_var);
                                                        }

                                                        ger_codigo_var++;
                                                        }
                ;

attribuition:   ID ATRIB expLogic                       {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($2.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        $$->no1 = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        // Checagem de tipos na atribuicao
                                                        if(simb != NULL) {
                                                            strcpy($$->no1->tipo, $$->no1->simbolo->tipo);
                                                            strcpy($$->tipo, $$->no1->simbolo->tipo);
                                                            //Se for int com float
                                                            if((!strcmp($3->tipo, "int") && !strcmp($$->no1->simbolo->tipo, "float")) || (!strcmp($3->tipo, "float") && !strcmp($$->no1->simbolo->tipo, "int"))) {
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(simb->tipo, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(simb->tipo, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, $3, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                $$->no2 = no;
                                                                if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0){
                                                                    geraCasting(NULL, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                                    geraOperacoes($2.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                                strcpy(retorno_expressao, $$->valor_temp);

                                                            } else if(!strcmp($3->tipo, "int list")){
                                                                //Se for int list e outro
                                                                if(strcmp($$->no1->simbolo->tipo, "int list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", $2.lexema, $$->no1->simbolo->tipo, $3->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                                $$->no2 = $3;
                                                            } else if(!strcmp($3->tipo, "float list")){
                                                                //Se for float list e outro
                                                                if(strcmp($$->no1->simbolo->tipo, "float list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", $2.lexema, $$->no1->simbolo->tipo, $3->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                                $$->no2 = $3;
                                                            } else if(!strcmp($$->no1->simbolo->tipo, "float list") || !strcmp($$->no1->simbolo->tipo, "int list")){
                                                                //Se for int list ou float list na esquerda e outro tipo sem ser int list, float list ou NIL na direita
                                                                if(strcmp($3->tipo, "float list") && strcmp($3->tipo, "int list") && strcmp($3->tipo, "NIL")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", $2.lexema, $$->no1->simbolo->tipo, $3->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                                $$->no2 = $3;
                                                            } else {
                                                                if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                                    geraCasting(NULL, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                                    geraOperacoes($2.lexema, $3->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                                $$->no2 = $3;
                                                                strcpy(retorno_expressao, $$->valor_temp);
                                                            }

                                                        } else {
                                                            //Caso o operador da esquerda nao tenha sido declarado
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha: %d\nColuna: %d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            $$->no2 = $3;
                                                            strcpy($$->no1->tipo, "undefined");
                                                            strcpy($$->tipo, "undefined");
                                                        }
                                                        }
                | expLogic                              {$$ = $1;
                                                        strcpy(retorno_expressao, $$->valor_temp);}
                ;

                                                        // As seguintes regras tem o casting escrito por geraCasting e suas operacoes por geraOperacoes
expLogic:       expLogic LOG_OP_OU andLogic             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        }}
                | andLogic                              {$$ = $1;}
                ;

andLogic:       andLogic LOG_OP_E expComp               {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);}
                                                        }
                | expComp                               {$$ = $1;}
                ;

expComp:        expComp REL_OP_BAIXA expRel             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);}
                                                        }
                | expRel                                {$$ = $1;}
                ;

expRel:         expRel REL_OP_ALTA expList              {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);}
                                                        }
                | expList                               {$$ = $1;}
                ;

expList:        expArit LIST_OP_BIN expList             {$$ = montaNo($2.lexema, $1, $3, NULL, NULL, retUlt(&primeiro), NULL);
                                                        int cont_erro = 0;
                                                        if($1->simbolo != NULL) {
                                                            if(strcmp($1->simbolo->varOuFunc, "funcao")) {
                                                                //Checa se o operador da esquerda eh funcao
                                                                printf("ERRO SEMANTICO: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                ++cont_erro;
                                                            } else if($1->simbolo->numArgs != 1) {
                                                                //Checa se o numero de argumentos eh diferente de 1
                                                                printf("ERRO SEMANTICO: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                ++cont_erro;
                                                            }
                                                            //Checa se o tipo do operador da direita nao eh int list ou float list
                                                            if(strcmp($3->tipo, "int list") && strcmp($3->tipo, "float list") && strcmp($3->tipo, "NIL")) {
                                                                printf("ERRO SEMANTICO: termo a direita nao eh uma lista\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                ++cont_erro;
                                                            }
                                                            //Controla o tipo do no apos a operacao de >> ou <<
                                                            if(cont_erro == 0) {
                                                                // O retorno do map eh uma lista do tipo da funcao
                                                                if(!strcmp($2.lexema, ">>")) {
                                                                    char aux[15];
                                                                    strcpy(aux, $1->simbolo->tipo);
                                                                    strcat(aux, " list");
                                                                    strcpy($$->tipo, aux);
                                                                // O retorno do filter eh uma lista do tipo da lista operada
                                                                } else if(!strcmp($2.lexema, "<<")) {
                                                                    strcpy($$->tipo, $3->tipo);
                                                                }
                                                                // Este caso eh especial e o casting eh feito no proprio geraOPeracoes, denotados pelas constantes 1, 2 e 0
                                                                if(!strcmp($1->simbolo->tipoArgs->tipo, "int") && !strcmp($3->tipo, "float list")) {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $$->no1->nome, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 1, &label_cont, &string_cont, &flag_brz);
                                                                } else if(!strcmp($1->simbolo->tipoArgs->tipo, "float") &&  !strcmp($3->tipo, "int list")) {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $$->no1->nome, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 2, &label_cont, &string_cont, &flag_brz);
                                                                } else if(!strcmp($3->tipo, "NIL")) {
                                                                    strcpy($$->tipo, "undefined");
                                                                }
                                                                else {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $$->no1->nome, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                            } else
                                                                strcpy($$->tipo, "undefined");
                                                        } else {
                                                            strcpy($$->tipo, "undefined");
                                                        }
                                                        }
                | expArit LIST_OP_CONSTRUTOR expList    {$$ = montaNo($2.lexema, NULL, $3, NULL, NULL, retUlt(&primeiro), NULL);
                                                        // Checa se o tipo do operador da direita eh lista e se o da esquerda eh int ou float
                                                        if((strcmp($3->tipo, "int list") && strcmp($3->tipo, "float list") && strcmp($3->tipo, "NIL")) || (strcmp($1->tipo, "int") && strcmp($1->tipo, "float"))) {
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", $2.lexema, $1->tipo, $3->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy($$->tipo, "undefined");
                                                        } else {
                                                            char aux[15];
                                                            strcpy(aux, $3->tipo);
                                                            char* aux1 = strtok(aux, " ");
                                                            //Adiciona o no de coercao
                                                            if(strcmp($1->tipo, aux1)) {
                                                                if(strcmp($3->tipo, "NIL")) {
                                                                    char aux2[15];
                                                                    strcpy(aux2, "(");
                                                                    if(!strcmp(aux1, "int"))
                                                                        strcat(aux2, "float_to_int)");
                                                                    else if(!strcmp(aux1, "float"))
                                                                        strcat(aux2, "int_to_float)");
                                                                    struct No* no = montaNo(aux2, $1, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                    $$->no1 = no;
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                                        geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                                        geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                    }
                                                                    strcpy($$->tipo, $3->tipo);
                                                                } else {
                                                                    // Se o operador a direita for NIL, o tipo sera definido pelo operador esquerdo
                                                                    $$->no1 = $1;
                                                                    if(!strcmp($1->tipo, "int") || !strcmp($1->tipo, "float")) {
                                                                        char tipo[20];
                                                                        strcpy(tipo, $1->tipo);
                                                                        strcat(tipo, " list");
                                                                        strcpy($$->tipo, tipo);
                                                                    }
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                        geraOperacoes($2.lexema, $$->no1->valor_temp, "0", &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                }
                                                            } else {
                                                                $$->no1 = $1;
                                                                if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                    geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                strcpy($$->tipo, $3->tipo);
                                                            }
                                                        }
                                                        }
                | expArit                               {$$ = $1;}
                ;

expArit:        expArit ARIT_OP_MAIS expMul             {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        }
                                                        }
                | expArit ARIT_OP_MENOS expMul          {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        }
                                                        }
                | expMul                                {$$ = $1;}
                ;

expMul:         expMul ARIT_OP_ALTA expUn               {$$ = castNo($2.lexema, $1, $3, retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                            geraCasting($1->valor_temp, $3->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                            geraOperacoes($2.lexema, $$->no1->valor_temp, $$->no2->valor_temp, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        }
                                                        }
                | expUn                                 {$$ = $1;}
                ;


expUn:          LOG_OP_NEG expUn                        {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp($2->tipo, "int list") || !strcmp($2->tipo, "float list") || !strcmp($2->tipo, "int") || !strcmp($2->tipo, "float") || !strcmp($2->tipo, "NIL")) {
                                                            if(strcmp($2->tipo, "NIL")) {
                                                                strcpy($$->tipo, $2->tipo);
                                                                if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                    geraOperacoes($1.lexema, $2->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                            } else
                                                                strcpy($$->tipo, "undefined");
                                                        } else {
                                                            // Se nao eh lista
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", $1.lexema, $2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy($$->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
                | ARIT_OP_MENOS expUn                   {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp($2->tipo, "int") || !strcmp($2->tipo, "float")) {
                                                            strcpy($$->tipo, $2->tipo);
                                                            if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                geraOperacoes($1.lexema, $2->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        } else if(!strcmp($2->tipo, "int list") || !strcmp($2->tipo, "float list") || !strcmp($2->tipo, "NIL")){
                                                            // Se eh lista ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", $1.lexema, $2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy($$->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
                | LIST_OP_UN expUn                      {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp($2->tipo, "int") || !strcmp($2->tipo, "float")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", $1.lexema, $2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy($$->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        } else if(!strcmp($2->tipo, "int list") || !strcmp($2->tipo, "float list")) {
                                                            strcpy($$->tipo, $2->tipo);
                                                            if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                geraOperacoes($1.lexema, $2->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        } else
                                                            strcpy($$->tipo, "undefined");
                                                        }
                | LIST_OP_HEADER expUn                  {$$ = montaNo($1.lexema, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp($2->tipo, "int") || !strcmp($2->tipo, "float")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", $1.lexema, $2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy($$->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp($2->tipo, "int list") || !strcmp($2->tipo, "float list")){
                                                            char copia[15];
                                                            strcpy(copia, $2->tipo);
                                                            char* aux = strtok(copia, " ");
                                                            strcpy($$->tipo, aux);
                                                            if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                geraOperacoes($1.lexema, $2->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                        } else if(!strcmp($2->tipo, "NIL"))
                                                            strcpy($$->tipo, "undefined");
                                                        }
                | element                               {$$ = $1;}
                ;

                                                        // simb recebe o ponteiro para a entrada do ID
                                                        // apos isso, esse ponteiro eh associado ao no em que ele aparece na arvore
element:        ID                                      {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if($$->simbolo != NULL) {
                                                            strcpy($$->tipo, $$->simbolo->tipo);

                                                            // Copia o valor temporario na tabela para a arvore
                                                            strcpy($$->valor_temp, $$->simbolo->var_temp);
                                                        } else {
                                                            // Caso a variavel nao tenha sido declarada
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy($$->tipo, "undefined");
                                                        }
                                                        }

                | ABRE_P expLogic FECHA_P               {$$ = $2;}

                | ID ABRE_P arguments FECHA_P           {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, $3, retUlt(&primeiro), simb);
                                                        int cont_argumentos = 0;
                                                        if($$->simbolo != NULL) {
                                                            if(!strcmp($$->simbolo->varOuFunc, "funcao")) {
                                                                strcpy($$->tipo, $$->simbolo->tipo);
                                                                // Checa se o numero de argumentos esta correto
                                                                if($$->simbolo->numArgs > num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: poucos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else if($$->simbolo->numArgs < num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: muitos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                if(args != NULL) {
                                                                    struct listaArgs * aux1 = $$->simbolo->tipoArgs;
                                                                    struct listaArgs * aux2 = args;
                                                                    int cont = 0;
                                                                    int flag = 0;
                                                                    struct listaNo * auxNo = $$->lista;
                                                                    // Itera sobre os tipos dos argumentos
                                                                    while(aux1 != NULL && aux2 != NULL) {
                                                                        flag = 0;
                                                                        // Se forem diferentes
                                                                        if(strcmp(aux1->tipo, aux2->tipo)) {
                                                                            flag = 1;
                                                                            // Se for int list
                                                                            if(!strcmp(aux1->tipo, "int list") || !strcmp(aux2->tipo, "int list")) {
                                                                                printf("ERRO SEMANTICO: argumento de tipo errado (%s)\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                                ++num_erros_semanticos;
                                                                            // Se for float list
                                                                            } else if(!strcmp(aux1->tipo, "float list") || !strcmp(aux2->tipo, "float list")) {
                                                                                printf("ERRO SEMANTICO: argumento de tipo errado (%s)\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                                ++num_erros_semanticos;
                                                                            } else {
                                                                                // Se nao, pode fazer o no de coercao
                                                                                char aux[15];
                                                                                char casting[100];
                                                                                char temp[16];
                                                                                char aux_num[15];
                                                                                strcpy(aux, "(");
                                                                                if(!strcmp(aux1->tipo, "int")) {
                                                                                    strcat(aux, "float_to_int)");
                                                                                    // Eh escrita a instrucao de casting
                                                                                    strcpy(casting, "fltoint ");
                                                                                    sprintf(aux_num, "%d", ger_codigo_var);
                                                                                    strcpy(temp, "$");
                                                                                    strcat(temp, aux_num);
                                                                                    strcat(casting, temp);
                                                                                    strcat(casting, ", ");
                                                                                    strcat(casting, aux2->var_temp);
                                                                                    strcat(casting, "\n");
                                                                                    fputs(casting, escrita);
                                                                                    // Eh escrita a instrucao de parameter
                                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                                        geraOperacoes("parameter", temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);

                                                                                } else if(!strcmp(aux1->tipo, "float")) {
                                                                                    strcat(aux, "int_to_float)");
                                                                                    // Eh escrita a instrucao de casting
                                                                                    strcpy(casting, "inttofl ");
                                                                                    sprintf(aux_num, "%d", ger_codigo_var);
                                                                                    strcpy(temp, "$");
                                                                                    strcat(temp, aux_num);
                                                                                    strcat(casting, temp);
                                                                                    strcat(casting, ", ");
                                                                                    strcat(casting, aux2->var_temp);
                                                                                    strcat(casting, "\n");
                                                                                    fputs(casting, escrita);
                                                                                    // Eh escrita a instrucao de parameter
                                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                                        geraOperacoes("parameter", temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);

                                                                                }
                                                                                struct No* no = montaNo(aux, auxNo->no, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                auxNo->no = no;
                                                                                cont_argumentos++;
                                                                            }
                                                                        }
                                                                        if(flag == 0) {
                                                                            if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                                geraOperacoes("parameter", aux2->var_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                            cont_argumentos++;
                                                                        }
                                                                        aux1 = aux1->prox;
                                                                        aux2 = aux2->prox;
                                                                        auxNo = auxNo->prox;
                                                                        cont++;
                                                                    }
                                                                    //printf("%d\n", yylval.tok.linha);
                                                                    //printaArgs(args);
                                                                }
                                                            } else {
                                                                printf("ERRO SEMANTICO: %s nao eh uma funcao\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                strcpy($$->tipo, "undefined");
                                                            }
                                                        } else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy($$->tipo, "undefined");
                                                        }
                                                        if(num_erros_lexicos == 0 && num_erros_sintaticos == 0 && num_erros_semanticos == 0) {
                                                            char aux[200];
                                                            char num_args[5];
                                                            char num_temp[6];
                                                            // Sao escritas as instrucoes de chamada e o pop da pilha
                                                            strcpy(aux, "call ");
                                                            strcat(aux, $1.lexema);
                                                            strcat(aux, ", ");
                                                            sprintf(num_args, "%d", cont_argumentos);
                                                            strcat(aux, num_args);
                                                            strcat(aux, "\npop ");
                                                            strcpy(num_temp, "$");
                                                            sprintf(num_args, "%d", ger_codigo_var);
                                                            ger_codigo_var++;
                                                            strcat(num_temp, num_args);
                                                            strcat(aux, num_temp);
                                                            strcat(aux, "\n");
                                                            strcpy($$->valor_temp, num_temp);
                                                            fputs(aux, escrita);
                                                        }
                                                        liberaArgs(args);
                                                        args = NULL;
                                                        num_args_chamada = 0;
                                                        }

                | ID ABRE_P FECHA_P                     {struct tabelaSimb *simb = retSimb(&cabeca, $1.lexema, &primeiro);
                                                        $$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        // Cria o call na geracao de codigo
                                                        if($$->simbolo != NULL) {
                                                            strcpy($$->tipo, $$->simbolo->tipo);
                                                            char aux[200];
                                                            char num[5];
                                                            char num_temp[6];
                                                            // Sao escritas as instrucoes de chamada e o pop da pilha
                                                            strcpy(aux, "call ");
                                                            strcat(aux, $1.lexema);
                                                            strcat(aux, "\npop ");
                                                            strcpy(num_temp, "$");
                                                            sprintf(num, "%d", ger_codigo_var);
                                                            ger_codigo_var++;
                                                            strcat(num_temp, num);
                                                            strcat(aux, num_temp);
                                                            strcat(aux, "\n");
                                                            strcpy($$->valor_temp, num_temp);
                                                            fputs(aux, escrita);
                                                        // Caso a funcao ainda nao tenha sido declarada
                                                        } else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", $1.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy($$->tipo, "undefined");
                                                        }
                                                        }

                | CONST_INT                             {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "int");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy($$->valor_temp, $1.lexema);
                                                        }

                | CONST_FLOAT                           {$$ = montaNo($1.lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "float");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy($$->valor_temp, $1.lexema);
                                                        }

                | NIL                                   {$$ = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy($$->tipo, "NIL");
                                                        // Define que o valor de NIL na geracao de codigo eh 0
                                                        strcpy($$->valor_temp, "0");}
                ;

arguments:      arguments VIRG expLogic                 {$$ = novaListaNo(&$1, $3);
                                                        ++num_args_chamada;
                                                        pushArgs(&args, $3->tipo, $3->valor_temp);}

                | expLogic                              {struct listaNo* lista = NULL;
                                                        $$ = novaListaNo(&lista, $1);
                                                        ++num_args_chamada;
                                                        pushArgs(&args, $1->tipo, $1->valor_temp);}
                ;

ret:            RETURN expLogic                         {if(!strcmp($2->tipo, tipo_func_return)) {
                                                            $$ = montaNo("return", $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                            if(na_main != 1) {
                                                                if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0)
                                                                    geraOperacoes($1.lexema, $$->no1->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                            }
                                                        // Se o tipo do retorno nao for o mesmo da funcao
                                                        } else {
                                                            // Se for int ou float, eh possivel fazer coercao
                                                            if((!strcmp($2->tipo, "int") && !strcmp(tipo_func_return, "float")) || (!strcmp($2->tipo, "float") && !strcmp(tipo_func_return, "int"))) {
                                                                $$ = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(tipo_func_return, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(tipo_func_return, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                $$->no1 = no;
                                                                // Se nao for a funcao main, escreve a instrucao de retorno
                                                                if(na_main != 1) {
                                                                    if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && num_erros_semanticos == 0) {
                                                                        geraCasting($2->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento);
                                                                        geraOperacoes($1.lexema, $$->no1->valor_temp, NULL, &ger_codigo_var, escrita, $$, flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont, &flag_brz);
                                                                    }
                                                                }
                                                            } else {
                                                                $$ = montaNo("return", $2, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                printf("ERRO SEMANTICO: retorno de tipo errado (%s, %s)\nLinha:%d\nColuna:%d\n\n", tipo_func_return, $2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                        }
                                                        }
                ;

%%


/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
void yyerror(const char *s) {
    printf("ERRO: %s\nLinha: %d\nColuna: %d\n\n", s, yylval.tok.linha, yylval.tok.coluna);
    ++num_erros_sintaticos;
}

int main(int argc, char **argv) {
    pushEsc(&primeiro, 0);
    FILE *fp = fopen(argv[1], "r");
    
    char *nome;
    char *aux_nome;
    nome = strtok(argv[1], "/");
    while(nome != NULL) {
        aux_nome = nome;
        nome = strtok(NULL, "/");
    }
    nome = strtok(aux_nome, ".");
    // Abre o arquivo de escrita do .code
    escrita = fopen("code321.tac", "w");
    strcat(nome, ".tac");
    // Define o nome do arquivo final
    strcpy(nome_arq, nome);
    fputs(".code\n", escrita);

    if(!fp || !escrita) {
        printf("Arquivo nao existente\n");
    } else {
        yyin = fp;
        yyparse();
    }
    fclose(yyin);

    yylex_destroy();

    return 0;
}