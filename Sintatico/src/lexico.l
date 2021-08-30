%{
#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"
#include "sintaxe.tab.h"

int num_linha = 1;
int num_coluna = 1;
int erro_linha;
int erro_coluna;
int num_erros_lexicos = 0;

int cria_token(char *, int, int);
%}

%x COMENTARIO_MULT
%option noyywrap
%option nounput
%option noinput
%option outfile="src/lex.yy.c"
%option header-file="lib/lexico.h"


DIGITO          [0-9]
TIPO            (int|float)
CONST_FLOAT     ({DIGITO}*"."{DIGITO}+)
CONST_INT       ({DIGITO}+)
NIL             (NIL)
STRING          \"[^\n"]*\"
ARIT_OP_ALTA    [\*/]
ARIT_OP_MAIS    [\+]
ARIT_OP_MENOS   [\-]
LOG_OP_OU       (\|\|)
LOG_OP_E        (&&)
LOG_OP_UN       (!)
REL_OP_ALTA     (<=?|>=?)
REL_OP_BAIXA    (==|!=)
LIST_OP_BIN     (\:|\>\>|\<\<)
LIST_OP_UN      (\?|\!|\%)
ENTRADA         (read)
SAIDA           (write|writeln)
IDENTIFICADOR   [a-zA-Z_][_a-zA-Z0-9]*

%%

    /*   DECLARAÇÕES DE TIPO   */
{TIPO}                  {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return TIPO;}
"list"                  {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LIST;}


    /*   CONSTANTES   */
{CONST_INT}             {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return CONST_INT;}
{CONST_FLOAT}           {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return CONST_FLOAT;}                        
{STRING}                {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return STRING;}
{NIL}                   {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return NIL;}

    /*   OPERACOES ARITMETICAS COM PRIORIDADES DIFERENTES   */
{ARIT_OP_ALTA}          {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ARIT_OP_ALTA;}
{ARIT_OP_MAIS}          {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ARIT_OP_MAIS;}
{ARIT_OP_MENOS}         {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ARIT_OP_MENOS;}


    /*   OPERACOES LOGICAS   */
{LOG_OP_OU}             {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LOG_OP_OU;}
{LOG_OP_E}              {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LOG_OP_E;}
{LOG_OP_UN}             {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LOG_OP_UN;}


    /*   OPERACOES RELACIONAIS COM PRIORIDADES DIFERENTES   */
{REL_OP_ALTA}           {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return REL_OP_ALTA;}
{REL_OP_BAIXA}          {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return REL_OP_BAIXA;}


    /*   OPERADORES LISTAS   */
{LIST_OP_BIN}           {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LIST_OP_BIN;}
{LIST_OP_UN}            {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return LIST_OP_UN;}


    /*   FLUXO DE CONTROLE   */
"if"                    {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return IF;}
"else"                  {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ELSE;}
"for"                   {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return FOR;}
"return"                {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return RETURN;}
                    

    /*   ENTRADA E SAIDA   */
{ENTRADA}               {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ENTRADA;}
{SAIDA}                 {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return SAIDA;}                    


    /*   DELIMITADORES   */
"{"                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ABRE_C;}
"}"                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return FECHA_C;}
"("                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ABRE_P;}
")"                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return FECHA_P;}


    /*   IDENTIFICADORES   */
{IDENTIFICADOR}         {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ID;}


    /*   ATRIBUICAO   */
"="                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return ATRIB;}


    /*   VIRGULA   */
","                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return VIRG;}


    /*   PONTO E VIRGULA   */
";"                     {num_coluna = cria_token(yytext, num_linha, num_coluna);
                        return PV;}


    /*   ESPACO EM BRANCO   */
[ \t]                   num_coluna += yyleng;


    /*   NOVA LINHA   */
\n                      {++num_linha;  num_coluna = 1;}


    /*   COMENTARIO   */
"//".*                  {}
<INITIAL>"/*"           {erro_linha = num_linha;
                        erro_coluna = num_coluna;
                        BEGIN(COMENTARIO_MULT);}
<COMENTARIO_MULT>"*/"   {BEGIN(INITIAL);}
<COMENTARIO_MULT>"\n"   {++num_linha; num_coluna = 1;}
<COMENTARIO_MULT>.      {++num_coluna;}


    /*   ERROS   */
<COMENTARIO_MULT><<EOF>>    {printf("ERRO lexico: comentario nao fechado\nLinha: %d\tColuna: %d\n\n", erro_linha, erro_coluna);
                            ++num_erros_lexicos;
                            yyterminate();}
\"[^"\n]*\n                 {printf("ERRO lexico: string nao fechada\nLinha: %d\tColuna: %d\n\n", num_linha, num_coluna);
                            ++num_erros_lexicos; ++num_linha; num_coluna = 1;
                            return PV;}                     // GAMBIARRA (MELHORAR MAIS TARDE)
.                           {printf("ERRO lexico elemento: %s\nLinha: %d\tColuna: %d\n\n", yytext, num_linha, num_coluna);
                            ++num_erros_lexicos; num_coluna += yyleng;}

%%

int cria_token(char *lexem, int linha, int coluna) {
    //printf("%s %d %d\n\n", lexem, linha, coluna);
    strcpy(yylval.tok.lexema, lexem);
    yylval.tok.linha = linha;
    yylval.tok.coluna = coluna;
    return (coluna += yyleng);
}