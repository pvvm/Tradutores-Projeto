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
#line 9 "./src/sintaxe.y"

#include <stdio.h>


extern int yylex(void);
extern int yyval;
extern FILE *yyin;
extern int num_linha;
extern int num_coluna;
extern int num_erros_lexicos;
int num_erros_sintaticos = 0;

void yyerror(char *);

#line 86 "./src/sintaxe.tab.c"

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
  YYSYMBOL_ABRE_C = 3,                     /* ABRE_C  */
  YYSYMBOL_FECHA_C = 4,                    /* FECHA_C  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_FOR = 7,                        /* FOR  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_TIPO = 9,                       /* TIPO  */
  YYSYMBOL_ENTRADA = 10,                   /* ENTRADA  */
  YYSYMBOL_SAIDA = 11,                     /* SAIDA  */
  YYSYMBOL_VIRG = 12,                      /* VIRG  */
  YYSYMBOL_ATRIB = 13,                     /* ATRIB  */
  YYSYMBOL_LOG_OP_OU = 14,                 /* LOG_OP_OU  */
  YYSYMBOL_LOG_OP_E = 15,                  /* LOG_OP_E  */
  YYSYMBOL_REL_OP_BAIXA = 16,              /* REL_OP_BAIXA  */
  YYSYMBOL_REL_OP_ALTA = 17,               /* REL_OP_ALTA  */
  YYSYMBOL_LIST_OP_BIN = 18,               /* LIST_OP_BIN  */
  YYSYMBOL_LIST_OP_UN = 19,                /* LIST_OP_UN  */
  YYSYMBOL_ARIT_OP_BAIXA = 20,             /* ARIT_OP_BAIXA  */
  YYSYMBOL_ARIT_OP_ALTA = 21,              /* ARIT_OP_ALTA  */
  YYSYMBOL_LOG_OP_UN = 22,                 /* LOG_OP_UN  */
  YYSYMBOL_CONST = 23,                     /* CONST  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_NIL = 25,                       /* NIL  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_ABRE_P = 27,                    /* ABRE_P  */
  YYSYMBOL_FECHA_P = 28,                   /* FECHA_P  */
  YYSYMBOL_PV = 29,                        /* PV  */
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
  YYSYMBOL_in = 45,                        /* in  */
  YYSYMBOL_out = 46,                       /* out  */
  YYSYMBOL_variable = 47,                  /* variable  */
  YYSYMBOL_attribuition = 48,              /* attribuition  */
  YYSYMBOL_expList = 49,                   /* expList  */
  YYSYMBOL_expLogic = 50,                  /* expLogic  */
  YYSYMBOL_andLogic = 51,                  /* andLogic  */
  YYSYMBOL_expComp = 52,                   /* expComp  */
  YYSYMBOL_expRel = 53,                    /* expRel  */
  YYSYMBOL_expArit = 54,                   /* expArit  */
  YYSYMBOL_expMul = 55,                    /* expMul  */
  YYSYMBOL_negElement = 56,                /* negElement  */
  YYSYMBOL_element = 57,                   /* element  */
  YYSYMBOL_arguments = 58,                 /* arguments  */
  YYSYMBOL_ret = 59                        /* ret  */
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
#define YYLAST   1729

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

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
       0,    59,    59,    60,    63,    64,    67,    68,    69,    72,
      73,    76,    77,    80,    81,    84,    85,    88,    89,    92,
      93,    96,    97,   100,   103,   104,   107,   108,   109,   110,
     113,   114,   117,   120,   121,   125,   128,   129,   132,   133,
     134,   137,   138,   141,   142,   145,   146,   149,   150,   153,
     154,   157,   158,   161,   162,   165,   166,   167,   168,   169,
     170,   173,   174,   177
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
  "\"end of file\"", "error", "\"invalid token\"", "ABRE_C", "FECHA_C",
  "IF", "ELSE", "FOR", "RETURN", "TIPO", "ENTRADA", "SAIDA", "VIRG",
  "ATRIB", "LOG_OP_OU", "LOG_OP_E", "REL_OP_BAIXA", "REL_OP_ALTA",
  "LIST_OP_BIN", "LIST_OP_UN", "ARIT_OP_BAIXA", "ARIT_OP_ALTA",
  "LOG_OP_UN", "CONST", "STRING", "NIL", "ID", "ABRE_P", "FECHA_P", "PV",
  "$accept", "program", "declarations", "declaration", "function",
  "parameters", "moreStmt", "stmt", "multLineStmt", "conditional",
  "bracesStmt", "iteration", "expIte", "oneLineStmt", "io", "in", "out",
  "variable", "attribuition", "expList", "expLogic", "andLogic", "expComp",
  "expRel", "expArit", "expMul", "negElement", "element", "arguments",
  "ret", YY_NULLPTR
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

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     306,   498,    16,    43,   551,   554,   635,   638,     8,   -99,
     659,    -4,    42,    67,    -6,    -2,    -1,  1150,    62,    82,
      70,   104,   188,   117,   122,   102,   410,  1365,  1375,   358,
    1666,   243,   743,   767,   791,   815,   839,    40,    93,   116,
     132,   142,     2,   145,   103,   308,   242,   488,  1385,  1395,
    1405,   146,     6,  1150,  1666,  1608,   149,    73,  1657,  1349,
     165,  1415,  1675,  1617,   167,   662,   863,   887,   911,   935,
     102,   102,   102,   102,   102,   102,   102,   959,   983,   175,
     180,   198,   201,   217,   235,    44,  1425,    46,    60,  1435,
     214,   190,   380,   449,   571,  1445,  1455,   683,    30,  1608,
     251,   252,   255,  1684,  1465,  1150,   268,   599,   256,    72,
    1007,    56,  1627,   623,  1031,   236,    56,  1055,   260,   685,
     756,  1490,  1499,   519,  1666,    86,   144,   457,   465,  1174,
    1589,  1508,  1517,  1526,   733,   780,   553,  1183,   172,  1666,
      33,    77,     1,   152,   285,  1333,  1198,  1213,  1228,   263,
     267,   280,   289,  1150,  1079,   286,   290,  1475,   320,  1535,
    1693,  1637,   314,   685,   685,   685,   685,   685,   685,   685,
    1166,    78,  1243,  1702,  1647,   317,   733,   733,   733,   733,
     733,   733,   733,   647,   671,   695,   719,  1103,   184,  1544,
      91,  1553,   531,   721,   472,  1604,  1596,  1562,  1571,   118,
    1258,    95,  1273,    98,    32,   315,   412,  1340,  1288,  1303,
    1127,  1580,  1318
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   352,   -99,   -99,   -51,   -30,   -99,   -99,
      66,   -99,   -76,   -86,   259,   -99,   -99,     3,   143,   278,
     258,   438,   419,   350,   281,   186,    57,   -26,   -98,   270
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    14,    31,    32,    33,    34,
     106,    35,    80,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    88,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    66,    78,     7,   133,    12,    18,     7,   -35,   -35,
     -12,   -35,   107,   -42,    15,   -42,   178,   -35,   -11,   -42,
      70,    52,    19,   108,    13,   154,   -12,   -35,   133,   -42,
     154,   -37,   133,   105,   -11,    11,   115,   148,    22,   118,
      23,    24,     8,     9,   -41,   -37,   -41,   178,    66,    25,
     -41,   176,    26,    27,   110,    28,    29,    30,   -62,   153,
     -41,   -37,    70,   190,    22,   118,    23,    24,    16,    67,
      17,    12,   103,   -36,   -62,    25,   201,   148,    26,    27,
      66,    28,    29,    30,   -61,    53,   133,   132,   104,   -40,
     -38,   177,   177,   133,   159,   -40,   -38,    54,   133,    82,
     -61,   150,   187,   103,   163,   -40,   -38,   103,   148,   172,
     -39,   132,   177,   133,   -37,   132,   -39,   -42,    72,   211,
     147,   -42,   -30,   212,    26,    27,   -39,    28,    59,    30,
     -36,    55,   -42,    96,   133,   148,   176,   133,   133,   133,
     133,   133,   133,   133,    57,   -31,   -36,   148,   148,    58,
     148,   148,   148,   148,   148,   148,   148,    66,   164,    71,
     147,    68,   -40,   -40,   -44,    56,   -44,   -44,   179,   132,
     -44,    69,   -40,    64,   -40,    77,   132,   114,   -63,    71,
     -44,   132,   117,   -38,   -55,   173,   -55,   -55,   -55,   -55,
     -55,   147,   -55,   -55,   -38,    89,   132,    79,    81,   174,
     -55,    84,   163,    98,   -41,    72,    87,    25,   -41,    99,
      26,    27,   -36,    28,    29,    30,   131,   132,   147,   -41,
     132,   132,   132,   132,   132,   132,   198,   -24,    71,   100,
     147,   147,   -39,   147,   147,   147,   147,   147,   147,   209,
     131,   151,    81,   -39,   131,   101,   109,    65,    20,   146,
      21,    22,   118,    23,    24,   155,   -46,   -46,   -46,    74,
     -46,    95,    25,   102,   116,    26,    27,   162,    28,    29,
      30,   -46,   -19,   -19,   111,   -19,   -19,   -19,   -19,   -19,
     -32,   -34,   175,    60,   -33,   112,   156,   -19,   126,   146,
     -19,   -19,   183,   -19,   -19,   -19,   184,   -46,   131,   -46,
     -46,   -46,   180,   -46,    87,   131,    -3,     1,   125,   185,
     131,   130,   126,   -46,   -24,     2,   126,    87,   186,   -35,
     146,   141,   -44,   -44,    73,   131,   -44,   -43,    90,   -43,
     -43,   179,   125,   -43,   164,   130,   125,   -44,   -38,   130,
      85,   140,   191,   -43,   145,   202,   131,   146,   -38,   131,
     131,   131,   131,   131,   197,    94,    10,   149,     0,   146,
     146,   141,   146,   146,   146,   146,   146,   208,   152,     0,
     126,    62,   -55,   -55,   -55,   -55,   -55,   158,   -55,   -55,
     129,   140,   126,     0,   145,    63,     0,   -55,     0,     0,
     125,     0,   171,   130,   -43,   -43,    73,   126,   -43,     0,
     130,     0,   125,     0,   129,   130,     0,     0,   129,   -43,
       0,     0,     0,   144,     0,   145,     0,   125,   126,   141,
     130,   192,     0,    93,   -45,     0,   -45,   -45,   -45,   180,
     -45,   141,   141,    27,   203,    28,    59,    30,   188,   140,
     -45,   130,   145,     0,   130,   130,   130,   130,   196,   128,
       0,   199,   140,   144,   145,   145,     0,   145,   145,   145,
     145,   207,   129,   -45,   -45,   -45,    74,   -45,   127,   129,
       0,   -42,   165,   128,   129,   -42,     0,   128,   -45,   -44,
     -44,   166,   143,   -44,   144,   -42,   -43,   -43,   166,   129,
     -43,    92,   127,   -44,     0,     0,   127,     0,    -8,    -8,
     -43,   142,   -48,   -48,   -48,   -48,   -48,    -8,    75,    91,
     129,   144,     0,   129,   129,   129,   195,   -48,     0,     0,
       0,     0,   143,   144,   144,     0,   144,   144,   144,   206,
       0,   128,   160,   -55,   -55,   -55,   -55,   -55,   128,   -55,
     -55,   142,     0,   128,     0,   164,   161,   -55,     0,   -39,
     127,    -2,     1,   143,    -5,    -5,     0,   127,   128,   -39,
       2,     0,   127,    -5,     0,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   142,   -59,   -59,     0,     0,   127,     0,   128,
     143,   -59,   128,   128,   194,   -47,   -47,   -47,   -47,   -47,
       0,    75,   143,   143,     0,   143,   143,   205,   127,   142,
     -47,   127,   193,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   142,   142,     0,   142,   204,     0,     0,   -22,     0,
       0,   -22,   -22,     0,   -22,   -22,   -22,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,    -6,    -6,     0,    -7,    -7,
       0,     0,   -21,     0,    -6,   -21,   -21,    -7,   -21,   -21,
     -21,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,    -4,
      -4,     0,   -10,   -10,     0,     0,   -28,     0,    -4,   -28,
     -28,   -10,   -28,   -28,   -28,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,    -9,    -9,     0,     0,     0,     0,     0,
     -26,     0,    -9,   -26,   -26,     0,   -26,   -26,   -26,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   120,   121,     0,
     122,   157,   124,     0,   -27,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   -41,   165,     0,   -29,   -41,
       0,   -29,   -29,     0,   -29,   -29,   -29,   -14,   -14,   -41,
     -14,   -14,   -14,   -14,   -14,   135,   136,     0,   137,   170,
     139,     0,   -14,     0,     0,   -14,   -14,     0,   -14,   -14,
     -14,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   121,
       0,   122,   157,   124,     0,     0,   -16,     0,     0,   -16,
     -16,     0,   -16,   -16,   -16,   -17,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   136,     0,   137,   170,   139,     0,     0,
     -17,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,
       0,     0,     0,     0,   -18,     0,     0,   -18,   -18,     0,
     -18,   -18,   -18,   -15,   -15,     0,   -15,   -15,   -15,   -15,
     -15,     0,     0,     0,     0,     0,     0,     0,   -15,     0,
       0,   -15,   -15,     0,   -15,   -15,   -15,   -13,   -13,     0,
     -13,   -13,   -13,   -13,   -13,     0,     0,     0,     0,     0,
       0,     0,   -13,     0,     0,   -13,   -13,     0,   -13,   -13,
     -13,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,   -28,     0,     0,   -28,
     -28,     0,   -28,   -28,   -28,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
     -26,     0,     0,   -26,   -26,     0,   -26,   -26,   -26,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,   -27,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,   -29,     0,
       0,   -29,   -29,     0,   -29,   -29,   -29,    97,    20,     0,
      21,    22,   118,    23,    24,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,    29,
      30,   113,    20,     0,    21,    22,   118,    23,    24,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    26,
      27,     0,    28,    29,    30,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
     -20,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,     0,     0,     0,   -23,     0,     0,   -23,   -23,     0,
     -23,   -23,   -23,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,     0,     0,     0,   -22,     0,
       0,   -22,   -22,     0,   -22,   -22,   -22,   210,    20,     0,
      21,    22,   118,    23,    24,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,    29,
      30,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,   -21,     0,     0,   -21,
     -21,     0,   -21,   -21,   -21,    20,     0,    21,    22,   118,
      23,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,    29,    30,   -55,     0,
     -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,   -46,   -46,
     -46,   167,   -46,   174,   -55,   -60,     0,   -60,   -60,   -60,
     -60,   -60,   -46,   -60,   -60,     0,     0,     0,     0,     0,
     -50,   -60,   -50,   -50,   -50,   -50,   -50,     0,   -50,   182,
       0,     0,     0,     0,     0,   -52,   -50,   -52,   -52,   -52,
     -52,   -52,     0,   -52,   -52,     0,     0,     0,     0,     0,
     -54,   -52,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
       0,     0,     0,     0,     0,   -53,   -54,   -53,   -53,   -53,
     -53,   -53,     0,   -53,   -53,     0,     0,     0,     0,     0,
     -58,   -53,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,
       0,     0,     0,     0,     0,   -56,   -58,   -56,   -56,   -56,
     -56,   -56,     0,   -56,   -56,     0,     0,     0,     0,     0,
     -49,   -56,   -49,   -49,   -49,   -49,   -49,     0,   -49,   182,
       0,     0,     0,     0,     0,   -51,   -49,   -51,   -51,   -51,
     -51,   -51,     0,   -51,   -51,     0,     0,     0,     0,     0,
     -57,   -51,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
       0,     0,     0,     0,     0,   -48,   -57,   -48,   -48,   -48,
     -48,   -48,   -47,   181,   -47,   -47,   -47,   -47,   -47,     0,
     181,   -48,     0,   -55,   -55,   -55,   -55,   -55,   -47,   -55,
     -55,     0,     0,     0,     0,     0,    63,     0,   -55,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -59,   -60,   -60,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -60,   -50,    76,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -50,   -52,   -52,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -52,   -54,   -54,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -54,   -53,   -53,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -53,   -58,   -58,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -58,   -56,   -56,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -56,   -49,    76,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -49,   -51,   -51,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -51,   -57,   -57,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -57,   -55,   -55,     0,     0,     0,
       0,     0,   161,   -55,   -59,   -59,   -59,   -59,   -59,     0,
     -59,   -59,     0,   -60,   -60,   -60,   -60,   -60,   -59,   -60,
     -60,     0,   -50,   -50,   -50,   -50,   -50,   -60,   -50,   169,
       0,   -52,   -52,   -52,   -52,   -52,   -50,   -52,   -52,     0,
     -54,   -54,   -54,   -54,   -54,   -52,   -54,   -54,     0,   -53,
     -53,   -53,   -53,   -53,   -54,   -53,   -53,     0,   -58,   -58,
     -58,   -58,   -58,   -53,   -58,   -58,     0,   -56,   -56,   -56,
     -56,   -56,   -58,   -56,   -56,     0,   -49,   -49,   -49,   -49,
     -49,   -56,   -49,   169,     0,   -51,   -51,   -51,   -51,   -51,
     -49,   -51,   -51,     0,   -57,   -57,   -57,   -57,   -57,   -51,
     -57,   -57,     0,   -48,   -48,   -48,   -48,   -48,   -57,   168,
     -47,   -47,   -47,   -47,   -47,     0,   168,   -48,   -45,   -45,
     -45,   167,   -45,     0,   -47,     0,     0,    25,     0,     0,
      26,    27,   -45,    28,    29,    30,   134,   -25,     0,   135,
     136,     0,   137,   138,   139,    86,   119,     0,     0,   120,
     121,     0,   122,   123,   124,   -25,   134,     0,     0,   135,
     136,     0,   137,   138,   139,   189,   134,     0,     0,   135,
     136,     0,   137,   138,   139,   200,   119,     0,     0,   120,
     121,    83,   122,   123,   124,   119,     0,     0,   120,   121,
       0,   122,   123,   124,    25,     0,     0,    26,    27,     0,
      28,    59,    30,   134,     0,     0,   135,   136,     0,   137,
     138,   139,   119,     0,     0,   120,   121,     0,   122,   157,
     124,   134,     0,     0,   135,   136,     0,   137,   170,   139
};

