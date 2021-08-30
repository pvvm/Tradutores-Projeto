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


extern int yylex(void);
extern int yylex_destroy(void);
extern char * yytext;
extern FILE *yyin;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;
struct No * raiz;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No* , struct No*);

#line 89 "./src/sintaxe.tab.c"

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
  YYSYMBOL_parameters = 38,                /* parameters  */
  YYSYMBOL_moreStmt = 39,                  /* moreStmt  */
  YYSYMBOL_stmt = 40,                      /* stmt  */
  YYSYMBOL_multLineStmt = 41,              /* multLineStmt  */
  YYSYMBOL_conditional = 42,               /* conditional  */
  YYSYMBOL_bracesStmt = 43,                /* bracesStmt  */
  YYSYMBOL_iteration = 44,                 /* iteration  */
  YYSYMBOL_expIte = 45,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 46,               /* oneLineStmt  */
  YYSYMBOL_io = 47,                        /* io  */
  YYSYMBOL_varDecl = 48,                   /* varDecl  */
  YYSYMBOL_attribuition = 49,              /* attribuition  */
  YYSYMBOL_expLogic = 50,                  /* expLogic  */
  YYSYMBOL_andLogic = 51,                  /* andLogic  */
  YYSYMBOL_expComp = 52,                   /* expComp  */
  YYSYMBOL_expRel = 53,                    /* expRel  */
  YYSYMBOL_expArit = 54,                   /* expArit  */
  YYSYMBOL_expMul = 55,                    /* expMul  */
  YYSYMBOL_negElement = 56,                /* negElement  */
  YYSYMBOL_expList = 57,                   /* expList  */
  YYSYMBOL_element = 58,                   /* element  */
  YYSYMBOL_arguments = 59,                 /* arguments  */
  YYSYMBOL_ret = 60                        /* ret  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
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
       0,    78,    78,    89,    92,    93,    94,    97,    98,    99,
     102,   103,   104,   105,   108,   109,   112,   113,   116,   117,
     120,   121,   124,   125,   126,   129,   130,   133,   136,   137,
     140,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     155,   156,   159,   160,   163,   164,   167,   168,   171,   172,
     175,   176,   179,   180,   181,   184,   185,   188,   189,   190,
     193,   194,   195,   198,   199,   200,   201,   202,   203,   204,
     208,   209,   212
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
  "declaration", "function", "parameters", "moreStmt", "stmt",
  "multLineStmt", "conditional", "bracesStmt", "iteration", "expIte",
  "oneLineStmt", "io", "varDecl", "attribuition", "expLogic", "andLogic",
  "expComp", "expRel", "expArit", "expMul", "negElement", "expList",
  "element", "arguments", "ret", YY_NULLPTR
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     119,     8,     6,    11,   337,   436,   440,     1,    46,   461,
       3,   466,   -10,    64,  -189,   583,   594,     9,    -9,    77,
      78,   118,    23,    85,  1566,    53,    38,  1566,    41,   878,
      61,    94,  2186,   117,   124,   685,   499,   499,  2061,  2072,
    2083,  1749,  2197,   908,   938,   968,   998,  1028,  1058,   136,
     138,   174,    51,   319,   817,   484,  2314,  2215,  2226,  2094,
    2105,   175,   103,  1566,  1088,  1566,    58,  1785,   179,     0,
      24,  1778,  2116,  2127,  2138,  2230,  2006,   184,   619,  1118,
    1148,  1178,  1208,  2230,  2230,  2230,  2230,  2230,  2230,  2230,
     685,  1238,  1268,   679,  1298,   189,   215,   198,   235,   221,
     222,   225,   247,   251,   104,  2149,   129,   181,  2160,   333,
     847,   727,  2324,  2248,  2259,  2270,  2171,   681,   683,   510,
    1537,  1785,   275,   296,   316,   344,   355,  2274,  2182,  1566,
    1328,  1358,   638,   357,   188,  1388,   510,  2018,  1418,  1448,
     258,   510,  1478,    16,    56,   745,   524,   524,  1818,  1829,
    1840,  1759,  2197,   160,   336,   269,   408,  1994,   492,  1950,
    1851,  1862,   775,   627,   627,   187,   305,   343,   250,  2197,
     243,   182,   128,   121,  1730,    83,  1682,   435,   545,   668,
    1566,   698,   360,   362,   365,   375,   358,   278,   202,   361,
     380,  1801,  1873,  1884,  1895,  2285,  2030,   370,  2285,  2285,
    2285,  2285,  2285,  2285,  2285,   745,   280,   588,  1585,  1602,
    2296,  2042,   371,  2296,  2296,  2296,  2296,  2296,  2296,  2296,
     775,  1508,   728,   758,   788,   818,   282,   392,   223,  1906,
     294,  1917,   356,   299,   465,  2002,  1961,  1972,  1983,  1928,
     248,  1619,   300,  1636,   219,   325,   391,  1738,  1694,  1706,
    1718,  1653,   848,  1939,  1670
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
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
    -189,  -189,  -189,    28,  -189,   393,   -23,   -26,  -189,  -189,
    -115,  -189,   139,   -63,   289,     2,     4,    79,   427,   418,
     378,   276,   216,   180,    25,   -35,  -188,   315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    19,    43,    44,    45,    46,
     130,    47,    97,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,   107,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    99,     7,     7,    64,   132,     7,   161,   230,     8,
     143,    14,    20,    16,    12,     2,   143,    79,    21,    20,
       9,   139,    24,   242,   187,   101,   142,    62,   100,    11,
      17,   161,    15,    18,    13,   161,    68,    10,    79,    22,
      92,   178,    94,   145,   188,   146,    77,   147,   148,   149,
     102,   150,   151,   152,    27,   116,   131,   181,     9,    95,
     143,    73,    74,   -43,   189,    83,    79,   160,    79,    63,
      96,    98,    65,   131,   103,    10,   -40,   145,   131,   146,
     106,   147,   148,   149,   190,   150,   151,   152,    25,   -15,
      66,   160,   178,   -40,   -54,   160,    25,   -54,   -54,   -54,
     -54,   177,   161,   -54,   -54,   219,   135,    26,   -15,    79,
     192,   161,   161,   -54,   -14,    28,   -42,   161,    83,    -3,
       1,   153,   183,    67,   184,    98,     2,   207,   178,   178,
     -41,   134,   -49,   -14,   161,   -49,   -49,   -49,   216,   -47,
     -71,   186,   -47,   -47,   215,   153,    69,   -41,    80,   153,
      81,   -49,   177,    70,   104,   170,   197,   221,   -47,   -71,
     161,   178,   160,   161,   161,   161,   161,   161,   161,   161,
     239,   193,   194,   212,   198,   178,   178,   160,   178,   178,
     178,   178,   178,   178,   178,   251,    82,    91,   208,   209,
     -43,   -72,   127,   -45,   160,    79,   -45,   214,   -67,   -70,
     106,   -67,   -67,   -67,   -67,   -67,   170,   -67,   -67,   -67,
     121,   128,   -45,   -40,   108,   106,   153,   -67,   -70,   119,
     160,   177,   159,   160,   160,   160,   160,   160,   160,   160,
     -44,   153,   -40,   -44,   214,   177,   177,   198,   177,   177,
     177,   177,   177,   177,   177,   120,   159,   -28,   153,   -44,
     159,   122,   123,   -42,   -43,   124,   176,   213,   158,   -42,
     133,   -63,   213,   210,   -63,   -63,   -63,   -63,   -63,   115,
     -63,   -63,   -63,   -43,   228,   170,   140,   125,   -42,   211,
     -63,   126,   158,   -47,   -47,   200,   158,   -38,   141,   240,
     170,   -63,   175,   -41,   -63,   -63,   -63,   -63,   -63,   -47,
     -63,   -63,   -63,   113,   114,   127,   226,   176,   -35,   211,
     -63,   127,   -41,   -46,   -46,   200,   -68,   159,   157,   -68,
     -68,   -68,   -68,   -68,   253,   -68,   -68,   -68,   -39,   -46,
     254,   -45,   159,   -45,    84,   -68,   -46,    -2,     8,   -46,
     -46,   215,   157,   175,     2,   -44,   157,   -44,    84,   159,
     -45,   199,   174,   158,   -69,   -46,   -37,   -69,   -69,   -69,
     -69,   -69,   112,   -69,   -69,   -69,   -45,   -36,   158,   137,
     -44,   199,   222,   -69,   223,   159,   176,   224,   159,   159,
     159,   159,   159,   159,   238,   158,   -44,   225,   -28,   227,
     176,   176,   -40,   176,   176,   176,   176,   176,   176,   250,
     231,   243,   -48,   174,   -41,   -48,   -48,   -48,   216,   182,
      23,   158,   175,   157,   158,   158,   158,   158,   236,   237,
     156,   -48,   -49,   -49,   -49,   201,   175,   175,   157,   175,
     175,   175,   175,   248,   249,   185,    -6,    -6,   -49,     0,
      -7,    -7,     0,    -6,   156,   157,   -59,    -7,   156,   -59,
     -59,   -59,   -59,   220,   173,   -59,   -59,   -59,     0,     0,
     155,    -9,    -9,   111,     0,   -59,    -5,    -5,    -9,   154,
       0,   157,   174,    -5,   157,   157,   157,   235,     0,   -48,
     -48,   -48,   201,     0,   155,     0,   174,   174,   155,   174,
     174,   174,   247,   154,   172,   -48,   -49,   154,   -49,   -49,
     -49,    86,   110,   171,     0,   173,   -54,   -54,   -54,   -54,
     109,    29,   -54,   -54,   204,   156,    32,   144,    35,    33,
      34,     0,   -54,    38,    39,     0,    40,    71,    42,    35,
     156,    36,     0,    37,    38,    39,     0,    40,    41,    42,
       0,   129,     0,   145,     0,   172,     0,   156,   148,   149,
       0,   150,   191,   152,   171,   155,   -62,     0,     0,   -62,
     -62,   -62,   -62,   -62,   154,   -62,   -62,   -62,     0,     0,
     155,     0,     0,   156,   173,   -62,   156,   156,   234,   154,
       0,     0,     0,    -4,    -4,     0,     0,   155,   173,   173,
      -4,   173,   173,   246,    -8,    -8,   154,     0,     0,   -60,
       0,    -8,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,     0,     0,   155,   172,     0,   155,   233,   -60,   -13,
     -13,     0,   154,   171,     0,   232,   -13,     0,   172,   172,
       0,   172,   245,     0,     0,     0,     0,   171,   171,   -22,
     244,   -22,   136,   -22,   -22,   -22,   162,   -22,   -22,     0,
       0,   165,   166,     0,   167,   206,   169,   -22,     0,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -34,
     -22,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -12,
     -12,   -11,   -11,   -10,   -10,     0,   -12,   -34,   -11,   -34,
     -10,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -26,
     -34,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,    38,
      39,     0,    40,    71,    42,     0,     0,   -26,     0,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -32,
     -26,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -48,
       0,   -48,   -48,   -48,    86,     0,     0,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -30,
     -32,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   148,
     149,     0,   150,   191,   152,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -31,
     -30,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   165,
     166,     0,   167,   206,   169,     0,     0,   -31,     0,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -33,
     -31,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -47,
       0,   -47,   -47,    85,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -25,
     -33,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -46,
       0,   -46,   -46,    85,     0,     0,     0,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,   -34,
     -25,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,    29,
     -34,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,   -17,
      78,   -17,     0,   -17,   -17,   -17,     0,   -17,   -17,     0,
       0,     0,     0,     0,     0,     0,     0,   -17,     0,   -17,
       0,   -17,   -17,   -17,     0,   -17,   -17,   -17,     0,   -19,
     -17,   -19,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,
       0,     0,     0,     0,     0,     0,     0,   -19,     0,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,   -20,
     -19,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,     0,
       0,     0,     0,     0,     0,     0,     0,   -20,     0,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -21,
     -20,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,     0,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -18,
     -21,   -18,     0,   -18,   -18,   -18,     0,   -18,   -18,     0,
       0,     0,     0,     0,     0,     0,     0,   -18,     0,   -18,
       0,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,    29,
     -18,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,   -16,
      93,   -16,     0,   -16,   -16,   -16,     0,   -16,   -16,     0,
       0,     0,     0,     0,     0,     0,     0,   -16,     0,   -16,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -32,
     -16,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -30,
     -32,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -31,
     -30,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -33,
     -31,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,    29,
     -33,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,    29,
     117,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,   -24,
     118,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,     0,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -26,
     -24,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,    29,
     -26,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,   -25,
     138,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,   -23,
     -25,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,
       0,     0,     0,     0,     0,     0,     0,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -27,
     -23,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,    29,
     -27,    30,     0,    31,    32,   144,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,   179,     0,
     252,     0,     0,    32,   144,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    29,   180,    30,
       0,    31,    32,   144,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,    36,     0,    37,
      38,    39,     0,    40,    41,    42,   -58,     0,     0,   -58,
     -58,   -58,   -58,   220,     0,   -58,   -58,   -58,     0,     0,
       0,     0,     0,   -57,     0,   -58,   -57,   -57,   -57,   -57,
     220,     0,   -57,   -57,   -57,     0,     0,     0,     0,     0,
     -66,     0,   -57,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -64,     0,   -66,
     -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,
       0,     0,     0,     0,   -61,     0,   -64,   -61,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   -61,     0,     0,     0,     0,
       0,   -65,     0,   -61,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -56,     0,     0,   -56,   -56,   -56,   -56,
     -65,     0,   -56,   -56,   -56,   -52,     0,     0,   -52,   -52,
     -52,   -52,   -56,     0,   -52,   -52,   219,   -53,     0,     0,
     -53,   -53,   -53,   -53,   -52,     0,   -53,   -53,   219,   -55,
       0,     0,   -55,   -55,   -55,   -55,   -53,     0,   -55,   -55,
     -55,   -51,     0,     0,   -51,   -51,   -51,   -51,   -55,   -50,
     217,   218,   -50,   -50,   -50,   -50,     0,     0,   217,   218,
     -51,   -63,    75,   -63,   -63,   -63,   -63,   -63,   -50,   -63,
     -63,   -63,   195,   -63,   -63,   -63,   -63,   -63,    76,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,   196,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -29,   -63,   -63,
     -63,     0,     0,     0,    35,     0,    36,    76,    37,    38,
      39,     0,    40,    41,    42,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
     196,   -63,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,     0,     0,   -68,   -68,   -68,   -68,   -68,   -67,   -68,
     -68,   -68,     0,     0,   -69,   -69,   -69,   -69,   -69,   -68,
     -69,   -69,   -69,     0,     0,   -59,   -59,   -59,   -59,   205,
     -69,   -59,   -59,   -59,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -59,   -62,   -62,   -62,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -62,   -60,   -60,   -60,     0,     0,   -58,   -58,
     -58,   -58,   205,   -60,   -58,   -58,   -58,     0,     0,   -57,
     -57,   -57,   -57,   205,   -58,   -57,   -57,   -57,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -57,   -66,   -66,   -66,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -66,   -64,   -64,   -64,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -64,   -61,   -61,
     -61,     0,     0,   -65,   -65,   -65,   -65,   -65,   -61,   -65,
     -65,   -65,     0,     0,   -56,   -56,   -56,   -56,     0,   -65,
     -56,   -56,   -56,     0,     0,   -52,   -52,   -52,   -52,     0,
     -56,   -52,   -52,   204,     0,     0,   -53,   -53,   -53,   -53,
       0,   -52,   -53,   -53,   204,     0,     0,   -55,   -55,   -55,
     -55,     0,   -53,   -55,   -55,   -55,     0,     0,   -51,   -51,
     -51,   -51,     0,   -55,   202,   203,   -50,   -50,   -50,   -50,
       0,     0,   202,   203,   -51,   162,     0,   163,     0,   164,
     165,   166,   -50,   167,   168,   169,   105,   145,     0,   146,
       0,   147,   148,   149,     0,   150,   151,   152,   -29,   162,
       0,   163,     0,   164,   165,   166,     0,   167,   168,   169,
     229,   162,     0,   163,     0,   164,   165,   166,     0,   167,
     168,   169,   241,   -67,     0,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -68,     0,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -69,     0,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -59,     0,   -59,   -59,
     -59,   -59,    90,     0,   -59,   -59,   -59,   -62,     0,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -60,     0,
     -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -58,
       0,   -58,   -58,   -58,   -58,    90,     0,   -58,   -58,   -58,
     -57,     0,   -57,   -57,   -57,   -57,    90,     0,   -57,   -57,
     -57,   -66,     0,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -64,     0,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -61,     0,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -61,   -61,   -65,     0,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,    35,     0,    36,     0,    37,
      38,    39,     0,    40,    41,    42,   145,     0,   146,     0,
     147,   148,   149,     0,   150,   151,   152,   -54,     0,   -54,
     -54,   -54,   -54,     0,     0,   -54,   -54,    89,   -56,     0,
     -56,   -56,   -56,   -56,     0,     0,   -56,   -56,   -56,    35,
       0,    36,     0,    37,    38,    39,     0,    40,    71,    42,
     -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,
      89,   -53,     0,   -53,   -53,   -53,   -53,     0,     0,   -53,
     -53,    89,   -55,     0,   -55,   -55,   -55,   -55,     0,     0,
     -55,   -55,   -55,   162,     0,   163,     0,   164,   165,   166,
       0,   167,   168,   169,   145,     0,   146,     0,   147,   148,
     149,     0,   150,   191,   152,   162,     0,   163,     0,   164,
     165,   166,     0,   167,   206,   169,   -51,     0,   -51,   -51,
     -51,   -51,     0,     0,    87,    88,   -50,     0,   -50,   -50,
     -50,   -50,     0,     0,    87,    88
};

static const yytype_int16 yycheck[] =
{
      35,     1,     0,     1,    27,   120,     4,    42,   196,     1,
       7,     0,    10,    12,     8,     7,     7,    43,    28,    17,
      12,   136,    31,   211,     8,     1,   141,    25,    28,     1,
      29,    66,     4,    30,    28,    70,    32,    29,    64,    30,
      63,    76,    65,    19,    28,    21,    42,    23,    24,    25,
      26,    27,    28,    29,    31,    90,   119,   120,    12,     1,
       7,    36,    37,    12,     8,    14,    92,    42,    94,    31,
      66,    67,    31,   136,    70,    29,    12,    19,   141,    21,
      76,    23,    24,    25,    28,    27,    28,    29,    11,    11,
      29,    66,   127,    29,    11,    70,    11,    14,    15,    16,
      17,    76,   137,    20,    21,    22,   129,    30,    30,   135,
     145,   146,   147,    30,    11,    30,    12,   152,    14,     0,
       1,    42,   120,    29,   120,   121,     7,   162,   163,   164,
      12,   127,    11,    30,   169,    14,    15,    16,    17,    11,
      11,   137,    14,    15,    16,    66,    29,    29,    12,    70,
      12,    30,   127,    29,    75,    76,   152,   180,    30,    30,
     195,   196,   137,   198,   199,   200,   201,   202,   203,   204,
     205,   146,   147,   169,    14,   210,   211,   152,   213,   214,
     215,   216,   217,   218,   219,   220,    12,    12,   163,   164,
      30,    12,    11,    11,   169,   221,    14,    15,    11,    11,
     196,    14,    15,    16,    17,    18,   127,    20,    21,    22,
      12,    30,    30,    11,    30,   211,   137,    30,    30,    30,
     195,   196,    42,   198,   199,   200,   201,   202,   203,   204,
      11,   152,    30,    14,    15,   210,   211,    14,   213,   214,
     215,   216,   217,   218,   219,    30,    66,    12,   169,    30,
      70,    30,    30,    30,    11,    30,    76,    14,    42,    11,
     121,    11,    14,    13,    14,    15,    16,    17,    18,    89,
      20,    21,    22,    30,   195,   196,   137,    30,    30,    29,
      30,    30,    66,    14,    15,    16,    70,    12,    30,   210,
     211,    11,    76,    11,    14,    15,    16,    17,    18,    30,
      20,    21,    22,    87,    88,    11,    28,   127,    12,    29,
      30,    11,    30,    14,    15,    16,    11,   137,    42,    14,
      15,    16,    17,    18,    30,    20,    21,    22,    12,    30,
      30,    12,   152,    14,    15,    30,    11,     0,     1,    14,
      15,    16,    66,   127,     7,    12,    70,    14,    15,   169,
      14,    15,    76,   137,    11,    30,    12,    14,    15,    16,
      17,    18,    86,    20,    21,    22,    30,    12,   152,    12,
      14,    15,    12,    30,    12,   195,   196,    12,   198,   199,
     200,   201,   202,   203,   204,   169,    30,    12,    30,    28,
     210,   211,    12,   213,   214,   215,   216,   217,   218,   219,
      30,    30,    11,   127,    12,    14,    15,    16,    17,   120,
      17,   195,   196,   137,   198,   199,   200,   201,   202,   203,
      42,    30,    14,    15,    16,    17,   210,   211,   152,   213,
     214,   215,   216,   217,   218,   120,     0,     1,    30,    -1,
       0,     1,    -1,     7,    66,   169,    11,     7,    70,    14,
      15,    16,    17,    18,    76,    20,    21,    22,    -1,    -1,
      42,     0,     1,    85,    -1,    30,     0,     1,     7,    42,
      -1,   195,   196,     7,   198,   199,   200,   201,    -1,    14,
      15,    16,    17,    -1,    66,    -1,   210,   211,    70,   213,
     214,   215,   216,    66,    76,    30,    12,    70,    14,    15,
      16,    17,    84,    76,    -1,   127,    14,    15,    16,    17,
      83,     1,    20,    21,    22,   137,     6,     7,    19,     9,
      10,    -1,    30,    24,    25,    -1,    27,    28,    29,    19,
     152,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    -1,    19,    -1,   127,    -1,   169,    24,    25,
      -1,    27,    28,    29,   127,   137,    11,    -1,    -1,    14,
      15,    16,    17,    18,   137,    20,    21,    22,    -1,    -1,
     152,    -1,    -1,   195,   196,    30,   198,   199,   200,   152,
      -1,    -1,    -1,     0,     1,    -1,    -1,   169,   210,   211,
       7,   213,   214,   215,     0,     1,   169,    -1,    -1,    11,
      -1,     7,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    -1,    -1,   195,   196,    -1,   198,   199,    30,     0,
       1,    -1,   195,   196,    -1,   198,     7,    -1,   210,   211,
      -1,   213,   214,    -1,    -1,    -1,    -1,   210,   211,     1,
     213,     3,     4,     5,     6,     7,    19,     9,    10,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,     0,
       1,     0,     1,     0,     1,    -1,     7,    19,     7,    21,
       7,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
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
      -1,    23,    24,    25,    -1,    27,    28,    29,     1,    -1,
      32,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,     1,    31,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    11,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    30,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    11,    -1,    30,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    30,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    11,    -1,    -1,    14,    15,    16,    17,
      30,    -1,    20,    21,    22,    11,    -1,    -1,    14,    15,
      16,    17,    30,    -1,    20,    21,    22,    11,    -1,    -1,
      14,    15,    16,    17,    30,    -1,    20,    21,    22,    11,
      -1,    -1,    14,    15,    16,    17,    30,    -1,    20,    21,
      22,    11,    -1,    -1,    14,    15,    16,    17,    30,    11,
      20,    21,    14,    15,    16,    17,    -1,    -1,    20,    21,
      30,    12,    13,    14,    15,    16,    17,    18,    30,    20,
      21,    22,    13,    14,    15,    16,    17,    18,    29,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      12,    -1,    14,    15,    16,    17,    18,    12,    20,    21,
      22,    -1,    -1,    -1,    19,    -1,    21,    29,    23,    24,
      25,    -1,    27,    28,    29,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    -1,    -1,    14,    15,    16,    17,    18,    30,    20,
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
      21,    22,    -1,    -1,    14,    15,    16,    17,    -1,    30,
      20,    21,    22,    -1,    -1,    14,    15,    16,    17,    -1,
      30,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      -1,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    -1,    30,    20,    21,    22,    -1,    -1,    14,    15,
      16,    17,    -1,    30,    20,    21,    14,    15,    16,    17,
      -1,    -1,    20,    21,    30,    19,    -1,    21,    -1,    23,
      24,    25,    30,    27,    28,    29,    30,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    30,    19,
      -1,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      30,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    30,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    12,    -1,    14,    15,    16,
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
      18,    -1,    20,    21,    22,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    20,    21,    22,    19,
      -1,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    12,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      20,    21,    22,    19,    -1,    21,    -1,    23,    24,    25,
      -1,    27,    28,    29,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    20,    21,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    37,    48,     1,    12,
      29,    36,     8,    28,     0,    36,    12,    29,    30,    38,
      48,    28,    30,    38,    31,    11,    30,    31,    30,     1,
       3,     5,     6,     9,    10,    19,    21,    23,    24,    25,
      27,    28,    29,    39,    40,    41,    42,    44,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    60,    48,    31,    39,    31,    29,    29,    49,    29,
      29,    28,    58,    57,    57,    13,    29,    49,    32,    40,
      12,    12,    12,    14,    15,    16,    17,    20,    21,    22,
      18,    12,    39,    32,    39,     1,    49,    45,    49,     1,
      28,     1,    26,    49,    50,    30,    49,    59,    30,    51,
      52,    53,    54,    55,    55,    56,    58,    32,    32,    30,
      30,    12,    30,    30,    30,    30,    30,    11,    30,    31,
      43,    46,    43,    45,    49,    39,     4,    12,    32,    43,
      45,    30,    43,     7,     7,    19,    21,    23,    24,    25,
      27,    28,    29,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    19,    21,    23,    24,    25,    27,    28,    29,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     1,
      31,    46,    47,    48,    49,    60,    49,     8,    28,     8,
      28,    28,    58,    57,    57,    13,    29,    49,    14,    15,
      16,    17,    20,    21,    22,    18,    28,    58,    57,    57,
      13,    29,    49,    14,    15,    16,    17,    20,    21,    22,
      18,    39,    12,    12,    12,    12,    28,    28,    50,    30,
      59,    30,    51,    52,    53,    54,    55,    55,    56,    58,
      50,    30,    59,    30,    51,    52,    53,    54,    55,    55,
      56,    58,    32,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    35,    36,    36,    36,
      37,    37,    37,    37,    38,    38,    39,    39,    40,    40,
      41,    41,    42,    42,    42,    43,    43,    44,    45,    45,
      46,    46,    46,    46,    46,    47,    47,    47,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       7,     7,     6,     6,     3,     1,     2,     1,     1,     1,
       1,     1,     5,     7,     5,     3,     1,     9,     1,     0,
       2,     2,     2,     2,     1,     4,     4,     4,     4,     4,
       2,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       2,     3,     1,     1,     3,     4,     3,     1,     1,     1,
       3,     1,     2
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
#line 78 "./src/sintaxe.y"
                                            {raiz = montaNo("program", (yyvsp[0].no), NULL, NULL, NULL);
                                            if(num_erros_lexicos == 0)
                                                printf("Sem erros lexicos\n");
                                            else
                                                printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                            if(num_erros_sintaticos == 0) {
                                                printf("Sem erros sintaticos\n");
                                                printaArvore(raiz, 0);
                                            } else
                                                printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                            desalocar(raiz);}
#line 1722 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 92 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1728 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: error declaration  */
#line 93 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[0].no), NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1734 "./src/sintaxe.tab.c"
    break;

  case 6: /* declarations: declaration  */
