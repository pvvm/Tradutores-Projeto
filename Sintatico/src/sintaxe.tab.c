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
  YYSYMBOL_ARIT_OP_BAIXA = 20,             /* ARIT_OP_BAIXA  */
  YYSYMBOL_ARIT_OP_ALTA = 21,              /* ARIT_OP_ALTA  */
  YYSYMBOL_LOG_OP_UN = 22,                 /* LOG_OP_UN  */
  YYSYMBOL_CONST_INT = 23,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 24,               /* CONST_FLOAT  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_NIL = 26,                       /* NIL  */
  YYSYMBOL_ID = 27,                        /* ID  */
  YYSYMBOL_ABRE_P = 28,                    /* ABRE_P  */
  YYSYMBOL_FECHA_P = 29,                   /* FECHA_P  */
  YYSYMBOL_ABRE_C = 30,                    /* ABRE_C  */
  YYSYMBOL_FECHA_C = 31,                   /* FECHA_C  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_declarations = 34,              /* declarations  */
  YYSYMBOL_declaration = 35,               /* declaration  */
  YYSYMBOL_function = 36,                  /* function  */
  YYSYMBOL_parameters = 37,                /* parameters  */
  YYSYMBOL_moreStmt = 38,                  /* moreStmt  */
  YYSYMBOL_stmt = 39,                      /* stmt  */
  YYSYMBOL_multLineStmt = 40,              /* multLineStmt  */
  YYSYMBOL_conditional = 41,               /* conditional  */
  YYSYMBOL_bracesStmt = 42,                /* bracesStmt  */
  YYSYMBOL_iteration = 43,                 /* iteration  */
  YYSYMBOL_expIte = 44,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 45,               /* oneLineStmt  */
  YYSYMBOL_io = 46,                        /* io  */
  YYSYMBOL_varDecl = 47,                   /* varDecl  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    90,    93,    94,    97,    98,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   133,   134,   137,   138,   139,   140,
     143,   144,   145,   149,   150,   153,   154,   157,   158,   159,
     162,   163,   166,   167,   170,   171,   174,   175,   178,   179,
     182,   183,   186,   187,   190,   191,   192,   193,   194,   195,
     196,   199,   200,   203
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
  "LIST_OP_UN", "ARIT_OP_BAIXA", "ARIT_OP_ALTA", "LOG_OP_UN", "CONST_INT",
  "CONST_FLOAT", "STRING", "NIL", "ID", "ABRE_P", "FECHA_P", "ABRE_C",
  "FECHA_C", "$accept", "program", "declarations", "declaration",
  "function", "parameters", "moreStmt", "stmt", "multLineStmt",
  "conditional", "bracesStmt", "iteration", "expIte", "oneLineStmt", "io",
  "varDecl", "attribuition", "expList", "expLogic", "andLogic", "expComp",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
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
      96,   263,    -2,    11,   265,   285,   342,    47,   -13,    62,
     -99,   421,   480,    -3,   105,   -11,     4,    23,   349,    30,
       0,    10,    33,  1591,    37,    63,  1657,  1040,  1468,  1478,
    1488,  1235,  1601,   271,   440,   759,   786,   797,   824,    76,
      88,   115,   188,   303,   443,  1091,   594,   482,  1498,  1508,
    1518,   116,    39,   349,  1601,   608,   117,   127,  1521,  1262,
    1139,  1538,  1611,  1417,   103,   519,   835,   862,   873,   900,
    1657,  1657,  1657,  1657,  1657,  1657,  1657,   911,   938,   148,
     166,   178,   164,   168,   199,   202,  1548,   120,   154,  1558,
    1155,  1123,  1107,  1674,  1658,  1568,  1578,   587,   185,   608,
     229,   250,   256,  1621,  1588,   349,   595,   639,   259,   155,
     949,  1063,  1428,   668,   976,   223,  1063,   987,     1,     2,
    1671,  1243,  1287,  1297,  1307,  1244,  1601,   112,    -6,   316,
     517,   541,  1405,  1317,  1327,  1337,  1678,  1270,    66,   240,
     495,   290,  1601,    87,   108,     6,   321,   153,  1217,  1081,
    1097,  1113,   270,   275,   276,   279,   349,  1014,   280,   273,
     170,   293,   300,  1271,   422,  1347,  1631,  1439,   294,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,    28,   401,  1129,  1641,
    1450,   296,  1678,  1678,  1678,  1678,  1678,  1678,  1678,   679,
     708,   719,   748,  1025,   174,   310,   220,  1357,   187,  1367,
     423,   396,   525,   561,  1413,  1377,  1387,    95,  1145,   208,
    1161,   409,    40,   367,   207,  1225,  1177,  1193,  1052,  1397,
    1209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   324,   -99,   -99,   -52,   -31,   -99,   -99,
     -98,   -99,   -10,   -38,   242,     3,     9,     8,   147,   471,
     402,   381,   306,   221,    60,   -27,   -42,   246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    16,    33,    34,    35,    36,
     106,    37,    80,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    88,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    78,    66,     7,   118,   135,     8,     7,   170,   159,
     161,    10,   -39,   114,    14,    19,    17,   -41,   117,    18,
     -41,   184,    52,   -39,   -41,     9,    15,   135,   160,   162,
      53,   135,    56,    20,   -12,   -41,   151,   118,    54,   -54,
     127,    64,   -54,   -54,   -54,   -54,   -54,    66,   -54,   -54,
     -11,   -40,   -12,   110,   -40,   184,   180,   -54,   -40,    12,
     107,    55,   127,    79,    81,    57,   127,    84,   -11,   -40,
      85,   143,    87,   157,   -33,    13,   151,   -58,   157,    66,
     -58,   -58,   -58,   -58,   -58,   135,   -58,   -58,    67,   108,
     -33,    58,   134,   135,   165,   -58,    -3,     1,   -36,   135,
      68,   153,   115,     2,   193,   182,   -35,   154,    81,   151,
     178,   143,   109,   182,   134,   135,   -36,   -34,   134,   -39,
     127,   158,   183,   150,   -35,   198,   -39,    69,    77,   -63,
     169,   -62,    89,   -34,   127,   168,    96,   -39,   209,   135,
     151,   -36,   135,   135,   135,   135,   135,   135,   135,   -62,
     127,   181,   151,   151,    82,   151,   151,   151,   151,   151,
     151,   151,    66,   150,   -45,   103,   -61,   -45,   -45,   -45,
     186,   -45,   134,    60,   196,   143,    87,    98,    99,   128,
     134,   -33,   -45,   104,   -61,   -34,   134,   207,   143,    87,
     -24,    23,   119,   100,    24,    25,   150,   101,   103,   -33,
     -36,   128,   134,   -34,    26,   128,    70,    27,    28,    29,
     144,    30,    31,    32,   -35,   105,   219,    90,   -44,   103,
      70,   -44,   -44,   -44,   186,   -44,   134,   150,   102,   134,
     134,   134,   134,   134,   134,   206,   -44,   220,   169,   150,
     150,   -30,   150,   150,   150,   150,   150,   150,   217,   -35,
     144,   -59,   116,   133,   -59,   -59,   -59,   -59,   -59,   128,
     -59,   -59,   -32,    -8,    -8,    -2,     1,   164,   -31,   -59,
      -8,   112,     2,   128,    21,   133,    22,    23,   119,   133,
      24,    25,   189,   177,   149,    -5,    -5,   190,   191,   128,
      26,   192,    -5,    27,    28,    29,    95,    30,    31,    32,
     194,   -54,    65,   179,   -54,   -54,   -54,   -54,   -54,   -24,
     -54,   -54,   -33,   128,   144,   -39,   200,    71,   180,   -54,
     195,   -39,   -34,   199,   149,   210,   144,   144,    11,   211,
     -41,   171,   -43,   133,   -41,   -43,   -43,   185,   132,   -43,
     152,   133,    -6,    -6,   155,   -41,     0,   133,     0,    -6,
     -43,     0,    21,     0,    22,    23,   119,   149,    24,    25,
     132,     0,     0,   133,   132,     0,     0,     0,    26,   148,
       0,    27,    28,    29,     0,    30,    31,    32,   -42,     0,
      94,   -42,   -42,   185,     0,   -42,     0,   133,   149,     0,
     133,   133,   133,   133,   133,   205,   -42,     0,     0,     0,
     149,   149,     0,   149,   149,   149,   149,   149,   216,   148,
     -40,   171,   -37,   131,   -40,   183,     0,     0,   132,   -37,
     -38,    -4,    -4,   183,     0,   -40,   132,   -38,    -4,     0,
     -37,     0,   132,     0,   130,   131,   170,   170,   -38,   131,
     -37,   -38,   148,   -14,   147,   -14,   -14,   -14,   132,   -14,
     -14,   -37,   -38,     0,    93,   -41,   130,   -41,    72,   -14,
     130,   -41,   -14,   -14,   -14,   146,   -14,   -14,   -14,     0,
       0,   -14,   132,   148,    92,   132,   132,   132,   132,   204,
      -7,    -7,     0,     0,   147,   148,   148,    -7,   148,   148,
     148,   148,   215,   131,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   131,    75,   129,     0,   146,   -60,   131,     0,   -60,
     -60,   -60,   -60,   -60,   130,   -60,   -60,   147,     0,   -10,
     -10,     0,   130,   131,   -60,   129,   -10,     0,   130,   129,
       0,   -43,   -43,   172,   145,   -43,     0,     0,   146,   -42,
     -42,   172,    91,   -42,   130,     0,   -43,   131,   147,     0,
     131,   131,   131,   203,   -42,   -45,   -45,   -45,   173,   -45,
     147,   147,     0,   147,   147,   147,   214,     0,   130,   146,
     -45,   130,   130,   202,   145,   -44,   -44,   -44,   173,   -44,
       0,   146,   146,   129,   146,   146,   213,    -9,    -9,     0,
     -44,   129,     0,     0,    -9,     0,     0,   129,   -19,   111,
     -19,   -19,   -19,     0,   -19,   -19,   -45,   145,   -45,   -45,
     -45,    74,   -45,   129,   -19,     0,     0,   -19,   -19,   -19,
     -25,   -19,   -19,   -19,     0,     0,   -19,    26,     0,     0,
      27,    28,    29,     0,    30,    31,    32,   129,   145,     0,
     129,   201,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     145,   145,     0,   145,   212,     0,     0,     0,   -22,     0,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,     0,
     -22,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -21,   -28,   -28,
     -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -28,   -21,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,     0,
     -28,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -26,   -27,   -27,
     -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -27,   -26,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,     0,
     -27,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,
       0,     0,   -16,     0,   -16,   -16,   -16,   -29,   -16,   -16,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -16,   -29,
       0,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,   -17,
     -16,   -17,   -17,   -17,     0,   -17,   -17,     0,     0,     0,
     -18,     0,   -18,   -18,   -18,   -17,   -18,   -18,   -17,   -17,
     -17,     0,   -17,   -17,   -17,     0,   -18,   -17,     0,   -18,
     -18,   -18,     0,   -18,   -18,   -18,     0,   -15,   -18,   -15,
     -15,   -15,     0,   -15,   -15,     0,     0,     0,   -13,     0,
     -13,   -13,   -13,   -15,   -13,   -13,   -15,   -15,   -15,     0,
     -15,   -15,   -15,     0,   -13,   -15,     0,   -13,   -13,   -13,
       0,   -13,   -13,   -13,     0,   -28,   -13,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,     0,   -26,     0,   -26,   -26,
     -26,   -28,   -26,   -26,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,   -26,   -28,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -27,   -26,   -27,   -27,   -27,     0,   -27,
     -27,     0,     0,     0,   -29,     0,   -29,   -29,   -29,   -27,
     -29,   -29,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -29,   -27,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,    21,   -29,    22,    23,   119,     0,    24,    25,     0,
       0,     0,    21,     0,    22,    23,   119,    26,    24,    25,
      27,    28,    29,     0,    30,    31,    32,     0,    26,    97,
       0,    27,    28,    29,     0,    30,    31,    32,     0,   -20,
     113,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,     0,
     -23,     0,   -23,   -23,   -23,   -20,   -23,   -23,   -20,   -20,
     -20,     0,   -20,   -20,   -20,     0,   -23,   -20,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -22,   -23,   -22,
     -22,   -22,     0,   -22,   -22,     0,     0,     0,    21,     0,
      22,    23,   119,   -22,    24,    25,   -22,   -22,   -22,     0,
     -22,   -22,   -22,     0,    26,   -22,     0,    27,    28,    29,
       0,    30,    31,    32,     0,   -21,   218,   -21,   -21,   -21,
       0,   -21,   -21,    28,    29,     0,    30,    59,    32,    23,
     119,   -21,    24,    25,   -21,   -21,   -21,     0,   -21,   -21,
     -21,     0,    26,   -21,     0,    27,    28,    29,     0,    30,
      31,    32,   -49,   156,     0,   -49,   -49,   -49,   -49,   -49,
       0,   -49,   188,   -43,     0,   -43,   -43,    73,   -51,   -43,
     -49,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -42,
       0,   -42,   -42,    73,   -53,   -42,   -51,   -53,   -53,   -53,
     -53,   -53,     0,   -53,   -53,   -40,     0,   -40,    72,     0,
     -52,   -40,   -53,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -52,   -37,     0,    71,     0,     0,   -57,   -37,   -52,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -38,     0,    71,
       0,     0,   -55,   -38,   -57,   -55,   -55,   -55,   -55,   -55,
       0,   -55,   -55,     0,     0,     0,     0,     0,   -48,     0,
     -55,   -48,   -48,   -48,   -48,   -48,     0,   -48,   188,     0,
       0,     0,     0,     0,   -50,     0,   -48,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,     0,     0,     0,     0,     0,
     -56,     0,   -50,   -56,   -56,   -56,   -56,   -56,   -47,   -56,
     -56,   -47,   -47,   -47,   -47,   -47,   -46,   187,   -56,   -46,
     -46,   -46,   -46,   -46,     0,   187,   -47,   -54,    62,   -54,
     -54,   -54,   -54,   -54,   -46,   -54,   -54,   166,   -54,   -54,
     -54,   -54,   -54,    63,   -54,   -54,   122,   123,     0,   124,
     163,   126,   167,   -54,   -54,     0,   -54,   -54,   -54,   -54,
     -54,     0,   -54,   -54,     0,   -54,   -54,   -54,   -54,   -54,
      63,   -54,   -54,   138,   139,     0,   140,   176,   142,   167,
     -54,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -58,   -59,   -59,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -59,   -60,   -60,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -60,   -49,   175,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -49,   -51,   -51,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -51,   -53,   -53,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -53,   -52,   -52,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -52,   -57,   -57,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -57,   -55,   -55,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -55,   -48,   175,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -48,   -50,   -50,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -50,   -56,   -56,   -47,
     -47,   -47,   -47,   -47,     0,   174,   -56,   -46,   -46,   -46,
     -46,   -46,     0,   174,   -47,     0,   136,     0,     0,   137,
     138,   139,   -46,   140,   141,   142,    86,   120,     0,     0,
     121,   122,   123,     0,   124,   125,   126,   -25,   136,     0,
       0,   137,   138,   139,     0,   140,   141,   142,   197,   136,
       0,     0,   137,   138,   139,     0,   140,   141,   142,   208,
     -58,     0,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -59,     0,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -60,     0,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,   -49,    76,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -53,     0,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,
     120,     0,     0,   121,   122,   123,    83,   124,   125,   126,
     -52,     0,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,
     -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -55,     0,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,
     -48,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,    76,
     -50,     0,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -56,     0,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,
      26,     0,     0,    27,    28,    29,     0,    30,    31,    32,
     120,     0,     0,   121,   122,   123,     0,   124,   125,   126,
      26,     0,     0,    27,    28,    29,     0,    30,    59,    32,
     136,     0,     0,   137,   138,   139,     0,   140,   141,   142,
     120,     0,     0,   121,   122,   123,     0,   124,   163,   126,
     136,     0,     0,   137,   138,   139,     0,   140,   176,   142,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,    75,    27,
      28,    29,     0,    30,    59,    32,   -44,     0,   -44,   -44,
     -44,    74,   -44,   121,   122,   123,     0,   124,   163,   126,
     137,   138,   139,     0,   140,   176,   142
};

static const yytype_int16 yycheck[] =
{
      27,    53,    33,     0,     7,    32,     8,     4,    14,     8,
       8,     0,    18,   111,    27,    11,    13,    11,   116,    30,
      14,    15,    19,    29,    18,    27,    29,    54,    27,    27,
      30,    58,    23,    29,    11,    29,    63,     7,    28,    11,
      32,    32,    14,    15,    16,    17,    18,    78,    20,    21,
      11,    11,    29,   105,    14,    15,    28,    29,    18,    12,
      98,    28,    54,    54,    55,    28,    58,    58,    29,    29,
      62,    63,    63,   111,    12,    28,   103,    11,   116,   110,
      14,    15,    16,    17,    18,   112,    20,    21,    12,    99,
      28,    28,    32,   120,   121,    29,     0,     1,    11,   126,
      12,    98,   112,     7,   156,    18,    11,    98,    99,   136,
     137,   103,   103,    18,    54,   142,    29,    12,    58,    11,
     112,   112,    14,    63,    29,   167,    18,    12,    12,    12,
      18,    11,    29,    28,   126,   126,    76,    29,   180,   166,
     167,    29,   169,   170,   171,   172,   173,   174,   175,    29,
     142,   142,   179,   180,    27,   182,   183,   184,   185,   186,
     187,   188,   193,   103,    11,    11,    11,    14,    15,    16,
      17,    18,   112,    26,   166,   167,   167,    29,    12,    32,
     120,    11,    29,    29,    29,    11,   126,   179,   180,   180,
      12,     6,     7,    29,     9,    10,   136,    29,    11,    29,
      12,    54,   142,    29,    19,    58,    18,    22,    23,    24,
      63,    26,    27,    28,    12,    30,    29,    70,    11,    11,
      18,    14,    15,    16,    17,    18,   166,   167,    29,   169,
     170,   171,   172,   173,   174,   175,    29,    29,    18,   179,
     180,    12,   182,   183,   184,   185,   186,   187,   188,    29,
     103,    11,    29,    32,    14,    15,    16,    17,    18,   112,
      20,    21,    12,     0,     1,     0,     1,   120,    12,    29,
       7,    12,     7,   126,     3,    54,     5,     6,     7,    58,
       9,    10,    12,   136,    63,     0,     1,    12,    12,   142,
      19,    12,     7,    22,    23,    24,    75,    26,    27,    28,
      27,    11,    31,    13,    14,    15,    16,    17,    18,    29,
      20,    21,    12,   166,   167,    12,   169,    14,    28,    29,
      27,    18,    12,    29,   103,    29,   179,   180,     4,   182,
      14,    15,    11,   112,    18,    14,    15,    16,    32,    18,
      98,   120,     0,     1,    98,    29,    -1,   126,    -1,     7,
      29,    -1,     3,    -1,     5,     6,     7,   136,     9,    10,
      54,    -1,    -1,   142,    58,    -1,    -1,    -1,    19,    63,
      -1,    22,    23,    24,    -1,    26,    27,    28,    11,    -1,
      74,    14,    15,    16,    -1,    18,    -1,   166,   167,    -1,
     169,   170,   171,   172,   173,   174,    29,    -1,    -1,    -1,
     179,   180,    -1,   182,   183,   184,   185,   186,   187,   103,
      14,    15,    11,    32,    18,    14,    -1,    -1,   112,    18,
      11,     0,     1,    14,    -1,    29,   120,    18,     7,    -1,
      29,    -1,   126,    -1,    32,    54,    14,    14,    29,    58,
      18,    18,   136,     3,    63,     5,     6,     7,   142,     9,
      10,    29,    29,    -1,    73,    12,    54,    14,    15,    19,
      58,    18,    22,    23,    24,    63,    26,    27,    28,    -1,
      -1,    31,   166,   167,    72,   169,   170,   171,   172,   173,
       0,     1,    -1,    -1,   103,   179,   180,     7,   182,   183,
     184,   185,   186,   112,    12,    -1,    14,    15,    16,    17,
      18,   120,    20,    32,    -1,   103,    11,   126,    -1,    14,
      15,    16,    17,    18,   112,    20,    21,   136,    -1,     0,
       1,    -1,   120,   142,    29,    54,     7,    -1,   126,    58,
      -1,    14,    15,    16,    63,    18,    -1,    -1,   136,    14,
      15,    16,    71,    18,   142,    -1,    29,   166,   167,    -1,
     169,   170,   171,   172,    29,    14,    15,    16,    17,    18,
     179,   180,    -1,   182,   183,   184,   185,    -1,   166,   167,
      29,   169,   170,   171,   103,    14,    15,    16,    17,    18,
      -1,   179,   180,   112,   182,   183,   184,     0,     1,    -1,
      29,   120,    -1,    -1,     7,    -1,    -1,   126,     3,     4,
       5,     6,     7,    -1,     9,    10,    12,   136,    14,    15,
      16,    17,    18,   142,    19,    -1,    -1,    22,    23,    24,
      12,    26,    27,    28,    -1,    -1,    31,    19,    -1,    -1,
      22,    23,    24,    -1,    26,    27,    28,   166,   167,    -1,
     169,   170,     3,     4,     5,     6,     7,    -1,     9,    10,
     179,   180,    -1,   182,   183,    -1,    -1,    -1,    19,    -1,
      -1,    22,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    19,     9,    10,
      22,    23,    24,    -1,    26,    27,    28,    -1,    19,    31,
      -1,    22,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    19,     9,    10,
      22,    23,    24,    -1,    26,    27,    28,    -1,    19,    31,
      -1,    22,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,    19,     9,    10,
      22,    23,    24,    -1,    26,    27,    28,    -1,    19,    31,
      -1,    22,    23,    24,    -1,    26,    27,    28,    -1,     3,
      31,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,    19,     9,    10,    22,    23,
      24,    -1,    26,    27,    28,    -1,    19,    31,    -1,    22,
      23,    24,    -1,    26,    27,    28,    -1,     3,    31,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,     3,    -1,
       5,     6,     7,    19,     9,    10,    22,    23,    24,    -1,
      26,    27,    28,    -1,    19,    31,    -1,    22,    23,    24,
      -1,    26,    27,    28,    -1,     3,    31,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,    19,     9,    10,    22,    23,    24,    -1,    26,    27,
      28,    -1,    19,    31,    -1,    22,    23,    24,    -1,    26,
      27,    28,    -1,     3,    31,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,     3,    -1,     5,     6,     7,    19,
       9,    10,    22,    23,    24,    -1,    26,    27,    28,    -1,
      19,    31,    -1,    22,    23,    24,    -1,    26,    27,    28,
      -1,     3,    31,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,    19,     9,    10,
      22,    23,    24,    -1,    26,    27,    28,    -1,    19,    31,
      -1,    22,    23,    24,    -1,    26,    27,    28,    -1,     3,
      31,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,    19,     9,    10,    22,    23,
      24,    -1,    26,    27,    28,    -1,    19,    31,    -1,    22,
      23,    24,    -1,    26,    27,    28,    -1,     3,    31,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,     3,    -1,
       5,     6,     7,    19,     9,    10,    22,    23,    24,    -1,
      26,    27,    28,    -1,    19,    31,    -1,    22,    23,    24,
      -1,    26,    27,    28,    -1,     3,    31,     5,     6,     7,
      -1,     9,    10,    23,    24,    -1,    26,    27,    28,     6,
       7,    19,     9,    10,    22,    23,    24,    -1,    26,    27,
      28,    -1,    19,    31,    -1,    22,    23,    24,    -1,    26,
      27,    28,    11,    30,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    12,    -1,    14,    15,    16,    11,    18,
      29,    14,    15,    16,    17,    18,    -1,    20,    21,    12,
      -1,    14,    15,    16,    11,    18,    29,    14,    15,    16,
      17,    18,    -1,    20,    21,    12,    -1,    14,    15,    -1,
      11,    18,    29,    14,    15,    16,    17,    18,    -1,    20,
      21,    12,    -1,    14,    -1,    -1,    11,    18,    29,    14,
      15,    16,    17,    18,    -1,    20,    21,    12,    -1,    14,
      -1,    -1,    11,    18,    29,    14,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      29,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    29,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    29,    14,    15,    16,    17,    18,    11,    20,
      21,    14,    15,    16,    17,    18,    11,    20,    29,    14,
      15,    16,    17,    18,    -1,    20,    29,    12,    13,    14,
      15,    16,    17,    18,    29,    20,    21,    13,    14,    15,
      16,    17,    18,    28,    20,    21,    23,    24,    -1,    26,
      27,    28,    28,    29,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    14,    15,    16,    17,    18,
      28,    20,    21,    23,    24,    -1,    26,    27,    28,    28,
      29,    14,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    -1,
      -1,    14,    15,    16,    17,    18,    29,    20,    21,    14,
      15,    16,    17,    18,    -1,    20,    29,    14,    15,    16,
      17,    18,    -1,    20,    29,    -1,    19,    -1,    -1,    22,
      23,    24,    29,    26,    27,    28,    29,    19,    -1,    -1,
      22,    23,    24,    -1,    26,    27,    28,    29,    19,    -1,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    19,
      -1,    -1,    22,    23,    24,    -1,    26,    27,    28,    29,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      19,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    22,
      23,    24,    -1,    26,    27,    28,    12,    -1,    14,    15,
      16,    17,    18,    22,    23,    24,    -1,    26,    27,    28,
      22,    23,    24,    -1,    26,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    33,    34,    35,    36,    47,     8,    27,
       0,    35,    12,    28,    27,    29,    37,    47,    30,    11,
      29,     3,     5,     6,     9,    10,    19,    22,    23,    24,
      26,    27,    28,    38,    39,    40,    41,    43,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    47,    30,    28,    28,    48,    28,    28,    27,
      50,    57,    13,    28,    48,    31,    39,    12,    12,    12,
      18,    14,    15,    16,    17,    20,    21,    12,    38,    48,
      44,    48,    27,    25,    48,    49,    29,    48,    58,    29,
      50,    51,    52,    53,    54,    55,    56,    31,    29,    12,
      29,    29,    29,    11,    29,    30,    42,    45,    44,    48,
      38,     4,    12,    31,    42,    44,    29,    42,     7,     7,
      19,    22,    23,    24,    26,    27,    28,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    19,    22,    23,    24,
      26,    27,    28,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    46,    47,    48,    59,    30,    45,    48,     8,
      27,     8,    27,    27,    50,    57,    13,    28,    48,    18,
      14,    15,    16,    17,    20,    21,    27,    50,    57,    13,
      28,    48,    18,    14,    15,    16,    17,    20,    21,    12,
      12,    12,    12,    38,    27,    27,    49,    29,    58,    29,
      50,    51,    52,    53,    54,    55,    56,    49,    29,    58,
      29,    50,    51,    52,    53,    54,    55,    56,    31,    29,
      29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    34,    34,    35,    35,    35,    36,
      36,    37,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    42,    43,    44,    44,    45,    45,    45,    45,
      46,    46,    46,    47,    47,    48,    48,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     7,
       6,     3,     1,     2,     1,     1,     1,     1,     1,     5,
       7,     3,     1,     9,     1,     0,     2,     2,     2,     2,
       4,     4,     4,     2,     3,     3,     1,     2,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     1,     1,     3,     4,     3,     1,     1,
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
#line 1583 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 93 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1589 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 94 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declarations", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1595 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 97 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1601 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 98 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1607 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 99 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("declaration", NULL, NULL, NULL, NULL);}
#line 1613 "./src/sintaxe.tab.c"
    break;

  case 9: /* function: varDecl ABRE_P parameters FECHA_P ABRE_C moreStmt FECHA_C  */
