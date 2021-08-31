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
#line 13 "./src/sintaxe.y"

#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"
#include "../lib/lista.h"


extern int yylex(void);
extern int yylex_destroy(void);
extern char * yytext;
extern FILE *yyin;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;
int escopo = 0;
struct No * raiz;
struct tabelaSimb* cabeca = NULL;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No* , struct No*);

#line 92 "./src/sintaxe.tab.c"

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
  YYSYMBOL_LIST_OP_UN = 19,                /* LIST_OP_UN  */
  YYSYMBOL_ARIT_OP_MAIS = 20,              /* ARIT_OP_MAIS  */
  YYSYMBOL_ARIT_OP_MENOS = 21,             /* ARIT_OP_MENOS  */
  YYSYMBOL_ARIT_OP_ALTA = 22,              /* ARIT_OP_ALTA  */
  YYSYMBOL_LOG_OP_UN = 23,                 /* LOG_OP_UN  */
  YYSYMBOL_CONST_INT = 24,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 25,               /* CONST_FLOAT  */
  YYSYMBOL_STRING = 26,                    /* STRING  */
  YYSYMBOL_NIL = 27,                       /* NIL  */
  YYSYMBOL_ID = 28,                        /* ID  */
  YYSYMBOL_ABRE_P = 29,                    /* ABRE_P  */
  YYSYMBOL_FECHA_P = 30,                   /* FECHA_P  */
  YYSYMBOL_ABRE_C = 31,                    /* ABRE_C  */
  YYSYMBOL_FECHA_C = 32,                   /* FECHA_C  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_declarations = 35,              /* declarations  */
  YYSYMBOL_declaration = 36,               /* declaration  */
  YYSYMBOL_function = 37,                  /* function  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_parameters = 40,                /* parameters  */
  YYSYMBOL_moreStmt = 41,                  /* moreStmt  */
  YYSYMBOL_stmt = 42,                      /* stmt  */
  YYSYMBOL_multLineStmt = 43,              /* multLineStmt  */
  YYSYMBOL_conditional = 44,               /* conditional  */
  YYSYMBOL_bracesStmt = 45,                /* bracesStmt  */
  YYSYMBOL_iteration = 46,                 /* iteration  */
  YYSYMBOL_expIte = 47,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 48,               /* oneLineStmt  */
  YYSYMBOL_io = 49,                        /* io  */
  YYSYMBOL_varDecl = 50,                   /* varDecl  */
  YYSYMBOL_attribuition = 51,              /* attribuition  */
  YYSYMBOL_expLogic = 52,                  /* expLogic  */
  YYSYMBOL_andLogic = 53,                  /* andLogic  */
  YYSYMBOL_expComp = 54,                   /* expComp  */
  YYSYMBOL_expRel = 55,                    /* expRel  */
  YYSYMBOL_expArit = 56,                   /* expArit  */
  YYSYMBOL_expMul = 57,                    /* expMul  */
  YYSYMBOL_negElement = 58,                /* negElement  */
  YYSYMBOL_expList = 59,                   /* expList  */
  YYSYMBOL_element = 60,                   /* element  */
  YYSYMBOL_arguments = 61,                 /* arguments  */
  YYSYMBOL_ret = 62                        /* ret  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   2328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    94,    97,    99,   102,   103,   104,   107,
     107,   107,   108,   109,   110,   113,   114,   117,   118,   121,
     122,   125,   126,   129,   130,   131,   134,   135,   138,   141,
     142,   145,   146,   147,   148,   149,   152,   153,   154,   155,
     156,   160,   162,   166,   167,   170,   171,   174,   175,   178,
     179,   182,   183,   186,   187,   188,   191,   192,   195,   196,
     197,   200,   201,   202,   205,   206,   207,   208,   209,   210,
     211,   215,   216,   219
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
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
  "LIST_OP_UN", "ARIT_OP_MAIS", "ARIT_OP_MENOS", "ARIT_OP_ALTA",
  "LOG_OP_UN", "CONST_INT", "CONST_FLOAT", "STRING", "NIL", "ID", "ABRE_P",
  "FECHA_P", "ABRE_C", "FECHA_C", "$accept", "program", "declarations",
  "declaration", "function", "$@1", "$@2", "parameters", "moreStmt",
  "stmt", "multLineStmt", "conditional", "bracesStmt", "iteration",
  "expIte", "oneLineStmt", "io", "varDecl", "attribuition", "expLogic",
  "andLogic", "expComp", "expRel", "expArit", "expMul", "negElement",
  "expList", "element", "arguments", "ret", YY_NULLPTR
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
     285,   286,   287
};
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     188,    30,    -4,     5,   192,   355,   414,    78,   463,     3,
     -12,   116,  -183,   489,   493,     6,    33,    57,    58,   121,
      34,    79,  1536,    79,    54,  1536,    86,   876,    64,    89,
    2169,    93,    98,   683,   278,   278,  2044,  2055,  2066,   515,
    2180,   906,   936,   966,   996,  1026,  1056,   111,   143,   145,
      46,   436,   377,   725,  2297,  2198,  2209,  2077,  2088,   148,
      87,  1536,  1086,   130,    55,   605,   198,     0,    25,  1774,
    2099,  2110,  2121,  2213,  1989,   202,   614,  1116,  1146,  1176,
    1206,  2213,  2213,  2213,  2213,  2213,  2213,  2213,   683,  1236,
    1266,   647,   208,   206,   217,   258,   286,   221,   242,   248,
     269,   270,   137,  2132,    91,   123,  2143,   845,   527,   755,
    2307,  2231,  2242,  2253,  2154,   677,  1536,   316,   478,   605,
     292,   312,   319,   326,   330,  2257,  2165,  1296,  1536,  1326,
    1356,   636,   337,   164,   679,  1386,   316,  2001,  1416,  1446,
     300,   316,  1476,    35,    49,   773,   491,   491,   416,  1801,
    1812,  1755,  2180,   266,   249,   260,  1537,  1977,  1922,  1933,
    1823,  1834,   803,   566,   566,   271,   534,  1555,   191,  2180,
      59,    85,    94,     4,   299,   126,   343,  1572,  1589,   666,
    1536,   696,   356,   358,   394,   404,   342,   339,   189,   389,
     406,  1784,  1845,  1856,  1867,  2268,  2013,   399,  2268,  2268,
    2268,  2268,  2268,  2268,  2268,   773,   239,  1606,  1623,  1640,
    2279,  2025,   405,  2279,  2279,  2279,  2279,  2279,  2279,  2279,
     803,  1506,   726,   756,   786,   816,   203,   435,   297,  1878,
     204,  1889,   318,   336,  1565,  1985,  1944,  1955,  1966,  1900,
     187,  1657,   205,  1674,   124,   251,   360,  1744,   552,  1720,
    1732,  1691,   846,  1911,  1708
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,   449,  -183,  -183,  -183,   445,   -22,   -24,
    -183,  -183,   -96,  -183,  -107,  -109,   349,     2,     7,   401,
     440,   409,   388,   244,   209,   184,    27,   -33,  -182,   350
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,    92,    17,    41,    42,
      43,    44,   129,    45,    95,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   105,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    97,     7,    62,    10,    12,     7,   161,   130,   181,
     143,    18,   132,    -9,   230,   -50,    19,    77,   -50,   -50,
     -50,   216,   131,    18,    11,    60,    99,   130,    98,   242,
     140,   161,   130,    16,   -50,   161,    20,    66,    77,    90,
     139,   178,     8,   187,   145,   142,   146,    75,   147,   148,
     149,   100,   150,   151,   152,   114,    93,   189,   -44,     9,
      81,    71,    72,   188,    22,    25,    77,   160,    23,   -16,
     -44,    94,    96,   213,   145,   101,   146,   190,   147,   148,
     149,   104,   150,   151,   152,    61,   143,    24,   -16,   -44,
      14,   160,   178,    64,   127,   160,   -46,    23,   -15,   -46,
     214,   177,   -72,    77,   161,   -48,   135,    15,   -48,   -48,
     215,    77,   192,   161,   161,   -46,    63,   -15,    65,   161,
     183,   -72,    67,    78,   -48,   184,    96,    68,   -41,   207,
     178,   178,   133,   -42,   125,   -45,   161,   -55,   -45,   214,
     -55,   -55,   -55,   -55,   186,   -41,   -55,   -55,   219,   -43,
     -42,    81,   177,   126,   -45,    79,   -55,    80,   221,   197,
      89,   -10,   161,   178,   160,   161,   161,   161,   161,   161,
     161,   161,   239,   193,   194,   -71,   212,   178,   178,   160,
     178,   178,   178,   178,   178,   178,   178,   251,    -3,     1,
     208,   209,    -2,     1,   -71,     2,   160,    77,   -43,     2,
     -41,   213,   -64,   104,   210,   -64,   -64,   -64,   -64,   -64,
     -73,   -64,   -64,   -64,   -42,   125,   125,   -43,   104,   -41,
     211,   -64,   160,   177,   159,   160,   160,   160,   160,   160,
     160,   160,   106,   -42,   253,   254,   117,   177,   177,   116,
     177,   177,   177,   177,   177,   177,   177,   118,   159,   158,
     -64,   120,   159,   -64,   -64,   -64,   -64,   -64,   176,   -64,
     -64,   -64,   -47,   -46,   199,   -47,   -47,   215,   211,   -64,
     119,   113,   121,   158,   -48,   -48,   200,   158,   122,   -46,
     198,   -47,   -68,   175,   157,   -68,   -68,   -68,   -68,   -68,
     -48,   -68,   -68,   -68,   111,   112,   -44,    33,   -29,   123,
     124,   -68,    36,    37,   -39,    38,    69,    40,   157,   176,
     -52,   198,   157,   -52,   -52,   -52,   -52,    27,   174,   217,
     218,   159,    30,   144,   -36,    31,    32,   -43,   110,   -52,
     141,   -40,   -45,   199,   175,    33,   159,    34,   -38,    35,
      36,    37,   -37,    38,    39,    40,   158,   128,   -45,   137,
     -47,   -47,   200,   159,   -57,    -5,    -5,   -57,   -57,   -57,
     -57,   158,    -5,   -57,   -57,   -57,   -47,   226,   222,   174,
     223,   -49,   -29,   -57,   -49,   -49,   -49,   216,   158,   159,
     176,   157,   159,   159,   159,   159,   159,   159,   238,   -48,
     -49,   -48,   -48,    83,   176,   176,   157,   176,   176,   176,
     176,   176,   176,   250,   158,   175,   224,   158,   158,   158,
     158,   236,   237,   157,    -6,    -6,   225,   227,   -41,   175,
     175,    -6,   175,   175,   175,   175,   248,   249,   156,   231,
     -68,   -68,   -68,   -68,   -68,   243,   -68,   -68,   -68,   157,
     174,   153,   157,   157,   157,   235,   -68,   -42,   -46,   155,
     -46,    82,   156,    13,   174,   174,   156,   174,   174,   174,
     247,     0,   173,    -8,    -8,   153,    26,   182,   185,   153,
      -8,   109,     0,   155,   102,   170,     0,   155,     0,   179,
     154,     0,     0,   172,    30,   144,     0,    31,    32,    -4,
      -4,   108,     0,    -7,    -7,     0,    -4,    33,     0,    34,
      -7,    35,    36,    37,   154,    38,    39,    40,   154,   180,
     145,     0,     0,   173,   171,   148,   149,     0,   150,   191,
     152,   107,     0,     0,     0,   156,   170,   -64,    73,   -64,
     -64,   -64,   -64,   -64,   172,   -64,   -64,   -64,   153,   -47,
     156,   -47,   -47,    83,    74,   -69,   155,     0,   -69,   -69,
     -69,   -69,   -69,   153,   -69,   -69,   -69,   156,     0,     0,
       0,   155,     0,   -53,   -69,   171,   -53,   -53,   -53,   -53,
     153,     0,   -53,   -53,   219,     0,     0,   154,   155,     0,
       0,     0,   -53,   156,   173,   162,   156,   156,   234,     0,
     165,   166,   154,   167,   206,   169,   228,   170,   173,   173,
       0,   173,   173,   246,   155,   172,     0,   155,   233,   154,
       0,   240,   170,     0,   -14,   -14,     0,   -30,     0,   172,
     172,   -14,   172,   245,    33,     0,    34,     0,    35,    36,
      37,     0,    38,    39,    40,   154,   171,   -23,   232,   -23,
     136,   -23,   -23,   -23,     0,   -23,   -23,   -13,   -13,     0,
     171,   171,     0,   244,   -13,   -23,     0,   -23,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -35,   -23,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -12,   -12,   -11,
     -11,     0,     0,     0,   -12,   -35,   -11,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,     0,   -27,   -35,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,    36,    37,     0,
      38,    69,    40,     0,     0,   -27,     0,   -27,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,     0,   -33,   -27,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -50,     0,   -50,
     -50,   -50,    84,     0,     0,   -33,     0,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,     0,   -31,   -33,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -49,     0,   -49,
     -49,   -49,    84,     0,     0,   -31,     0,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,     0,   -32,   -31,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   148,   149,     0,
     150,   191,   152,     0,     0,   -32,     0,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,     0,   -34,   -32,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   165,   166,     0,
     167,   206,   169,     0,     0,   -34,     0,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,     0,   -26,   -34,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -45,     0,   -45,
      82,     0,     0,     0,     0,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -35,   -26,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,     0,    27,   -35,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,   -18,    76,   -18,
       0,   -18,   -18,   -18,     0,   -18,   -18,     0,     0,     0,
       0,     0,     0,     0,     0,   -18,     0,   -18,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,     0,   -20,   -18,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,     0,
       0,     0,     0,     0,     0,   -20,     0,   -20,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -20,     0,   -21,   -20,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,     0,
       0,     0,     0,     0,     0,   -21,     0,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -21,     0,   -22,   -21,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,     0,   -22,     0,   -22,
     -22,   -22,     0,   -22,   -22,   -22,     0,   -19,   -22,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,     0,     0,     0,
       0,     0,     0,     0,     0,   -19,     0,   -19,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,     0,    27,   -19,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,   -17,    91,   -17,
       0,   -17,   -17,   -17,     0,   -17,   -17,     0,     0,     0,
       0,     0,     0,     0,     0,   -17,     0,   -17,     0,   -17,
     -17,   -17,     0,   -17,   -17,   -17,     0,   -33,   -17,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,     0,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,     0,   -31,   -33,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,     0,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,     0,   -32,   -31,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,     0,   -34,   -32,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,     0,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,     0,    27,   -34,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,    27,   115,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,   -25,   134,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,     0,   -27,   -25,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,     0,   -27,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,     0,    27,   -27,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,   -26,   138,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -24,   -26,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,     0,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -24,     0,   -28,   -24,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,   -28,     0,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,     0,    27,   -28,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,     0,    27,   252,    28,
       0,    29,    30,   144,     0,    31,    32,     0,     0,     0,
       0,   -50,   -50,   -50,   201,    33,     0,    34,     0,    35,
      36,    37,     0,    38,    39,    40,   -70,   -50,     0,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -49,
     -49,   -49,   201,   -60,     0,   -70,   -60,   -60,   -60,   -60,
     220,     0,   -60,   -60,   -60,   -49,     0,     0,     0,     0,
     -63,     0,   -60,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -63,   -63,     0,     0,     0,     0,     0,   -61,     0,   -63,
     -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,     0,
       0,     0,     0,     0,   -59,     0,   -61,   -59,   -59,   -59,
     -59,   220,     0,   -59,   -59,   -59,     0,     0,     0,     0,
       0,   -58,     0,   -59,   -58,   -58,   -58,   -58,   220,     0,
     -58,   -58,   -58,     0,     0,     0,     0,     0,   -67,     0,
     -58,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
       0,     0,     0,     0,     0,   -65,     0,   -67,   -65,   -65,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,     0,     0,
       0,     0,   -62,     0,   -65,   -62,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -62,     0,     0,     0,     0,     0,   -66,
       0,   -62,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -54,     0,     0,   -54,   -54,   -54,   -54,   -66,     0,
     -54,   -54,   219,   -56,     0,     0,   -56,   -56,   -56,   -56,
     -54,     0,   -56,   -56,   -56,   -51,     0,     0,   -51,   -51,
     -51,   -51,   -56,     0,   217,   218,     0,     0,   195,   -64,
     -64,   -64,   -64,   -64,   -51,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   196,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,    74,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,   196,   -64,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -69,   -70,   -70,   -70,     0,     0,   -60,   -60,   -60,
     -60,   205,   -70,   -60,   -60,   -60,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -60,   -63,   -63,   -63,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -63,   -61,   -61,   -61,     0,     0,
     -59,   -59,   -59,   -59,   205,   -61,   -59,   -59,   -59,     0,
       0,   -58,   -58,   -58,   -58,   205,   -59,   -58,   -58,   -58,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -58,   -67,   -67,
     -67,     0,     0,   -65,   -65,   -65,   -65,   -65,   -67,   -65,
     -65,   -65,     0,     0,   -62,   -62,   -62,   -62,   -62,   -65,
     -62,   -62,   -62,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -62,   -66,   -66,   -66,     0,     0,   -55,   -55,   -55,   -55,
       0,   -66,   -55,   -55,   204,     0,     0,   -57,   -57,   -57,
     -57,     0,   -55,   -57,   -57,   -57,     0,     0,   -53,   -53,
     -53,   -53,     0,   -57,   -53,   -53,   204,     0,     0,   -54,
     -54,   -54,   -54,     0,   -53,   -54,   -54,   204,     0,     0,
     -56,   -56,   -56,   -56,     0,   -54,   -56,   -56,   -56,     0,
       0,   -52,   -52,   -52,   -52,     0,   -56,   202,   203,   -51,
     -51,   -51,   -51,     0,     0,   202,   203,   -52,   162,     0,
     163,     0,   164,   165,   166,   -51,   167,   168,   169,   103,
     145,     0,   146,     0,   147,   148,   149,     0,   150,   151,
     152,   -30,   162,     0,   163,     0,   164,   165,   166,     0,
     167,   168,   169,   229,   162,     0,   163,     0,   164,   165,
     166,     0,   167,   168,   169,   241,   -68,     0,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -69,     0,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -70,     0,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -60,
       0,   -60,   -60,   -60,   -60,    88,     0,   -60,   -60,   -60,
     -63,     0,   -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -61,     0,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,   -59,     0,   -59,   -59,   -59,   -59,    88,     0,
     -59,   -59,   -59,   -58,     0,   -58,   -58,   -58,   -58,    88,
       0,   -58,   -58,   -58,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -65,     0,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -62,     0,   -62,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -62,   -66,     0,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,    33,     0,
      34,     0,    35,    36,    37,     0,    38,    39,    40,   145,
       0,   146,     0,   147,   148,   149,     0,   150,   151,   152,
     -55,     0,   -55,   -55,   -55,   -55,     0,     0,   -55,   -55,
      87,   -57,     0,   -57,   -57,   -57,   -57,     0,     0,   -57,
     -57,   -57,    33,     0,    34,     0,    35,    36,    37,     0,
      38,    69,    40,   -53,     0,   -53,   -53,   -53,   -53,     0,
       0,   -53,   -53,    87,   -54,     0,   -54,   -54,   -54,   -54,
       0,     0,   -54,   -54,    87,   -56,     0,   -56,   -56,   -56,
     -56,     0,     0,   -56,   -56,   -56,   162,     0,   163,     0,
     164,   165,   166,     0,   167,   168,   169,   145,     0,   146,
       0,   147,   148,   149,     0,   150,   191,   152,   162,     0,
     163,     0,   164,   165,   166,     0,   167,   206,   169,   -52,
       0,   -52,   -52,   -52,   -52,     0,     0,    85,    86,   -51,
       0,   -51,   -51,   -51,   -51,     0,     0,    85,    86
};

static const yytype_int16 yycheck[] =
{
      33,     1,     0,    25,     8,     0,     4,    40,   117,   118,
       7,     9,   119,     7,   196,    11,    28,    41,    14,    15,
      16,    17,   118,    21,    28,    23,     1,   136,    28,   211,
     137,    64,   141,    30,    30,    68,    30,    30,    62,    61,
     136,    74,    12,     8,    19,   141,    21,    40,    23,    24,
      25,    26,    27,    28,    29,    88,     1,     8,    12,    29,
      14,    34,    35,    28,    31,    31,    90,    40,    11,    11,
      11,    64,    65,    14,    19,    68,    21,    28,    23,    24,
      25,    74,    27,    28,    29,    31,     7,    30,    30,    30,
      12,    64,   125,    29,   116,    68,    11,    11,    11,    14,
      15,    74,    11,   127,   137,    11,   128,    29,    14,    15,
      16,   135,   145,   146,   147,    30,    30,    30,    29,   152,
     118,    30,    29,    12,    30,   118,   119,    29,    12,   162,
     163,   164,   125,    12,    11,    11,   169,    11,    14,    15,
      14,    15,    16,    17,   137,    29,    20,    21,    22,    12,
      29,    14,   125,    30,    30,    12,    30,    12,   180,   152,
      12,    31,   195,   196,   137,   198,   199,   200,   201,   202,
     203,   204,   205,   146,   147,    11,   169,   210,   211,   152,
     213,   214,   215,   216,   217,   218,   219,   220,     0,     1,
     163,   164,     0,     1,    30,     7,   169,   221,    11,     7,
      11,    14,    11,   196,    13,    14,    15,    16,    17,    18,
      12,    20,    21,    22,    11,    11,    11,    30,   211,    30,
      29,    30,   195,   196,    40,   198,   199,   200,   201,   202,
     203,   204,    30,    30,    30,    30,    30,   210,   211,    31,
     213,   214,   215,   216,   217,   218,   219,    30,    64,    40,
      11,    30,    68,    14,    15,    16,    17,    18,    74,    20,
      21,    22,    11,    14,    15,    14,    15,    16,    29,    30,
      12,    87,    30,    64,    14,    15,    16,    68,    30,    30,
      14,    30,    11,    74,    40,    14,    15,    16,    17,    18,
      30,    20,    21,    22,    85,    86,    30,    19,    12,    30,
      30,    30,    24,    25,    12,    27,    28,    29,    64,   125,
      11,    14,    68,    14,    15,    16,    17,     1,    74,    20,
      21,   137,     6,     7,    12,     9,    10,    30,    84,    30,
      30,    12,    14,    15,   125,    19,   152,    21,    12,    23,
      24,    25,    12,    27,    28,    29,   137,    31,    30,    12,
      14,    15,    16,   169,    11,     0,     1,    14,    15,    16,
      17,   152,     7,    20,    21,    22,    30,    28,    12,   125,
      12,    11,    30,    30,    14,    15,    16,    17,   169,   195,
     196,   137,   198,   199,   200,   201,   202,   203,   204,    12,
      30,    14,    15,    16,   210,   211,   152,   213,   214,   215,
     216,   217,   218,   219,   195,   196,    12,   198,   199,   200,
     201,   202,   203,   169,     0,     1,    12,    28,    12,   210,
     211,     7,   213,   214,   215,   216,   217,   218,    40,    30,
      14,    15,    16,    17,    18,    30,    20,    21,    22,   195,
     196,    40,   198,   199,   200,   201,    30,    12,    12,    40,
      14,    15,    64,     4,   210,   211,    68,   213,   214,   215,
     216,    -1,    74,     0,     1,    64,    21,   118,   118,    68,
       7,    83,    -1,    64,    73,    74,    -1,    68,    -1,     1,
      40,    -1,    -1,    74,     6,     7,    -1,     9,    10,     0,
       1,    82,    -1,     0,     1,    -1,     7,    19,    -1,    21,
       7,    23,    24,    25,    64,    27,    28,    29,    68,    31,
      19,    -1,    -1,   125,    74,    24,    25,    -1,    27,    28,
      29,    81,    -1,    -1,    -1,   137,   125,    12,    13,    14,
      15,    16,    17,    18,   125,    20,    21,    22,   137,    12,
     152,    14,    15,    16,    29,    11,   137,    -1,    14,    15,
      16,    17,    18,   152,    20,    21,    22,   169,    -1,    -1,
      -1,   152,    -1,    11,    30,   125,    14,    15,    16,    17,
     169,    -1,    20,    21,    22,    -1,    -1,   137,   169,    -1,
      -1,    -1,    30,   195,   196,    19,   198,   199,   200,    -1,
      24,    25,   152,    27,    28,    29,   195,   196,   210,   211,
      -1,   213,   214,   215,   195,   196,    -1,   198,   199,   169,
      -1,   210,   211,    -1,     0,     1,    -1,    12,    -1,   210,
     211,     7,   213,   214,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,   195,   196,     1,   198,     3,
       4,     5,     6,     7,    -1,     9,    10,     0,     1,    -1,
     210,   211,    -1,   213,     7,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,     0,     1,     0,
       1,    -1,    -1,    -1,     7,    19,     7,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    24,    25,    -1,
      27,    28,    29,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    24,    25,    -1,
      27,    28,    29,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    24,    25,    -1,
      27,    28,    29,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,     1,    32,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    11,    30,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    14,
      15,    16,    17,    11,    -1,    30,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    30,    -1,    -1,    -1,    -1,
      11,    -1,    30,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    11,    -1,    30,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    30,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      30,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    30,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    30,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    30,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    11,    -1,    -1,    14,    15,    16,    17,    30,    -1,
      20,    21,    22,    11,    -1,    -1,    14,    15,    16,    17,
      30,    -1,    20,    21,    22,    11,    -1,    -1,    14,    15,
      16,    17,    30,    -1,    20,    21,    -1,    -1,    13,    14,
      15,    16,    17,    18,    30,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    14,    15,
      16,    17,    18,    29,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      18,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    18,    30,    20,    21,    22,    -1,    -1,    14,    15,
      16,    17,    18,    30,    20,    21,    22,    -1,    -1,    14,
      15,    16,    17,    18,    30,    20,    21,    22,    -1,    -1,
      14,    15,    16,    17,    18,    30,    20,    21,    22,    -1,
      -1,    14,    15,    16,    17,    18,    30,    20,    21,    22,
      -1,    -1,    14,    15,    16,    17,    18,    30,    20,    21,
      22,    -1,    -1,    14,    15,    16,    17,    18,    30,    20,
      21,    22,    -1,    -1,    14,    15,    16,    17,    18,    30,
      20,    21,    22,    -1,    -1,    14,    15,    16,    17,    18,
      30,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      -1,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    -1,    30,    20,    21,    22,    -1,    -1,    14,    15,
      16,    17,    -1,    30,    20,    21,    22,    -1,    -1,    14,
      15,    16,    17,    -1,    30,    20,    21,    22,    -1,    -1,
      14,    15,    16,    17,    -1,    30,    20,    21,    22,    -1,
      -1,    14,    15,    16,    17,    -1,    30,    20,    21,    14,
      15,    16,    17,    -1,    -1,    20,    21,    30,    19,    -1,
      21,    -1,    23,    24,    25,    30,    27,    28,    29,    30,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    12,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    12,
      -1,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    12,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    19,
      -1,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    12,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    20,    21,    22,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    20,    21,    22,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    21,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    37,    50,    12,    29,
       8,    28,     0,    36,    12,    29,    30,    40,    50,    28,
      30,    38,    31,    11,    30,    31,    40,     1,     3,     5,
       6,     9,    10,    19,    21,    23,    24,    25,    27,    28,
      29,    41,    42,    43,    44,    46,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    62,
      50,    31,    41,    30,    29,    29,    51,    29,    29,    28,
      60,    59,    59,    13,    29,    51,    32,    42,    12,    12,
      12,    14,    15,    16,    17,    20,    21,    22,    18,    12,
      41,    32,    39,     1,    51,    47,    51,     1,    28,     1,
      26,    51,    52,    30,    51,    61,    30,    53,    54,    55,
      56,    57,    57,    58,    60,    32,    31,    30,    30,    12,
      30,    30,    30,    30,    30,    11,    30,    41,    31,    45,
      48,    45,    47,    51,    32,    41,     4,    12,    32,    45,
      47,    30,    45,     7,     7,    19,    21,    23,    24,    25,
      27,    28,    29,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    19,    21,    23,    24,    25,    27,    28,    29,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     1,
      31,    48,    49,    50,    51,    62,    51,     8,    28,     8,
      28,    28,    60,    59,    59,    13,    29,    51,    14,    15,
      16,    17,    20,    21,    22,    18,    28,    60,    59,    59,
      13,    29,    51,    14,    15,    16,    17,    20,    21,    22,
      18,    41,    12,    12,    12,    12,    28,    28,    52,    30,
      61,    30,    53,    54,    55,    56,    57,    57,    58,    60,
      52,    30,    61,    30,    53,    54,    55,    56,    57,    57,
      58,    60,    32,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    38,
      39,    37,    37,    37,    37,    40,    40,    41,    41,    42,
      42,    43,    43,    44,    44,    44,    45,    45,    46,    47,
      47,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     2,     0,
       0,     9,     7,     6,     6,     3,     1,     2,     1,     1,
       1,     1,     1,     5,     7,     5,     3,     1,     9,     1,
       0,     2,     2,     2,     2,     1,     4,     4,     4,     4,
       4,     2,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       1,     2,     3,     1,     1,     3,     4,     3,     1,     1,
       1,     3,     1,     2
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
#line 81 "./src/sintaxe.y"
                                            {raiz = montaNo("program", (yyvsp[0].no), NULL, NULL, NULL);
                                            if(num_erros_lexicos == 0)
                                                printf("Sem erros lexicos\n");
                                            else
                                                printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                            if(num_erros_sintaticos == 0) {
                                                printf("Sem erros sintaticos\n");
                                                printaArvore(raiz, 0);
                                                printaLista(cabeca);
                                            } else
                                                printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                            desalocar(raiz);
                                            liberaLista(cabeca);}
#line 1725 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 97 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1731 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 99 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1737 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 102 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1743 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 103 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1749 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 104 "./src/sintaxe.y"
                                              {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1755 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 107 "./src/sintaxe.y"
                               {escopo++;}
#line 1761 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 107 "./src/sintaxe.y"
                                                              {escopo--;}
#line 1767 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: varDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 107 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), (yyvsp[-1].no), NULL);}
#line 1773 "./src/sintaxe.tab.c"
    break;

  case 12: /* function: error ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 108 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function",(yyvsp[-4].no), (yyvsp[-1].no), NULL, NULL);}
#line 1779 "./src/sintaxe.tab.c"
    break;

  case 13: /* function: varDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 109 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-5].no), (yyvsp[-1].no), NULL, NULL);}
#line 1785 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 110 "./src/sintaxe.y"
                                                                              {(yyval.no) = montaNo("function", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1791 "./src/sintaxe.tab.c"
    break;

  case 15: /* parameters: parameters VIRG varDecl  */
