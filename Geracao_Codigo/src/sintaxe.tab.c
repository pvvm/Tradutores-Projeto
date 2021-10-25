/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "./src/sintaxe.y"

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

#line 115 "./src/sintaxe.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintaxe.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_TIPO = 7,                       /* TIPO  */
  YYSYMBOL_LIST = 8,                       /* LIST  */
  YYSYMBOL_ENTRADA = 9,                    /* ENTRADA  */
  YYSYMBOL_SAIDA = 10,                     /* SAIDA  */
  YYSYMBOL_VIRG = 11,                      /* VIRG  */
  YYSYMBOL_PV = 12,                        /* PV  */
  YYSYMBOL_ATRIB = 13,                     /* ATRIB  */
  YYSYMBOL_LOG_OP_OU = 14,                 /* LOG_OP_OU  */
  YYSYMBOL_LOG_OP_E = 15,                  /* LOG_OP_E  */
  YYSYMBOL_REL_OP_BAIXA = 16,              /* REL_OP_BAIXA  */
  YYSYMBOL_REL_OP_ALTA = 17,               /* REL_OP_ALTA  */
  YYSYMBOL_LIST_OP_BIN = 18,               /* LIST_OP_BIN  */
  YYSYMBOL_LIST_OP_CONSTRUTOR = 19,        /* LIST_OP_CONSTRUTOR  */
  YYSYMBOL_LIST_OP_UN = 20,                /* LIST_OP_UN  */
  YYSYMBOL_LIST_OP_HEADER = 21,            /* LIST_OP_HEADER  */
  YYSYMBOL_ARIT_OP_MAIS = 22,              /* ARIT_OP_MAIS  */
  YYSYMBOL_ARIT_OP_MENOS = 23,             /* ARIT_OP_MENOS  */
  YYSYMBOL_ARIT_OP_ALTA = 24,              /* ARIT_OP_ALTA  */
  YYSYMBOL_LOG_OP_NEG = 25,                /* LOG_OP_NEG  */
  YYSYMBOL_CONST_INT = 26,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 27,               /* CONST_FLOAT  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_NIL = 29,                       /* NIL  */
  YYSYMBOL_ID = 30,                        /* ID  */
  YYSYMBOL_ABRE_P = 31,                    /* ABRE_P  */
  YYSYMBOL_FECHA_P = 32,                   /* FECHA_P  */
  YYSYMBOL_ABRE_C = 33,                    /* ABRE_C  */
  YYSYMBOL_FECHA_C = 34,                   /* FECHA_C  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_declarations = 37,              /* declarations  */
  YYSYMBOL_declaration = 38,               /* declaration  */
  YYSYMBOL_function = 39,                  /* function  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_43_4 = 43,                      /* $@4  */
  YYSYMBOL_44_5 = 44,                      /* $@5  */
  YYSYMBOL_45_6 = 45,                      /* $@6  */
  YYSYMBOL_funcDecl = 46,                  /* funcDecl  */
  YYSYMBOL_parameters = 47,                /* parameters  */
  YYSYMBOL_moreStmt = 48,                  /* moreStmt  */
  YYSYMBOL_block = 49,                     /* block  */
  YYSYMBOL_stmt = 50,                      /* stmt  */
  YYSYMBOL_conditional = 51,               /* conditional  */
  YYSYMBOL_52_7 = 52,                      /* $@7  */
  YYSYMBOL_ifBracesOrNot = 53,             /* ifBracesOrNot  */
  YYSYMBOL_54_8 = 54,                      /* $@8  */
  YYSYMBOL_55_9 = 55,                      /* $@9  */
  YYSYMBOL_iteration = 56,                 /* iteration  */
  YYSYMBOL_57_10 = 57,                     /* $@10  */
  YYSYMBOL_iteArgs = 58,                   /* iteArgs  */
  YYSYMBOL_59_11 = 59,                     /* $@11  */
  YYSYMBOL_60_12 = 60,                     /* $@12  */
  YYSYMBOL_forBracesOrNot = 61,            /* forBracesOrNot  */
  YYSYMBOL_expIte = 62,                    /* expIte  */
  YYSYMBOL_io = 63,                        /* io  */
  YYSYMBOL_varDecl = 64,                   /* varDecl  */
  YYSYMBOL_attribuition = 65,              /* attribuition  */
  YYSYMBOL_expLogic = 66,                  /* expLogic  */
  YYSYMBOL_andLogic = 67,                  /* andLogic  */
  YYSYMBOL_expComp = 68,                   /* expComp  */
  YYSYMBOL_expRel = 69,                    /* expRel  */
  YYSYMBOL_expList = 70,                   /* expList  */
  YYSYMBOL_expArit = 71,                   /* expArit  */
  YYSYMBOL_expMul = 72,                    /* expMul  */
  YYSYMBOL_expUn = 73,                     /* expUn  */
  YYSYMBOL_element = 74,                   /* element  */
  YYSYMBOL_arguments = 75,                 /* arguments  */
  YYSYMBOL_ret = 76                        /* ret  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   156,   161,   162,   166,   167,   168,   172,
     173,   172,   193,   194,   193,   196,   196,   215,   215,   218,
     232,   245,   246,   249,   250,   254,   255,   256,   259,   260,
     261,   262,   263,   264,   268,   278,   278,   305,   308,   308,
     309,   309,   312,   330,   330,   333,   334,   333,   338,   339,
     342,   343,   349,   358,   361,   369,   370,   374,   396,   417,
     474,   478,   481,   484,   487,   490,   493,   496,   499,   502,
     535,   561,   564,   567,   570,   573,   576,   579,   591,   601,
     610,   622,   627,   642,   644,   750,   768,   774,   780,   784,
     788,   794
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "RETURN", "TIPO", "LIST", "ENTRADA", "SAIDA", "VIRG", "PV", "ATRIB",
  "LOG_OP_OU", "LOG_OP_E", "REL_OP_BAIXA", "REL_OP_ALTA", "LIST_OP_BIN",
  "LIST_OP_CONSTRUTOR", "LIST_OP_UN", "LIST_OP_HEADER", "ARIT_OP_MAIS",
  "ARIT_OP_MENOS", "ARIT_OP_ALTA", "LOG_OP_NEG", "CONST_INT",
  "CONST_FLOAT", "STRING", "NIL", "ID", "ABRE_P", "FECHA_P", "ABRE_C",
  "FECHA_C", "$accept", "program", "declarations", "declaration",
  "function", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "funcDecl",
  "parameters", "moreStmt", "block", "stmt", "conditional", "$@7",
  "ifBracesOrNot", "$@8", "$@9", "iteration", "$@10", "iteArgs", "$@11",
  "$@12", "forBracesOrNot", "expIte", "io", "varDecl", "attribuition",
  "expLogic", "andLogic", "expComp", "expRel", "expList", "expArit",
  "expMul", "expUn", "element", "arguments", "ret", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     359,    32,    36,    16,   361,   392,   397,   -12,    67,     4,
      24,    40,  -209,   400,     8,   431,    88,   154,    50,   109,
     154,   136,    38,    42,    46,   140,    53,  2101,    98,    54,
     154,   150,  2101,   160,  1149,   209,   216,  3275,   230,   236,
     246,   246,   246,   246,  3010,  3023,  3036,  2710,  3287,  2101,
    1183,  1217,  1251,  1285,  1319,   269,   275,   278,    63,   490,
     577,   474,   706,  3307,  3049,  3062,  3075,   290,    58,   106,
     199,  1353,   272,  2330,   110,  2750,   101,     5,   549,  3088,
    3101,  3114,  3127,  3275,  3132,    13,  1387,   433,  1421,  1455,
    1489,  1523,  3275,  3275,  3275,  3275,  3275,  3275,  3275,  3275,
    3275,  1557,  2101,   456,  2101,   282,   283,   285,   287,   311,
     314,   295,   297,   305,   318,    95,   289,  3153,    73,   112,
    3166,  1591,   525,   673,   569,   774,  3319,  3331,  3179,  3192,
    3205,  1625,  1659,   315,  2163,   322,  2194,  2759,   327,   331,
     345,   351,   353,  3335,  3218,   458,   470,  2132,  1693,  2287,
     631,  2194,  2101,  1727,  1761,  2771,   184,  2101,  1795,  2225,
    1829,  1863,   357,  1897,   315,  1931,  3223,  1965,  1999,  3236,
     342,    43,   535,   535,   535,   535,  2800,  2811,  2822,  2789,
    3287,   234,   164,   213,   171,  2976,  2833,  2844,  2855,  2729,
     115,   616,   616,   616,   616,  2385,  2404,  2423,  2366,  3287,
      44,   135,   227,   587,    84,  2442,  2461,  2480,  3287,  3335,
    2132,  2318,   344,   354,   382,  2866,  2877,  2888,  2899,  3249,
     201,  3287,  3287,  3287,  3287,  3287,  3287,  3287,  3287,  3287,
    2499,  2518,  2537,  2556,  3262,   220,  3335,  3335,  3335,  3335,
    3335,  3335,  3335,  3335,   248,   186,  2101,   672,   372,   384,
     707,   741,   775,   406,   407,   408,   410,  2910,   121,  2921,
     268,   373,   503,  2987,  2998,  2932,  2943,  2954,   256,  2575,
     149,  2594,   242,   317,  2699,   430,  2689,  2613,  2632,  2651,
    2033,  2345,   352,   809,   843,   877,  2965,  2670,   911,   398,
     403,   285,   405,  2163,  2163,   419,  2256,   945,   979,  2256,
    2101,  1013,  1047,  1081,  2067,  1115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,   438,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,   435,   -32,   -49,  -131,  -208,  -209,  -122,   250,
    -123,  -207,   176,   192,  -209,  -209,  -137,  -148,  -203,    30,
     -45,   -35,   475,   388,   391,   307,   274,   187,    70,   -17,
    -115,  -202
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    20,    72,    17,    70,    25,
      21,     7,    23,    50,    51,    52,    53,   164,   148,   157,
     211,    54,   135,   108,   155,   169,   154,   109,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     119,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    88,    76,   251,   252,   153,   111,   162,   253,   255,
     149,   -12,   150,    85,   160,    -9,    12,    86,   158,    14,
     153,   170,    88,    79,    80,    81,    82,   208,   106,   110,
       8,   188,    -8,    -8,     8,   112,    16,    88,   190,    -8,
      19,   149,   168,   115,    10,   120,    28,    24,   116,   118,
      24,   213,   -57,    30,    18,   -62,   188,   -22,   -62,   236,
      69,   188,   -58,     9,    30,   -57,    11,   207,    29,   -58,
     131,   -19,   132,   214,    31,   -60,   -62,    92,   -22,    15,
     250,   -20,    88,    88,   -90,    33,   -57,   209,   251,   252,
     -58,   251,   252,   253,   255,   -71,   253,   255,   -71,   -71,
     -71,   -71,   -71,   -71,   258,   -90,   241,   242,   156,   208,
     110,   107,    88,   -91,    88,    92,   -71,   -21,   187,   270,
     161,   -17,   -51,   143,   212,   163,   207,   142,    68,   208,
      40,    41,   143,    42,   190,    43,    44,    45,   -21,    46,
      47,    48,   -15,   187,   144,   220,   -64,   -60,   187,   -64,
     -64,   237,   188,   286,   206,   215,   216,   217,   218,   302,
     143,    22,   303,   188,   235,   301,   254,   -64,   301,    27,
     130,   297,   298,    32,   230,   231,   232,   233,   -64,   -64,
     222,   287,   188,   -13,   118,   -68,   -68,   -68,   -68,   224,
     225,   188,   207,   -10,   268,   -89,   -64,   -61,   209,   118,
     -61,   236,   207,   -68,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   206,   280,   208,   -89,   207,   -61,   207,
     207,   207,   207,   207,   207,   207,   207,   -66,   -66,   -66,
     223,    88,   102,   259,   208,   186,   290,   110,   -66,   187,
      73,   -66,   -66,   -66,   238,   -66,   190,    74,   -62,   221,
     187,   254,   271,   -63,   254,    88,   -63,   -63,   237,   -66,
     186,    77,   -61,   221,   188,   186,   -62,    78,   304,   187,
     208,   205,    44,    45,   -63,    46,    75,    48,   187,   206,
     -61,    89,   -63,   -63,   222,   128,   129,    90,   -59,   206,
      91,   187,   187,   187,   187,   187,   187,   187,   267,   187,
     -63,   -59,   101,    92,   206,   104,   206,   206,   206,   206,
     206,   206,   206,   279,   133,   134,   -40,   -43,   -40,   136,
     -40,   -40,   185,   137,   -40,   -40,   -50,   138,   -65,   139,
     205,   -65,   -65,   -65,   238,   -40,   -40,   140,   -40,   -55,
     -40,   -40,   -40,   -52,   -40,   -40,   -40,   185,   147,   -65,
     141,   187,   185,   291,   151,   184,   186,   -56,   204,    -3,
       1,    -2,     1,   -54,   -51,   -53,     2,   186,     2,   166,
     126,   127,    40,    41,   -47,    42,   -50,    43,    44,    45,
     184,    46,    47,    48,   256,   184,   186,   -65,   -65,   -65,
     223,   203,    -5,    -5,   -57,   186,   205,    -6,    -6,    -5,
      -4,    -4,   125,   281,    -6,   -65,   205,    -4,   186,   186,
     186,   186,   186,   265,   266,   282,   186,   204,   283,   284,
     285,   205,   -58,   205,   205,   205,   205,   205,   277,   278,
     293,    -7,    -7,   -18,   -18,   294,   182,   296,    -7,   183,
     -18,   -69,    13,   185,   -69,   -69,   -69,   -69,   -69,   -69,
     203,   299,   241,   242,   185,    26,   -16,   -16,   -14,   -14,
     246,   182,   -69,   -16,   183,   -14,   182,   295,   186,   183,
     -11,   -11,   201,   185,   292,   202,   184,   -11,     0,     0,
       0,   123,   185,   204,     0,   124,   -66,   184,   -66,   -66,
     -66,    95,     0,   204,     0,   185,   185,   185,   263,   264,
       0,     0,   -62,   185,   -62,    93,   184,     0,   204,     0,
     204,   204,   204,   275,   276,   184,   203,   -67,   -67,   -67,
     -67,   224,   225,   181,     0,     0,   203,     0,   184,   184,
     262,   201,     0,     0,   202,   -67,   184,   -61,     0,   -61,
      93,   203,     0,   203,   203,   274,     0,     0,   181,     0,
     113,     0,     0,   181,     0,   185,     0,   182,     0,   200,
     183,   176,   177,     0,   178,   179,   180,   122,   182,   172,
     173,   183,   174,     0,   175,   176,   177,   114,   178,   179,
     180,   -65,     0,   -65,   -65,   -65,    95,   182,   184,   -64,
     183,   -64,   -64,    94,     0,     0,   182,   201,   -68,   183,
     202,   -68,   -68,   -68,   -68,   239,   240,   201,     0,   260,
     202,     0,   183,   261,     0,     0,     0,   182,   200,   -68,
     183,     0,   201,     0,   272,   202,     0,   202,   273,     0,
       0,     0,   -34,     0,   -34,   159,   -34,   -34,   -34,     0,
     -34,   -34,   195,   196,   181,   197,   198,   199,     0,     0,
       0,   -34,   -34,     0,   -34,   181,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,     0,     0,     0,   182,
       0,     0,   183,   -33,   181,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   244,   245,   -63,     0,   -63,   -63,    94,
       0,     0,   -33,   -33,   200,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   181,   -33,   -33,     0,   -41,   200,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -68,     0,
     -68,   -68,   -68,   -68,    96,    97,     0,   -41,   -41,     0,
     -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,
     -41,   -41,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,     0,     0,   181,     0,     0,     0,
       0,   -28,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -67,     0,   -67,   -67,
     -67,   -67,    96,    97,     0,   -29,   -29,     0,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,     0,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -49,     0,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,   -49,     0,   -49,     0,   -49,   -49,
     -49,     0,   -49,   -49,   -49,     0,   -49,   -49,   -42,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,     0,
     -42,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,     0,
     -42,   -42,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,     0,   -44,     0,   -44,   -44,   -44,     0,
     -44,   -44,   -44,     0,   -44,   -44,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,     0,   -48,     0,
     -48,   -48,   -48,     0,   -48,   -48,   -48,     0,   -48,   -48,
     -33,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,    34,     0,    35,     0,    36,    37,
     171,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,     0,    43,    44,
      45,     0,    46,    47,    48,     0,    49,    87,   -24,     0,
     -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -28,     0,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,   -28,     0,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -29,     0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,    34,     0,    35,     0,    36,    37,
     171,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,     0,    43,    44,
      45,     0,    46,    47,    48,     0,    49,   103,    34,     0,
      35,     0,    36,    37,   171,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,     0,
      49,   121,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -31,     0,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -26,     0,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -30,     0,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -32,     0,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -27,     0,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,    34,     0,    35,     0,
      36,    37,   171,     0,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,    42,     0,
      43,    44,    45,     0,    46,    47,    48,     0,    49,   145,
      34,     0,    35,     0,    36,    37,   171,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,     0,    42,     0,    43,    44,    45,     0,    46,    47,
      48,     0,    49,   146,   -37,     0,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -49,     0,
     -49,     0,   -49,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,   -49,     0,
     -49,     0,   -49,   -49,   -49,     0,   -49,   -49,   -49,     0,
     -49,   -49,   -42,     0,   -42,     0,   -42,   -42,   -42,     0,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,     0,
     -42,   -42,   -42,     0,   -42,   -42,   -41,     0,   -41,     0,
     -41,   -41,   -41,     0,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,     0,   -41,     0,
     -41,   -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,
     -44,     0,   -44,     0,   -44,   -44,   -44,     0,   -44,   -44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,     0,   -44,     0,   -44,   -44,   -44,     0,   -44,   -44,
     -44,     0,   -44,   -44,    34,     0,    35,     0,    36,    37,
     171,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,     0,    43,    44,
      45,     0,    46,    47,    48,     0,    49,   165,    34,     0,
      35,     0,    36,    37,   171,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,     0,
      49,   167,   -48,     0,   -48,     0,   -48,   -48,   -48,     0,
     -48,   -48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,     0,
     -48,   -48,   -48,     0,   -48,   -48,   -39,     0,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -36,     0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,    34,     0,    35,     0,    36,    37,
     171,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,     0,    43,    44,
      45,     0,    46,    47,    48,     0,    49,   288,    34,     0,
      35,     0,    36,    37,   171,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,     0,
      49,   305,    34,     0,    35,     0,    36,    37,   171,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,     0,    42,     0,    43,    44,    45,     0,
      46,    47,    48,   -38,    49,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -40,   -38,   -40,     0,   -40,   -40,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -40,     0,   -40,   -40,   -40,    34,   210,    35,     0,    36,
      37,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,     0,    42,     0,    43,
      44,    45,     0,    46,    47,    48,   -35,   152,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   247,   -35,   248,
       0,   249,    37,     0,     0,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,     0,    42,
       0,    43,    44,    45,     0,    46,    47,    48,    34,   300,
      35,     0,    36,    37,     0,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,   247,
       0,   248,     0,   249,    37,     0,     0,    38,    39,     0,
       0,   105,     0,     0,     0,     0,     0,     0,    40,    41,
       0,    42,     0,    43,    44,    45,   289,    46,    47,    48,
     172,   173,     0,   174,     0,   175,   176,   177,     0,   178,
     189,   180,     0,     0,     0,   172,   173,     0,   174,     0,
     175,   176,   177,     0,   178,   189,   180,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,   -82,
     -82,     0,     0,     0,     0,     0,   -86,   234,   -82,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,
       0,     0,     0,     0,     0,   -87,     0,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,     0,
       0,     0,     0,     0,   -88,     0,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,   -88,   -88,   -88,     0,     0,
       0,     0,     0,   -74,     0,   -88,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -74,   -74,   243,     0,     0,     0,
       0,     0,   -76,     0,   -74,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -81,     0,   -76,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -81,   -81,   -81,     0,     0,     0,     0,     0,
     -79,     0,   -81,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,     0,     0,     0,     0,     0,   -80,
       0,   -79,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   -80,   -80,     0,     0,     0,     0,     0,   -78,     0,
     -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,
     -78,   -78,     0,     0,     0,     0,     0,   -77,     0,   -78,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   -77,   -77,
     -77,     0,     0,     0,     0,     0,   -85,     0,   -77,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,   -85,
       0,     0,     0,     0,     0,   -83,     0,   -85,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,   -83,   -83,     0,
       0,     0,     0,     0,   -72,     0,   -83,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,   -72,   243,     0,     0,
       0,     0,     0,   -73,     0,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,   -73,   243,     0,     0,     0,
       0,     0,   -75,     0,   -73,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -75,   -75,   -75,     0,     0,     0,     0,
       0,   -84,     0,   -75,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,   -84,   -84,     0,     0,     0,     0,     0,
     -70,     0,   -84,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -67,   241,   242,   -67,   -67,   -67,   -67,   239,   240,     0,
       0,   -70,   -82,    83,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -67,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,    84,   229,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
     219,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -45,   -82,   -82,   -82,     0,     0,     0,     0,   -45,
     -45,    84,   -45,   -51,   -45,   -45,   -45,     0,   -45,   -45,
     -45,    40,    41,     0,    42,     0,    43,    44,    45,     0,
      46,    47,    48,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,   -82,   -86,   -86,   -86,   -86,   -86,   -86,
     219,   -82,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -86,   -87,   -87,   -87,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -87,   -88,   -88,   -88,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -88,   -74,   -74,   228,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -74,   -76,   -76,   -76,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -76,   -81,   -81,   -81,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -81,   -79,   -79,
     -79,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -79,   -80,
     -80,   -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -80,
     -78,   -78,   -78,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -78,   -77,   -77,   -77,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -77,   -85,   -85,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -85,   -83,   -83,   -83,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -83,   -72,   -72,   228,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -72,   -73,   -73,   228,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -73,   -75,   -75,   -75,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -75,   -84,   -84,   -84,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -84,   226,   227,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -71,   226,
     227,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -69,
     226,   227,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -70,     0,   -86,   -86,   -86,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -74,   -74,   100,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -76,   -76,   -76,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,   -81,   -81,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,   -78,   -78,   -78,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   -77,
     -77,   -77,   191,   192,     0,   193,     0,   194,   195,   196,
       0,   197,   198,   199,   117,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,   -85,   -85,   -85,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,   -72,   100,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,   -73,   100,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,   -75,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   172,   173,     0,   174,
       0,   175,   176,   177,     0,   178,   189,   180,   -51,   191,
     192,     0,   193,     0,   194,   195,   196,     0,   197,   198,
     199,   257,   191,   192,     0,   193,     0,   194,   195,   196,
       0,   197,   198,   199,   269,    40,    41,     0,    42,     0,
      43,    44,    45,     0,    46,    75,    48,   172,   173,     0,
     174,     0,   175,   176,   177,     0,   178,   179,   180,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,    98,
      99,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,    98,    99,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,    98,    99,   191,   192,     0,   193,     0,
     194,   195,   196,     0,   197,   198,   199
};

static const yytype_int16 yycheck[] =
{
      32,    50,    37,   211,   211,   136,     1,   155,   211,   211,
     133,     7,   134,    48,   151,     7,     0,    49,   149,    31,
     151,   169,    71,    40,    41,    42,    43,    14,    73,    74,
       0,    48,     0,     1,     4,    30,    32,    86,    73,     7,
      32,   164,   164,    78,     8,    32,     8,    17,    83,    84,
      20,     8,    12,    11,    30,    11,    73,    11,    14,    15,
      30,    78,    12,    31,    11,    11,    30,    84,    30,    11,
     102,    31,   104,    30,    32,    12,    32,    14,    32,    12,
     211,    31,   131,   132,    11,    32,    32,    14,   296,   296,
      32,   299,   299,   296,   296,    11,   299,   299,    14,    15,
      16,    17,    18,    19,   219,    32,    22,    23,   143,    14,
     155,     1,   161,    12,   163,    14,    32,    11,    48,   234,
     152,    33,    12,    11,   169,   157,   143,    32,    30,    14,
      20,    21,    11,    23,   169,    25,    26,    27,    32,    29,
      30,    31,    33,    73,    32,   180,    11,    32,    78,    14,
      15,    16,   169,    32,    84,   172,   173,   174,   175,   296,
      11,     7,   299,   180,   199,   296,   211,    32,   299,    33,
     100,   293,   294,    33,   191,   192,   193,   194,    14,    15,
      16,    32,   199,    33,   219,    14,    15,    16,    17,    18,
      19,   208,   209,    33,   229,    11,    32,    11,    14,   234,
      14,    15,   219,    32,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   143,   246,    14,    32,   234,    32,   236,
     237,   238,   239,   240,   241,   242,   243,    14,    15,    16,
      17,   280,    33,    32,    14,    48,   281,   282,    11,   169,
      31,    14,    15,    16,    17,    32,   281,    31,    14,    15,
     180,   296,    32,    11,   299,   304,    14,    15,    16,    32,
      73,    31,    14,    15,   281,    78,    32,    31,   300,   199,
      14,    84,    26,    27,    32,    29,    30,    31,   208,   209,
      32,    12,    14,    15,    16,    98,    99,    12,    32,   219,
      12,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      32,    12,    12,    14,   234,    33,   236,   237,   238,   239,
     240,   241,   242,   243,    32,    32,     1,    32,     3,    32,
       5,     6,    48,    12,     9,    10,    12,    32,    11,    32,
     143,    14,    15,    16,    17,    20,    21,    32,    23,    12,
      25,    26,    27,    12,    29,    30,    31,    73,    33,    32,
      32,   281,    78,     1,    32,    48,   169,    12,    84,     0,
       1,     0,     1,    12,    12,    12,     7,   180,     7,    12,
      96,    97,    20,    21,    32,    23,    32,    25,    26,    27,
      73,    29,    30,    31,    30,    78,   199,    14,    15,    16,
      17,    84,     0,     1,    12,   208,   209,     0,     1,     7,
       0,     1,    95,    31,     7,    32,   219,     7,   221,   222,
     223,   224,   225,   226,   227,    31,   229,   143,    12,    12,
      12,   234,    12,   236,   237,   238,   239,   240,   241,   242,
      32,     0,     1,     0,     1,    32,    48,    32,     7,    48,
       7,    11,     4,   169,    14,    15,    16,    17,    18,    19,
     143,    32,    22,    23,   180,    20,     0,     1,     0,     1,
     210,    73,    32,     7,    73,     7,    78,   291,   281,    78,
       0,     1,    84,   199,   282,    84,   169,     7,    -1,    -1,
      -1,    93,   208,   209,    -1,    94,    12,   180,    14,    15,
      16,    17,    -1,   219,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    12,   229,    14,    15,   199,    -1,   234,    -1,
     236,   237,   238,   239,   240,   208,   209,    14,    15,    16,
      17,    18,    19,    48,    -1,    -1,   219,    -1,   221,   222,
     223,   143,    -1,    -1,   143,    32,   229,    12,    -1,    14,
      15,   234,    -1,   236,   237,   238,    -1,    -1,    73,    -1,
       1,    -1,    -1,    78,    -1,   281,    -1,   169,    -1,    84,
     169,    26,    27,    -1,    29,    30,    31,    92,   180,    20,
      21,   180,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    12,    -1,    14,    15,    16,    17,   199,   281,    12,
     199,    14,    15,    16,    -1,    -1,   208,   209,    11,   208,
     209,    14,    15,    16,    17,    18,    19,   219,    -1,   221,
     219,    -1,   221,   222,    -1,    -1,    -1,   229,   143,    32,
     229,    -1,   234,    -1,   236,   234,    -1,   236,   237,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    26,    27,   169,    29,    30,    31,    -1,    -1,
      -1,    20,    21,    -1,    23,   180,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,   281,
      -1,    -1,   281,     1,   199,     3,     4,     5,     6,     7,
      -1,     9,    10,   208,   209,    12,    -1,    14,    15,    16,
      -1,    -1,    20,    21,   219,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,   229,    33,    34,    -1,     1,   234,
       3,     4,     5,     6,     7,    -1,     9,    10,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,     1,    33,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,     1,    33,     3,    -1,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,     1,    33,     3,    -1,     5,
       6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,     1,    33,     3,    -1,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,     1,    33,     3,
      -1,     5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,     1,    33,
       3,    -1,     5,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,     1,
      -1,     3,    -1,     5,     6,    -1,    -1,     9,    10,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,     1,    29,    30,    31,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    11,    31,    32,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    32,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    32,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    32,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    32,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      32,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    11,    -1,    32,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    32,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    32,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    32,    14,    15,    16,    17,    18,    19,    -1,
      11,    22,    23,    14,    15,    16,    17,    18,    19,    -1,
      -1,    32,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    32,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    12,    22,    23,    24,    -1,    -1,    -1,    -1,    20,
      21,    31,    23,    12,    25,    26,    27,    -1,    29,    30,
      31,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    14,    15,    16,    17,    18,    19,
      31,    32,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    -1,    32,    22,    23,    24,    14,    15,    16,    17,
      18,    19,    -1,    32,    22,    23,    24,    14,    15,    16,
      17,    18,    19,    -1,    32,    22,    23,    24,    14,    15,
      16,    17,    18,    19,    -1,    32,    22,    23,    24,    14,
      15,    16,    17,    18,    19,    -1,    32,    22,    23,    24,
      14,    15,    16,    17,    18,    19,    -1,    32,    22,    23,
      24,    14,    15,    16,    17,    18,    19,    -1,    32,    22,
      23,    24,    14,    15,    16,    17,    18,    19,    -1,    32,
      22,    23,    24,    14,    15,    16,    17,    18,    19,    -1,
      32,    22,    23,    24,    14,    15,    16,    17,    18,    19,
      -1,    32,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    -1,    32,    22,    23,    24,    14,    15,    16,    17,
      18,    19,    -1,    32,    22,    23,    24,    14,    15,    16,
      17,    18,    19,    -1,    32,    22,    23,    24,    14,    15,
      16,    17,    18,    19,    -1,    32,    22,    23,    24,    14,
      15,    16,    17,    18,    19,    -1,    32,    22,    23,    24,
      14,    15,    16,    17,    18,    19,    -1,    32,    22,    23,
      -1,    14,    15,    16,    17,    18,    19,    -1,    32,    22,
      23,    -1,    14,    15,    16,    17,    18,    19,    -1,    32,
      22,    23,    12,    -1,    14,    15,    16,    17,    18,    19,
      32,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    32,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    32,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    32,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    32,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    36,    37,    38,    39,    46,    64,    31,
       8,    30,     0,    38,    31,    12,    32,    42,    30,    32,
      40,    45,     7,    47,    64,    44,    47,    33,     8,    30,
      11,    32,    33,    32,     1,     3,     5,     6,     9,    10,
      20,    21,    23,    25,    26,    27,    29,    30,    31,    33,
      48,    49,    50,    51,    56,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    76,    30,    64,
      43,    48,    41,    31,    31,    30,    66,    31,    31,    74,
      74,    74,    74,    13,    31,    66,    48,    34,    49,    12,
      12,    12,    14,    15,    16,    17,    18,    19,    22,    23,
      24,    12,    33,    34,    33,     1,    65,     1,    58,    62,
      65,     1,    30,     1,    28,    66,    66,    32,    66,    75,
      32,    34,    67,    68,    69,    70,    71,    71,    72,    72,
      73,    48,    48,    32,    32,    57,    32,    12,    32,    32,
      32,    32,    32,    11,    32,    34,    34,    33,    53,    55,
      53,    32,    33,    50,    61,    59,    66,    54,    50,     4,
      61,    48,    62,    48,    52,    34,    12,    34,    53,    60,
      62,     7,    20,    21,    23,    25,    26,    27,    29,    30,
      31,    67,    68,    69,    70,    71,    72,    73,    74,    30,
      66,    20,    21,    23,    25,    26,    27,    29,    30,    31,
      67,    68,    69,    70,    71,    72,    73,    74,    14,    14,
      33,    55,    65,     8,    30,    74,    74,    74,    74,    31,
      66,    15,    16,    17,    18,    19,    22,    23,    24,    13,
      74,    74,    74,    74,    31,    66,    15,    16,    17,    18,
      19,    22,    23,    24,    67,    67,    54,     1,     3,     5,
      50,    51,    56,    63,    65,    76,    30,    32,    75,    32,
      68,    69,    70,    71,    71,    72,    72,    73,    66,    32,
      75,    32,    68,    69,    70,    71,    71,    72,    72,    73,
      48,    31,    31,    12,    12,    12,    32,    32,    34,     1,
      65,     1,    58,    32,    32,    57,    32,    53,    53,    32,
      33,    50,    61,    61,    48,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    40,
      41,    39,    42,    43,    39,    44,    39,    45,    39,    46,
      46,    47,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    52,    51,    51,    54,    53,
      55,    53,    56,    57,    56,    59,    60,    58,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     0,
       0,     9,     0,     0,     9,     0,     7,     0,     7,     2,
       3,     3,     1,     2,     1,     1,     2,     3,     1,     1,
       2,     2,     2,     1,     5,     0,     8,     5,     0,     4,
       0,     2,     5,     0,     6,     0,     0,     7,     3,     1,
       1,     0,     4,     4,     4,     4,     4,     2,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     2,
       2,     1,     1,     3,     4,     3,     1,     1,     1,     3,
       1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declarations  */