static const yytype_int16 yycheck[] =
{
      26,    31,    53,     0,    30,     9,    12,     4,     0,     1,
      12,    12,    98,    12,    11,    14,    15,     9,    12,    18,
      18,    18,    28,    99,    28,   111,    28,    28,    54,    28,
     116,    29,    58,     3,    28,    27,   112,    63,     8,     9,
      10,    11,    26,     0,    12,    12,    14,    15,    78,    19,
      18,    18,    22,    23,   105,    25,    26,    27,    12,     3,
      28,    28,    18,   161,     8,     9,    10,    11,    26,    29,
       3,     9,    12,    29,    28,    19,   174,   103,    22,    23,
     110,    25,    26,    27,    12,     3,   112,    30,    28,    12,
      12,    14,    14,   119,   120,    18,    18,    27,   124,    26,
      28,    98,   153,    12,    18,    28,    28,    12,   134,   135,
      12,    54,    14,   139,    28,    58,    18,    14,    15,    28,
      63,    18,    29,    28,    22,    23,    28,    25,    26,    27,
      12,    27,    29,    76,   160,   161,    18,   163,   164,   165,
     166,   167,   168,   169,    27,    29,    28,   173,   174,    27,
     176,   177,   178,   179,   180,   181,   182,   187,    14,    14,
     103,    29,    18,    18,    12,    22,    14,    15,    16,   112,
      18,    29,    28,    30,    29,    29,   119,   111,    29,    14,
      28,   124,   116,    18,    12,    13,    14,    15,    16,    17,
      18,   134,    20,    21,    29,    28,   139,    54,    55,    27,
      28,    58,    18,    28,    14,    15,    63,    19,    18,    29,
      22,    23,    28,    25,    26,    27,    30,   160,   161,    29,
     163,   164,   165,   166,   167,   168,   169,    29,    14,    28,
     173,   174,    18,   176,   177,   178,   179,   180,   181,   182,
      54,    98,    99,    29,    58,    28,   103,     4,     5,    63,
       7,     8,     9,    10,    11,   112,    14,    15,    16,    17,
      18,    75,    19,    28,    28,    22,    23,   124,    25,    26,
      27,    29,     4,     5,     6,     7,     8,     9,    10,    11,
      29,    29,   139,    25,    29,    29,    26,    19,    30,   103,
      22,    23,    29,    25,    26,    27,    29,    12,   112,    14,
      15,    16,    17,    18,   161,   119,     0,     1,    30,    29,
     124,    30,    54,    28,    28,     9,    58,   174,    29,    29,
     134,    63,    14,    15,    16,   139,    18,    12,    70,    14,
      15,    16,    54,    18,    14,    54,    58,    29,    18,    58,
      62,    63,    28,    28,    63,    28,   160,   161,    28,   163,
     164,   165,   166,   167,   168,    74,     4,    98,    -1,   173,
     174,   103,   176,   177,   178,   179,   180,   181,    98,    -1,
     112,    13,    14,    15,    16,    17,    18,   119,    20,    21,
      30,   103,   124,    -1,   103,    27,    -1,    29,    -1,    -1,
     112,    -1,   134,   112,    14,    15,    16,   139,    18,    -1,
     119,    -1,   124,    -1,    54,   124,    -1,    -1,    58,    29,
      -1,    -1,    -1,    63,    -1,   134,    -1,   139,   160,   161,
     139,   163,    -1,    73,    12,    -1,    14,    15,    16,    17,
      18,   173,   174,    23,   176,    25,    26,    27,   160,   161,
      28,   160,   161,    -1,   163,   164,   165,   166,   167,    30,
      -1,   173,   174,   103,   173,   174,    -1,   176,   177,   178,
     179,   180,   112,    14,    15,    16,    17,    18,    30,   119,
      -1,    14,    15,    54,   124,    18,    -1,    58,    29,    14,
      15,    16,    63,    18,   134,    28,    14,    15,    16,   139,
      18,    72,    54,    28,    -1,    -1,    58,    -1,     0,     1,
      28,    63,    14,    15,    16,    17,    18,     9,    20,    71,
     160,   161,    -1,   163,   164,   165,   166,    29,    -1,    -1,
      -1,    -1,   103,   173,   174,    -1,   176,   177,   178,   179,
      -1,   112,    13,    14,    15,    16,    17,    18,   119,    20,
      21,   103,    -1,   124,    -1,    14,    27,    28,    -1,    18,
     112,     0,     1,   134,     0,     1,    -1,   119,   139,    28,
       9,    -1,   124,     9,    -1,    12,    -1,    14,    15,    16,
      17,    18,   134,    20,    21,    -1,    -1,   139,    -1,   160,
     161,    28,   163,   164,   165,    14,    15,    16,    17,    18,
      -1,    20,   173,   174,    -1,   176,   177,   178,   160,   161,
      29,   163,   164,     4,     5,     6,     7,     8,     9,    10,
      11,   173,   174,    -1,   176,   177,    -1,    -1,    19,    -1,
      -1,    22,    23,    -1,    25,    26,    27,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     1,    -1,     0,     1,
      -1,    -1,    19,    -1,     9,    22,    23,     9,    25,    26,
      27,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       1,    -1,     0,     1,    -1,    -1,    19,    -1,     9,    22,
      23,     9,    25,    26,    27,     4,     5,     6,     7,     8,
       9,    10,    11,     0,     1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,     9,    22,    23,    -1,    25,    26,    27,     4,
       5,     6,     7,     8,     9,    10,    11,    22,    23,    -1,
      25,    26,    27,    -1,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    14,    15,    -1,    19,    18,
      -1,    22,    23,    -1,    25,    26,    27,     4,     5,    28,
       7,     8,     9,    10,    11,    22,    23,    -1,    25,    26,
      27,    -1,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,     4,     5,    -1,     7,     8,     9,    10,    11,    23,
      -1,    25,    26,    27,    -1,    -1,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,     4,     5,    -1,     7,     8,
       9,    10,    11,    23,    -1,    25,    26,    27,    -1,    -1,
      19,    -1,    -1,    22,    23,    -1,    25,    26,    27,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    23,    -1,    25,    26,    27,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    23,    -1,    25,    26,    27,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    23,    -1,    25,    26,    27,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    23,    -1,    25,    26,    27,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    23,    -1,    25,    26,    27,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,     5,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    14,    15,
      16,    17,    18,    27,    28,    12,    -1,    14,    15,    16,
      17,    18,    28,    20,    21,    -1,    -1,    -1,    -1,    -1,
      12,    28,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    12,    28,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      12,    28,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    12,    28,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      12,    28,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    12,    28,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      12,    28,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    12,    28,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      12,    28,    14,    15,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    12,    28,    14,    15,    16,
      17,    18,    12,    20,    14,    15,    16,    17,    18,    -1,
      20,    28,    -1,    14,    15,    16,    17,    18,    28,    20,
      21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    14,
      15,    16,    17,    18,    -1,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    14,
      15,    16,    17,    18,    29,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    14,    15,    16,    17,    18,    -1,
      20,    21,    -1,    14,    15,    16,    17,    18,    28,    20,
      21,    -1,    14,    15,    16,    17,    18,    28,    20,    21,
      -1,    14,    15,    16,    17,    18,    28,    20,    21,    -1,
      14,    15,    16,    17,    18,    28,    20,    21,    -1,    14,
      15,    16,    17,    18,    28,    20,    21,    -1,    14,    15,
      16,    17,    18,    28,    20,    21,    -1,    14,    15,    16,
      17,    18,    28,    20,    21,    -1,    14,    15,    16,    17,
      18,    28,    20,    21,    -1,    14,    15,    16,    17,    18,
      28,    20,    21,    -1,    14,    15,    16,    17,    18,    28,
      20,    21,    -1,    14,    15,    16,    17,    18,    28,    20,
      14,    15,    16,    17,    18,    -1,    20,    28,    14,    15,
      16,    17,    18,    -1,    28,    -1,    -1,    19,    -1,    -1,
      22,    23,    28,    25,    26,    27,    19,    29,    -1,    22,
      23,    -1,    25,    26,    27,    28,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    28,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    28,    19,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    28,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    19,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    19,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    19,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    19,    -1,    -1,    22,    23,    -1,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     9,    31,    32,    33,    34,    47,    26,     0,
      33,    27,     9,    28,    35,    47,    26,     3,    12,    28,
       5,     7,     8,    10,    11,    19,    22,    23,    25,    26,
      27,    36,    37,    38,    39,    41,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    47,     3,    27,    27,    48,    27,    27,    26,
      50,    57,    13,    27,    48,     4,    37,    29,    29,    29,
      18,    14,    15,    16,    17,    20,    21,    29,    36,    48,
      42,    48,    26,    24,    48,    49,    28,    48,    58,    28,
      50,    51,    52,    53,    54,    55,    56,     4,    28,    29,
      28,    28,    28,    12,    28,     3,    40,    43,    42,    48,
      36,     6,    29,     4,    40,    42,    28,    40,     9,    19,
      22,    23,    25,    26,    27,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    19,    22,    23,    25,    26,    27,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    44,
      47,    48,    59,     3,    43,    48,    26,    26,    50,    57,
      13,    27,    48,    18,    14,    15,    16,    17,    20,    21,
      26,    50,    57,    13,    27,    48,    18,    14,    15,    16,
      17,    20,    21,    29,    29,    29,    29,    36,    49,    28,
      58,    28,    50,    51,    52,    53,    54,    55,    56,    49,
      28,    58,    28,    50,    51,    52,    53,    54,    55,    56,
       4,    28,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    31,    32,    32,    33,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    37,    38,    38,    39,
      39,    40,    40,    41,    42,    42,    43,    43,    43,    43,
      44,    44,    45,    46,    46,    47,    48,    48,    49,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     8,
       7,     3,     1,     2,     1,     1,     1,     1,     1,     5,
       7,     3,     1,     9,     1,     0,     2,     2,     2,     2,
       1,     1,     4,     4,     4,     2,     3,     1,     2,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     2,     1,     1,     3,     4,     3,     1,
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

#line 1566 "./src/sintaxe.tab.c"

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

#line 180 "./src/sintaxe.y"


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

        if(num_erros_lexicos == 0)
            printf("Sem erros lexicos\n");
        else
            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);

        if(num_erros_sintaticos == 0)
            printf("Sem erros sintaticos\n");
        else
            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
    }
    fclose(yyin);
}
