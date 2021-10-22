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
#line 4 "./src/sintaxe.y"

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
char aux[50];
char tipo_func[50];
char tipo_func_return[50];
char nome_arq[200];
char retorno_expressao[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;
struct listaArgs* args = NULL;
struct pilhaLabel* topo = NULL;
FILE *escrita;

void yyerror(const char *);

#line 111 "./src/sintaxe.tab.c"

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
  YYSYMBOL_bracesOrNot = 53,               /* bracesOrNot  */
  YYSYMBOL_54_8 = 54,                      /* $@8  */
  YYSYMBOL_55_9 = 55,                      /* $@9  */
  YYSYMBOL_iteration = 56,                 /* iteration  */
  YYSYMBOL_57_10 = 57,                     /* $@10  */
  YYSYMBOL_iteArgs = 58,                   /* iteArgs  */
  YYSYMBOL_expIte = 59,                    /* expIte  */
  YYSYMBOL_io = 60,                        /* io  */
  YYSYMBOL_varDecl = 61,                   /* varDecl  */
  YYSYMBOL_attribuition = 62,              /* attribuition  */
  YYSYMBOL_expLogic = 63,                  /* expLogic  */
  YYSYMBOL_andLogic = 64,                  /* andLogic  */
  YYSYMBOL_expComp = 65,                   /* expComp  */
  YYSYMBOL_expRel = 66,                    /* expRel  */
  YYSYMBOL_expList = 67,                   /* expList  */
  YYSYMBOL_expArit = 68,                   /* expArit  */
  YYSYMBOL_expMul = 69,                    /* expMul  */
  YYSYMBOL_expUn = 70,                     /* expUn  */
  YYSYMBOL_element = 71,                   /* element  */
  YYSYMBOL_arguments = 72,                 /* arguments  */
  YYSYMBOL_ret = 73                        /* ret  */
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
#define YYLAST   3011

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

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
       0,    99,    99,   123,   128,   129,   133,   134,   135,   139,
     140,   139,   158,   159,   158,   161,   161,   178,   178,   181,
     195,   208,   209,   212,   213,   217,   218,   219,   222,   223,
     224,   225,   226,   227,   231,   241,   241,   268,   271,   271,
     272,   272,   275,   276,   276,   279,   282,   283,   289,   296,
     298,   304,   305,   309,   331,   352,   409,   413,   416,   419,
     422,   425,   428,   431,   434,   437,   470,   496,   499,   502,
     505,   508,   511,   514,   526,   536,   545,   557,   562,   577,
     579,   644,   656,   662,   668,   672,   676,   682
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
  "bracesOrNot", "$@8", "$@9", "iteration", "$@10", "iteArgs", "expIte",
  "io", "varDecl", "attribuition", "expLogic", "andLogic", "expComp",
  "expRel", "expList", "expArit", "expMul", "expUn", "element",
  "arguments", "ret", YY_NULLPTR
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

#define YYPACT_NINF (-148)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     243,     3,     1,    45,   411,   490,   513,    17,    39,     7,
      51,    37,  -148,   524,    21,   589,    52,   100,   123,    61,
     100,   106,    13,    46,    73,   116,    77,  1897,    78,   171,
     100,   144,  1897,   154,  1081,   143,   202,  2920,   209,   224,
     726,   726,   726,   726,   647,  2681,  2694,  2420,  2932,  1897,
    1115,  1149,  1183,  1217,  1251,   176,   189,   234,    40,   384,
     333,   774,   637,  2952,  2707,  2720,  2733,   248,   172,   215,
     233,  1285,   254,  2052,   605,  2460,   126,     5,   244,  2746,
    2759,  2772,  2785,  2920,  2790,    42,  1319,   602,  1353,  1387,
    1421,  1455,  2920,  2920,  2920,  2920,  2920,  2920,  2920,  2920,
    2920,  1489,  1897,   611,  1897,   267,   281,   292,   314,   264,
     347,   336,   337,   350,   351,   157,   306,  2811,   136,   216,
    2824,  1523,   507,   518,   808,   672,  2964,  2976,  2837,  2850,
    2863,  1557,  1591,  1959,  1990,   353,  1959,   538,   375,   383,
     395,   401,   402,  2980,  2876,   639,   718,  1928,  1625,   400,
      66,  1959,  1659,   404,   141,  1897,  1693,  2021,  1727,  2881,
    1761,  1959,   372,  1795,  1829,    30,   828,   828,   828,   828,
    2482,  2493,  2504,  2471,  2932,   268,   423,   326,   338,   561,
    2515,  2526,  2537,  2439,   203,   862,   862,   862,   862,   312,
    2085,  2104,   110,  2932,   146,   247,    48,    99,  2370,  2123,
    2142,  2161,  2932,  2980,  1928,   479,   390,   250,   412,  2548,
    2559,  2570,  2581,  2894,   227,  2932,  2932,  2932,  2932,  2932,
    2932,  2932,  2932,  2932,  2180,  2199,  2218,  2237,  2907,   290,
    2980,  2980,  2980,  2980,  2980,  2980,  2980,  2980,   301,   170,
    1897,   673,   397,   405,   707,   741,   775,   420,   429,   433,
     440,  2592,   219,  2603,   463,   434,   348,  2658,  2669,  2614,
    2625,  2636,   307,  2256,   221,  2275,   270,    87,   205,  2389,
    2408,  2294,  2313,  2332,  1863,  2064,  2037,   809,   843,   877,
    2647,  2351,   911,   403,   414,   292,   430,  1990,  1990,   431,
    1990,   945,   979,  1990,  1013,  1047
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   464,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   461,   -25,   -49,  -147,   282,  -148,  -121,   288,
    -128,   289,   211,   225,   -93,   298,    12,   -47,   -37,   369,
     445,   392,   324,   241,   158,    75,   -23,    26,   302
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    20,    72,    17,    70,    25,
      21,     7,    23,    50,    51,    52,    53,   161,   148,   155,
     205,    54,   135,   108,   109,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,   119,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    88,   156,    -8,    -8,   149,   111,    71,   149,    10,
      -8,    85,     8,   150,   -12,   152,     8,    79,    80,    81,
      82,    28,    88,   149,    86,   182,   106,   110,    -9,    24,
     158,    11,    24,   149,     9,   112,   184,    88,   207,    16,
     164,   115,    69,    29,   153,    12,   116,   118,    14,   -53,
     182,    15,   -56,    19,    92,   182,   202,    30,   244,   -62,
     208,   201,   -62,   -62,   -62,   232,   162,   -34,   -19,   -34,
     157,   -34,   -34,   -34,   120,   -34,   -34,   131,    31,   132,
     -62,    18,    88,    88,   -22,   -17,   -34,   -34,    30,   -34,
     110,   -34,   -34,   -34,   -15,   -34,   -34,   -34,   -61,   -34,
     -34,   -61,   -61,   -61,   232,   -22,   154,    22,    68,    33,
     -64,    88,   206,   -64,   -64,   -64,   -64,   233,   234,   -61,
     201,   -78,   184,   181,   -78,   -78,   -78,   -78,   -78,   -78,
     160,   -64,   -78,   -78,   -78,   -54,   182,   214,   -87,    27,
      92,   228,   -78,   209,   210,   211,   212,   -86,   181,    32,
     203,   182,   -85,   181,   -20,   203,   229,   -58,   248,   200,
     -58,   230,   224,   225,   226,   227,   291,   292,   -86,   294,
     182,   202,   295,   -85,    73,   130,   118,   -13,   -58,   182,
     201,   -57,   -53,   -54,   -57,   230,   262,   -10,    89,   142,
     201,   118,   182,   182,   182,   182,   182,   182,   182,   182,
     182,    90,   -57,   -53,   -54,   201,   180,   201,   201,   201,
     201,   201,   201,   201,   201,   274,   -63,   202,   200,   -63,
     -63,   -63,   -63,   233,   234,    88,   -21,   143,   284,   110,
     143,   180,   143,    74,   181,   -56,   180,   -63,   184,   252,
      77,   202,   199,    -3,     1,   113,    91,   -21,   144,   181,
       2,   280,   182,   281,   264,    78,   128,   129,   -60,   253,
     101,   -60,   -60,   231,   166,   167,   102,   168,   181,   169,
     170,   171,   114,   172,   173,   174,   137,   181,   200,   -60,
     250,   -59,   -58,   215,   -59,   -59,   231,   104,   200,   179,
     181,   181,   181,   181,   181,   181,   181,   261,   181,   133,
     -58,   199,   -59,   200,   202,   200,   200,   200,   200,   200,
     200,   200,   273,   134,   179,   -57,   215,   180,   -55,   179,
      92,   202,   265,   -82,   -43,   198,   -82,   -82,   -82,   -82,
     -82,   -82,   180,   -57,   -82,   -82,   -82,   126,   127,   -55,
     -62,   -62,   -62,   217,   -82,   -60,   136,   -60,   -60,    94,
     181,   180,   -64,   -64,   -64,   -64,   218,   219,   -62,   -46,
     180,   199,   -63,   -63,   -63,   -63,   218,   219,   138,   139,
     -64,   199,   178,   180,   180,   180,   180,   180,   259,   260,
     -63,   180,   140,   141,   198,   151,   199,   -51,   199,   199,
     199,   199,   199,   271,   272,   -48,   -58,   178,   -58,    93,
     179,    34,   178,    35,   -45,    36,    37,   -52,   197,    38,
      39,    -2,     1,   -50,   -49,   179,   159,   175,     2,   125,
      40,    41,   -46,    42,   -53,    43,    44,    45,   275,    46,
      47,    48,   277,   180,   179,   287,   276,   -60,   -60,   216,
     177,   278,   175,   179,   198,   279,   288,   175,   -61,   -61,
     -61,   217,   -54,   194,   198,   -60,   179,   179,   179,   257,
     258,   122,   290,   293,   179,   177,   -61,   197,    13,   198,
     177,   198,   198,   198,   269,   270,   196,   -59,   -59,   216,
     241,    26,   242,   178,   243,    37,   124,   245,    38,    39,
      -5,    -5,   240,   176,   246,   -59,   289,    -5,   178,    40,
      41,   286,    42,   247,    43,    44,    45,   249,    46,    47,
      48,     0,   194,    -6,    -6,     0,   179,   178,   176,   -57,
      -6,   -57,    93,   176,    -4,    -4,   178,   197,   175,   195,
     -59,    -4,   -59,   -59,    94,   196,     0,   197,   123,   178,
     178,   256,     0,   175,     0,     0,     0,   178,     0,     0,
     -47,   177,   197,     0,   197,   197,   268,     0,    40,    41,
       0,    42,   175,    43,    44,    45,   177,    46,    47,    48,
       0,   238,   239,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   194,   220,   221,   177,     0,     0,   195,    -7,
      -7,     0,   175,   -67,   177,   196,    -7,   194,     0,   178,
       0,     0,   -18,   -18,   176,   196,   107,   177,   255,   -18,
       0,   -16,   -16,     0,     0,   177,     0,   -47,   -16,   176,
     196,     0,   196,   267,     0,    40,    41,     0,    42,     0,
      43,    44,    45,     0,    46,    47,    48,     0,   176,   -14,
     -14,     0,     0,     0,   175,     0,   -14,   176,   195,   -64,
       0,   -64,   -64,   -64,   -64,    96,    97,     0,   195,   -82,
     254,   -82,   -82,   -82,   -82,   -82,   -82,   177,   176,   -82,
     -82,   -82,     0,   195,   -33,   266,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -63,     0,   -63,   -63,   -63,   -63,
      96,    97,     0,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,   -41,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -11,   -11,
     176,     0,     0,     0,     0,   -11,     0,   -41,   -41,     0,
     -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -41,     0,
     -41,   -41,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,    44,    45,     0,    46,    75,    48,     0,     0,
       0,   -28,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -62,     0,   -62,   -62,
     -62,    95,     0,     0,     0,   -29,   -29,     0,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -61,     0,   -61,   -61,   -61,    95,     0,     0,     0,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   170,   171,     0,   172,   173,   174,
       0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   189,   190,
       0,   191,   192,   193,     0,     0,     0,   -32,   -32,     0,
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
     -34,     0,   -34,   -34,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -42,   -42,     0,   -42,     0,   -42,   -42,
     -42,     0,   -42,   -42,   -42,     0,   -42,   -42,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,     0,
     -44,     0,   -44,   -44,   -44,     0,   -44,   -44,   -44,     0,
     -44,   -44,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,    34,     0,    35,     0,
      36,    37,   165,     0,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,    42,     0,
      43,    44,    45,     0,    46,    47,    48,     0,    49,    87,
     -24,     0,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,     0,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -25,     0,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -29,     0,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,    34,     0,    35,     0,
      36,    37,   165,     0,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,    42,     0,
      43,    44,    45,     0,    46,    47,    48,     0,    49,   103,
      34,     0,    35,     0,    36,    37,   165,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,     0,    42,     0,    43,    44,    45,     0,    46,    47,
      48,     0,    49,   121,   -23,     0,   -23,     0,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -23,   -23,     0,   -23,     0,   -23,   -23,
     -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -31,     0,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -31,   -31,   -26,     0,   -26,     0,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,   -30,     0,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,     0,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,
     -32,     0,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,    34,     0,
      35,     0,    36,    37,   165,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,     0,
      49,   145,    34,     0,    35,     0,    36,    37,   165,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,     0,    42,     0,    43,    44,    45,     0,
      46,    47,    48,     0,    49,   146,   -37,     0,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -42,     0,   -42,     0,   -42,   -42,   -42,     0,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -42,
     -42,     0,   -42,     0,   -42,   -42,   -42,     0,   -42,   -42,
     -42,     0,   -42,   -42,   -41,     0,   -41,     0,   -41,   -41,
     -41,     0,   -41,   -41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -41,     0,   -41,     0,   -41,   -41,
     -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -44,     0,
     -44,     0,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,     0,
     -44,     0,   -44,   -44,   -44,     0,   -44,   -44,   -44,     0,
     -44,   -44,    34,     0,    35,     0,    36,    37,   165,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,     0,    42,     0,    43,    44,    45,     0,
      46,    47,    48,     0,    49,   163,   -39,     0,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -36,     0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,    34,     0,    35,     0,    36,    37,
     165,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,     0,    43,    44,
      45,     0,    46,    47,    48,     0,    49,   282,    34,     0,
      35,     0,    36,    37,   165,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,     0,    46,    47,    48,   -38,
      49,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -40,   -38,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,     0,   -40,     0,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   147,   -40,     0,   -40,   -40,     0,     0,   -40,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,     0,   -40,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -35,   204,   -35,     0,   -35,   -35,     0,     0,
     -35,   -35,     0,     0,     0,     0,     0,     0,   285,     0,
       0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -47,
     -35,   -35,   -35,   105,   -35,     0,     0,    40,    41,     0,
      42,     0,    43,    44,    45,   283,    46,    47,    48,     0,
       0,     0,   166,   167,     0,   168,     0,   169,   170,   171,
       0,   172,   183,   174,   166,   167,     0,   168,     0,   169,
     170,   171,     0,   172,   183,   174,   -83,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,   -83,   -83,   -83,
       0,     0,     0,     0,     0,   -84,     0,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -70,     0,   -84,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -70,   -70,   237,     0,     0,
       0,     0,     0,   -72,     0,   -70,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,   -72,   -72,     0,     0,     0,
       0,     0,   -77,     0,   -72,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,   -77,   -77,   -77,     0,     0,     0,     0,
       0,   -75,     0,   -77,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -75,   -75,   -75,     0,     0,     0,     0,     0,
     -76,     0,   -75,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,   -76,   -76,   -76,     0,     0,     0,     0,     0,   -74,
       0,   -76,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
     -74,   -74,   -74,     0,     0,     0,     0,     0,   -73,     0,
     -74,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -73,   -73,     0,     0,     0,     0,     0,   -81,     0,   -73,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,   -81,
     -81,     0,     0,     0,     0,     0,   -79,     0,   -81,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,   -79,   -79,
       0,     0,     0,     0,     0,   -68,     0,   -79,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -68,   -68,   237,     0,
       0,     0,     0,     0,   -69,     0,   -68,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,   -69,   237,     0,     0,
       0,     0,     0,   -71,     0,   -69,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,   -71,   -71,     0,     0,     0,
       0,     0,   -80,     0,   -71,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -80,   -80,   -80,     0,     0,     0,     0,
       0,   -67,     0,   -80,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   235,   236,     0,     0,     0,     0,     0,     0,
     -65,     0,   -67,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   235,   236,     0,     0,     0,     0,     0,     0,   -66,
       0,   -65,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     235,   236,   -78,    83,   -78,   -78,   -78,   -78,   -78,   -78,
     -66,     0,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,    84,   223,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
     213,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,    84,     0,   -78,   -78,   -78,   -82,   -82,   -82,   -82,
     -82,   -82,   213,   -78,   -82,   -82,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -82,   -83,   -83,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -83,   -84,   -84,   -84,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -84,   -70,   -70,   222,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -70,   -72,   -72,
     -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -72,   -77,
     -77,   -77,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -77,
     -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -75,   -76,   -76,   -76,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -76,   -74,   -74,   -74,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -74,   -73,   -73,   -73,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -73,   -81,   -81,   -81,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -81,   -79,   -79,   -79,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -79,   -68,   -68,   222,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -68,   -69,   -69,   222,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -69,   -71,   -71,
     -71,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -71,   -80,
     -80,   -80,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -80,
     220,   221,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -65,   220,   221,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -66,     0,   -83,   -83,   -83,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,   -84,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,
     -70,   100,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -72,   -72,   -72,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -77,   -77,   -77,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,
     -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,   -76,   -76,   -76,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -74,   -74,   -74,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,   -73,
     185,   186,     0,   187,     0,   188,   189,   190,     0,   191,
     192,   193,   117,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,   -79,   -79,   -79,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -68,
     -68,   100,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -69,   -69,   100,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -71,   -71,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,   -80,
     -80,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,   183,   174,   -47,   185,   186,     0,   187,     0,   188,
     189,   190,     0,   191,   192,   193,   251,   185,   186,     0,
     187,     0,   188,   189,   190,     0,   191,   192,   193,   263,
      40,    41,     0,    42,     0,    43,    44,    45,     0,    46,
      75,    48,   166,   167,     0,   168,     0,   169,   170,   171,
       0,   172,   173,   174,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,    98,    99,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,    98,    99,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,    98,    99,
     185,   186,     0,   187,     0,   188,   189,   190,     0,   191,
     192,   193
};