#line 109 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro), NULL);

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
#line 2301 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2307 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 162 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2314 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2320 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2326 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 168 "./src/sintaxe.y"
                                                        {}
#line 2332 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 172 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0;}
#line 2338 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 173 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL; ger_codigo_var = 0;}
#line 2344 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 174 "./src/sintaxe.y"
                    {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "NIL");
                    }
                    if(strcmp(aux, "main"))     // RETIRAR CASO A RECLAMACAO DO TAC NAO SEJA UM PROBLEMA
                        geraOperacoes("return", ret_default->no1->nome, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");
                    }
#line 2367 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 193 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func);}
#line 2373 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 194 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2379 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 194 "./src/sintaxe.y"
                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2385 "./src/sintaxe.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 196 "./src/sintaxe.y"
                                          {strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0;}
#line 2391 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: funcDecl ABRE_P FECHA_P $@5 ABRE_C moreStmt FECHA_C  */
#line 197 "./src/sintaxe.y"
                    {(yyval.no) = montaNo("function", (yyvsp[-6].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, tipo_func_return);
                    }
                    if(strcmp(aux, "main"))     // RETIRAR CASO A RECLAMACAO DO TAC NAO SEJA UM PROBLEMA
                        geraOperacoes("return", ret_default->no1->nome, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");}
#line 2413 "./src/sintaxe.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 215 "./src/sintaxe.y"
                                       {strcpy(tipo_func_return, tipo_func);}
#line 2419 "./src/sintaxe.tab.c"
    break;

  case 18: /* function: error ABRE_P FECHA_P $@6 ABRE_C moreStmt FECHA_C  */
#line 215 "./src/sintaxe.y"
                                                                                                            {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2425 "./src/sintaxe.tab.c"
    break;

  case 19: /* funcDecl: TIPO ID  */
#line 218 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna, "");
                                                        strcpy(tipo_func, (yyvsp[-1].tok).lexema);

                                                        // Adiciona o label da funcao no codigo
                                                        char nome_func[200];
                                                        strcpy(nome_func, "\n");
                                                        strcat(nome_func, (yyvsp[0].tok).lexema);
                                                        strcat(nome_func, ":\n");
                                                        fputs(nome_func, escrita);}
#line 2443 "./src/sintaxe.tab.c"
    break;

  case 20: /* funcDecl: TIPO LIST ID  */
#line 232 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna, "");
                                                        strcpy(tipo_func, (yyvsp[-2].tok).lexema);

                                                        // Adiciona o label da funcao no codigo
                                                        char nome_func[200];
                                                        strcpy(nome_func, "\n");
                                                        strcat(nome_func, (yyvsp[0].tok).lexema);
                                                        strcat(nome_func, ":\n");
                                                        fputs(nome_func, escrita);}
#line 2459 "./src/sintaxe.tab.c"
    break;

  case 21: /* parameters: parameters VIRG varDecl  */
#line 245 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2465 "./src/sintaxe.tab.c"
    break;

  case 22: /* parameters: varDecl  */
#line 246 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2471 "./src/sintaxe.tab.c"
    break;

  case 23: /* moreStmt: moreStmt block  */
#line 249 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2477 "./src/sintaxe.tab.c"
    break;

  case 24: /* moreStmt: block  */
#line 250 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2484 "./src/sintaxe.tab.c"
    break;

  case 25: /* block: stmt  */
#line 254 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2490 "./src/sintaxe.tab.c"
    break;

  case 26: /* block: varDecl PV  */
#line 255 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2496 "./src/sintaxe.tab.c"
    break;

  case 27: /* block: ABRE_C moreStmt FECHA_C  */
#line 256 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2502 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: conditional  */
#line 259 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2508 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: iteration  */
#line 260 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2514 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: attribuition PV  */
#line 261 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2520 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: io PV  */
#line 262 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2526 "./src/sintaxe.tab.c"
    break;

  case 32: /* stmt: ret PV  */
#line 263 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2532 "./src/sintaxe.tab.c"
    break;

  case 33: /* stmt: error  */
#line 264 "./src/sintaxe.y"
                                                        {}
#line 2538 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P attribuition FECHA_P ifBracesOrNot  */
#line 268 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            char aux[50];
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                            }}
#line 2552 "./src/sintaxe.tab.c"
    break;

  case 35: /* $@7: %empty  */
