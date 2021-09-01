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
int var_ja_decl = 0;
int escopo_max = 0;
int escopo_atual = 0;
int esc_aux;
int tmp;
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No* , struct No*);

#line 97 "./src/sintaxe.tab.c"

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
  YYSYMBOL_funcDecl = 40,                  /* funcDecl  */
  YYSYMBOL_parameters = 41,                /* parameters  */
  YYSYMBOL_moreStmt = 42,                  /* moreStmt  */
  YYSYMBOL_stmt = 43,                      /* stmt  */
  YYSYMBOL_multLineStmt = 44,              /* multLineStmt  */
  YYSYMBOL_conditional = 45,               /* conditional  */
  YYSYMBOL_bracesStmt = 46,                /* bracesStmt  */
  YYSYMBOL_iteration = 47,                 /* iteration  */
  YYSYMBOL_expIte = 48,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 49,               /* oneLineStmt  */
  YYSYMBOL_io = 50,                        /* io  */
  YYSYMBOL_varDecl = 51,                   /* varDecl  */
  YYSYMBOL_attribuition = 52,              /* attribuition  */
  YYSYMBOL_expLogic = 53,                  /* expLogic  */
  YYSYMBOL_andLogic = 54,                  /* andLogic  */
  YYSYMBOL_expComp = 55,                   /* expComp  */
  YYSYMBOL_expRel = 56,                    /* expRel  */
  YYSYMBOL_expArit = 57,                   /* expArit  */
  YYSYMBOL_expMul = 58,                    /* expMul  */
  YYSYMBOL_negElement = 59,                /* negElement  */
  YYSYMBOL_expList = 60,                   /* expList  */
  YYSYMBOL_element = 61,                   /* element  */
  YYSYMBOL_arguments = 62,                 /* arguments  */
  YYSYMBOL_ret = 63                        /* ret  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

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
       0,    86,    86,   103,   106,   108,   111,   112,   113,   116,
     116,   116,   117,   118,   119,   122,   126,   132,   133,   136,
     137,   140,   141,   144,   145,   148,   149,   150,   153,   154,
     157,   160,   161,   164,   165,   166,   167,   168,   171,   172,
     173,   174,   175,   179,   183,   189,   190,   193,   194,   197,
     198,   201,   202,   205,   206,   209,   210,   211,   214,   215,
     218,   219,   220,   223,   224,   225,   228,   229,   230,   231,
     232,   233,   234,   238,   239,   242
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
  "declaration", "function", "$@1", "$@2", "funcDecl", "parameters",
  "moreStmt", "stmt", "multLineStmt", "conditional", "bracesStmt",
  "iteration", "expIte", "oneLineStmt", "io", "varDecl", "attribuition",
  "expLogic", "andLogic", "expComp", "expRel", "expArit", "expMul",
  "negElement", "expList", "element", "arguments", "ret", YY_NULLPTR
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

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,    35,    37,    15,   451,   469,   471,   -13,     6,   555,
       4,    -9,    60,  -122,   557,     7,   577,    54,   -10,    57,
      69,    72,    30,    90,    78,    77,  1418,    90,    92,  1418,
     174,   182,   379,    97,   102,  2138,   105,   108,   507,   627,
     627,  2013,  2024,  2035,  1690,  2149,   788,   818,   848,   878,
     908,   938,   139,   178,   191,    -2,   355,   217,   757,  2266,
    2167,  2178,  2046,  2057,   204,   225,  1418,   968,   158,    25,
    1726,   213,     0,   121,  1719,  2068,  2079,  2090,  2182,  1958,
     164,   619,   998,  1028,  1058,  1088,  2182,  2182,  2182,  2182,
    2182,  2182,  2182,   507,  1118,  1148,   739,   168,   212,   215,
     241,   245,   230,   239,   248,   257,   264,   129,  2101,   226,
     260,  2112,   483,   877,   787,  2276,  2200,  2211,  2222,  2123,
     741,  1418,    50,   199,  1726,   294,   312,   318,   319,   320,
    2226,  2134,  1178,  1418,  1208,  1238,   276,   329,   282,   743,
    1268,    50,  1970,  1298,  1328,   281,    50,  1358,    55,   805,
     657,   657,  1759,  1770,  1781,  1700,  2149,    -6,   177,   360,
     495,  1946,  1891,  1902,  1792,  1803,   835,   687,   687,   470,
    1437,  1454,   305,  2149,   187,    94,   322,   224,   433,  1619,
    1631,  1471,  1488,   544,  1418,   608,   344,   352,   356,   366,
     287,   353,   375,  1742,  1814,  1825,  1836,  2237,  1982,   342,
    2237,  2237,  2237,  2237,  2237,  2237,  2237,   805,   576,  1505,
    1522,  1539,  2248,  1994,   361,  2248,  2248,  2248,  2248,  2248,
    2248,  2248,   835,  1388,   638,   668,   698,   728,   380,   124,
    1847,   298,  1858,   336,   450,   565,  1954,  1913,  1924,  1935,
    1869,   277,  1556,   299,  1573,   141,   401,   259,  1679,  1643,
    1655,  1667,  1590,   758,  1880,  1607
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
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
    -122,  -122,  -122,   390,  -122,  -122,  -122,  -122,   374,   -23,
     -37,  -122,  -122,  -121,  -122,   -28,  -119,   278,    13,    -3,
     -40,   410,   388,   326,   304,   223,   142,    46,   -38,   -81,
     286
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    23,    97,     7,    19,    46,
      47,    48,    49,   134,    50,   100,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,   110,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,   102,   136,   135,   185,   157,    67,   165,   200,    82,
     -46,    17,    86,     8,    -9,    13,    15,     8,    16,    21,
     144,    26,   135,    20,   -46,   147,    98,   135,   103,   157,
      82,   165,    71,   157,    18,   165,    20,    22,   107,   174,
      65,   182,    80,    95,   149,    11,   150,     9,   151,   152,
     153,    32,   154,   155,   156,   119,    35,   148,    82,    36,
      37,    29,    24,   191,    10,    12,    99,   101,    27,    38,
     106,    39,   -43,    40,    41,    42,   109,    43,    44,    45,
     -18,   133,    25,   192,   -44,    76,    77,    28,   -43,   -15,
     174,   164,   182,    -3,     1,    82,   137,    17,   132,   -18,
       2,   -16,   157,    82,   165,   -48,    31,   -43,   -48,   216,
     140,   194,   165,   165,   145,   164,   157,   231,   165,   164,
     188,   101,   104,    66,   -48,   181,    69,   138,   209,   182,
     182,    70,   243,   157,    72,   165,   187,    73,   200,   190,
     149,   -45,   150,    86,   151,   152,   153,   105,   154,   155,
     156,    83,   -47,   199,   -45,   -47,   216,   229,   174,   165,
     182,   223,   165,   165,   165,   165,   165,   165,   165,   240,
     214,   -47,   241,   174,   182,   182,   181,   182,   182,   182,
     182,   182,   182,   182,   252,    27,    82,   163,   164,   -10,
      84,   -48,   201,   -44,   111,   109,   195,   196,   -46,   121,
     183,   215,   164,    85,    68,    35,   148,   -48,    36,    37,
     109,   163,   -44,   210,   211,   163,    94,   -46,    38,   164,
      39,   180,    40,    41,    42,   -75,    43,    44,    45,   -50,
     184,   -50,   -50,    88,   118,   -52,   -17,   -74,   -52,   -52,
     -52,   218,   122,   164,   181,   123,   164,   164,   164,   164,
     164,   164,   164,   124,   -52,   -17,   -74,   -31,   181,   181,
     125,   181,   181,   181,   181,   181,   181,   181,   162,   126,
     -51,   130,   180,   -51,   -51,   -51,   218,   -25,   127,   -25,
     141,   -25,   -25,   -25,   163,   -25,   -25,   128,   -45,   -51,
     131,   215,   162,   -73,   129,   -25,   162,   -25,   163,   -25,
     -25,   -25,   179,   -25,   -25,   -25,   -41,   -45,   -25,   130,
     130,   146,   -73,   116,   117,   163,   -66,   -31,   212,   -66,
     -66,   -66,   -66,   -66,   -38,   -66,   -66,   -66,   254,   255,
     -42,   -40,   -39,   -50,   213,   -66,   -50,   -50,   217,   163,
     180,   142,   163,   163,   163,   163,   163,   163,   239,   161,
     -47,   201,   -50,   179,   180,   180,   224,   180,   180,   180,
     180,   180,   180,   251,   225,   162,   -47,   -48,   226,   -48,
      87,   160,   232,   161,   -50,   -50,   202,   161,   227,   162,
     -37,   228,   -37,   178,   -37,   -37,   -37,   -43,   -37,   -37,
     -50,   244,   -44,   115,    14,   160,   162,    30,   -37,   160,
     -37,   186,   -37,   -37,   -37,   177,   -37,   -37,   -37,   189,
       0,   -37,   -49,     0,   114,   -49,   -49,   217,     0,     0,
     162,   179,     0,   162,   162,   162,   162,   237,   238,     0,
       0,   -49,     0,   159,   178,   179,   179,     0,   179,   179,
     179,   179,   249,   250,   -54,     0,   161,   -54,   -54,   -54,
     -54,    -2,     1,   219,   220,   158,   177,   159,     2,     0,
     161,   159,     0,   -54,   -49,   -49,   202,   176,   160,    -5,
      -5,    -6,    -6,     0,     0,   113,    -5,   161,    -6,   158,
     -49,   -70,   160,   158,   -70,   -70,   -70,   -70,   -70,   175,
     -70,   -70,   -70,     0,     0,   -47,   112,   -47,    87,   160,
     -70,   161,   178,     0,   161,   161,   161,   236,     0,   -52,
     -52,   -52,   203,     0,     0,     0,   178,   178,   176,   178,
     178,   178,   248,   160,   177,   -52,   160,   160,   235,     0,
     159,    41,    42,     0,    43,    74,    45,     0,   177,   177,
     175,   177,   177,   247,   159,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   158,   -37,   -37,    -8,    -8,    -4,    -4,     0,
       0,   159,    -8,   -37,    -4,   -37,   158,   -37,   -37,   -37,
       0,   -37,   -37,   -37,     0,     0,   -37,    -7,    -7,   -51,
     -51,   -51,   203,   158,    -7,   159,   176,   -66,   159,   234,
     -66,   -66,   -66,   -66,   -66,   -51,   -66,   -66,   -66,     0,
     176,   176,     0,   176,   246,   213,   -66,   158,   175,   -29,
     233,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -14,
     -14,     0,   175,   175,     0,   245,   -14,   -29,     0,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -35,
     -29,   -35,   -35,   -35,   -35,   -35,    38,   -35,   -35,     0,
       0,    41,    42,     0,    43,    74,    45,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -33,
     -35,   -33,   -33,   -33,   -33,   -33,   149,   -33,   -33,     0,
       0,   152,   153,     0,   154,   193,   156,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -34,
     -33,   -34,   -34,   -34,   -34,   -34,   166,   -34,   -34,     0,
       0,   169,   170,     0,   171,   208,   173,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -36,
     -34,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -13,
     -13,   -12,   -12,   -11,   -11,     0,   -13,   -36,   -12,   -36,
     -11,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -28,
     -36,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -52,
       0,   -52,   -52,   -52,    89,     0,     0,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,    32,
     -28,    33,     0,    34,    35,   148,     0,    36,    37,   -51,
       0,   -51,   -51,   -51,    89,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,   -20,
      81,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,   152,
     153,     0,   154,   193,   156,     0,     0,   -20,     0,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -22,
     -20,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,   169,
     170,     0,   171,   208,   173,     0,     0,   -22,     0,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -23,
     -22,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -49,
       0,   -49,   -49,    88,     0,     0,     0,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -24,
     -23,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,     0,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -21,
     -24,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,     0,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,    32,
     -21,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,   -19,
      96,   -19,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,     0,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,   -35,
     -19,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -33,
     -35,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -34,
     -33,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -36,
     -34,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,     0,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,    32,
     -36,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,    32,
     120,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,   -27,
     139,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -29,
     -27,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,     0,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,    32,
     -29,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,   -28,
     143,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -26,
     -28,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -30,
     -26,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,    32,
     -30,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,     0,    32,
     253,    33,     0,    34,    35,   148,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,   -71,     0,
       0,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
       0,     0,     0,     0,     0,   -72,     0,   -71,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,     0,     0,
       0,     0,   -62,     0,   -72,   -62,   -62,   -62,   -62,   222,
       0,   -62,   -62,   -62,     0,     0,     0,     0,     0,   -65,
       0,   -62,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,     0,     0,     0,     0,     0,   -63,     0,   -65,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,     0,
       0,     0,     0,   -61,     0,   -63,   -61,   -61,   -61,   -61,
     222,     0,   -61,   -61,   -61,     0,     0,     0,     0,     0,
     -60,     0,   -61,   -60,   -60,   -60,   -60,   222,     0,   -60,
     -60,   -60,     0,     0,     0,     0,     0,   -69,     0,   -60,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
       0,     0,     0,     0,   -67,     0,   -69,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -64,     0,   -67,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,     0,     0,     0,     0,   -68,     0,
     -64,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -57,     0,     0,   -57,   -57,   -57,   -57,   -68,     0,   -57,
     -57,   221,   -59,     0,     0,   -59,   -59,   -59,   -59,   -57,
       0,   -59,   -59,   -59,   -55,     0,     0,   -55,   -55,   -55,
     -55,   -59,     0,   -55,   -55,   221,   -56,     0,     0,   -56,
     -56,   -56,   -56,   -55,     0,   -56,   -56,   221,   -58,     0,
       0,   -58,   -58,   -58,   -58,   -56,     0,   -58,   -58,   -58,
     -53,     0,     0,   -53,   -53,   -53,   -53,   -58,     0,   219,
     220,     0,   -66,    78,   -66,   -66,   -66,   -66,   -66,   -53,
     -66,   -66,   -66,   197,   -66,   -66,   -66,   -66,   -66,    79,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   198,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -32,   -66,
     -66,   -66,     0,     0,     0,    38,     0,    39,    79,    40,
      41,    42,     0,    43,    44,    45,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,   198,   -66,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,     0,     0,   -71,   -71,   -71,   -71,   -71,   -70,
     -71,   -71,   -71,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -71,   -72,   -72,   -72,     0,     0,   -62,   -62,   -62,   -62,
     207,   -72,   -62,   -62,   -62,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -62,   -65,   -65,   -65,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -65,   -63,   -63,   -63,     0,     0,   -61,
     -61,   -61,   -61,   207,   -63,   -61,   -61,   -61,     0,     0,
     -60,   -60,   -60,   -60,   207,   -61,   -60,   -60,   -60,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -60,   -69,   -69,   -69,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -69,   -67,   -67,
     -67,     0,     0,   -64,   -64,   -64,   -64,   -64,   -67,   -64,
     -64,   -64,     0,     0,   -68,   -68,   -68,   -68,   -68,   -64,
     -68,   -68,   -68,     0,     0,   -57,   -57,   -57,   -57,     0,
     -68,   -57,   -57,   206,     0,     0,   -59,   -59,   -59,   -59,
       0,   -57,   -59,   -59,   -59,     0,     0,   -55,   -55,   -55,
     -55,     0,   -59,   -55,   -55,   206,     0,     0,   -56,   -56,
     -56,   -56,     0,   -55,   -56,   -56,   206,     0,     0,   -58,
     -58,   -58,   -58,     0,   -56,   -58,   -58,   -58,     0,     0,
     -54,   -54,   -54,   -54,     0,   -58,   204,   205,   -53,   -53,
     -53,   -53,     0,     0,   204,   205,   -54,   166,     0,   167,
       0,   168,   169,   170,   -53,   171,   172,   173,   108,   149,
       0,   150,     0,   151,   152,   153,     0,   154,   155,   156,
     -32,   166,     0,   167,     0,   168,   169,   170,     0,   171,
     172,   173,   230,   166,     0,   167,     0,   168,   169,   170,
       0,   171,   172,   173,   242,   -70,     0,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -71,     0,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -72,     0,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -62,     0,
     -62,   -62,   -62,   -62,    93,     0,   -62,   -62,   -62,   -65,
       0,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -63,     0,   -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -61,     0,   -61,   -61,   -61,   -61,    93,     0,   -61,
     -61,   -61,   -60,     0,   -60,   -60,   -60,   -60,    93,     0,
     -60,   -60,   -60,   -69,     0,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -64,     0,   -64,   -64,   -64,
     -64,   -64,     0,   -64,   -64,   -64,   -68,     0,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,    38,     0,    39,
       0,    40,    41,    42,     0,    43,    44,    45,   149,     0,
     150,     0,   151,   152,   153,     0,   154,   155,   156,   -57,
       0,   -57,   -57,   -57,   -57,     0,     0,   -57,   -57,    92,
     -59,     0,   -59,   -59,   -59,   -59,     0,     0,   -59,   -59,
     -59,    38,     0,    39,     0,    40,    41,    42,     0,    43,
      74,    45,   -55,     0,   -55,   -55,   -55,   -55,     0,     0,
     -55,   -55,    92,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -56,    92,   -58,     0,   -58,   -58,   -58,   -58,
       0,     0,   -58,   -58,   -58,   166,     0,   167,     0,   168,
     169,   170,     0,   171,   172,   173,   149,     0,   150,     0,
     151,   152,   153,     0,   154,   193,   156,   166,     0,   167,
       0,   168,   169,   170,     0,   171,   208,   173,   -54,     0,
     -54,   -54,   -54,   -54,     0,     0,    90,    91,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,    90,    91
};

static const yytype_int16 yycheck[] =
{
      38,     1,   123,   122,   123,    45,    29,    45,    14,    46,
      12,     7,    14,     0,     7,     0,    29,     4,    12,    28,
     141,    31,   141,    10,    30,   146,     1,   146,    28,    69,
      67,    69,    35,    73,    30,    73,    23,    30,    78,    79,
      27,    79,    45,    66,    19,     8,    21,    12,    23,    24,
      25,     1,    27,    28,    29,    93,     6,     7,    95,     9,
      10,    31,     8,     8,    29,    28,    69,    70,    11,    19,
      73,    21,    12,    23,    24,    25,    79,    27,    28,    29,
      11,    31,    28,    28,    12,    39,    40,    30,    11,    29,
     130,    45,   130,     0,     1,   132,   124,     7,   121,    30,
       7,    29,   142,   140,   142,    11,    28,    30,    14,    15,
     133,   149,   150,   151,   142,    69,   156,   198,   156,    73,
     123,   124,     1,    31,    30,    79,    29,   130,   166,   167,
     168,    29,   213,   173,    29,   173,   123,    29,    14,   142,
      19,    12,    21,    14,    23,    24,    25,    26,    27,    28,
      29,    12,    11,   156,    30,    14,    15,   197,   198,   197,
     198,   184,   200,   201,   202,   203,   204,   205,   206,   207,
     173,    30,   212,   213,   212,   213,   130,   215,   216,   217,
     218,   219,   220,   221,   222,    11,   223,    45,   142,    31,
      12,    14,    15,    11,    30,   198,   150,   151,    11,    31,
       1,    14,   156,    12,    30,     6,     7,    30,     9,    10,
     213,    69,    30,   167,   168,    73,    12,    30,    19,   173,
      21,    79,    23,    24,    25,    12,    27,    28,    29,    12,
      31,    14,    15,    16,    92,    11,    11,    11,    14,    15,
      16,    17,    30,   197,   198,    30,   200,   201,   202,   203,
     204,   205,   206,    12,    30,    30,    30,    12,   212,   213,
      30,   215,   216,   217,   218,   219,   220,   221,    45,    30,
      11,    11,   130,    14,    15,    16,    17,     1,    30,     3,
       4,     5,     6,     7,   142,     9,    10,    30,    11,    30,
      30,    14,    69,    11,    30,    19,    73,    21,   156,    23,
      24,    25,    79,    27,    28,    29,    12,    30,    32,    11,
      11,    30,    30,    90,    91,   173,    11,    30,    13,    14,
      15,    16,    17,    18,    12,    20,    21,    22,    30,    30,
      12,    12,    12,    11,    29,    30,    14,    15,    16,   197,
     198,    12,   200,   201,   202,   203,   204,   205,   206,    45,
      14,    15,    30,   130,   212,   213,    12,   215,   216,   217,
     218,   219,   220,   221,    12,   142,    30,    12,    12,    14,
      15,    45,    30,    69,    14,    15,    16,    73,    12,   156,
       1,    28,     3,    79,     5,     6,     7,    12,     9,    10,
      30,    30,    12,    89,     4,    69,   173,    23,    19,    73,
      21,   123,    23,    24,    25,    79,    27,    28,    29,   123,
      -1,    32,    11,    -1,    88,    14,    15,    16,    -1,    -1,
     197,   198,    -1,   200,   201,   202,   203,   204,   205,    -1,
      -1,    30,    -1,    45,   130,   212,   213,    -1,   215,   216,
     217,   218,   219,   220,    11,    -1,   142,    14,    15,    16,
      17,     0,     1,    20,    21,    45,   130,    69,     7,    -1,
     156,    73,    -1,    30,    14,    15,    16,    79,   142,     0,
       1,     0,     1,    -1,    -1,    87,     7,   173,     7,    69,
      30,    11,   156,    73,    14,    15,    16,    17,    18,    79,
      20,    21,    22,    -1,    -1,    12,    86,    14,    15,   173,
      30,   197,   198,    -1,   200,   201,   202,   203,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,   212,   213,   130,   215,
     216,   217,   218,   197,   198,    30,   200,   201,   202,    -1,
     142,    24,    25,    -1,    27,    28,    29,    -1,   212,   213,
     130,   215,   216,   217,   156,     1,    -1,     3,     4,     5,
       6,     7,   142,     9,    10,     0,     1,     0,     1,    -1,
      -1,   173,     7,    19,     7,    21,   156,    23,    24,    25,
      -1,    27,    28,    29,    -1,    -1,    32,     0,     1,    14,
      15,    16,    17,   173,     7,   197,   198,    11,   200,   201,
      14,    15,    16,    17,    18,    30,    20,    21,    22,    -1,
     212,   213,    -1,   215,   216,    29,    30,   197,   198,     1,
     200,     3,     4,     5,     6,     7,    -1,     9,    10,     0,
       1,    -1,   212,   213,    -1,   215,     7,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    19,     9,    10,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    19,     9,    10,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    19,     9,    10,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,     0,
       1,     0,     1,     0,     1,    -1,     7,    19,     7,    21,
       7,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    11,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    30,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    30,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    30,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    11,    -1,    30,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    30,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    11,    -1,    30,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    30,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      30,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      11,    -1,    -1,    14,    15,    16,    17,    30,    -1,    20,
      21,    22,    11,    -1,    -1,    14,    15,    16,    17,    30,
      -1,    20,    21,    22,    11,    -1,    -1,    14,    15,    16,
      17,    30,    -1,    20,    21,    22,    11,    -1,    -1,    14,
      15,    16,    17,    30,    -1,    20,    21,    22,    11,    -1,
      -1,    14,    15,    16,    17,    30,    -1,    20,    21,    22,
      11,    -1,    -1,    14,    15,    16,    17,    30,    -1,    20,
      21,    -1,    12,    13,    14,    15,    16,    17,    18,    30,
      20,    21,    22,    13,    14,    15,    16,    17,    18,    29,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    12,    -1,    14,    15,    16,    17,    18,    12,    20,
      21,    22,    -1,    -1,    -1,    19,    -1,    21,    29,    23,
      24,    25,    -1,    27,    28,    29,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    -1,    14,    15,    16,    17,    18,    30,
      20,    21,    22,    -1,    -1,    14,    15,    16,    17,    18,
      30,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      18,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    18,    30,    20,    21,    22,    -1,    -1,    14,    15,
      16,    17,    18,    30,    20,    21,    22,    -1,    -1,    14,
      15,    16,    17,    18,    30,    20,    21,    22,    -1,    -1,
      14,    15,    16,    17,    18,    30,    20,    21,    22,    -1,
      -1,    14,    15,    16,    17,    18,    30,    20,    21,    22,
      -1,    -1,    14,    15,    16,    17,    18,    30,    20,    21,
      22,    -1,    -1,    14,    15,    16,    17,    18,    30,    20,
      21,    22,    -1,    -1,    14,    15,    16,    17,    18,    30,
      20,    21,    22,    -1,    -1,    14,    15,    16,    17,    -1,
      30,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      -1,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    -1,    30,    20,    21,    22,    -1,    -1,    14,    15,
      16,    17,    -1,    30,    20,    21,    22,    -1,    -1,    14,
      15,    16,    17,    -1,    30,    20,    21,    22,    -1,    -1,
      14,    15,    16,    17,    -1,    30,    20,    21,    14,    15,
      16,    17,    -1,    -1,    20,    21,    30,    19,    -1,    21,
      -1,    23,    24,    25,    30,    27,    28,    29,    30,    19,
      -1,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    19,    -1,    21,    -1,    23,    24,    25,
      -1,    27,    28,    29,    30,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    12,    -1,    14,    15,
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
      16,    17,    18,    -1,    20,    21,    22,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      20,    21,    22,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    20,    21,    22,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    20,    21,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    37,    40,    51,    12,
      29,     8,    28,     0,    36,    29,    12,     7,    30,    41,
      51,    28,    30,    38,     8,    28,    31,    11,    30,    31,
      41,    28,     1,     3,     5,     6,     9,    10,    19,    21,
      23,    24,    25,    27,    28,    29,    42,    43,    44,    45,
      47,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    63,    51,    31,    42,    30,    29,
      29,    52,    29,    29,    28,    61,    60,    60,    13,    29,
      52,    32,    43,    12,    12,    12,    14,    15,    16,    17,
      20,    21,    22,    18,    12,    42,    32,    39,     1,    52,
      48,    52,     1,    28,     1,    26,    52,    53,    30,    52,
      62,    30,    54,    55,    56,    57,    58,    58,    59,    61,
      32,    31,    30,    30,    12,    30,    30,    30,    30,    30,
      11,    30,    42,    31,    46,    49,    46,    48,    52,    32,
      42,     4,    12,    32,    46,    48,    30,    46,     7,    19,
      21,    23,    24,    25,    27,    28,    29,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    19,    21,    23,    24,
      25,    27,    28,    29,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     1,    31,    49,    50,    51,    52,    63,
      52,     8,    28,    28,    61,    60,    60,    13,    29,    52,
      14,    15,    16,    17,    20,    21,    22,    18,    28,    61,
      60,    60,    13,    29,    52,    14,    15,    16,    17,    20,
      21,    22,    18,    42,    12,    12,    12,    12,    28,    53,
      30,    62,    30,    54,    55,    56,    57,    58,    58,    59,
      61,    53,    30,    62,    30,    54,    55,    56,    57,    58,
      58,    59,    61,    32,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    38,
      39,    37,    37,    37,    37,    40,    40,    41,    41,    42,
      42,    43,    43,    44,    44,    45,    45,    45,    46,    46,
      47,    48,    48,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     2,     0,
       0,     9,     7,     6,     6,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     5,     7,     5,     3,     1,
       9,     1,     0,     2,     2,     2,     2,     1,     4,     4,
       4,     4,     4,     2,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       2,     2,     1,     2,     3,     1,     1,     3,     4,     3,
       1,     1,     1,     3,     1,     2
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
#line 86 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", (yyvsp[0].no), NULL, NULL, NULL);
                                                        if(num_erros_lexicos == 0)
                                                            printf("Sem erros lexicos\n");
                                                        else
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && var_ja_decl == 0) {
                                                            printf("Sem erros sintaticos\n\n");
                                                            printf("================================== ARVORE SINTATICA ABSTRADA =================================\n\n");
                                                            printaArvore(raiz, 0);
                                                            printf("\n\n====================================== TABELA DE SIMBOLOS =====================================\n\n");
                                                            printaLista(cabeca);
                                                            printf("\n\n");
                                                        } else
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        desalocar(raiz);
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
#line 1731 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 106 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1737 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 108 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("declarations", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1743 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 111 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("declaration", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1749 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 112 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("declaration", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1755 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 113 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1761 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 116 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1);}
#line 1767 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 116 "./src/sintaxe.y"
                                                                                         {popEsc(&primeiro);}
#line 1773 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 116 "./src/sintaxe.y"
                                                                                                                                           {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), (yyvsp[-1].no), NULL);}
#line 1779 "./src/sintaxe.tab.c"
    break;

  case 12: /* function: error ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 117 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function",(yyvsp[-4].no), (yyvsp[-1].no), NULL, NULL);}
#line 1785 "./src/sintaxe.tab.c"
    break;

  case 13: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 118 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), (yyvsp[-1].no), NULL, NULL);}
#line 1791 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 119 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1797 "./src/sintaxe.tab.c"
    break;

  case 15: /* funcDecl: TIPO ID  */
