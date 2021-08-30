%define parse.trace
%define lr.type canonical-lr

/*
TODO:   VER A QUESTÃO DE APENAS OS ERROS MAIS EXTERNOS SEREM REPORTADOS
        VOLTAR A VER A QUESTÃO DAS COLUNAS
        RESOLVER O PROBLEMA DA STRING NÃO FECHADA
        RESOLVER O FREE DE MEMÓRIA EM EXEMPLOS COM ERRO
        FAZER A TABELA DE SIMBOLOS
*/

%{
#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"


extern int yylex(void);
extern int yylex_destroy(void);
extern int yyval;
extern FILE *yyin;
extern int num_linha;
extern int num_coluna;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;
struct No * raiz;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No* , struct No*);
%}

%code requires {
    struct token {
        char lexema[50];
        int linha;
        int coluna;
    };
}

%union {
    struct token tok;
    struct No* no;
}

%token <tok> IF ELSE FOR RETURN TIPO LIST
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
%token <tok> ARIT_OP_BAIXA
%left ARIT_OP_BAIXA
%token <tok> ARIT_OP_ALTA
%left ARIT_OP_ALTA
%token <tok> LOG_OP_UN
%token <tok> CONST_INT CONST_FLOAT STRING NIL ID
%token <tok> ABRE_P FECHA_P ABRE_C FECHA_C
%left ABRE_P FECHA_P

%type <no> declarations declaration function parameters moreStmt stmt multLineStmt
%type <no> conditional bracesStmt iteration expIte oneLineStmt io varDecl
%type <no> attribuition expList expLogic andLogic expComp expRel expArit expMul
%type <no> negElement element arguments ret

%start program

%%

program:        declarations                {raiz = montaNo("program", $1, NULL, NULL, NULL);
                                            if(num_erros_lexicos == 0)
                                                printf("Sem erros lexicos\n");
                                            else
                                                printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                            if(num_erros_sintaticos == 0) {
                                                printf("Sem erros sintaticos\n");
                                                printaArvore(raiz, 0);
                                            } else
                                                printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                            desalocar(raiz);}
                | /* empty */
                ;

declarations:   declarations declaration    {$$ = montaNo("declarations", $1, $2, NULL, NULL);}
                | declaration               {$$ = montaNo("declarations", $1, NULL, NULL, NULL);}
                ;

declaration:    function                    {$$ = montaNo("declaration", $1, NULL, NULL, NULL);}
                | varDecl PV                {$$ = montaNo("declaration", $1, NULL, NULL, NULL);}
                | error                     {$$ = montaNo("declaration", NULL, NULL, NULL, NULL);}
                ;

function:       varDecl ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C       {$$ = montaNo("function", $1, $3, $6, NULL);}
                | varDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C                {$$ = montaNo("function", $1, $5, NULL, NULL);}
                ;

parameters:     parameters VIRG varDecl     {$$ = montaNo("parameters", $1, $3, NULL, NULL);}
                | varDecl                   {$$ = montaNo("parameters", $1, NULL, NULL, NULL);}
                ;

moreStmt:       moreStmt stmt               {$$ = montaNo("moreStmt", $1, $2, NULL, NULL);}
                | stmt                      {$$ = montaNo("moreStmt", $1, NULL, NULL, NULL);}
                ;

stmt:           oneLineStmt                 {$$ = montaNo("stmt", $1, NULL, NULL, NULL);}
                | multLineStmt              {$$ = montaNo("stmt", $1, NULL, NULL, NULL);}
                ;

multLineStmt:   conditional                 {$$ = montaNo("multLineStmt", $1, NULL, NULL, NULL);}
                | iteration                 {$$ = montaNo("multLineStmt", $1, NULL, NULL, NULL);}
                ;

conditional:    IF ABRE_P attribuition FECHA_P bracesStmt                       {$$ = montaNo("conditional", $3, $5, NULL, NULL);}
                | IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt     {$$ = montaNo("conditional", $3, $5, $7, NULL);}
                ;

bracesStmt:     ABRE_C moreStmt FECHA_C     {$$ = montaNo("bracesStmt", $2, NULL, NULL, NULL);}
                | oneLineStmt               {$$ = montaNo("bracesStmt", $1, NULL, NULL, NULL);}
                ;

iteration:      FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt        {$$ = montaNo("iteration", $3, $5, $7, $9);}
                ;

expIte:         attribuition                {$$ = montaNo("expIte", $1, NULL, NULL, NULL);}
                | /* empty */               {$$ = NULL;}
                ;

oneLineStmt:    varDecl PV                  {$$ = montaNo("oneLineStmt", $1, NULL, NULL, NULL);}
                | attribuition PV           {$$ = montaNo("oneLineStmt", $1, NULL, NULL, NULL);}
                | io PV                     {$$ = montaNo("oneLineStmt", $1, NULL, NULL, NULL);}
                | ret PV                    {$$ = montaNo("oneLineStmt", $1, NULL, NULL, NULL);}
                ;

