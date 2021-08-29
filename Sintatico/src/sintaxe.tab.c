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
#line 12 "./src/sintaxe.y"

#include <stdio.h>
#include <string.h>
#include "../lib/arvore.h"


extern int yylex(void);
extern int yylex_destroy(void);
extern int yyval;
extern FILE *yyin;
extern int num_linha;
extern int num_coluna;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;
struct No * raiz;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No* , struct No*);

#line 91 "./src/sintaxe.tab.c"

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
  YYSYMBOL_ENTRADA = 8,                    /* ENTRADA  */
  YYSYMBOL_SAIDA = 9,                      /* SAIDA  */
  YYSYMBOL_VIRG = 10,                      /* VIRG  */
  YYSYMBOL_PV = 11,                        /* PV  */
  YYSYMBOL_ATRIB = 12,                     /* ATRIB  */
  YYSYMBOL_LOG_OP_OU = 13,                 /* LOG_OP_OU  */
  YYSYMBOL_LOG_OP_E = 14,                  /* LOG_OP_E  */
  YYSYMBOL_REL_OP_BAIXA = 15,              /* REL_OP_BAIXA  */
  YYSYMBOL_REL_OP_ALTA = 16,               /* REL_OP_ALTA  */
  YYSYMBOL_LIST_OP_BIN = 17,               /* LIST_OP_BIN  */
  YYSYMBOL_LIST_OP_UN = 18,                /* LIST_OP_UN  */
  YYSYMBOL_ARIT_OP_BAIXA = 19,             /* ARIT_OP_BAIXA  */
  YYSYMBOL_ARIT_OP_ALTA = 20,              /* ARIT_OP_ALTA  */
  YYSYMBOL_LOG_OP_UN = 21,                 /* LOG_OP_UN  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_NIL = 24,                       /* NIL  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_ABRE_P = 26,                    /* ABRE_P  */
  YYSYMBOL_FECHA_P = 27,                   /* FECHA_P  */
  YYSYMBOL_ABRE_C = 28,                    /* ABRE_C  */
  YYSYMBOL_FECHA_C = 29,                   /* FECHA_C  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_program = 31,                   /* program  */
  YYSYMBOL_declarations = 32,              /* declarations  */
  YYSYMBOL_declaration = 33,               /* declaration  */
  YYSYMBOL_function = 34,                  /* function  */
  YYSYMBOL_parameters = 35,                /* parameters  */
  YYSYMBOL_moreStmt = 36,                  /* moreStmt  */
  YYSYMBOL_stmt = 37,                      /* stmt  */
  YYSYMBOL_multLineStmt = 38,              /* multLineStmt  */
  YYSYMBOL_conditional = 39,               /* conditional  */
  YYSYMBOL_bracesStmt = 40,                /* bracesStmt  */
  YYSYMBOL_iteration = 41,                 /* iteration  */
  YYSYMBOL_expIte = 42,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 43,               /* oneLineStmt  */
  YYSYMBOL_io = 44,                        /* io  */
  YYSYMBOL_variable = 45,                  /* variable  */
  YYSYMBOL_attribuition = 46,              /* attribuition  */
  YYSYMBOL_expList = 47,                   /* expList  */
  YYSYMBOL_expLogic = 48,                  /* expLogic  */
  YYSYMBOL_andLogic = 49,                  /* andLogic  */
  YYSYMBOL_expComp = 50,                   /* expComp  */
  YYSYMBOL_expRel = 51,                    /* expRel  */
  YYSYMBOL_expArit = 52,                   /* expArit  */
  YYSYMBOL_expMul = 53,                    /* expMul  */
  YYSYMBOL_negElement = 54,                /* negElement  */
  YYSYMBOL_element = 55,                   /* element  */
  YYSYMBOL_arguments = 56,                 /* arguments  */
  YYSYMBOL_ret = 57                        /* ret  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    90,    93,    94,    97,    98,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   133,   134,   137,   138,   139,   140,
     143,   144,   145,   149,   152,   153,   156,   157,   158,   161,
     162,   165,   166,   169,   170,   173,   174,   177,   178,   181,
     182,   185,   186,   189,   190,   191,   192,   193,   194,   197,
     198,   201
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
  "RETURN", "TIPO", "ENTRADA", "SAIDA", "VIRG", "PV", "ATRIB", "LOG_OP_OU",
  "LOG_OP_E", "REL_OP_BAIXA", "REL_OP_ALTA", "LIST_OP_BIN", "LIST_OP_UN",
  "ARIT_OP_BAIXA", "ARIT_OP_ALTA", "LOG_OP_UN", "CONST", "STRING", "NIL",
  "ID", "ABRE_P", "FECHA_P", "ABRE_C", "FECHA_C", "$accept", "program",
  "declarations", "declaration", "function", "parameters", "moreStmt",
  "stmt", "multLineStmt", "conditional", "bracesStmt", "iteration",
  "expIte", "oneLineStmt", "io", "variable", "attribuition", "expList",
  "expLogic", "andLogic", "expComp", "expRel", "expArit", "expMul",
  "negElement", "element", "arguments", "ret", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   124,   -16,    20,   288,   292,   331,    36,    39,  -117,
     362,   373,    -2,    47,    33,     2,    21,    22,  1178,    81,
      51,   116,   117,   220,   118,   121,   665,   317,  1569,  1579,
    1398,  1729,   728,   753,   778,   803,   828,   853,   103,   161,
     176,   110,   105,   196,   621,   567,  1709,  1589,  1599,  1609,
     181,    24,  1178,  1729,  1419,   194,   134,  1711,  1412,   353,
    1619,  1738,   413,   147,   499,   878,   903,   928,   953,   665,
     665,   665,   665,   665,   665,   665,   978,  1003,   197,   214,
     218,   210,   240,   241,   246,  1629,    26,    35,  1639,   490,
     432,   648,   594,  1727,  1649,  1659,   538,  1199,  1419,   264,
     266,   274,  1747,  1669,  1178,    34,   568,   279,    72,  1028,
    1222,  1672,   595,  1053,   251,  1222,  1078,   183,   692,   536,
    1448,  1457,   471,  1729,    68,   143,   189,   267,   402,  1547,
    1466,  1475,  1484,   717,   741,   310,   368,    54,  1729,     1,
      77,     0,   184,   169,   509,  1254,  1269,  1284,   322,   333,
     335,   342,  1178,  1103,   294,   343,  1433,   154,  1493,  1756,
    1682,   332,   692,   692,   692,   692,   692,   692,   692,  1239,
      88,  1299,  1765,  1692,   341,   717,   717,   717,   717,   717,
     717,   717,   622,   649,   676,   703,  1128,    86,  1502,    83,
    1511,   163,   295,   334,   444,  1554,  1520,  1529,     6,  1314,
      99,  1329,   256,   148,   245,   237,  1389,  1344,  1359,  1153,
    1538,  1374
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,   302,  -117,  -117,   -50,   -31,  -117,  -117,
      19,  -117,   -90,   -91,   261,     3,    66,   391,   217,   394,
     371,   303,   234,   138,    55,   -27,  -116,   289
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    15,    32,    33,    34,    35,
     105,    36,    79,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    87,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    65,    77,     7,   132,    13,   106,     7,   107,     8,
     -40,   -35,    19,   -40,   177,    16,   -34,   -40,   175,   153,
       9,   114,    51,   175,   153,    14,   132,   -40,   -35,    20,
     132,   -12,   -33,   -34,   -11,   147,   -60,   -19,   110,   -19,
     -19,   -19,   -19,   -19,   189,   102,    65,    11,   -12,   -33,
     -33,   -11,   -19,   -60,   109,   -19,   -19,   200,   -19,   -19,
     -19,    18,   103,   -19,   -53,    12,   172,   -53,   -53,   -53,
     -53,   -53,    17,   -53,   -53,   147,    -3,     1,    65,    52,
     173,   -53,   -59,     2,   132,   162,   131,   -38,    13,    55,
     176,   132,   158,   102,   -38,   -35,   132,    63,   -36,   -59,
     149,   176,   186,   162,   -38,   -36,   147,   171,   131,   102,
     210,   132,   131,   -34,    66,   -36,   -38,   146,    70,    78,
      80,   -35,   -38,    83,    -8,    -8,   211,    69,    86,   113,
      95,    -8,   132,   147,   116,   132,   132,   132,   132,   132,
     132,   132,    53,    54,    56,   147,   147,    57,   147,   147,
     147,   147,   147,   147,   147,    65,   163,   146,   -39,    81,
     -38,   -39,   177,   150,    80,   -39,   131,   163,   108,   130,
     -38,   -36,    67,   131,    88,   -39,   163,   154,   131,   -44,
     -37,   -36,   -44,   -44,   -44,   179,   -44,    68,   146,   161,
     -37,   130,    76,   131,   -42,   130,   -44,   -42,   -42,   178,
     145,   -42,   -40,   164,   174,   -61,   -40,   -40,   155,   -40,
      71,   -42,    94,   -40,   131,   146,   -40,   131,   131,   131,
     131,   131,   131,   197,    97,    98,    86,   146,   146,   -24,
     146,   146,   146,   146,   146,   146,   208,    99,    26,    86,
     145,    27,    28,    59,    29,    30,    31,   -43,   125,   130,
     -43,   -43,   -43,   179,   -43,   -41,   130,   -34,   -41,   -41,
     178,   130,   -41,    69,   -43,   129,   -37,   100,   101,   176,
     125,   145,   -41,   -37,   125,   -30,   130,   -32,   115,   140,
     -42,   -42,   165,   -37,   -42,   -31,    89,   129,    -2,     1,
     111,   129,    -5,    -5,   -42,     2,   144,   130,   145,    -5,
     130,   130,   130,   130,   130,   196,    10,    93,   -39,   164,
     145,   145,   -39,   145,   145,   145,   145,   145,   207,   140,
     -57,   -24,   -39,   -57,   -57,   -57,   -57,   -57,   125,   -57,
     -57,    -6,    -6,   182,   128,   157,   144,   -57,    -6,    28,
     125,    29,    58,    31,   183,   129,   184,   -41,   -41,   165,
     170,   -41,   129,   185,   -33,   125,   128,   129,   148,   190,
     128,   -41,    -4,    -4,   -36,   143,    70,   144,   201,    -4,
     -36,     0,   129,    -7,    -7,    92,   125,   140,   -58,   191,
      -7,   -58,   -58,   -58,   -58,   -58,   151,   -58,   -58,   140,
     140,     0,   202,   129,   144,   -58,   129,   129,   129,   129,
     195,     0,   127,     0,     0,   143,   144,   144,     0,   144,
     144,   144,   144,   206,   128,   -44,   -44,   -44,   166,   -44,
       0,   128,   124,     0,   127,   126,   128,     0,   127,   -44,
       0,   133,     0,   142,   134,   135,   143,   136,   137,   138,
      85,   128,    91,   -39,   124,   -39,    71,   126,   124,   -39,
       0,   126,    84,   139,     0,     0,   141,   -43,   -43,   -43,
     166,   -43,   128,   143,    90,   128,   128,   128,   194,     0,
       0,   -43,     0,   142,     0,   143,   143,     0,   143,   143,
     143,   205,   127,   159,   -53,   -53,   -53,   -53,   -53,   127,
     -53,   -53,     0,   139,   127,     0,   141,   160,   -53,   -10,
     -10,   -37,   124,    70,   142,   126,   -10,   -37,     0,   127,
       0,     0,   126,     0,   124,     0,     0,   126,     0,   -46,
       0,     0,   -46,   -46,   -46,   -46,   -46,   141,   180,   124,
     127,   142,   126,   127,   127,   193,   -46,     0,    -9,    -9,
       0,     0,     0,   142,   142,    -9,   142,   142,   204,     0,
     187,   139,     0,   126,   141,     0,   126,   192,   120,     0,
     121,   156,   123,   198,   139,     0,   141,   141,     0,   141,
     203,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -44,     0,
     -44,   -44,   -44,    73,   -44,     0,   -22,     0,     0,   -22,
     -22,     0,   -22,   -22,   -22,     0,     0,   -22,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -43,     0,   -43,   -43,   -43,
      73,   -43,     0,   -21,     0,     0,   -21,   -21,     0,   -21,
     -21,   -21,     0,     0,   -21,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -42,     0,   -42,   -42,    72,     0,   -42,     0,
     -28,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,     0,
       0,   -28,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -41,
       0,   -41,   -41,    72,     0,   -41,     0,   -26,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,     0,     0,   -26,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,    27,    28,     0,    29,
      58,    31,     0,     0,   -27,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,     0,     0,   -27,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   119,   120,     0,   121,   156,   123,     0,
       0,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,   -29,
       0,    21,   -29,    22,    23,   117,    24,    25,   134,   135,
       0,   136,   169,   138,     0,     0,    26,     0,     0,    27,
      28,     0,    29,    30,    31,     0,   -14,    64,   -14,   -14,
     -14,   -14,   -14,   135,     0,   136,   169,   138,     0,     0,
       0,   -14,     0,     0,   -14,   -14,     0,   -14,   -14,   -14,
       0,   -16,   -14,   -16,   -16,   -16,   -16,   -16,     0,     0,
       0,     0,     0,     0,     0,     0,   -16,     0,     0,   -16,
     -16,     0,   -16,   -16,   -16,     0,   -17,   -16,   -17,   -17,
     -17,   -17,   -17,     0,     0,     0,     0,     0,     0,     0,
       0,   -17,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,
       0,   -18,   -17,   -18,   -18,   -18,   -18,   -18,     0,     0,
       0,     0,     0,     0,     0,     0,   -18,     0,     0,   -18,
     -18,     0,   -18,   -18,   -18,     0,   -15,   -18,   -15,   -15,
     -15,   -15,   -15,     0,     0,     0,     0,     0,     0,     0,
       0,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,   -15,
       0,   -13,   -15,   -13,   -13,   -13,   -13,   -13,     0,     0,
       0,     0,     0,     0,     0,     0,   -13,     0,     0,   -13,
     -13,     0,   -13,   -13,   -13,     0,   -28,   -13,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
       0,   -26,   -28,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,     0,     0,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -27,   -26,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
       0,   -29,   -27,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,     0,     0,   -29,
     -29,     0,   -29,   -29,   -29,     0,    21,   -29,    22,    23,
     117,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,    29,    30,    31,
       0,    21,    96,    22,    23,   117,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,     0,    29,    30,    31,     0,   -20,   112,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
       0,   -20,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,
       0,   -23,   -20,   -23,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,     0,     0,     0,     0,   -23,     0,     0,   -23,
     -23,     0,   -23,   -23,   -23,     0,   -22,   -23,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,     0,     0,     0,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
       0,    21,   -22,    22,    23,   117,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,     0,    29,    30,    31,     0,   -21,   209,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,     0,     0,   -21,   -21,     0,   -21,   -21,   -21,
       0,    21,   -21,    22,    23,   117,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    27,
      28,     0,    29,    30,    31,    23,   117,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,    29,    30,    31,     0,   104,    23,   117,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    28,     0,    29,    30,    31,   -53,
     152,     0,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,
       0,     0,     0,     0,   -48,   173,   -53,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   181,     0,     0,     0,     0,   -50,
       0,   -48,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
       0,     0,     0,     0,   -52,     0,   -50,   -52,   -52,   -52,
     -52,   -52,     0,   -52,   -52,     0,     0,     0,     0,   -51,
       0,   -52,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
       0,     0,     0,     0,   -56,     0,   -51,   -56,   -56,   -56,
     -56,   -56,     0,   -56,   -56,     0,     0,     0,     0,   -54,
       0,   -56,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
       0,     0,     0,     0,   -47,     0,   -54,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   181,     0,     0,     0,     0,   -49,
       0,   -47,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
       0,     0,     0,     0,   -55,     0,   -49,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,     0,     0,     0,     0,   -45,
       0,   -55,   -45,   -45,   -45,   -45,   -45,     0,   180,   -53,
      61,   -53,   -53,   -53,   -53,   -53,   -45,   -53,   -53,     0,
       0,     0,     0,   -53,    62,   -53,   -53,   -53,   -53,   -53,
     -25,   -53,   -53,     0,     0,     0,     0,    26,    62,     0,
      27,    28,     0,    29,    30,    31,   -53,   -53,   -53,   -53,
     -53,     0,   -53,   -53,     0,     0,     0,     0,     0,   160,
     -53,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,     0,
     -58,   -58,   -58,   -58,   -58,   -57,   -58,   -58,     0,   -48,
     -48,   -48,   -48,   -48,   -58,   -48,   168,     0,   -50,   -50,
     -50,   -50,   -50,   -48,   -50,   -50,     0,   -52,   -52,   -52,
     -52,   -52,   -50,   -52,   -52,     0,   -51,   -51,   -51,   -51,
     -51,   -52,   -51,   -51,     0,   -56,   -56,   -56,   -56,   -56,
     -51,   -56,   -56,     0,   -54,   -54,   -54,   -54,   -54,   -56,
     -54,   -54,     0,   -47,   -47,   -47,   -47,   -47,   -54,   -47,
     168,     0,   -49,   -49,   -49,   -49,   -49,   -47,   -49,   -49,
       0,   -55,   -55,   -55,   -55,   -55,   -49,   -55,   -55,     0,
     -46,   -46,   -46,   -46,   -46,   -55,   167,   -45,   -45,   -45,
     -45,   -45,     0,   167,   -46,     0,     0,     0,     0,     0,
     -57,   -45,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -58,     0,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -48,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,    75,
     -50,     0,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -52,     0,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -56,     0,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,
     -54,     0,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,    75,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -55,     0,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,
     118,     0,     0,   119,   120,     0,   121,   122,   123,   -25,
     133,     0,     0,   134,   135,     0,   136,   137,   138,   188,
     133,     0,     0,   134,   135,     0,   136,   137,   138,   199,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,    74,   118,
       0,     0,   119,   120,    82,   121,   122,   123,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,    74,   118,     0,     0,
     119,   120,     0,   121,   122,   123,    26,     0,     0,    27,
      28,     0,    29,    58,    31,   133,     0,     0,   134,   135,
       0,   136,   137,   138,   118,     0,     0,   119,   120,     0,
     121,   156,   123,   133,     0,     0,   134,   135,     0,   136,
     169,   138
};

static const yytype_int16 yycheck[] =
{
      27,    32,    52,     0,    31,     7,    97,     4,    98,    25,
      10,    10,    10,    13,    14,    12,    10,    17,    17,   110,
       0,   111,    19,    17,   115,    27,    53,    27,    27,    27,
      57,    10,    10,    27,    10,    62,    10,     3,     4,     5,
       6,     7,     8,     9,   160,    10,    77,    11,    27,    27,
      11,    27,    18,    27,   104,    21,    22,   173,    24,    25,
      26,    28,    27,    29,    10,    26,    12,    13,    14,    15,
      16,    17,    25,    19,    20,   102,     0,     1,   109,    28,
      26,    27,    10,     7,   111,    17,    31,    10,     7,    23,
      13,   118,   119,    10,    17,    27,   123,    31,    10,    27,
      97,    13,   152,    17,    27,    17,   133,   134,    53,    10,
      27,   138,    57,    27,    11,    27,    11,    62,    13,    53,
      54,    11,    17,    57,     0,     1,    27,    17,    62,   110,
      75,     7,   159,   160,   115,   162,   163,   164,   165,   166,
     167,   168,    26,    26,    26,   172,   173,    26,   175,   176,
     177,   178,   179,   180,   181,   186,    13,   102,    10,    25,
      17,    13,    14,    97,    98,    17,   111,    13,   102,    31,
      27,    17,    11,   118,    27,    27,    13,   111,   123,    10,
      17,    27,    13,    14,    15,    16,    17,    11,   133,   123,
      27,    53,    11,   138,    10,    57,    27,    13,    14,    15,
      62,    17,    13,    14,   138,    11,    17,    11,    25,    13,
      14,    27,    74,    17,   159,   160,    27,   162,   163,   164,
     165,   166,   167,   168,    27,    11,   160,   172,   173,    11,
     175,   176,   177,   178,   179,   180,   181,    27,    18,   173,
     102,    21,    22,    26,    24,    25,    26,    10,    31,   111,
      13,    14,    15,    16,    17,    10,   118,    11,    13,    14,
      15,   123,    17,    17,    27,    31,    10,    27,    27,    13,
      53,   133,    27,    17,    57,    11,   138,    11,    27,    62,
      13,    14,    15,    27,    17,    11,    69,    53,     0,     1,
      11,    57,     0,     1,    27,     7,    62,   159,   160,     7,
     162,   163,   164,   165,   166,   167,     4,    73,    13,    14,
     172,   173,    17,   175,   176,   177,   178,   179,   180,   102,
      10,    27,    27,    13,    14,    15,    16,    17,   111,    19,
      20,     0,     1,    11,    31,   118,   102,    27,     7,    22,
     123,    24,    25,    26,    11,   111,    11,    13,    14,    15,
     133,    17,   118,    11,    11,   138,    53,   123,    97,    27,
      57,    27,     0,     1,    11,    62,    13,   133,    27,     7,
      17,    -1,   138,     0,     1,    72,   159,   160,    10,   162,
       7,    13,    14,    15,    16,    17,    97,    19,    20,   172,
     173,    -1,   175,   159,   160,    27,   162,   163,   164,   165,
     166,    -1,    31,    -1,    -1,   102,   172,   173,    -1,   175,
     176,   177,   178,   179,   111,    13,    14,    15,    16,    17,
      -1,   118,    31,    -1,    53,    31,   123,    -1,    57,    27,
      -1,    18,    -1,    62,    21,    22,   133,    24,    25,    26,
      27,   138,    71,    11,    53,    13,    14,    53,    57,    17,
      -1,    57,    61,    62,    -1,    -1,    62,    13,    14,    15,
      16,    17,   159,   160,    70,   162,   163,   164,   165,    -1,
      -1,    27,    -1,   102,    -1,   172,   173,    -1,   175,   176,
     177,   178,   111,    12,    13,    14,    15,    16,    17,   118,
      19,    20,    -1,   102,   123,    -1,   102,    26,    27,     0,
       1,    11,   111,    13,   133,   111,     7,    17,    -1,   138,
      -1,    -1,   118,    -1,   123,    -1,    -1,   123,    -1,    10,
      -1,    -1,    13,    14,    15,    16,    17,   133,    19,   138,
     159,   160,   138,   162,   163,   164,    27,    -1,     0,     1,
      -1,    -1,    -1,   172,   173,     7,   175,   176,   177,    -1,
     159,   160,    -1,   159,   160,    -1,   162,   163,    22,    -1,
      24,    25,    26,   172,   173,    -1,   172,   173,    -1,   175,
     176,     3,     4,     5,     6,     7,     8,     9,    11,    -1,
      13,    14,    15,    16,    17,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    11,    -1,    13,    14,    15,
      16,    17,    -1,    18,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    11,    -1,    13,    14,    15,    -1,    17,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    11,
      -1,    13,    14,    15,    -1,    17,    -1,    18,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    21,    22,    -1,    24,
      25,    26,    -1,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    21,    22,    -1,    24,    25,    26,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    21,    22,
      -1,    24,    25,    26,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    22,    -1,    24,    25,    26,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    -1,     3,    29,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      -1,     3,    29,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    -1,    28,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    10,
      28,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    10,    26,    27,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    10,
      -1,    27,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    10,    -1,    27,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    10,
      -1,    27,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    10,    -1,    27,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    10,
      -1,    27,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    10,    -1,    27,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    10,
      -1,    27,    13,    14,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    10,    -1,    27,    13,    14,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    10,
      -1,    27,    13,    14,    15,    16,    17,    -1,    19,    11,
      12,    13,    14,    15,    16,    17,    27,    19,    20,    -1,
      -1,    -1,    -1,    11,    26,    13,    14,    15,    16,    17,
      11,    19,    20,    -1,    -1,    -1,    -1,    18,    26,    -1,
      21,    22,    -1,    24,    25,    26,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    13,    14,    15,    16,    17,    -1,    19,    20,    -1,
      13,    14,    15,    16,    17,    27,    19,    20,    -1,    13,
      14,    15,    16,    17,    27,    19,    20,    -1,    13,    14,
      15,    16,    17,    27,    19,    20,    -1,    13,    14,    15,
      16,    17,    27,    19,    20,    -1,    13,    14,    15,    16,
      17,    27,    19,    20,    -1,    13,    14,    15,    16,    17,
      27,    19,    20,    -1,    13,    14,    15,    16,    17,    27,
      19,    20,    -1,    13,    14,    15,    16,    17,    27,    19,
      20,    -1,    13,    14,    15,    16,    17,    27,    19,    20,
      -1,    13,    14,    15,    16,    17,    27,    19,    20,    -1,
      13,    14,    15,    16,    17,    27,    19,    13,    14,    15,
      16,    17,    -1,    19,    27,    -1,    -1,    -1,    -1,    -1,
      11,    27,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    20,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    18,
      -1,    -1,    21,    22,    23,    24,    25,    26,    11,    -1,
      13,    14,    15,    16,    17,    -1,    19,    18,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    18,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    18,    -1,    -1,    21,    22,    -1,    24,
      25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    31,    32,    33,    34,    45,    25,     0,
      33,    11,    26,     7,    27,    35,    45,    25,    28,    10,
      27,     3,     5,     6,     8,     9,    18,    21,    22,    24,
      25,    26,    36,    37,    38,    39,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      57,    45,    28,    26,    26,    46,    26,    26,    25,    48,
      55,    12,    26,    46,    29,    37,    11,    11,    11,    17,
      13,    14,    15,    16,    19,    20,    11,    36,    46,    42,
      46,    25,    23,    46,    47,    27,    46,    56,    27,    48,
      49,    50,    51,    52,    53,    54,    29,    27,    11,    27,
      27,    27,    10,    27,    28,    40,    43,    42,    46,    36,
       4,    11,    29,    40,    42,    27,    40,     7,    18,    21,
      22,    24,    25,    26,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    18,    21,    22,    24,    25,    26,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    44,    45,
      46,    57,    28,    43,    46,    25,    25,    48,    55,    12,
      26,    46,    17,    13,    14,    15,    16,    19,    20,    25,
      48,    55,    12,    26,    46,    17,    13,    14,    15,    16,
      19,    20,    11,    11,    11,    11,    36,    47,    27,    56,
      27,    48,    49,    50,    51,    52,    53,    54,    47,    27,
      56,    27,    48,    49,    50,    51,    52,    53,    54,    29,
      27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    31,    32,    32,    33,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    37,    38,    38,    39,
      39,    40,    40,    41,    42,    42,    43,    43,    43,    43,
      44,    44,    44,    45,    46,    46,    47,    47,    47,    48,
      48,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     8,
       7,     3,     1,     2,     1,     1,     1,     1,     1,     5,
       7,     3,     1,     9,     1,     0,     2,     2,     2,     2,
       4,     4,     4,     2,     3,     1,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     1,     3,     4,     3,     1,     1,     3,
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
#line 79 "./src/sintaxe.y"
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
#line 1594 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 93 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1600 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 94 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1606 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 97 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1612 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: variable PV  */
#line 98 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1618 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 99 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", NULL, NULL, NULL, NULL);}
#line 1624 "./src/sintaxe.tab.c"
    break;

  case 9: /* function: TIPO ID ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 102 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-4].no), (yyvsp[-1].no), NULL, NULL);}
#line 1630 "./src/sintaxe.tab.c"
    break;

  case 10: /* function: TIPO ID ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 103 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1636 "./src/sintaxe.tab.c"
    break;

  case 11: /* parameters: parameters VIRG variable  */