#line 278 "./src/sintaxe.y"
                                                                                              {char jump[50];
                                                                                            char aux_num[10];
                                                                                            strcpy(jump, "jump L");
                                                                                            sprintf(aux_num, "%d", label_cont);
                                                                                            strcat(jump, aux_num);
                                                                                            strcat(jump, "\n");
                                                                                            fputs(jump, escrita);
                                                                                            char aux[50];
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                                tem_else = 1;
                                                                                            }}
#line 2572 "./src/sintaxe.tab.c"
    break;

  case 36: /* conditional: IF ABRE_P attribuition FECHA_P ifBracesOrNot ELSE $@7 ifBracesOrNot  */
#line 294 "./src/sintaxe.y"
                                                                                              {(yyval.no) = montaNo((yyvsp[-7].tok).lexema, NULL, (yyvsp[-3].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-5].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            char aux_num[10];
                                                                                            char lab[50];
                                                                                            strcpy(lab, "L");
                                                                                            sprintf(aux_num, "%d", label_cont);
                                                                                            strcat(lab, aux_num);
                                                                                            strcat(lab, ":\n");
                                                                                            fputs(lab, escrita);
                                                                                            tem_else = 0;
                                                                                            label_cont++;}
#line 2588 "./src/sintaxe.tab.c"
    break;

  case 37: /* conditional: IF ABRE_P error FECHA_P ifBracesOrNot  */
#line 305 "./src/sintaxe.y"
                                                                                              {}
#line 2594 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@8: %empty  */
#line 308 "./src/sintaxe.y"
                         {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo);}