#line 122 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("funcDecl", NULL, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1806 "./src/sintaxe.tab.c"
    break;

  case 16: /* funcDecl: TIPO LIST ID  */
#line 126 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("funcDecl", NULL, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1815 "./src/sintaxe.tab.c"
    break;

  case 17: /* parameters: parameters VIRG varDecl  */
#line 132 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1821 "./src/sintaxe.tab.c"
    break;

  case 18: /* parameters: varDecl  */
#line 133 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("parameters", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1827 "./src/sintaxe.tab.c"
    break;

  case 19: /* moreStmt: moreStmt stmt  */
#line 136 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1833 "./src/sintaxe.tab.c"
    break;

  case 20: /* moreStmt: stmt  */
#line 137 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("moreStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1839 "./src/sintaxe.tab.c"
    break;

  case 21: /* stmt: oneLineStmt  */
#line 140 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1845 "./src/sintaxe.tab.c"
    break;

  case 22: /* stmt: multLineStmt  */
#line 141 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1851 "./src/sintaxe.tab.c"
    break;

  case 23: /* multLineStmt: conditional  */
#line 144 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1857 "./src/sintaxe.tab.c"
    break;

  case 24: /* multLineStmt: iteration  */
#line 145 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1863 "./src/sintaxe.tab.c"
    break;

  case 25: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 148 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1869 "./src/sintaxe.tab.c"
    break;

  case 26: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 149 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1875 "./src/sintaxe.tab.c"
    break;

  case 27: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 150 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("oneLineStmt", (yyvsp[0].no), NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1881 "./src/sintaxe.tab.c"
    break;

  case 28: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 153 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("bracesStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1887 "./src/sintaxe.tab.c"
    break;

  case 29: /* bracesStmt: oneLineStmt  */
#line 154 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("bracesStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1893 "./src/sintaxe.tab.c"
    break;

  case 30: /* iteration: FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt  */
#line 157 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("iteration", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1899 "./src/sintaxe.tab.c"
    break;

  case 31: /* expIte: attribuition  */
#line 160 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expIte", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1905 "./src/sintaxe.tab.c"
    break;

  case 32: /* expIte: %empty  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 1911 "./src/sintaxe.tab.c"
    break;

  case 33: /* oneLineStmt: varDecl PV  */
#line 164 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1917 "./src/sintaxe.tab.c"
    break;

  case 34: /* oneLineStmt: attribuition PV  */
#line 165 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1923 "./src/sintaxe.tab.c"
    break;

  case 35: /* oneLineStmt: io PV  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1929 "./src/sintaxe.tab.c"
    break;

  case 36: /* oneLineStmt: ret PV  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1935 "./src/sintaxe.tab.c"
    break;

  case 37: /* oneLineStmt: error  */
#line 168 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1941 "./src/sintaxe.tab.c"
    break;

  case 38: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("in", NULL, NULL, NULL, NULL);}
#line 1947 "./src/sintaxe.tab.c"
    break;

  case 39: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 172 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1953 "./src/sintaxe.tab.c"
    break;

  case 40: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", NULL, NULL, NULL, NULL);}
#line 1959 "./src/sintaxe.tab.c"
    break;

  case 41: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1965 "./src/sintaxe.tab.c"
    break;

  case 42: /* io: SAIDA ABRE_P error FECHA_P  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1971 "./src/sintaxe.tab.c"
    break;

  case 43: /* varDecl: TIPO ID  */
#line 179 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1980 "./src/sintaxe.tab.c"
    break;

  case 44: /* varDecl: TIPO LIST ID  */
#line 183 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1989 "./src/sintaxe.tab.c"
    break;

  case 45: /* attribuition: ID ATRIB expLogic  */
#line 189 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1995 "./src/sintaxe.tab.c"
    break;

  case 46: /* attribuition: expLogic  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2001 "./src/sintaxe.tab.c"
    break;

  case 47: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 193 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2007 "./src/sintaxe.tab.c"
    break;

  case 48: /* expLogic: andLogic  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2013 "./src/sintaxe.tab.c"
    break;

  case 49: /* andLogic: andLogic LOG_OP_E expComp  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2019 "./src/sintaxe.tab.c"
    break;

  case 50: /* andLogic: expComp  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2025 "./src/sintaxe.tab.c"
    break;

  case 51: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 201 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2031 "./src/sintaxe.tab.c"
    break;

  case 52: /* expComp: expRel  */
#line 202 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2037 "./src/sintaxe.tab.c"
    break;

  case 53: /* expRel: expRel REL_OP_ALTA expArit  */
#line 205 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2043 "./src/sintaxe.tab.c"
    break;

  case 54: /* expRel: expArit  */
#line 206 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2049 "./src/sintaxe.tab.c"
    break;

  case 55: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 209 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2055 "./src/sintaxe.tab.c"
    break;

  case 56: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 210 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2061 "./src/sintaxe.tab.c"
    break;

  case 57: /* expArit: expMul  */
#line 211 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2067 "./src/sintaxe.tab.c"
    break;

  case 58: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 214 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2073 "./src/sintaxe.tab.c"
    break;

  case 59: /* expMul: negElement  */
#line 215 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2079 "./src/sintaxe.tab.c"
    break;

  case 60: /* negElement: LOG_OP_UN expList  */
#line 218 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2085 "./src/sintaxe.tab.c"
    break;

  case 61: /* negElement: ARIT_OP_MENOS expList  */
#line 219 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2091 "./src/sintaxe.tab.c"
    break;

  case 62: /* negElement: expList  */
#line 220 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2097 "./src/sintaxe.tab.c"
    break;

  case 63: /* expList: LIST_OP_UN element  */
#line 223 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2103 "./src/sintaxe.tab.c"
    break;

  case 64: /* expList: expList LIST_OP_BIN element  */
#line 224 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2109 "./src/sintaxe.tab.c"
    break;

  case 65: /* expList: element  */
#line 225 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2115 "./src/sintaxe.tab.c"
    break;

  case 66: /* element: ID  */
#line 228 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2121 "./src/sintaxe.tab.c"
    break;

  case 67: /* element: ABRE_P attribuition FECHA_P  */
#line 229 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2127 "./src/sintaxe.tab.c"
    break;

  case 68: /* element: ID ABRE_P arguments FECHA_P  */
#line 230 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2133 "./src/sintaxe.tab.c"
    break;

  case 69: /* element: ID ABRE_P FECHA_P  */
#line 231 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2139 "./src/sintaxe.tab.c"
    break;

  case 70: /* element: CONST_INT  */
#line 232 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2145 "./src/sintaxe.tab.c"
    break;

  case 71: /* element: CONST_FLOAT  */
#line 233 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2151 "./src/sintaxe.tab.c"
    break;

  case 72: /* element: NIL  */
#line 234 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2157 "./src/sintaxe.tab.c"
    break;

  case 73: /* arguments: arguments VIRG attribuition  */
#line 238 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2163 "./src/sintaxe.tab.c"
    break;

  case 74: /* arguments: attribuition  */
#line 239 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2169 "./src/sintaxe.tab.c"
    break;

  case 75: /* ret: RETURN attribuition  */
#line 242 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("ret", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2175 "./src/sintaxe.tab.c"
    break;


#line 2179 "./src/sintaxe.tab.c"

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

#line 245 "./src/sintaxe.y"


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
    pushEsc(&primeiro, 0);
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