static const yytype_int16 yycheck[] =
{
      37,    50,   149,     0,     1,   133,     1,    32,   136,     8,
       7,    48,     0,   134,     7,   136,     4,    40,    41,    42,
      43,     8,    71,   151,    49,    48,    73,    74,     7,    17,
     151,    30,    20,   161,    31,    30,    73,    86,     8,    32,
     161,    78,    30,    30,   137,     0,    83,    84,    31,    12,
      73,    12,    12,    32,    14,    78,    14,    11,   205,    11,
      30,    84,    14,    15,    16,    17,   159,     1,    31,     3,
       4,     5,     6,     7,    32,     9,    10,   102,    32,   104,
      32,    30,   131,   132,    11,    33,    20,    21,    11,    23,
     137,    25,    26,    27,    33,    29,    30,    31,    11,    33,
      34,    14,    15,    16,    17,    32,   143,     7,    30,    32,
      11,   160,   159,    14,    15,    16,    17,    18,    19,    32,
     143,    11,   159,    48,    14,    15,    16,    17,    18,    19,
     155,    32,    22,    23,    24,    12,   159,   174,    12,    33,
      14,    31,    32,   166,   167,   168,   169,    11,    73,    33,
      14,   174,    11,    78,    31,    14,   193,    11,   205,    84,
      14,    15,   185,   186,   187,   188,   287,   288,    32,   290,
     193,    14,   293,    32,    31,   100,   213,    33,    32,   202,
     203,    11,    11,    11,    14,    15,   223,    33,    12,    32,
     213,   228,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    12,    32,    32,    32,   228,    48,   230,   231,   232,
     233,   234,   235,   236,   237,   240,    11,    14,   143,    14,
      15,    16,    17,    18,    19,   274,    11,    11,   275,   276,
      11,    73,    11,    31,   159,    32,    78,    32,   275,   213,
      31,    14,    84,     0,     1,     1,    12,    32,    32,   174,
       7,    32,   275,    32,   228,    31,    98,    99,    11,    32,
      12,    14,    15,    16,    20,    21,    33,    23,   193,    25,
      26,    27,    28,    29,    30,    31,    12,   202,   203,    32,
      30,    11,    14,    15,    14,    15,    16,    33,   213,    48,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    32,
      32,   143,    32,   228,    14,   230,   231,   232,   233,   234,
     235,   236,   237,    32,    73,    14,    15,   159,    12,    78,
      14,    14,    32,    11,    32,    84,    14,    15,    16,    17,
      18,    19,   174,    32,    22,    23,    24,    96,    97,    32,
      14,    15,    16,    17,    32,    12,    32,    14,    15,    16,
     275,   193,    14,    15,    16,    17,    18,    19,    32,    12,
     202,   203,    14,    15,    16,    17,    18,    19,    32,    32,
      32,   213,    48,   215,   216,   217,   218,   219,   220,   221,
      32,   223,    32,    32,   143,    32,   228,    12,   230,   231,
     232,   233,   234,   235,   236,    12,    12,    73,    14,    15,
     159,     1,    78,     3,    32,     5,     6,    12,    84,     9,
      10,     0,     1,    12,    12,   174,    12,    48,     7,    95,
      20,    21,    32,    23,    12,    25,    26,    27,    31,    29,
      30,    31,    12,   275,   193,    32,    31,    14,    15,    16,
      48,    12,    73,   202,   203,    12,    32,    78,    14,    15,
      16,    17,    12,    84,   213,    32,   215,   216,   217,   218,
     219,    92,    32,    32,   223,    73,    32,   143,     4,   228,
      78,   230,   231,   232,   233,   234,    84,    14,    15,    16,
       1,    20,     3,   159,     5,     6,    94,   205,     9,    10,
       0,     1,   204,    48,   205,    32,   285,     7,   174,    20,
      21,   276,    23,   205,    25,    26,    27,   205,    29,    30,
      31,    -1,   143,     0,     1,    -1,   275,   193,    73,    12,
       7,    14,    15,    78,     0,     1,   202,   203,   159,    84,
      12,     7,    14,    15,    16,   143,    -1,   213,    93,   215,
     216,   217,    -1,   174,    -1,    -1,    -1,   223,    -1,    -1,
      12,   159,   228,    -1,   230,   231,   232,    -1,    20,    21,
      -1,    23,   193,    25,    26,    27,   174,    29,    30,    31,
      -1,   202,   203,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,   213,    22,    23,   193,    -1,    -1,   143,     0,
       1,    -1,   223,    32,   202,   203,     7,   228,    -1,   275,
      -1,    -1,     0,     1,   159,   213,     1,   215,   216,     7,
      -1,     0,     1,    -1,    -1,   223,    -1,    12,     7,   174,
     228,    -1,   230,   231,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,   193,     0,
       1,    -1,    -1,    -1,   275,    -1,     7,   202,   203,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,   213,    12,
     215,    14,    15,    16,    17,    18,    19,   275,   223,    22,
      23,    24,    -1,   228,     1,   230,     3,     4,     5,     6,
       7,    -1,     9,    10,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,     0,     1,
     275,    -1,    -1,    -1,    -1,     7,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    26,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    20,    21,    -1,
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
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,     1,
      33,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
       1,    33,     3,    -1,     5,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,     1,    33,     3,    -1,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,     1,    33,     3,    -1,     5,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    12,
      29,    30,    31,     1,    33,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,     1,    29,    30,    31,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    11,    -1,    -1,    14,
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
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    32,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    32,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    12,    13,    14,    15,    16,    17,    18,    19,
      32,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    31,    -1,    22,    23,    24,    14,    15,    16,    17,
      18,    19,    31,    32,    22,    23,    24,    14,    15,    16,
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
      24,    14,    15,    16,    17,    18,    19,    -1,    32,    22,
      23,    24,    14,    15,    16,    17,    18,    19,    -1,    32,
      22,    23,    -1,    14,    15,    16,    17,    18,    19,    -1,
      32,    22,    23,    12,    -1,    14,    15,    16,    17,    18,
      19,    32,    -1,    22,    23,    24,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    32,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    36,    37,    38,    39,    46,    61,    31,
       8,    30,     0,    38,    31,    12,    32,    42,    30,    32,
      40,    45,     7,    47,    61,    44,    47,    33,     8,    30,
      11,    32,    33,    32,     1,     3,     5,     6,     9,    10,
      20,    21,    23,    25,    26,    27,    29,    30,    31,    33,
      48,    49,    50,    51,    56,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    73,    30,    61,
      43,    48,    41,    31,    31,    30,    63,    31,    31,    71,
      71,    71,    71,    13,    31,    63,    48,    34,    49,    12,
      12,    12,    14,    15,    16,    17,    18,    19,    22,    23,
      24,    12,    33,    34,    33,     1,    62,     1,    58,    59,
      62,     1,    30,     1,    28,    63,    63,    32,    63,    72,
      32,    34,    64,    65,    66,    67,    68,    68,    69,    69,
      70,    48,    48,    32,    32,    57,    32,    12,    32,    32,
      32,    32,    32,    11,    32,    34,    34,    33,    53,    55,
      53,    32,    53,    59,    63,    54,    50,     4,    53,    12,
      48,    52,    59,    34,    53,     7,    20,    21,    23,    25,
      26,    27,    29,    30,    31,    64,    65,    66,    67,    68,
      69,    70,    71,    30,    63,    20,    21,    23,    25,    26,
      27,    29,    30,    31,    64,    65,    66,    67,    68,    69,
      70,    71,    14,    14,    33,    55,    62,     8,    30,    71,
      71,    71,    71,    31,    63,    15,    16,    17,    18,    19,
      22,    23,    24,    13,    71,    71,    71,    71,    31,    63,
      15,    16,    17,    18,    19,    22,    23,    24,    64,    64,
      54,     1,     3,     5,    50,    51,    56,    60,    62,    73,
      30,    32,    72,    32,    65,    66,    67,    68,    68,    69,
      69,    70,    63,    32,    72,    32,    65,    66,    67,    68,
      68,    69,    69,    70,    48,    31,    31,    12,    12,    12,
      32,    32,    34,     1,    62,     1,    58,    32,    32,    57,
      32,    53,    53,    32,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    40,
      41,    39,    42,    43,    39,    44,    39,    45,    39,    46,
      46,    47,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    52,    51,    51,    54,    53,
      55,    53,    56,    57,    56,    58,    59,    59,    60,    60,
      60,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     0,
       0,     9,     0,     0,     9,     0,     7,     0,     7,     2,
       3,     3,     1,     2,     1,     1,     2,     3,     1,     1,
       2,     2,     2,     1,     5,     0,     8,     5,     0,     4,
       0,     2,     5,     0,     6,     5,     1,     0,     4,     4,
       4,     4,     4,     2,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     2,     2,     2,     2,     1,     1,     3,
       4,     3,     1,     1,     1,     3,     1,     2
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
#line 99 "./src/sintaxe.y"
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
                                                        if(num_erros_sintaticos != 0 || num_erros_lexicos != 0 || num_erros_semanticos != 0)
                                                            remove(nome_arq);
                                                        
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
#line 2193 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 128 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2199 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 129 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2206 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 133 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2212 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 134 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2218 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 135 "./src/sintaxe.y"
                                                     {}
#line 2224 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 139 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0;}
#line 2230 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 140 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL; ger_codigo_var = 0;}
#line 2236 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 141 "./src/sintaxe.y"
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
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");
                    }