#line 2600 "./src/sintaxe.tab.c"
    break;

  case 39: /* ifBracesOrNot: ABRE_C $@8 moreStmt FECHA_C  */
#line 308 "./src/sintaxe.y"
                                                                                                                                             {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2606 "./src/sintaxe.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 309 "./src/sintaxe.y"
                  {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo);}
#line 2612 "./src/sintaxe.tab.c"
    break;

  case 41: /* ifBracesOrNot: $@9 stmt  */
#line 309 "./src/sintaxe.y"
                                                                                                                                           {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2618 "./src/sintaxe.tab.c"
    break;

  case 42: /* iteration: FOR ABRE_P iteArgs FECHA_P forBracesOrNot  */
#line 312 "./src/sintaxe.y"
                                                                                    {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                    fputs(topoInc->incremento, escrita);
                                                                                    popIncremento(&topoInc);
                                                                                    char labelInicio[15];
                                                                                    char labelCondicional[15];
                                                                                    strcpy(labelCondicional, topo->label);
                                                                                    popLabel(&topo);
                                                                                    strcpy(labelInicio, topo->label);
                                                                                    popLabel(&topo);
                                                                                    char jump[50];
                                                                                    strcpy(jump, "jump ");
                                                                                    strcat(jump, labelInicio);
                                                                                    strcat(jump, "\n");
                                                                                    fputs(jump, escrita);
                                                                                    strcpy(jump, labelCondicional);
                                                                                    strcat(jump, ":\n");
                                                                                    fputs(jump, escrita);
                                                                                    }
#line 2641 "./src/sintaxe.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 330 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2647 "./src/sintaxe.tab.c"
    break;

  case 44: /* iteration: FOR ABRE_P error $@10 FECHA_P forBracesOrNot  */
#line 330 "./src/sintaxe.y"
                                                                                       {}
#line 2653 "./src/sintaxe.tab.c"
    break;

  case 45: /* $@11: %empty  */
#line 333 "./src/sintaxe.y"
                                        {mandaLabel(&label_cont, 1, retorno_expressao, escrita, &topo);}
#line 2659 "./src/sintaxe.tab.c"
    break;

  case 46: /* $@12: %empty  */
#line 334 "./src/sintaxe.y"
                                        {mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo); strcpy(instrucao_incremento, ""); flag_incremento = 1;}
