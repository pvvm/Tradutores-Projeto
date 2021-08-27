%{
#include <stdio.h>
int num_linha = 1;
int num_coluna = 0;
int erro_linha;
int erro_coluna;
int num_erros = 0;
%}
%x COMENTARIO_MULT
%option noyywrap
%option nounput
%option noinput
%option outfile="src/lex.yy.c"
%option header-file="lib/lexico.h"


DIGITO          [0-9]
TIPO            (int|float|"int list"|"float list")
CONSTANTE       ({DIGITO}+|{DIGITO}*"."{DIGITO}+|NIL)
STRING          \"[^\n"]*\"
ARIT_OP_ALTA    [\*/]
ARIT_OP_BAIXA   [\+\-]
LOG_OP          (!|&&|\|\|)
REL_OP_ALTA     (<=?|>=?)
REL_OP_BAIXA    (==|!=)
LIST_OP         (\:|\?|\!|\%|\>\>|\<\<)
FLUXO_CTRL      (if|else|for|return)
ENTRADA         (read)
SAIDA           (write|writeln)
DELIMITADORES   (\(|\)|\[|\]|\{|\})
IDENTIFICADOR   [a-zA-Z_][_a-zA-Z0-9]*

%%

    /*   DECLARAÇÕES DE TIPO   */
{TIPO}                  {printf("Token: (TIPO, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}


    /*   CONSTANTES   */
{CONSTANTE}             {printf("Token: (CONSTANTE, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}
{STRING}                {printf("Token: (STRING, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}
    
    /*   OPERACOES ARITMETICAS COM PRIORIDADES DIFERENTES   */
{ARIT_OP_ALTA}          {printf("Token: (ARITOP_ALTA, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}
{ARIT_OP_BAIXA}          {printf("Token: (ARITOP_BAIXA, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}


    /*   OPERACOES LOGICAS   */
{LOG_OP}            {printf("Token: (LOGOP, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}


    /*   OPERACOES RELACIONAIS COM PRIORIDADES DIFERENTES   */
{REL_OP_ALTA}           {printf("Token: (RELOP_ALTA, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}
{REL_OP_BAIXA}           {printf("Token: (RELOP_BAIXA, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                        num_coluna += yyleng;}


    /*   OPERADORES LISTAS   */
{LIST_OP}           {printf("Token: (LISTOP, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}


    /*   FLUXO DE CONTROLE   */
{FLUXO_CTRL}        {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}
                    

    /*   ENTRADA E SAIDA   */
{ENTRADA}           {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}
{SAIDA}             {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}                    


    /*   DELIMITADORES   */
{DELIMITADORES}     {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}


    /*   IDENTIFICADORES   */
{IDENTIFICADOR}     {printf("Token: (IDENTIFICADOR, %s)\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                    num_coluna += yyleng;}


    /*   ATRIBUICAO   */
"="             {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                num_coluna += yyleng;}


    /*   VIRGULA   */
","             {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                num_coluna += yyleng;}


    /*   PONTO E VIRGULA   */
";"             {printf("Token: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                num_coluna += yyleng;}


    /*   ESPACO EM BRANCO   */
[ \t]           num_coluna += yyleng;


    /*   NOVA LINHA   */
\n              {++num_linha;  num_coluna = 1;}


    /*   COMENTARIO   */
"//".*                      {}
<INITIAL>"/*"               {erro_linha = num_linha;
                            erro_coluna = num_coluna;
                            BEGIN(COMENTARIO_MULT);}
<COMENTARIO_MULT>"*/"       {BEGIN(INITIAL);}
<COMENTARIO_MULT>"\n"       {++num_linha; num_coluna = 1;}
<COMENTARIO_MULT>.          {++num_coluna;}


    /*   ERROS   */
<COMENTARIO_MULT><<EOF>>    {printf("ERRO: comentario nao fechado\nLinha: %d\tColuna: %d\n\n", erro_linha, erro_coluna);
                            ++num_erros;
                            yyterminate();}
\"[^"\n]*\n                 {printf("ERRO: string nao fechada\nLinha: %d\tColuna: %d\n\n", num_linha, num_coluna);
                            ++num_erros; ++num_linha; num_coluna = 1;}
.                           {printf("ERRO lexico encontrado no elemento: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                            ++num_erros; num_coluna += yyleng;}

%%


int main(int argc, char **argv) {

    if(argc > 0){
        yyin = fopen(argv[1], "r");
        if(yyin)
            yylex();
        printf("Numeros de erros lexicos: %d\n\n", num_erros);
        fclose(yyin);
        yylex_destroy();
    }

    return 0;
}