io:             ENTRADA ABRE_P ID FECHA_P               {$$ = montaNo("in", NULL, NULL, NULL, NULL);}
                |SAIDA ABRE_P attribuition FECHA_P      {$$ = montaNo("out", $3, NULL, NULL, NULL);}
                | SAIDA ABRE_P STRING FECHA_P           {$$ = montaNo("out", NULL, NULL, NULL, NULL);}
                ;


varDecl:        TIPO ID                     {$$ = montaNo("varDecl", NULL, NULL, NULL, NULL);}
                | TIPO LIST ID              {$$ = montaNo("varDecl", NULL, NULL, NULL, NULL);}
                ;

attribuition:   ID ATRIB expList            {$$ = montaNo("attribuition", $3, NULL, NULL, NULL);}
                | expList                   {$$ = montaNo("attribuition", $1, NULL, NULL, NULL);}
                ;

expList:        LIST_OP_UN expLogic                     {$$ = montaNo("expList", $2, NULL, NULL, NULL);}
                | expList LIST_OP_BIN expLogic          {$$ = montaNo("expList", $1, $3, NULL, NULL);}
                | expLogic                              {$$ = montaNo("expList", $1, NULL, NULL, NULL);}
                ;

expLogic:       expLogic LOG_OP_OU andLogic             {$$ = montaNo("expLogic", $1, $3, NULL, NULL);}
                | andLogic                              {$$ = montaNo("expLogic", $1, NULL, NULL, NULL);}
                ;

andLogic:       andLogic LOG_OP_E expComp               {$$ = montaNo("andLogic", $1, $3, NULL, NULL);}
                | expComp                               {$$ = montaNo("andLogic", $1, NULL, NULL, NULL);}
                ;

expComp:        expComp REL_OP_BAIXA expRel             {$$ = montaNo("expComp", $1, $3, NULL, NULL);}
                | expRel                                {$$ = montaNo("expComp", $1, NULL, NULL, NULL);}
                ;

expRel:         expRel REL_OP_ALTA expArit              {$$ = montaNo("expRel", $1, $3, NULL, NULL);}
                | expArit                               {$$ = montaNo("expRel", $1, NULL, NULL, NULL);}
                ;

expArit:        expArit ARIT_OP_BAIXA expMul            {$$ = montaNo("expArit", $1, $3, NULL, NULL);}
                | expMul                                {$$ = montaNo("expArit", $1, NULL, NULL, NULL);}
                ;

expMul:         expMul ARIT_OP_ALTA negElement          {$$ = montaNo("expMul", $1, $3, NULL, NULL);}
                | negElement                            {$$ = montaNo("expMul", $1, NULL, NULL, NULL);}
                ;

negElement:     LOG_OP_UN element                       {$$ = montaNo("negElement", $2, NULL, NULL, NULL);}
                | element                               {$$ = montaNo("negElement", $1, NULL, NULL, NULL);}
                ;

element:        ID                                      {$$ = montaNo("element", NULL, NULL, NULL, NULL);}
                | ABRE_P attribuition FECHA_P           {$$ = montaNo("element", $2, NULL, NULL, NULL);}
                | ID ABRE_P arguments FECHA_P           {$$ = montaNo("element", $3, NULL, NULL, NULL);}
                | ID ABRE_P FECHA_P                     {$$ = montaNo("element", NULL, NULL, NULL, NULL);}
                | CONST_INT                             {$$ = montaNo("element", NULL, NULL, NULL, NULL);}
                | CONST_FLOAT                           {$$ = montaNo("element", NULL, NULL, NULL, NULL);}
                | NIL                                   {$$ = montaNo("element", NULL, NULL, NULL, NULL);}
                ;

arguments:      arguments VIRG attribuition             {$$ = montaNo("arguments", $1, $3, NULL, NULL);}
                | attribuition                          {$$ = montaNo("arguments", $1, NULL, NULL, NULL);}
                ;

ret:            RETURN attribuition                     {$$ = montaNo("ret", $2, NULL, NULL, NULL);}
                ;

%%

struct No* montaNo(char *nome, struct No *no_1, struct No *no_2, struct No *no_3, struct No *no_4) {
    if(num_erros_lexicos == 0){ 
        struct No* no = novoNo(nome);
        no->no1 = no_1;
        no->no2 = no_2;
        no->no3 = no_3;
        no->no4 = no_4;
        return no;
    }
    return NULL;
}

void yyerror(char *s) {
    printf("ERRO sintático\nLinha: %d\tColuna: %d\n\n", num_linha, num_coluna);
    ++num_erros_sintaticos;
}

int main(int argc, char **argv) {
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