#line 2257 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 158 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func);}
#line 2263 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 159 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2269 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 159 "./src/sintaxe.y"
                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2275 "./src/sintaxe.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 161 "./src/sintaxe.y"
                                          {strcpy(tipo_func_return, tipo_func); ger_codigo_var = 0;}
#line 2281 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: funcDecl ABRE_P FECHA_P $@5 ABRE_C moreStmt FECHA_C  */
#line 162 "./src/sintaxe.y"
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
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");}
#line 2301 "./src/sintaxe.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 178 "./src/sintaxe.y"
                                       {strcpy(tipo_func_return, tipo_func);}
#line 2307 "./src/sintaxe.tab.c"
    break;

  case 18: /* function: error ABRE_P FECHA_P $@6 ABRE_C moreStmt FECHA_C  */
#line 178 "./src/sintaxe.y"
                                                                                                            {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2313 "./src/sintaxe.tab.c"
    break;

  case 19: /* funcDecl: TIPO ID  */
#line 181 "./src/sintaxe.y"
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
#line 2331 "./src/sintaxe.tab.c"
    break;

  case 20: /* funcDecl: TIPO LIST ID  */
#line 195 "./src/sintaxe.y"
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
#line 2347 "./src/sintaxe.tab.c"
    break;

  case 21: /* parameters: parameters VIRG varDecl  */
#line 208 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2353 "./src/sintaxe.tab.c"
    break;

  case 22: /* parameters: varDecl  */
#line 209 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2359 "./src/sintaxe.tab.c"
    break;

  case 23: /* moreStmt: moreStmt block  */
#line 212 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2365 "./src/sintaxe.tab.c"
    break;

  case 24: /* moreStmt: block  */
#line 213 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2372 "./src/sintaxe.tab.c"
    break;

  case 25: /* block: stmt  */
#line 217 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2378 "./src/sintaxe.tab.c"
    break;

  case 26: /* block: varDecl PV  */
#line 218 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2384 "./src/sintaxe.tab.c"
    break;

  case 27: /* block: ABRE_C moreStmt FECHA_C  */
#line 219 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2390 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: conditional  */
#line 222 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2396 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: iteration  */
#line 223 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2402 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: attribuition PV  */
#line 224 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2408 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: io PV  */
#line 225 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2414 "./src/sintaxe.tab.c"
    break;

  case 32: /* stmt: ret PV  */
#line 226 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2420 "./src/sintaxe.tab.c"
    break;

  case 33: /* stmt: error  */
#line 227 "./src/sintaxe.y"
                                                        {}
#line 2426 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot  */
#line 231 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            char aux[50];
                                                                                            if(topo != NULL) {
                                                                                                strcpy(aux, topo->label);
                                                                                                strcat(aux, ":\n");
                                                                                                fputs(aux, escrita);
                                                                                                popLabel(&topo);
                                                                                            }}