#line 94 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1740 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: function  */
#line 97 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1746 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: varDecl PV  */
#line 98 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1752 "./src/sintaxe.tab.c"
    break;

  case 9: /* declaration: error PV  */
#line 99 "./src/sintaxe.y"
                                              {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1758 "./src/sintaxe.tab.c"
    break;

  case 10: /* function: varDecl ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 102 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-1].no), NULL);}
#line 1764 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: error ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 103 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function",(yyvsp[-4].no), (yyvsp[-1].no), NULL, NULL);}
#line 1770 "./src/sintaxe.tab.c"
    break;

  case 12: /* function: varDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 104 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-5].no), (yyvsp[-1].no), NULL, NULL);}
#line 1776 "./src/sintaxe.tab.c"
    break;

  case 13: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 105 "./src/sintaxe.y"
                                                                              {(yyval.no) = montaNo("function", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1782 "./src/sintaxe.tab.c"
    break;

  case 14: /* parameters: parameters VIRG varDecl  */
#line 108 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1788 "./src/sintaxe.tab.c"
    break;

  case 15: /* parameters: varDecl  */
#line 109 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1794 "./src/sintaxe.tab.c"
    break;

  case 16: /* moreStmt: moreStmt stmt  */
#line 112 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1800 "./src/sintaxe.tab.c"
    break;

  case 17: /* moreStmt: stmt  */
#line 113 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1806 "./src/sintaxe.tab.c"
    break;

  case 18: /* stmt: oneLineStmt  */
#line 116 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1812 "./src/sintaxe.tab.c"
    break;

  case 19: /* stmt: multLineStmt  */
#line 117 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1818 "./src/sintaxe.tab.c"
    break;

  case 20: /* multLineStmt: conditional  */
#line 120 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1824 "./src/sintaxe.tab.c"
    break;

  case 21: /* multLineStmt: iteration  */
#line 121 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1830 "./src/sintaxe.tab.c"
    break;

  case 22: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 124 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1836 "./src/sintaxe.tab.c"
    break;

  case 23: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 125 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1842 "./src/sintaxe.tab.c"
    break;

  case 24: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 126 "./src/sintaxe.y"
                                                                     {(yyval.no) = montaNo("oneLineStmt", (yyvsp[0].no), NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1848 "./src/sintaxe.tab.c"
    break;

  case 25: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 129 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1854 "./src/sintaxe.tab.c"
    break;

  case 26: /* bracesStmt: oneLineStmt  */
#line 130 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1860 "./src/sintaxe.tab.c"
    break;

  case 27: /* iteration: FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt  */
#line 133 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("iteration", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1866 "./src/sintaxe.tab.c"
    break;

  case 28: /* expIte: attribuition  */
#line 136 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("expIte", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1872 "./src/sintaxe.tab.c"
    break;

  case 29: /* expIte: %empty  */
#line 137 "./src/sintaxe.y"
                                            {(yyval.no) = NULL;}
#line 1878 "./src/sintaxe.tab.c"
    break;

  case 30: /* oneLineStmt: varDecl PV  */
#line 140 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1884 "./src/sintaxe.tab.c"
    break;

  case 31: /* oneLineStmt: attribuition PV  */
#line 141 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1890 "./src/sintaxe.tab.c"
    break;

  case 32: /* oneLineStmt: io PV  */
#line 142 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1896 "./src/sintaxe.tab.c"
    break;

  case 33: /* oneLineStmt: ret PV  */
#line 143 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1902 "./src/sintaxe.tab.c"
    break;

  case 34: /* oneLineStmt: error  */
#line 144 "./src/sintaxe.y"
                                          {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1908 "./src/sintaxe.tab.c"
    break;

  case 35: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 147 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("in", NULL, NULL, NULL, NULL);}
#line 1914 "./src/sintaxe.tab.c"
    break;

  case 36: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 148 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1920 "./src/sintaxe.tab.c"
    break;

  case 37: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 149 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", NULL, NULL, NULL, NULL);}
#line 1926 "./src/sintaxe.tab.c"
    break;

  case 38: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 150 "./src/sintaxe.y"
                                                               {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1932 "./src/sintaxe.tab.c"
    break;

  case 39: /* io: SAIDA ABRE_P error FECHA_P  */
#line 151 "./src/sintaxe.y"
                                                             {(yyval.no) = montaNo("oneLineStmt", NULL, NULL, NULL, NULL);/*yyerrok; yyclearin;*/}
#line 1938 "./src/sintaxe.tab.c"
    break;

  case 40: /* varDecl: TIPO ID  */
#line 155 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);}
#line 1944 "./src/sintaxe.tab.c"
    break;

  case 41: /* varDecl: TIPO LIST ID  */
#line 156 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);}
#line 1950 "./src/sintaxe.tab.c"
    break;

  case 42: /* attribuition: ID ATRIB expLogic  */
#line 159 "./src/sintaxe.y"
                                             {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1956 "./src/sintaxe.tab.c"
    break;

  case 43: /* attribuition: expLogic  */
#line 160 "./src/sintaxe.y"
                                             {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1962 "./src/sintaxe.tab.c"
    break;

  case 44: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 163 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1968 "./src/sintaxe.tab.c"
    break;

  case 45: /* expLogic: andLogic  */
#line 164 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1974 "./src/sintaxe.tab.c"
    break;

  case 46: /* andLogic: andLogic LOG_OP_E expComp  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1980 "./src/sintaxe.tab.c"
    break;

  case 47: /* andLogic: expComp  */
#line 168 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1986 "./src/sintaxe.tab.c"
    break;

  case 48: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1992 "./src/sintaxe.tab.c"
    break;

  case 49: /* expComp: expRel  */
#line 172 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1998 "./src/sintaxe.tab.c"
    break;

  case 50: /* expRel: expRel REL_OP_ALTA expArit  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2004 "./src/sintaxe.tab.c"
    break;

  case 51: /* expRel: expArit  */
#line 176 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2010 "./src/sintaxe.tab.c"
    break;

  case 52: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 179 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2016 "./src/sintaxe.tab.c"
    break;

  case 53: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 180 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2022 "./src/sintaxe.tab.c"
    break;

  case 54: /* expArit: expMul  */
#line 181 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2028 "./src/sintaxe.tab.c"
    break;

  case 55: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 184 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2034 "./src/sintaxe.tab.c"
    break;

  case 56: /* expMul: negElement  */
#line 185 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2040 "./src/sintaxe.tab.c"
    break;

  case 57: /* negElement: LOG_OP_UN expList  */
#line 188 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2046 "./src/sintaxe.tab.c"
    break;

  case 58: /* negElement: ARIT_OP_MENOS expList  */
#line 189 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2052 "./src/sintaxe.tab.c"
    break;

  case 59: /* negElement: expList  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2058 "./src/sintaxe.tab.c"
    break;

  case 60: /* expList: LIST_OP_UN element  */
#line 193 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2064 "./src/sintaxe.tab.c"
    break;

  case 61: /* expList: expList LIST_OP_BIN element  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2070 "./src/sintaxe.tab.c"
    break;

  case 62: /* expList: element  */
#line 195 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2076 "./src/sintaxe.tab.c"
    break;

  case 63: /* element: ID  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2082 "./src/sintaxe.tab.c"
    break;

  case 64: /* element: ABRE_P attribuition FECHA_P  */
#line 199 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2088 "./src/sintaxe.tab.c"
    break;

  case 65: /* element: ID ABRE_P arguments FECHA_P  */
#line 200 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 2094 "./src/sintaxe.tab.c"
    break;

  case 66: /* element: ID ABRE_P FECHA_P  */
#line 201 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2100 "./src/sintaxe.tab.c"
    break;

  case 67: /* element: CONST_INT  */
#line 202 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2106 "./src/sintaxe.tab.c"
    break;

  case 68: /* element: CONST_FLOAT  */
#line 203 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2112 "./src/sintaxe.tab.c"
    break;

  case 69: /* element: NIL  */
#line 204 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 2118 "./src/sintaxe.tab.c"
    break;

  case 70: /* arguments: arguments VIRG attribuition  */
#line 208 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 2124 "./src/sintaxe.tab.c"
    break;

  case 71: /* arguments: attribuition  */
#line 209 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2130 "./src/sintaxe.tab.c"
    break;

  case 72: /* ret: RETURN attribuition  */
#line 212 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("ret", (yyvsp[0].no), NULL, NULL, NULL);}
#line 2136 "./src/sintaxe.tab.c"
    break;


#line 2140 "./src/sintaxe.tab.c"

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

#line 215 "./src/sintaxe.y"


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