#line 106 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1642 "./src/sintaxe.tab.c"
    break;

  case 12: /* parameters: variable  */
#line 107 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1648 "./src/sintaxe.tab.c"
    break;

  case 13: /* moreStmt: moreStmt stmt  */
#line 110 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1654 "./src/sintaxe.tab.c"
    break;

  case 14: /* moreStmt: stmt  */
#line 111 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1660 "./src/sintaxe.tab.c"
    break;

  case 15: /* stmt: oneLineStmt  */
#line 114 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1666 "./src/sintaxe.tab.c"
    break;

  case 16: /* stmt: multLineStmt  */
#line 115 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1672 "./src/sintaxe.tab.c"
    break;

  case 17: /* multLineStmt: conditional  */
#line 118 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1678 "./src/sintaxe.tab.c"
    break;

  case 18: /* multLineStmt: iteration  */
#line 119 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1684 "./src/sintaxe.tab.c"
    break;

  case 19: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 122 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1690 "./src/sintaxe.tab.c"
    break;

  case 20: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 123 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1696 "./src/sintaxe.tab.c"
    break;

  case 21: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 126 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1702 "./src/sintaxe.tab.c"
    break;

  case 22: /* bracesStmt: oneLineStmt  */
#line 127 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1708 "./src/sintaxe.tab.c"
    break;

  case 23: /* iteration: FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt  */