#line 2440 "./src/sintaxe.tab.c"
    break;

  case 35: /* $@7: %empty  */
#line 241 "./src/sintaxe.y"
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
#line 2460 "./src/sintaxe.tab.c"
    break;

  case 36: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot ELSE $@7 bracesOrNot  */
#line 257 "./src/sintaxe.y"
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
#line 2476 "./src/sintaxe.tab.c"
    break;

  case 37: /* conditional: IF ABRE_P error FECHA_P bracesOrNot  */
#line 268 "./src/sintaxe.y"
                                                                                            {}
#line 2482 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@8: %empty  */
#line 271 "./src/sintaxe.y"
                       {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo);}
#line 2488 "./src/sintaxe.tab.c"
    break;

  case 39: /* bracesOrNot: ABRE_C $@8 moreStmt FECHA_C  */
#line 271 "./src/sintaxe.y"
                                                                                                                                           {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2494 "./src/sintaxe.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 272 "./src/sintaxe.y"
                  {if(tem_else == 0) mandaLabel(&label_cont, 0, retorno_expressao, escrita, &topo);}
#line 2500 "./src/sintaxe.tab.c"
    break;

  case 41: /* bracesOrNot: $@9 stmt  */
#line 272 "./src/sintaxe.y"
                                                                                                                                           {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2506 "./src/sintaxe.tab.c"
    break;

  case 42: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesOrNot  */
#line 275 "./src/sintaxe.y"
                                                                    {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2512 "./src/sintaxe.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 276 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2518 "./src/sintaxe.tab.c"
    break;

  case 44: /* iteration: FOR ABRE_P error $@10 FECHA_P bracesOrNot  */
#line 276 "./src/sintaxe.y"
                                                                    {}
#line 2524 "./src/sintaxe.tab.c"
    break;

  case 45: /* iteArgs: expIte PV expIte PV expIte  */
#line 279 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2530 "./src/sintaxe.tab.c"
    break;

  case 46: /* expIte: attribuition  */
#line 282 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2536 "./src/sintaxe.tab.c"
    break;

  case 47: /* expIte: %empty  */
#line 283 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2542 "./src/sintaxe.tab.c"
    break;

  case 48: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 289 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if(simb != NULL)
                                                            strcpy((yyval.no)->no1->tipo, (yyval.no)->no1->simbolo->tipo);
                                                        }
#line 2553 "./src/sintaxe.tab.c"
    break;

  case 49: /* io: SAIDA ABRE_P expLogic FECHA_P  */
#line 296 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2559 "./src/sintaxe.tab.c"
    break;

  case 50: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 298 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna, "");
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2569 "./src/sintaxe.tab.c"
    break;

  case 51: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 304 "./src/sintaxe.y"
                                                        {}
#line 2575 "./src/sintaxe.tab.c"
    break;

  case 52: /* io: SAIDA ABRE_P error FECHA_P  */
#line 305 "./src/sintaxe.y"
                                                        {}
#line 2581 "./src/sintaxe.tab.c"
    break;

  case 53: /* varDecl: TIPO ID  */
#line 309 "./src/sintaxe.y"
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
                                                            pushArgs(&args, (yyvsp[-1].tok).lexema);
                                                        }
                                                        
                                                        ger_codigo_var++;
                                                        }
