%define parse.trace
%define lr.type canonical-lr

/*
TODO:   VER A QUESTÃO DE APENAS OS ERROS MAIS EXTERNOS SEREM REPORTADOS
*/

%{
#include <stdio.h>


extern int yylex(void);
extern int yyval;
extern FILE *yyin;
extern int num_linha;
extern int num_coluna;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;

void yyerror(char *);
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
}

%token <tok> ABRE_C FECHA_C
%token <tok> IF ELSE FOR RETURN TIPO
%token <tok> ENTRADA SAIDA
%token <tok> VIRG
%token <tok> ATRIB
%token <tok> LOG_OP_OU
%token <tok> LOG_OP_E
%token <tok> REL_OP_BAIXA
%token <tok> REL_OP_ALTA
%token <tok> LIST_OP_BIN
%token <tok> LIST_OP_UN
%token <tok> ARIT_OP_BAIXA
%token <tok> ARIT_OP_ALTA
%token <tok> LOG_OP_UN
%token <tok> CONST STRING NIL ID
%token <tok> ABRE_P FECHA_P
%token <tok> PV


%start program

%%

program:        declarations
                | /* empty */
                ;

declarations:   declarations declaration
                | declaration
                ;

declaration:    function
                | variable
                | error
                ;

function:       TIPO ID ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C
                | TIPO ID ABRE_P FECHA_P ABRE_C moreStmt FECHA_C
                ;

parameters:     parameters VIRG variable
                | variable
                ;

moreStmt:       moreStmt stmt
                | stmt
                ;

stmt:           oneLineStmt
                | multLineStmt
                ;

multLineStmt:   conditional
                | iteration
                ;

conditional:    IF ABRE_P attribuition FECHA_P bracesStmt
                | IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt
                ;

bracesStmt:     ABRE_C moreStmt FECHA_C
                | oneLineStmt
                ;

iteration:      FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt
                ;

expIte:         attribuition
                | /* empty */
                ;

oneLineStmt:    variable PV
                | attribuition PV
                | io PV
                | ret PV
                ;

io:             in
                | out
                ;

in:             ENTRADA ABRE_P ID FECHA_P
                ;

out:            SAIDA ABRE_P attribuition FECHA_P
                | SAIDA ABRE_P STRING FECHA_P
                ;


variable:       TIPO ID
                ;

attribuition:   ID ATRIB expList
                | expList
                ;

expList:        LIST_OP_UN expLogic
                | expList LIST_OP_BIN expLogic
                | expLogic
                ;

expLogic:       expLogic LOG_OP_OU andLogic
                | andLogic
                ;

andLogic:       andLogic LOG_OP_E expComp
                | expComp
                ;

expComp:        expComp REL_OP_BAIXA expRel
                | expRel
                ;

expRel:         expRel REL_OP_ALTA expArit
                | expArit
                ;

expArit:        expArit ARIT_OP_BAIXA expMul
                | expMul
                ;

expMul:         expMul ARIT_OP_ALTA negElement
                | negElement
                ;

negElement:     LOG_OP_UN element
                | element
                ;

element:        ID
                | ABRE_P attribuition FECHA_P
                | ID ABRE_P arguments FECHA_P
                | ID ABRE_P FECHA_P
                | CONST
                | NIL
                ;

arguments:      arguments VIRG attribuition
                | attribuition
                ;

ret:            RETURN attribuition
                ;

%%

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

        if(num_erros_lexicos == 0)
            printf("Sem erros lexicos\n");
        else
            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);

        if(num_erros_sintaticos == 0)
            printf("Sem erros sintaticos\n");
        else
            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
    }
    fclose(yyin);
}