#line 130 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("iteration", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1714 "./src/sintaxe.tab.c"
    break;

  case 24: /* expIte: attribuition  */
#line 133 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("expIte", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1720 "./src/sintaxe.tab.c"
    break;

  case 25: /* expIte: %empty  */
#line 134 "./src/sintaxe.y"
                                            {(yyval.no) = NULL;}
#line 1726 "./src/sintaxe.tab.c"
    break;

  case 26: /* oneLineStmt: variable PV  */
#line 137 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1732 "./src/sintaxe.tab.c"
    break;

  case 27: /* oneLineStmt: attribuition PV  */
#line 138 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1738 "./src/sintaxe.tab.c"
    break;

  case 28: /* oneLineStmt: io PV  */
#line 139 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1744 "./src/sintaxe.tab.c"
    break;

  case 29: /* oneLineStmt: ret PV  */
#line 140 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1750 "./src/sintaxe.tab.c"
    break;

  case 30: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 143 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("in", NULL, NULL, NULL, NULL);}
#line 1756 "./src/sintaxe.tab.c"
    break;

  case 31: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 144 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1762 "./src/sintaxe.tab.c"
    break;

  case 32: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 145 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", NULL, NULL, NULL, NULL);}
#line 1768 "./src/sintaxe.tab.c"
    break;

  case 33: /* variable: TIPO ID  */
