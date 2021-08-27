%{
#include <stdio.h>
#include "sintaxe.tab.h"
extern int yyval;

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
CONSTANTE       ({DIGITO}+|{DIGITO}*"."{DIGITO}+)
NIL             (NIL)
STRING          \"[^\n"]*\"
ARIT_OP_ALTA    [\*/]
ARIT_OP_BAIXA   [\+\-]
LOG_OP_BIN      (&&|\|\|)
LOG_OP_UN       (!)
REL_OP_ALTA     (<=?|>=?)
REL_OP_BAIXA    (==|!=)
LIST_OP         (\:|\?|\!|\%|\>\>|\<\<)
ENTRADA         (read)
SAIDA           (write|writeln)
IDENTIFICADOR   [a-zA-Z_][_a-zA-Z0-9]*

%%

    /*   DECLARAÇÕES DE TIPO   */
{TIPO}                  {return TIPO;
                        num_coluna += yyleng;}


    /*   CONSTANTES   */
{CONSTANTE}             {return CONST;
                        num_coluna += yyleng;}
{STRING}                {return STRING;
                        num_coluna += yyleng;}
{NIL}                   {return NIL;
                        num_coluna += yyleng;}

    /*   OPERACOES ARITMETICAS COM PRIORIDADES DIFERENTES   */
{ARIT_OP_ALTA}          {return ARIT_OP_ALTA;
                        num_coluna += yyleng;}
{ARIT_OP_BAIXA}         {return ARIT_OP_BAIXA;
                        num_coluna += yyleng;}


    /*   OPERACOES LOGICAS   */
{LOG_OP_BIN}        {return LOG_OP_BIN;
                    num_coluna += yyleng;}
{LOG_OP_UN}         {return LOG_OP_UN;
                    num_coluna += yyleng;}


    /*   OPERACOES RELACIONAIS COM PRIORIDADES DIFERENTES   */
{REL_OP_ALTA}           {return REL_OP_ALTA;
                        num_coluna += yyleng;}
{REL_OP_BAIXA}          {return REL_OP_BAIXA;
                        num_coluna += yyleng;}


    /*   OPERADORES LISTAS   */
{LIST_OP}           {return LIST_OP;
                    num_coluna += yyleng;}


    /*   FLUXO DE CONTROLE   */
"if"                {return IF;
                    num_coluna += yyleng;}
"else"              {return ELSE;
                    num_coluna += yyleng;}
"for"               {return FOR;
                    num_coluna += yyleng;}
"return"            {return RETURN;
                    num_coluna += yyleng;}
                    

    /*   ENTRADA E SAIDA   */
{ENTRADA}           {return ENTRADA;
                    num_coluna += yyleng;}
{SAIDA}             {return SAIDA;
                    num_coluna += yyleng;}                    


    /*   DELIMITADORES   */
"{"                 {return ABRE_C;
                    num_coluna += yyleng;}
"}"                 {return FECHA_C;
                    num_coluna += yyleng;}
"("                 {return ABRE_P;
                    num_coluna += yyleng;}
")"                 {return FECHA_P;
                    num_coluna += yyleng;}


    /*   IDENTIFICADORES   */
{IDENTIFICADOR}     {return ID;
                    num_coluna += yyleng;}


    /*   ATRIBUICAO   */
"="             {return ATRIB;
                num_coluna += yyleng;}


    /*   VIRGULA   */
","             {return VIRG;
                num_coluna += yyleng;}


    /*   PONTO E VIRGULA   */
";"             {return PV;
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