#line 102 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-1].no), NULL);}
#line 1619 "./src/sintaxe.tab.c"
    break;

  case 10: /* function: varDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 103 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("function", (yyvsp[-5].no), (yyvsp[-1].no), NULL, NULL);}
#line 1625 "./src/sintaxe.tab.c"
    break;

  case 11: /* parameters: parameters VIRG varDecl  */
#line 106 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1631 "./src/sintaxe.tab.c"
    break;

  case 12: /* parameters: varDecl  */
#line 107 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("parameters", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1637 "./src/sintaxe.tab.c"
    break;

  case 13: /* moreStmt: moreStmt stmt  */
#line 110 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL, NULL);}
#line 1643 "./src/sintaxe.tab.c"
    break;

  case 14: /* moreStmt: stmt  */
#line 111 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("moreStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1649 "./src/sintaxe.tab.c"
    break;

  case 15: /* stmt: oneLineStmt  */
#line 114 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1655 "./src/sintaxe.tab.c"
    break;

  case 16: /* stmt: multLineStmt  */
#line 115 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("stmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1661 "./src/sintaxe.tab.c"
    break;

  case 17: /* multLineStmt: conditional  */
#line 118 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1667 "./src/sintaxe.tab.c"
    break;

  case 18: /* multLineStmt: iteration  */