#line 113 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1797 "./src/sintaxe.tab.c"
    break;

  case 16: /* parameters: varDecl  */
#line 114 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1803 "./src/sintaxe.tab.c"
    break;

  case 17: /* moreStmt: moreStmt stmt  */
#line 117 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1809 "./src/sintaxe.tab.c"
    break;

  case 18: /* moreStmt: stmt  */
#line 118 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1815 "./src/sintaxe.tab.c"
    break;

  case 19: /* stmt: oneLineStmt  */
#line 121 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1821 "./src/sintaxe.tab.c"
    break;

  case 20: /* stmt: multLineStmt  */
#line 122 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1827 "./src/sintaxe.tab.c"
    break;

  case 21: /* multLineStmt: conditional  */
#line 125 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1833 "./src/sintaxe.tab.c"
    break;

  case 22: /* multLineStmt: iteration  */
#line 126 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1839 "./src/sintaxe.tab.c"
    break;

  case 23: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 129 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1845 "./src/sintaxe.tab.c"
    break;

  case 24: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 130 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1851 "./src/sintaxe.tab.c"
    break;

  case 25: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 131 "./src/sintaxe.y"
                                                                     {(yyval.no) = montaNo("oneLineStmt", (yyvsp[0].no), NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1857 "./src/sintaxe.tab.c"
    break;

  case 26: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 134 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1863 "./src/sintaxe.tab.c"
    break;

  case 27: /* bracesStmt: oneLineStmt  */
#line 135 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1869 "./src/sintaxe.tab.c"
    break;

  case 28: /* iteration: FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt  */
#line 138 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("iteration", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1875 "./src/sintaxe.tab.c"
    break;

  case 29: /* expIte: attribuition  */
#line 141 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("expIte", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1881 "./src/sintaxe.tab.c"
    break;

  case 30: /* expIte: %empty  */
#line 142 "./src/sintaxe.y"
                                            {(yyval.no) = NULL;}
#line 1887 "./src/sintaxe.tab.c"
    break;

  case 31: /* oneLineStmt: varDecl PV  */
#line 145 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1893 "./src/sintaxe.tab.c"
    break;

  case 32: /* oneLineStmt: attribuition PV  */
#line 146 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1899 "./src/sintaxe.tab.c"
    break;

  case 33: /* oneLineStmt: io PV  */
#line 147 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1905 "./src/sintaxe.tab.c"
    break;

  case 34: /* oneLineStmt: ret PV  */
#line 148 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1911 "./src/sintaxe.tab.c"
    break;

  case 35: /* oneLineStmt: error  */
#line 149 "./src/sintaxe.y"
                                          {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1917 "./src/sintaxe.tab.c"
    break;

  case 36: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("in", NULL, NULL, NULL, NULL);}
#line 1923 "./src/sintaxe.tab.c"
    break;

  case 37: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 153 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1929 "./src/sintaxe.tab.c"
    break;

  case 38: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 154 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", NULL, NULL, NULL, NULL);}
#line 1935 "./src/sintaxe.tab.c"
    break;

  case 39: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 155 "./src/sintaxe.y"
                                                               {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1941 "./src/sintaxe.tab.c"
    break;

  case 40: /* io: SAIDA ABRE_P error FECHA_P  */
#line 156 "./src/sintaxe.y"
                                                             {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1947 "./src/sintaxe.tab.c"
    break;

  case 41: /* varDecl: TIPO ID  */
#line 160 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);
                                            push(&cabeca, (yyvsp[0].tok).lexema, 0, (yyvsp[-1].tok).lexema, "", escopo, 0);}
#line 1954 "./src/sintaxe.tab.c"
    break;

  case 42: /* varDecl: TIPO LIST ID  */
#line 162 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);
                                            push(&cabeca, (yyvsp[0].tok).lexema, 0, strcat((yyvsp[-2].tok).lexema, (yyvsp[-1].tok).lexema), "", escopo, 0);}
#line 1961 "./src/sintaxe.tab.c"
    break;

  case 43: /* attribuition: ID ATRIB expLogic  */
#line 166 "./src/sintaxe.y"
                                             {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1967 "./src/sintaxe.tab.c"
    break;

  case 44: /* attribuition: expLogic  */
#line 167 "./src/sintaxe.y"
                                             {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1973 "./src/sintaxe.tab.c"
    break;

  case 45: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1979 "./src/sintaxe.tab.c"
    break;

  case 46: /* expLogic: andLogic  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1985 "./src/sintaxe.tab.c"
    break;

  case 47: /* andLogic: andLogic LOG_OP_E expComp  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1991 "./src/sintaxe.tab.c"
    break;

  case 48: /* andLogic: expComp  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1997 "./src/sintaxe.tab.c"
    break;

  case 49: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 178 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2003 "./src/sintaxe.tab.c"
    break;

  case 50: /* expComp: expRel  */
#line 179 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2009 "./src/sintaxe.tab.c"
    break;

  case 51: /* expRel: expRel REL_OP_ALTA expArit  */
#line 182 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2015 "./src/sintaxe.tab.c"
    break;

  case 52: /* expRel: expArit  */
#line 183 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2021 "./src/sintaxe.tab.c"
    break;

  case 53: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2027 "./src/sintaxe.tab.c"
    break;

  case 54: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 187 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2033 "./src/sintaxe.tab.c"
    break;

  case 55: /* expArit: expMul  */
#line 188 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2039 "./src/sintaxe.tab.c"
    break;

  case 56: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 191 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2045 "./src/sintaxe.tab.c"
    break;

  case 57: /* expMul: negElement  */
#line 192 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2051 "./src/sintaxe.tab.c"
    break;

  case 58: /* negElement: LOG_OP_UN expList  */
#line 195 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2057 "./src/sintaxe.tab.c"
    break;

  case 59: /* negElement: ARIT_OP_MENOS expList  */
#line 196 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2063 "./src/sintaxe.tab.c"
    break;

  case 60: /* negElement: expList  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2069 "./src/sintaxe.tab.c"
    break;

  case 61: /* expList: LIST_OP_UN element  */
#line 200 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2075 "./src/sintaxe.tab.c"
    break;

  case 62: /* expList: expList LIST_OP_BIN element  */
#line 201 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2081 "./src/sintaxe.tab.c"
    break;

  case 63: /* expList: element  */
#line 202 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2087 "./src/sintaxe.tab.c"
    break;

  case 64: /* element: ID  */
#line 205 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2093 "./src/sintaxe.tab.c"
    break;

  case 65: /* element: ABRE_P attribuition FECHA_P  */
#line 206 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2099 "./src/sintaxe.tab.c"
    break;

  case 66: /* element: ID ABRE_P arguments FECHA_P  */
#line 207 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2105 "./src/sintaxe.tab.c"
    break;

  case 67: /* element: ID ABRE_P FECHA_P  */
#line 208 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2111 "./src/sintaxe.tab.c"
    break;

  case 68: /* element: CONST_INT  */
#line 209 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2117 "./src/sintaxe.tab.c"
    break;

  case 69: /* element: CONST_FLOAT  */
#line 210 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2123 "./src/sintaxe.tab.c"
    break;

  case 70: /* element: NIL  */
#line 211 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2129 "./src/sintaxe.tab.c"
    break;

  case 71: /* arguments: arguments VIRG attribuition  */
#line 215 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2135 "./src/sintaxe.tab.c"
    break;

  case 72: /* arguments: attribuition  */
#line 216 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2141 "./src/sintaxe.tab.c"
    break;

  case 73: /* ret: RETURN attribuition  */
#line 219 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("ret", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2147 "./src/sintaxe.tab.c"
    break;


#line 2151 "./src/sintaxe.tab.c"

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
      yyerror (YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 222 "./src/sintaxe.y"


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
    printf("ERRO sintático\nLinha: %d\tColuna: %d\n\n", yylval.tok.linha, yylval.tok.coluna);
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