#line 2665 "./src/sintaxe.tab.c"
    break;

  case 47: /* iteArgs: expIte PV $@11 expIte PV $@12 expIte  */
#line 335 "./src/sintaxe.y"
                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-6].no), (yyvsp[-3].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL); pushIncremento(&topoInc, instrucao_incremento); flag_incremento = 0;}
#line 2671 "./src/sintaxe.tab.c"
    break;

  case 48: /* forBracesOrNot: ABRE_C moreStmt FECHA_C  */
#line 338 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2677 "./src/sintaxe.tab.c"
    break;

  case 49: /* forBracesOrNot: stmt  */
#line 339 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2683 "./src/sintaxe.tab.c"
    break;

  case 50: /* expIte: attribuition  */
#line 342 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2689 "./src/sintaxe.tab.c"
    break;

  case 51: /* expIte: %empty  */
#line 343 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2695 "./src/sintaxe.tab.c"
    break;

  case 52: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 349 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if(simb != NULL) {
                                                            strcpy((yyval.no)->no1->tipo, (yyval.no)->no1->simbolo->tipo);
                                                            geraOperacoes((yyvsp[-3].tok).lexema, simb->var_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                        }
                                                        }
#line 2708 "./src/sintaxe.tab.c"
    break;

  case 53: /* io: SAIDA ABRE_P expLogic FECHA_P  */