#line 2607 "./src/sintaxe.tab.c"
    break;

  case 54: /* varDecl: TIPO LIST ID  */
#line 331 "./src/sintaxe.y"
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
                                                            pushArgs(&args, (yyvsp[-2].tok).lexema);
                                                        }

                                                        ger_codigo_var++;
                                                        }
#line 2631 "./src/sintaxe.tab.c"
    break;

  case 55: /* attribuition: ID ATRIB expLogic  */
#line 352 "./src/sintaxe.y"
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
                                                                geraCasting(NULL, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no));
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
                                                                geraCasting(NULL, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no));
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
#line 2693 "./src/sintaxe.tab.c"
    break;

  case 56: /* attribuition: expLogic  */
#line 409 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);
                                                        strcpy(retorno_expressao, (yyval.no)->valor_temp);}
#line 2700 "./src/sintaxe.tab.c"
    break;

  case 57: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 413 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2708 "./src/sintaxe.tab.c"
    break;

  case 58: /* expLogic: andLogic  */
#line 416 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2714 "./src/sintaxe.tab.c"
    break;

  case 59: /* andLogic: andLogic LOG_OP_E expComp  */
#line 419 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2722 "./src/sintaxe.tab.c"
    break;

  case 60: /* andLogic: expComp  */
#line 422 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2728 "./src/sintaxe.tab.c"
    break;

  case 61: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 425 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2736 "./src/sintaxe.tab.c"
    break;

  case 62: /* expComp: expRel  */