#line 149 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("variable", NULL, NULL, NULL, NULL);}
#line 1774 "./src/sintaxe.tab.c"
    break;

  case 34: /* attribuition: ID ATRIB expList  */
#line 152 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1780 "./src/sintaxe.tab.c"
    break;

  case 35: /* attribuition: expList  */
#line 153 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1786 "./src/sintaxe.tab.c"
    break;

  case 36: /* expList: LIST_OP_UN expLogic  */
#line 156 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1792 "./src/sintaxe.tab.c"
    break;

  case 37: /* expList: expList LIST_OP_BIN expLogic  */
#line 157 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1798 "./src/sintaxe.tab.c"
    break;

  case 38: /* expList: expLogic  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1804 "./src/sintaxe.tab.c"
    break;

  case 39: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1810 "./src/sintaxe.tab.c"
    break;

  case 40: /* expLogic: andLogic  */
#line 162 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1816 "./src/sintaxe.tab.c"
    break;

  case 41: /* andLogic: andLogic LOG_OP_E expComp  */
#line 165 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1822 "./src/sintaxe.tab.c"
    break;

  case 42: /* andLogic: expComp  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1828 "./src/sintaxe.tab.c"
    break;

  case 43: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 169 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1834 "./src/sintaxe.tab.c"
    break;

  case 44: /* expComp: expRel  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1840 "./src/sintaxe.tab.c"
    break;

  case 45: /* expRel: expRel REL_OP_ALTA expArit  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1846 "./src/sintaxe.tab.c"
    break;

  case 46: /* expRel: expArit  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1852 "./src/sintaxe.tab.c"
    break;

  case 47: /* expArit: expArit ARIT_OP_BAIXA expMul  */