#line 358 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        geraOperacoes((yyvsp[-3].tok).lexema, (yyvsp[-1].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2715 "./src/sintaxe.tab.c"
    break;

  case 54: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 361 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna, "");
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        geraOperacoes((yyvsp[-3].tok).lexema, (yyvsp[-1].tok).lexema, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 1, &label_cont, &string_cont);
                                                        }
#line 2727 "./src/sintaxe.tab.c"
    break;

  case 55: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 369 "./src/sintaxe.y"
                                                        {}
#line 2733 "./src/sintaxe.tab.c"
    break;

  case 56: /* io: SAIDA ABRE_P error FECHA_P  */
#line 370 "./src/sintaxe.y"
                                                        {}
#line 2739 "./src/sintaxe.tab.c"
    break;

  case 57: /* varDecl: TIPO ID  */
#line 374 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        char num_var[15];
                                                        char aux_num[15];
                                                        sprintf(aux_num, "%d", ger_codigo_var);
                                                        if(argumentos == 0) {
                                                            strcpy(num_var, "$");
                                                            strcat(num_var, aux_num);
                                                            num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna, num_var);
                                                            // Inicializacao default da variavel na geracao de codigo
                                                            inicioDefault(ger_codigo_var, escrita, (yyvsp[-1].tok).lexema);
                                                        }
                                                        else if(argumentos == 1) {
                                                            strcpy(num_var, "#");
                                                            strcat(num_var, aux_num);
                                                            num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna, num_var);
                                                            pushArgs(&args, (yyvsp[-1].tok).lexema, num_var);
                                                        }
                                                        
                                                        ger_codigo_var++;
                                                        }