#line 428 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2742 "./src/sintaxe.tab.c"
    break;

  case 63: /* expRel: expRel REL_OP_ALTA expList  */
#line 431 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2750 "./src/sintaxe.tab.c"
    break;

  case 64: /* expRel: expList  */
#line 434 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2756 "./src/sintaxe.tab.c"
    break;

  case 65: /* expList: expList LIST_OP_BIN expArit  */
#line 437 "./src/sintaxe.y"
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
#line 2794 "./src/sintaxe.tab.c"
    break;

  case 66: /* expList: expList LIST_OP_CONSTRUTOR expArit  */
#line 470 "./src/sintaxe.y"
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
#line 2825 "./src/sintaxe.tab.c"
    break;

  case 67: /* expList: expArit  */
#line 496 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2831 "./src/sintaxe.tab.c"
    break;

  case 68: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 499 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2839 "./src/sintaxe.tab.c"
    break;

  case 69: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 502 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2847 "./src/sintaxe.tab.c"
    break;

  case 70: /* expArit: expMul  */
#line 505 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2853 "./src/sintaxe.tab.c"
    break;

  case 71: /* expMul: expMul ARIT_OP_ALTA expUn  */
#line 508 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);
                                                        geraCasting((yyvsp[-2].no)->valor_temp, (yyvsp[0].no)->valor_temp, &ger_codigo_var, escrita, (yyval.no));
                                                        geraOperacoes((yyvsp[-1].tok).lexema, (yyval.no)->no1->valor_temp, (yyval.no)->no2->valor_temp, &ger_codigo_var, escrita, (yyval.no));}