#line 177 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1858 "./src/sintaxe.tab.c"
    break;

  case 48: /* expArit: expMul  */
#line 178 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1864 "./src/sintaxe.tab.c"
    break;

  case 49: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 181 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1870 "./src/sintaxe.tab.c"
    break;

  case 50: /* expMul: negElement  */
#line 182 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1876 "./src/sintaxe.tab.c"
    break;

  case 51: /* negElement: LOG_OP_UN element  */
#line 185 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1882 "./src/sintaxe.tab.c"
    break;

  case 52: /* negElement: element  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1888 "./src/sintaxe.tab.c"
    break;

  case 53: /* element: ID  */
#line 189 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1894 "./src/sintaxe.tab.c"
    break;

  case 54: /* element: ABRE_P attribuition FECHA_P  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1900 "./src/sintaxe.tab.c"
    break;

  case 55: /* element: ID ABRE_P arguments FECHA_P  */
#line 191 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1906 "./src/sintaxe.tab.c"
    break;

  case 56: /* element: ID ABRE_P FECHA_P  */
#line 192 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1912 "./src/sintaxe.tab.c"
    break;

  case 57: /* element: CONST  */
#line 193 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1918 "./src/sintaxe.tab.c"
    break;

  case 58: /* element: NIL  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1924 "./src/sintaxe.tab.c"
    break;

  case 59: /* arguments: arguments VIRG attribuition  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1930 "./src/sintaxe.tab.c"
    break;

  case 60: /* arguments: attribuition  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1936 "./src/sintaxe.tab.c"
    break;

  case 61: /* ret: RETURN attribuition  */
#line 201 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("ret", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1942 "./src/sintaxe.tab.c"
    break;


#line 1946 "./src/sintaxe.tab.c"

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

#line 204 "./src/sintaxe.y"


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
    printf("ERRO sintático\nLinha: %d\tColuna: %d\n\n", num_linha, num_coluna);
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