#line 119 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("multLineStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1673 "./src/sintaxe.tab.c"
    break;

  case 19: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 122 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1679 "./src/sintaxe.tab.c"
    break;

  case 20: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 123 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("conditional", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1685 "./src/sintaxe.tab.c"
    break;

  case 21: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 126 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1691 "./src/sintaxe.tab.c"
    break;

  case 22: /* bracesStmt: oneLineStmt  */
#line 127 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("bracesStmt", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1697 "./src/sintaxe.tab.c"
    break;

  case 23: /* iteration: FOR ABRE_P expIte PV expIte PV expIte FECHA_P bracesStmt  */
#line 130 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo("iteration", (yyvsp[-6].no), (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1703 "./src/sintaxe.tab.c"
    break;

  case 24: /* expIte: attribuition  */
#line 133 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("expIte", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1709 "./src/sintaxe.tab.c"
    break;

  case 25: /* expIte: %empty  */
#line 134 "./src/sintaxe.y"
                                            {(yyval.no) = NULL;}
#line 1715 "./src/sintaxe.tab.c"
    break;

  case 26: /* oneLineStmt: varDecl PV  */
#line 137 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1721 "./src/sintaxe.tab.c"
    break;

  case 27: /* oneLineStmt: attribuition PV  */
#line 138 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1727 "./src/sintaxe.tab.c"
    break;

  case 28: /* oneLineStmt: io PV  */
#line 139 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1733 "./src/sintaxe.tab.c"
    break;

  case 29: /* oneLineStmt: ret PV  */
#line 140 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("oneLineStmt", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1739 "./src/sintaxe.tab.c"
    break;

  case 30: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 143 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("in", NULL, NULL, NULL, NULL);}