#line 2861 "./src/sintaxe.tab.c"
    break;

  case 72: /* expMul: expUn  */
#line 511 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2867 "./src/sintaxe.tab.c"
    break;

  case 73: /* expUn: LOG_OP_NEG element  */
#line 514 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                            if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                                geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no));
                                                            }       // FAZER O CASO DO ! DE LISTA
                                                        } else {
                                                            // Se nao eh lista
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2884 "./src/sintaxe.tab.c"
    break;

  case 74: /* expUn: ARIT_OP_MENOS element  */
#line 526 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")) {
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                            geraOperacoes((yyvsp[-1].tok).lexema, (yyvsp[0].no)->valor_temp, NULL, &ger_codigo_var, escrita, (yyval.no));
                                                        } else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "NIL")){
                                                            // Se eh lista ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2899 "./src/sintaxe.tab.c"
    break;

  case 75: /* expUn: LIST_OP_UN element  */
#line 536 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
#line 2913 "./src/sintaxe.tab.c"
    break;

  case 76: /* expUn: LIST_OP_HEADER element  */
#line 545 "./src/sintaxe.y"
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
#line 2930 "./src/sintaxe.tab.c"
    break;

  case 77: /* expUn: element  */
#line 557 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2936 "./src/sintaxe.tab.c"
    break;

  case 78: /* element: ID  */
#line 562 "./src/sintaxe.y"
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
#line 2955 "./src/sintaxe.tab.c"
    break;

  case 79: /* element: ABRE_P expLogic FECHA_P  */
#line 577 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2961 "./src/sintaxe.tab.c"
    break;

  case 80: /* element: ID ABRE_P arguments FECHA_P  */
#line 579 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);
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
                                                                                strcpy(aux, "(");
                                                                                if(!strcmp(aux1->tipo, "int"))
                                                                                    strcat(aux, "float_to_int)");
                                                                                else if(!strcmp(aux1->tipo, "float"))
                                                                                    strcat(aux, "int_to_float)");
                                                                                struct No* no = montaNo(aux, auxNo->no, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                                auxNo->no = no;
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
                                                        liberaArgs(args);
                                                        args = NULL;
                                                        num_args_chamada = 0;
                                                        }
#line 3030 "./src/sintaxe.tab.c"
    break;

  case 81: /* element: ID ABRE_P FECHA_P  */
#line 644 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        // Caso a funcao ainda nao tenha sido declarada
                                                        else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 3046 "./src/sintaxe.tab.c"
    break;

  case 82: /* element: CONST_INT  */
#line 656 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy((yyval.no)->valor_temp, (yyvsp[0].tok).lexema);
                                                        }