#line 2765 "./src/sintaxe.tab.c"
    break;

  case 58: /* varDecl: TIPO LIST ID  */
#line 396 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;

                                                        char num_var[15];
                                                        char aux_num[15];
                                                        sprintf(aux_num, "%d", ger_codigo_var);
                                                        if(argumentos == 0) {
                                                            strcpy(num_var, "$");
                                                            strcat(num_var, aux_num);
                                                            num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna, num_var);
                                                            inicioDefault(ger_codigo_var, escrita, (yyvsp[-2].tok).lexema);
                                                        } else if(argumentos == 1) {
                                                            strcpy(num_var, "#");
                                                            strcat(num_var, aux_num);
                                                            num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna, num_var);
                                                            pushArgs(&args, (yyvsp[-2].tok).lexema, num_var);
                                                        }

                                                        ger_codigo_var++;
                                                        }
#line 2789 "./src/sintaxe.tab.c"
    break;

  case 59: /* attribuition: ID ATRIB expLogic  */
#line 417 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        // Checagem de tipos na atribuicao
                                                        if(simb != NULL) {
                                                            strcpy((yyval.no)->no1->tipo, (yyval.no)->no1->simbolo->tipo);
                                                            strcpy((yyval.no)->tipo, (yyval.no)->no1->simbolo->tipo);
                                                            //Se for int com float
                                                            if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp((yyval.no)->no1->simbolo->tipo, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp((yyval.no)->no1->simbolo->tipo, "int"))) {
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(simb->tipo, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(simb->tipo, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no2 = no;
                                                                geraCasting(NULL, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                                strcpy(retorno_expressao, (yyval.no)->valor_temp);
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "int list")){
                                                                //Se for int list e outro
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "int list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "float list")){
                                                                //Se for float list e outro
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "float list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else if(!strcmp((yyval.no)->no1->simbolo->tipo, "float list") || !strcmp((yyval.no)->no1->simbolo->tipo, "int list")){
                                                                //Se for int list ou float list na esquerda e outro tipo sem ser int list, float list ou NIL na direita
                                                                if(strcmp((yyvsp[0].no)->tipo, "float list") && strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else {
                                                                geraCasting(NULL, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                                strcpy(retorno_expressao, (yyval.no)->valor_temp);
                                                            }

                                                        } else {
                                                            //Caso o operador da esquerda nao tenha sido declarado
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha: %d\nColuna: %d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                            strcpy((yyval.no)->no1->tipo, "undefined");
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 2851 "./src/sintaxe.tab.c"
    break;

  case 60: /* attribuition: expLogic  */
#line 474 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);
                                                        strcpy(retorno_expressao, (yyval.no)->valor_temp);}
#line 2858 "./src/sintaxe.tab.c"
    break;

  case 61: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 478 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2866 "./src/sintaxe.tab.c"
    break;

  case 62: /* expLogic: andLogic  */
#line 481 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2872 "./src/sintaxe.tab.c"
    break;

  case 63: /* andLogic: andLogic LOG_OP_E expComp  */
#line 484 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2880 "./src/sintaxe.tab.c"
    break;

  case 64: /* andLogic: expComp  */
#line 487 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2886 "./src/sintaxe.tab.c"
    break;

  case 65: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 490 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2894 "./src/sintaxe.tab.c"
    break;

  case 66: /* expComp: expRel  */
#line 493 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2900 "./src/sintaxe.tab.c"
    break;

  case 67: /* expRel: expRel REL_OP_ALTA expList  */
#line 496 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2908 "./src/sintaxe.tab.c"
    break;

  case 68: /* expRel: expList  */
#line 499 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2914 "./src/sintaxe.tab.c"
    break;

  case 69: /* expList: expList LIST_OP_BIN expArit  */
#line 502 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        int cont_erro = 0;
                                                        if(strcmp((yyvsp[-2].no)->simbolo->varOuFunc, "funcao")) {
                                                            //Checa se o operador da esquerda eh funcao
                                                            printf("ERRO SEMANTICO: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        } else if((yyvsp[-2].no)->simbolo->numArgs != 1) {
                                                            //Checa se o numero de argumentos eh diferente de 1
                                                            printf("ERRO SEMANTICO: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
                                                        //Checa se o tipo do operador da direita nao eh int list ou float list
                                                        if(strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "float list")) {
                                                            printf("ERRO SEMANTICO: termo a direita nao eh uma lista\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
                                                        //Controla o tipo do no apos a operacao de >> ou <<
                                                        if(cont_erro == 0) {
                                                            if(!strcmp((yyvsp[-1].tok).lexema, ">>")) {
                                                                char aux[15];
                                                                strcpy(aux, (yyvsp[-2].no)->simbolo->tipo);
                                                                strcat(aux, " list");
                                                                strcpy((yyval.no)->tipo, aux);
                                                            } else if(!strcmp((yyvsp[-1].tok).lexema, "<<")) {
                                                                strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                            }
                                                        } else {
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 2952 "./src/sintaxe.tab.c"
    break;

  case 70: /* expList: expList LIST_OP_CONSTRUTOR expArit  */
#line 535 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        // Checa se o tipo do operador da direita eh lista e se o da esquerda eh int ou float
                                                        if((strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "float list")) || (strcmp((yyvsp[-2].no)->tipo, "int") && strcmp((yyvsp[-2].no)->tipo, "float"))) {
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[-2].no)->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        } else {
                                                            char aux[15];
                                                            strcpy(aux, (yyvsp[0].no)->tipo);
                                                            char* aux1 = strtok(aux, " ");
                                                            //Adiciona o no de coercao
                                                            if(strcmp((yyvsp[-2].no)->tipo, aux1)) {
                                                                char aux2[15];
                                                                strcpy(aux2, "(");
                                                                if(!strcmp(aux1, "int"))
                                                                    strcat(aux2, "float_to_int)");
                                                                else if(!strcmp(aux1, "float"))
                                                                    strcat(aux2, "int_to_float)");
                                                                struct No* no = montaNo(aux2, (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no1 = no;
                                                            } else {
                                                                (yyval.no)->no1 = (yyvsp[-2].no);
                                                            }
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
                                                        }
#line 2983 "./src/sintaxe.tab.c"
    break;

  case 71: /* expList: expArit  */
#line 561 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2989 "./src/sintaxe.tab.c"
    break;

  case 72: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 564 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 2997 "./src/sintaxe.tab.c"
    break;

  case 73: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 567 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 3005 "./src/sintaxe.tab.c"
    break;

  case 74: /* expArit: expMul  */
#line 570 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 3011 "./src/sintaxe.tab.c"
    break;

  case 75: /* expMul: expMul ARIT_OP_ALTA expUn  */
#line 573 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);}
#line 3019 "./src/sintaxe.tab.c"
    break;

  case 76: /* expMul: expUn  */
#line 576 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 3025 "./src/sintaxe.tab.c"
    break;

  case 77: /* expUn: LOG_OP_NEG element  */
#line 579 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                            if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                            }       // FAZER O CASO DO ! DE LISTA
                                                        } else {
                                                            // Se nao eh lista
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 3042 "./src/sintaxe.tab.c"
    break;

  case 78: /* expUn: ARIT_OP_MENOS element  */
#line 591 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                            geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                        } else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "NIL")){
                                                            // Se eh lista ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 3057 "./src/sintaxe.tab.c"
    break;

  case 79: /* expUn: LIST_OP_UN element  */
#line 601 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
#line 3071 "./src/sintaxe.tab.c"
    break;

  case 80: /* expUn: LIST_OP_HEADER element  */
#line 610 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            char copia[15];
                                                            strcpy(copia, (yyvsp[0].no)->tipo);
                                                            char* aux = strtok(copia, " ");
                                                            strcpy((yyval.no)->tipo, aux);
                                                        }}
#line 3088 "./src/sintaxe.tab.c"
    break;

  case 81: /* expUn: element  */
#line 622 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 3094 "./src/sintaxe.tab.c"
    break;

  case 82: /* element: ID  */
#line 627 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL) {
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);

                                                            // Copia o valor temporario na tabela para a arvore
                                                            strcpy((yyval.no)->valor_temp, (yyval.no)->simbolo->var_temp);
                                                        } else {
                                                            // Caso a variavel nao tenha sido declarada
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha:%d\nColuna:%d\n\n", (yyvsp[0].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 3113 "./src/sintaxe.tab.c"
    break;

  case 83: /* element: ABRE_P expLogic FECHA_P  */
#line 642 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 3119 "./src/sintaxe.tab.c"
    break;

  case 84: /* element: ID ABRE_P arguments FECHA_P  */
#line 644 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);
                                                        int cont_argumentos = 0;
                                                        if((yyval.no)->simbolo != NULL) {
                                                            if(!strcmp((yyval.no)->simbolo->varOuFunc, "funcao")) {
                                                                strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                                // Checa se o numero de argumentos esta correto
                                                                if((yyval.no)->simbolo->numArgs > num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: poucos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else if((yyval.no)->simbolo->numArgs < num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: muitos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                if(args != NULL) {
                                                                    struct listaArgs * aux1 = (yyval.no)->simbolo->tipoArgs;
                                                                    struct listaArgs * aux2 = args;
                                                                    int cont = 0;
                                                                    struct listaNo * auxNo = (yyval.no)->lista;
                                                                    // Itera sobre os tipos dos argumentos
                                                                    while(aux1 != NULL && aux2 != NULL) {
                                                                        // Se forem diferentes
                                                                        if(strcmp(aux1->tipo, aux2->tipo)) {
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

                                                                                    strcpy(casting, "fltoint ");
                                                                                    sprintf(aux_num, "%d", ger_codigo_var);
                                                                                    strcpy(temp, "$");
                                                                                    strcat(temp, aux_num);
                                                                                    strcat(casting, temp);
                                                                                    strcat(casting, ", ");
                                                                                    strcat(casting, aux2->var_temp);
                                                                                    strcat(casting, "\n");
                                                                                    fputs(casting, escrita);
                                                                                    geraOperacoes("parameter", temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);

                                                                                } else if(!strcmp(aux1->tipo, "float")) {
                                                                                    strcat(aux, "int_to_float)");

                                                                                    strcpy(casting, "inttofl ");
                                                                                    sprintf(aux_num, "%d", ger_codigo_var);
                                                                                    strcpy(temp, "$");
                                                                                    strcat(temp, aux_num);
                                                                                    strcat(casting, temp);
                                                                                    strcat(casting, ", ");
                                                                                    strcat(casting, aux2->var_temp);
                                                                                    strcat(casting, "\n");
                                                                                    fputs(casting, escrita);
                                                                                    geraOperacoes("parameter", temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);

                                                                                }
                                                                                struct No* no = montaNo(aux, auxNo->no, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                auxNo->no = no;
                                                                                cont_argumentos++;
                                                                            }
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
                                                                printf("ERRO SEMANTICO: %s nao eh uma funcao\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                strcpy((yyval.no)->tipo, "undefined");
                                                            }
                                                        } else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        if(num_erros_lexicos == 0 && num_erros_sintaticos == 0 && num_erros_semanticos == 0) {
                                                            char aux[200];
                                                            char num_args[5];
                                                            strcpy(aux, "call ");
                                                            strcat(aux, (yyvsp[-3].tok).lexema);
                                                            strcat(aux, ", ");
                                                            sprintf(num_args, "%d", cont_argumentos);
                                                            strcat(aux, num_args);
                                                            strcat(aux, "\n");
                                                            fputs(aux, escrita);
                                                        }
                                                        liberaArgs(args);
                                                        args = NULL;
                                                        num_args_chamada = 0;
                                                        }
#line 3229 "./src/sintaxe.tab.c"
    break;

  case 85: /* element: ID ABRE_P FECHA_P  */
#line 750 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        // Cria o call na geracao de codigo
                                                        if((yyval.no)->simbolo != NULL) {
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                            char aux[200];
                                                            strcpy(aux, "call ");
                                                            strcat(aux, (yyvsp[-2].tok).lexema);
                                                            strcat(aux, "\n");
                                                            fputs(aux, escrita);
                                                        // Caso a funcao ainda nao tenha sido declarada
                                                        } else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 3251 "./src/sintaxe.tab.c"
    break;

  case 86: /* element: CONST_INT  */
#line 768 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy((yyval.no)->valor_temp, (yyvsp[0].tok).lexema);
                                                        }
#line 3261 "./src/sintaxe.tab.c"
    break;

  case 87: /* element: CONST_FLOAT  */
#line 774 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy((yyval.no)->valor_temp, (yyvsp[0].tok).lexema);
                                                        }
#line 3271 "./src/sintaxe.tab.c"
    break;

  case 88: /* element: NIL  */
#line 780 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 3278 "./src/sintaxe.tab.c"
    break;

  case 89: /* arguments: arguments VIRG expLogic  */
#line 784 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo, (yyvsp[0].no)->valor_temp);}
#line 3286 "./src/sintaxe.tab.c"
    break;

  case 90: /* arguments: expLogic  */
#line 788 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo, (yyvsp[0].no)->valor_temp);}
#line 3295 "./src/sintaxe.tab.c"
    break;

  case 91: /* ret: RETURN expLogic  */
#line 794 "./src/sintaxe.y"
                                                        {if(!strcmp((yyvsp[0].no)->tipo, tipo_func_return)) {
                                                            (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                            geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);

                                                        // Se o tipo do retorno nao for o mesmo da funcao
                                                        } else {
                                                            // Se for int ou float, eh possivel fazer coercao
                                                            if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp(tipo_func_return, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp(tipo_func_return, "int"))) {
                                                                (yyval.no) = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(tipo_func_return, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(tipo_func_return, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no1 = no;
                                                                geraCasting((yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento);
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no), flag_incremento, instrucao_incremento, 0, &label_cont, &string_cont);
                                                            } else {
                                                                (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                printf("ERRO SEMANTICO: retorno de tipo errado (%s, %s)\nLinha:%d\nColuna:%d\n\n", tipo_func_return, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                        }
                                                        }
#line 3326 "./src/sintaxe.tab.c"
    break;


#line 3330 "./src/sintaxe.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 822 "./src/sintaxe.y"



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
    escrita = fopen("code321.tac", "w");
    strcat(nome, ".tac");
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
