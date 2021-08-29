/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_SINTAXE_TAB_H_INCLUDED
# define YY_YY_SRC_SINTAXE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "./src/sintaxe.y"

    struct token {
        char lexema[50];
        int linha;
        int coluna;
    };

#line 57 "./src/sintaxe.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABRE_C = 258,                  /* ABRE_C  */
    FECHA_C = 259,                 /* FECHA_C  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    FOR = 262,                     /* FOR  */
    RETURN = 263,                  /* RETURN  */
    TIPO = 264,                    /* TIPO  */
    ENTRADA = 265,                 /* ENTRADA  */
    SAIDA = 266,                   /* SAIDA  */
    VIRG = 267,                    /* VIRG  */
    ATRIB = 268,                   /* ATRIB  */
    LOG_OP_OU = 269,               /* LOG_OP_OU  */
    LOG_OP_E = 270,                /* LOG_OP_E  */
    REL_OP_BAIXA = 271,            /* REL_OP_BAIXA  */
    REL_OP_ALTA = 272,             /* REL_OP_ALTA  */
    LIST_OP_BIN = 273,             /* LIST_OP_BIN  */
    LIST_OP_UN = 274,              /* LIST_OP_UN  */
    ARIT_OP_BAIXA = 275,           /* ARIT_OP_BAIXA  */
    ARIT_OP_ALTA = 276,            /* ARIT_OP_ALTA  */
    LOG_OP_UN = 277,               /* LOG_OP_UN  */
    CONST = 278,                   /* CONST  */
    STRING = 279,                  /* STRING  */
    NIL = 280,                     /* NIL  */
    ID = 281,                      /* ID  */
    ABRE_P = 282,                  /* ABRE_P  */
    FECHA_P = 283,                 /* FECHA_P  */
    PV = 284                       /* PV  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "./src/sintaxe.y"

    struct token tok;

#line 107 "./src/sintaxe.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_SINTAXE_TAB_H_INCLUDED  */