#line 3056 "./src/sintaxe.tab.c"
    break;

  case 83: /* element: CONST_FLOAT  */
#line 662 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");
                                                        // Copia o valor do lexema para usar na geracao de codigo
                                                        strcpy((yyval.no)->valor_temp, (yyvsp[0].tok).lexema);
                                                        }
#line 3066 "./src/sintaxe.tab.c"
    break;

  case 84: /* element: NIL  */
#line 668 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 3073 "./src/sintaxe.tab.c"
    break;

  case 85: /* arguments: arguments VIRG expLogic  */
#line 672 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 3081 "./src/sintaxe.tab.c"
    break;

  case 86: /* arguments: expLogic  */
#line 676 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 3090 "./src/sintaxe.tab.c"
    break;

  case 87: /* ret: RETURN expLogic  */
#line 682 "./src/sintaxe.y"
                                                        {if(!strcmp((yyvsp[0].no)->tipo, tipo_func_return))
                                                            (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        // Se o tipo do retorno nao for o mesmo da funcao
                                                        else {
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
                                                            } else {
                                                                (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                printf("ERRO SEMANTICO: retorno de tipo errado (%s, %s)\nLinha:%d\nColuna:%d\n\n", tipo_func_return, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                        }
                                                        }
#line 3117 "./src/sintaxe.tab.c"
    break;


#line 3121 "./src/sintaxe.tab.c"

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

#line 706 "./src/sintaxe.y"



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
    escrita = fopen(strcat(nome, ".tac"), "w");
    strcpy(nome_arq, nome);
    fputs(".code\n", escrita);

    if(!fp || !escrita) {
        printf("Arquivo nao existente\n");
    } else {
        yyin = fp;
        yyparse();
    }
    fclose(yyin);
    fclose(escrita);

    yylex_destroy();

    return 0;
}