#line 1745 "./src/sintaxe.tab.c"
    break;

  case 31: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 144 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1751 "./src/sintaxe.tab.c"
    break;

  case 32: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 145 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("out", NULL, NULL, NULL, NULL);}
#line 1757 "./src/sintaxe.tab.c"
    break;

  case 33: /* varDecl: TIPO ID  */
#line 149 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);}
#line 1763 "./src/sintaxe.tab.c"
    break;

  case 34: /* varDecl: TIPO LIST ID  */
#line 150 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("varDecl", NULL, NULL, NULL, NULL);}
#line 1769 "./src/sintaxe.tab.c"
    break;

  case 35: /* attribuition: ID ATRIB expList  */
#line 153 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1775 "./src/sintaxe.tab.c"
    break;

  case 36: /* attribuition: expList  */
#line 154 "./src/sintaxe.y"
                                            {(yyval.no) = montaNo("attribuition", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1781 "./src/sintaxe.tab.c"
    break;

  case 37: /* expList: LIST_OP_UN expLogic  */
#line 157 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1787 "./src/sintaxe.tab.c"
    break;

  case 38: /* expList: expList LIST_OP_BIN expLogic  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1793 "./src/sintaxe.tab.c"
    break;

  case 39: /* expList: expLogic  */
#line 159 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expList", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1799 "./src/sintaxe.tab.c"
    break;

  case 40: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 162 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1805 "./src/sintaxe.tab.c"
    break;

  case 41: /* expLogic: andLogic  */
#line 163 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1811 "./src/sintaxe.tab.c"
    break;

  case 42: /* andLogic: andLogic LOG_OP_E expComp  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1817 "./src/sintaxe.tab.c"
    break;

  case 43: /* andLogic: expComp  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("andLogic", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1823 "./src/sintaxe.tab.c"
    break;

  case 44: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1829 "./src/sintaxe.tab.c"
    break;

  case 45: /* expComp: expRel  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expComp", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1835 "./src/sintaxe.tab.c"
    break;

  case 46: /* expRel: expRel REL_OP_ALTA expArit  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1841 "./src/sintaxe.tab.c"
    break;

  case 47: /* expRel: expArit  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expRel", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1847 "./src/sintaxe.tab.c"
    break;

  case 48: /* expArit: expArit ARIT_OP_BAIXA expMul  */
#line 178 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1853 "./src/sintaxe.tab.c"
    break;

  case 49: /* expArit: expMul  */
#line 179 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expArit", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1859 "./src/sintaxe.tab.c"
    break;

  case 50: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 182 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1865 "./src/sintaxe.tab.c"
    break;

  case 51: /* expMul: negElement  */
#line 183 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("expMul", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1871 "./src/sintaxe.tab.c"
    break;

  case 52: /* negElement: LOG_OP_UN element  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1877 "./src/sintaxe.tab.c"
    break;

  case 53: /* negElement: element  */
#line 187 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("negElement", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1883 "./src/sintaxe.tab.c"
    break;

  case 54: /* element: ID  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1889 "./src/sintaxe.tab.c"
    break;

  case 55: /* element: ABRE_P attribuition FECHA_P  */
#line 191 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1895 "./src/sintaxe.tab.c"
    break;

  case 56: /* element: ID ABRE_P arguments FECHA_P  */
#line 192 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", (yyvsp[-1].no), NULL, NULL, NULL);}
#line 1901 "./src/sintaxe.tab.c"
    break;

  case 57: /* element: ID ABRE_P FECHA_P  */
#line 193 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1907 "./src/sintaxe.tab.c"
    break;

  case 58: /* element: CONST_INT  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("INTEIROOOOOOOOOO", NULL, NULL, NULL, NULL);}
#line 1913 "./src/sintaxe.tab.c"
    break;

  case 59: /* element: CONST_FLOAT  */
#line 195 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("FLOOOOOOOOOOAT", NULL, NULL, NULL, NULL);}
#line 1919 "./src/sintaxe.tab.c"
    break;

  case 60: /* element: NIL  */
#line 196 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("element", NULL, NULL, NULL, NULL);}
#line 1925 "./src/sintaxe.tab.c"
    break;

  case 61: /* arguments: arguments VIRG attribuition  */
#line 199 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL);}
#line 1931 "./src/sintaxe.tab.c"
    break;

  case 62: /* arguments: attribuition  */
#line 200 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1937 "./src/sintaxe.tab.c"
    break;

  case 63: /* ret: RETURN attribuition  */
#line 203 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("ret", (yyvsp[0].no), NULL, NULL, NULL);}
#line 1943 "./src/sintaxe.tab.c"
    break;


#line 1947 "./src/sintaxe.tab.c"

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

#line 206 "./src/sintaxe.y"


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
