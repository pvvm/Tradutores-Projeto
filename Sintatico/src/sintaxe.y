%define lr.type canonical-lr

%{
#include <stdio.h>
extern int yylex(void);
extern int yyval;
extern FILE *yyin;
extern int num_linha;
extern int num_coluna;

void yyerror(char *);
%}

%token ABRE_C
%token FECHA_C
%token IF
%token ELSE
%token FOR
%token RETURN
%token ENTRADA
%token SAIDA
%token TIPO
%token VIRG
%token ATRIB
%token LOG_OP_BIN
%token REL_OP_BAIXA
%token REL_OP_ALTA
%token LIST_OP
%token ARIT_OP_BAIXA
%token ARIT_OP_ALTA
%token LOG_OP_UN
%token CONST
%token STRING
%token NIL
%token ID
%token ABRE_P
%token FECHA_P
%token PV


%start teste

%%

teste: ID;

%%

void yyerror(char *s) {
    printf("Erro sintático.\nLinha: %d\nColuna: %d\n", num_linha, num_coluna);
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
}