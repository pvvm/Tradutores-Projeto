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
#line 5 "./src/sintaxe.y"

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
int num_args = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(char *);

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
  YYSYMBOL_LOG_OP_NEG = 23,                /* LOG_OP_NEG  */
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
  YYSYMBOL_40_3 = 40,                      /* $@3  */
  YYSYMBOL_41_4 = 41,                      /* $@4  */
  YYSYMBOL_funcDecl = 42,                  /* funcDecl  */
  YYSYMBOL_parameters = 43,                /* parameters  */
  YYSYMBOL_moreStmt = 44,                  /* moreStmt  */
  YYSYMBOL_block = 45,                     /* block  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_conditional = 47,               /* conditional  */
  YYSYMBOL_bracesStmt = 48,                /* bracesStmt  */
  YYSYMBOL_iteration = 49,                 /* iteration  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_iteArgs = 51,                   /* iteArgs  */
  YYSYMBOL_expIte = 52,                    /* expIte  */
  YYSYMBOL_io = 53,                        /* io  */
  YYSYMBOL_varDecl = 54,                   /* varDecl  */
  YYSYMBOL_attribuition = 55,              /* attribuition  */
  YYSYMBOL_expLogic = 56,                  /* expLogic  */
  YYSYMBOL_andLogic = 57,                  /* andLogic  */
  YYSYMBOL_expComp = 58,                   /* expComp  */
  YYSYMBOL_expRel = 59,                    /* expRel  */
  YYSYMBOL_expArit = 60,                   /* expArit  */
  YYSYMBOL_expMul = 61,                    /* expMul  */
  YYSYMBOL_negElement = 62,                /* negElement  */
  YYSYMBOL_expList = 63,                   /* expList  */
  YYSYMBOL_element = 64,                   /* element  */
  YYSYMBOL_arguments = 65,                 /* arguments  */
  YYSYMBOL_ret = 66                        /* ret  */
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
#define YYLAST   2777

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

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
static const yytype_int16 yyrline[] =
{
       0,    85,    85,   102,   105,   106,   110,   111,   112,   117,
     117,   117,   118,   118,   118,   119,   120,   123,   128,   134,
     135,   138,   139,   143,   144,   147,   148,   149,   150,   151,
     152,   153,   160,   162,   164,   167,   168,   171,   172,   172,
     175,   178,   179,   189,   192,   193,   198,   199,   203,   207,
     212,   215,   218,   219,   222,   223,   226,   227,   230,   231,
     234,   235,   236,   239,   240,   243,   244,   245,   248,   249,
     250,   253,   255,   256,   258,   260,   261,   262,   265,   266,
     270
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
  "LOG_OP_NEG", "CONST_INT", "CONST_FLOAT", "STRING", "NIL", "ID",
  "ABRE_P", "FECHA_P", "ABRE_C", "FECHA_C", "$accept", "program",
  "declarations", "declaration", "function", "$@1", "$@2", "$@3", "$@4",
  "funcDecl", "parameters", "moreStmt", "block", "stmt", "conditional",
  "bracesStmt", "iteration", "$@5", "iteArgs", "expIte", "io", "varDecl",
  "attribuition", "expLogic", "andLogic", "expComp", "expRel", "expArit",
  "expMul", "negElement", "expList", "element", "arguments", "ret", YY_NULLPTR
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

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    -6,     7,    53,   307,   312,   317,   -17,     4,   452,
      -5,    61,    92,  -203,   488,     1,   510,    28,    74,    99,
      88,    74,  1873,    14,    16,    63,  1873,    68,  1105,    91,
      96,   410,    97,   108,   804,   532,   532,  2504,  2515,  2526,
    2194,  2629,  1873,  1137,  1169,  1201,  1233,  1265,   136,   154,
     172,     5,    42,   912,   457,  2746,  2647,  2658,  2537,  2548,
     177,   144,   101,    74,   161,  1297,   168,   350,    43,   192,
       2,   117,  2223,  2559,  2570,  2581,  2662,  2449,   175,  1329,
     530,  1361,  1393,  1425,  1457,  2662,  2662,  2662,  2662,  2662,
    2662,  2662,   804,  1489,   157,   160,   179,   586,   188,   195,
     210,   228,   238,   250,   258,   244,   252,   272,   274,   285,
      36,  2592,   209,   256,  2603,  1521,   381,   944,   722,  2756,
    2680,  2691,  2702,  2614,  1873,  1873,  1902,  1931,   290,  1902,
     577,   314,   324,   332,   336,   358,  2706,  2625,  1553,  1585,
    1873,  1617,  1649,   495,  1902,  1681,   360,   261,   616,   646,
    1713,  1902,  1745,  2461,  1777,  1809,   333,    32,   836,   742,
     742,  2250,  2261,  2272,  2204,  2629,    31,   147,   351,   280,
    2437,  2382,  2393,  2283,  2294,   868,   774,   774,   464,   555,
     653,  1950,  2629,   119,    62,    80,    69,  2175,  2115,  2127,
    1967,  1984,   681,   251,   354,  1873,   721,   753,   785,   368,
     377,   382,   386,   373,   334,   394,  2233,  2305,  2316,  2327,
    2717,  2473,   391,  2717,  2717,  2717,  2717,  2717,  2717,  2717,
     836,   525,  2001,  2018,  2035,  2728,  2485,   406,  2728,  2728,
    2728,  2728,  2728,  2728,  2728,   868,   363,   304,  1841,   817,
     849,   881,   913,   429,   164,  2338,   268,  2349,   331,   402,
     385,  2445,  2404,  2415,  2426,  2360,   156,  2052,   281,  2069,
     102,   139,   227,  2183,  2139,  2151,  2163,  2086,   414,   421,
     228,   424,   945,  2371,  2103,  1931,  1931,   425,  1931,   977,
    1009,  1931,  1041,  1073
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,   473,  -203,  -203,  -203,  -203,  -203,  -203,
     435,   -16,   -36,   -93,   -78,   -22,   -26,   213,   253,  -125,
     -12,     0,   -30,    11,   507,   467,   426,   399,   232,   194,
     124,    -2,  -202,    12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,    98,    18,    96,     7,
      24,    43,    44,    45,    46,   142,    47,   128,   102,   103,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   113,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    69,   -12,   105,     8,   146,     9,    81,    -9,   246,
      65,    78,    15,    -3,     1,    11,    16,   -51,    25,    85,
       2,    25,    61,    10,   258,    17,    79,    63,   156,    81,
     106,    20,    73,   141,   196,    12,   141,   100,   104,   174,
     204,   109,    62,    81,   101,   213,    64,   112,   -50,   197,
      85,   141,   166,    13,   -53,   -42,   -53,    86,   141,    22,
     205,   -51,    34,    95,    35,   174,    36,    37,    38,   174,
      39,    40,    41,   -53,   -20,   191,   -53,   229,   166,    63,
     -57,    23,   166,   -57,   -57,   -57,   231,   110,   183,    19,
     123,   -55,   -53,   -20,   -55,   -55,   230,   201,    66,   -57,
     104,   198,    81,    81,   -48,   143,   147,   145,   138,   139,
     -55,   -49,   -48,   -52,    81,   199,   -52,   229,   107,    26,
      67,   -17,   152,   203,   150,    68,    70,   200,   -18,   155,
     -51,   -48,   -52,   228,   191,   212,   158,    71,   159,   202,
     160,   161,   162,   108,   163,   164,   165,   183,    82,   -51,
     -54,   174,   227,   -54,   -54,   230,   207,   174,   174,    74,
      75,   -53,   214,   174,   166,   173,    83,   -50,   -49,   -54,
     228,   -19,    94,   222,   191,   191,   166,   -53,   213,   238,
     174,   112,   196,   196,    84,   196,   -50,   -49,   196,    93,
     -19,   173,   -13,   166,   -50,   173,   112,   197,   197,   -10,
     197,   190,    81,   197,   -80,   114,   269,   104,   174,   191,
     124,   174,   174,   174,   174,   174,   174,   174,   255,   125,
     -79,   244,   183,   191,   191,   126,   191,   191,   191,   191,
     191,   191,   191,   267,   174,   172,   256,   183,   -56,   -79,
     127,   -56,   -56,   -56,   231,   201,   201,   166,   201,   198,
     198,   201,   198,   279,   280,   198,   282,   -56,   -38,   283,
     190,   172,   130,   199,   199,   172,   199,   136,   129,   199,
     -41,   189,   -78,   171,   131,   200,   200,   173,   200,   136,
     236,   200,   132,   208,   209,   122,   137,   202,   202,   173,
     202,   -78,   136,   202,   -57,   -57,   -57,   216,   273,   171,
     223,   224,   133,   171,   134,   270,   173,    -2,     1,   188,
     -57,   274,    -5,    -5,     2,   135,   -42,    -6,    -6,    -5,
     144,   120,   121,    34,    -6,    35,   -46,    36,    37,    38,
     189,    39,    40,    41,   173,   190,   -43,   173,   173,   173,
     173,   173,   173,   173,   -47,   -52,   214,   172,   -45,   190,
     190,    99,   190,   190,   190,   190,   190,   190,   190,   172,
     173,   -52,   243,   -40,   268,   -55,   -55,   215,   188,   158,
     -44,   159,   153,   160,   161,   162,   172,   163,   164,   165,
     239,   -55,   158,   237,   159,   171,   160,   161,   162,   240,
     163,   164,   165,   -52,   241,   -52,    86,   171,   242,   -56,
     -56,   -56,   216,   -41,   172,   189,   -48,   172,   172,   172,
     172,   172,   172,   254,   171,   -56,   -54,   -54,   215,   189,
     189,   247,   189,   189,   189,   189,   189,   189,   266,    34,
     172,    35,   -54,    36,    37,    38,   259,    39,    40,    41,
     170,   -49,   171,   188,   275,   171,   171,   171,   171,   252,
     253,   276,    -8,    -8,   278,   281,    27,   188,   188,    -8,
     188,   188,   188,   188,   264,   265,   170,   169,   171,   -57,
     170,   -57,   -57,   -57,    88,   -75,   187,    14,   -75,   -75,
     -75,   -75,   -75,   277,   -75,   -75,   -75,   119,    -4,    -4,
     271,     0,     0,   169,   -75,    -4,   -32,   169,   -32,   151,
     -32,   -32,   -32,   186,   -32,   -32,     0,     0,   168,     0,
      -7,    -7,     0,   118,   -32,     0,   -32,    -7,   -32,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -16,   -16,     0,     0,   168,   187,   -71,   -16,   168,   -71,
     -71,   -71,   -71,   -71,   185,   -71,   -71,   -71,   167,     0,
       0,    34,   170,   117,   226,   -71,    37,    38,     0,    39,
      72,    41,   186,     0,   170,     0,   -76,     0,     0,   -76,
     -76,   -76,   -76,   -76,   167,   -76,   -76,   -76,   167,   169,
       0,   170,     0,     0,   184,   -76,   -15,   -15,     0,   -42,
       0,   169,   116,   -15,     0,     0,    34,     0,    35,     0,
      36,    37,    38,   185,    39,    40,    41,     0,   169,   170,
     187,     0,   170,   170,   170,   251,   -14,   -14,     0,     0,
     168,     0,     0,   -14,   187,   187,     0,   187,   187,   187,
     263,     0,   168,     0,     0,   170,   169,   186,     0,   169,
     169,   250,     0,   184,     0,     0,   -11,   -11,     0,   168,
       0,   186,   186,   -11,   186,   186,   262,     0,     0,     0,
     167,     0,   169,     0,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   167,   -77,   -77,   -77,     0,   168,   185,     0,
     168,   249,   -31,   -77,   -31,   -31,   -31,   -31,   -31,   167,
     -31,   -31,   185,   185,     0,   185,   261,     0,     0,     0,
     -31,     0,   -31,   168,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,     0,   167,   184,     0,
     248,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   184,   184,   -56,   260,   -56,   -56,   -56,    88,
     -36,     0,   -36,   167,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   158,   -25,   -25,     0,     0,   161,   162,     0,   163,
     206,   165,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   175,   -26,   -26,     0,     0,   178,   179,
       0,   180,   221,   182,   -26,     0,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,    37,    38,
       0,    39,    72,    41,     0,     0,   -29,     0,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     161,   162,     0,   163,   206,   165,     0,     0,   -27,     0,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   178,   179,     0,   180,   221,   182,     0,     0,
     -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -55,     0,   -55,   -55,    87,     0,
       0,     0,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -54,     0,   -54,   -54,
      87,     0,     0,     0,   -35,     0,   -35,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,     0,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,     0,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,     0,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,   -31,     0,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,     0,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,    28,     0,
      29,     0,    30,    31,   157,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,     0,    42,    80,
     -22,     0,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,   -22,     0,
     -22,     0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,     0,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,     0,   -23,   -23,   -25,     0,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -26,     0,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,     0,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,    28,     0,
      29,     0,    30,    31,   157,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,     0,    42,    97,
      28,     0,    29,     0,    30,    31,   157,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     0,    36,    37,    38,     0,    39,    40,    41,     0,
      42,   115,   -21,     0,   -21,     0,   -21,   -21,   -21,     0,
     -21,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,     0,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,     0,   -21,   -21,   -29,     0,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,     0,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -27,     0,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,   -28,     0,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -30,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,     0,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -24,     0,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,     0,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,    28,     0,    29,     0,    30,    31,
     157,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    40,    41,     0,    42,   148,    28,     0,    29,     0,
      30,    31,   157,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,    35,     0,    36,    37,
      38,     0,    39,    40,    41,     0,    42,   149,   -36,     0,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,     0,   -36,     0,
     -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -34,     0,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,     0,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -37,     0,   -37,     0,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,    28,     0,    29,     0,    30,    31,
     157,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    40,    41,     0,    42,   154,   -39,     0,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,     0,   -39,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -35,     0,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,     0,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,
     -33,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,     0,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,    28,     0,    29,     0,    30,    31,   157,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,     0,    42,   272,    28,     0,    29,     0,    30,    31,
     157,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    40,    41,    28,    42,    29,     0,    30,    31,   157,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,   192,   140,   193,     0,   194,    31,   157,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,   -71,   195,   225,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,     0,     0,     0,     0,     0,   -67,   226,
     -71,   -67,   -67,   -67,   -67,   235,     0,   -67,   -67,   -67,
       0,     0,     0,     0,     0,   -70,     0,   -67,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,     0,     0,
       0,     0,   -68,     0,   -70,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,     0,     0,     0,     0,   -66,
       0,   -68,   -66,   -66,   -66,   -66,   235,     0,   -66,   -66,
     -66,     0,     0,     0,     0,     0,   -65,     0,   -66,   -65,
     -65,   -65,   -65,   235,     0,   -65,   -65,   -65,     0,     0,
       0,     0,     0,   -74,     0,   -65,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,     0,     0,     0,     0,
     -72,     0,   -74,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,     0,     0,     0,     0,     0,   -69,     0,   -72,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
       0,     0,     0,     0,   -73,     0,   -69,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -62,     0,     0,   -62,
     -62,   -62,   -62,   -73,     0,   -62,   -62,   234,   -64,     0,
       0,   -64,   -64,   -64,   -64,   -62,     0,   -64,   -64,   -64,
     -60,     0,     0,   -60,   -60,   -60,   -60,   -64,     0,   -60,
     -60,   234,   -61,     0,     0,   -61,   -61,   -61,   -61,   -60,
       0,   -61,   -61,   234,   -63,     0,     0,   -63,   -63,   -63,
     -63,   -61,     0,   -63,   -63,   -63,   -59,     0,     0,   -59,
     -59,   -59,   -59,   -63,   -58,   232,   233,   -58,   -58,   -58,
     -58,     0,     0,   232,   233,   -59,   -71,    76,   -71,   -71,
     -71,   -71,   -71,   -58,   -71,   -71,   -71,   210,   -71,   -71,
     -71,   -71,   -71,    77,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,   211,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,    77,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,   211,   -71,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -75,   -76,   -76,   -76,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -76,   -77,   -77,   -77,     0,     0,   -67,   -67,   -67,
     -67,   220,   -77,   -67,   -67,   -67,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -67,   -70,   -70,   -70,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -70,   -68,   -68,   -68,     0,     0,
     -66,   -66,   -66,   -66,   220,   -68,   -66,   -66,   -66,     0,
       0,   -65,   -65,   -65,   -65,   220,   -66,   -65,   -65,   -65,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -65,   -74,   -74,
     -74,     0,     0,   -72,   -72,   -72,   -72,   -72,   -74,   -72,
     -72,   -72,     0,     0,   -69,   -69,   -69,   -69,   -69,   -72,
     -69,   -69,   -69,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -69,   -73,   -73,   -73,     0,     0,   -62,   -62,   -62,   -62,
       0,   -73,   -62,   -62,   219,     0,     0,   -64,   -64,   -64,
     -64,     0,   -62,   -64,   -64,   -64,     0,     0,   -60,   -60,
     -60,   -60,     0,   -64,   -60,   -60,   219,     0,     0,   -61,
     -61,   -61,   -61,     0,   -60,   -61,   -61,   219,     0,     0,
     -63,   -63,   -63,   -63,     0,   -61,   -63,   -63,   -63,     0,
       0,   -59,   -59,   -59,   -59,     0,   -63,   217,   218,   -58,
     -58,   -58,   -58,     0,     0,   217,   218,   -59,   175,     0,
     176,     0,   177,   178,   179,   -58,   180,   181,   182,   111,
     158,     0,   159,     0,   160,   161,   162,     0,   163,   164,
     165,   -42,   175,     0,   176,     0,   177,   178,   179,     0,
     180,   181,   182,   245,   175,     0,   176,     0,   177,   178,
     179,     0,   180,   181,   182,   257,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -77,     0,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -67,
       0,   -67,   -67,   -67,   -67,    92,     0,   -67,   -67,   -67,
     -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -66,     0,   -66,   -66,   -66,   -66,    92,     0,
     -66,   -66,   -66,   -65,     0,   -65,   -65,   -65,   -65,    92,
       0,   -65,   -65,   -65,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -72,     0,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -69,     0,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -73,     0,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   158,     0,
     159,     0,   160,   161,   162,     0,   163,   164,   165,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,   -62,    91,
     -64,     0,   -64,   -64,   -64,   -64,     0,     0,   -64,   -64,
     -64,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      72,    41,   -60,     0,   -60,   -60,   -60,   -60,     0,     0,
     -60,   -60,    91,   -61,     0,   -61,   -61,   -61,   -61,     0,
       0,   -61,   -61,    91,   -63,     0,   -63,   -63,   -63,   -63,
       0,     0,   -63,   -63,   -63,   175,     0,   176,     0,   177,
     178,   179,     0,   180,   181,   182,   158,     0,   159,     0,
     160,   161,   162,     0,   163,   206,   165,   175,     0,   176,
       0,   177,   178,   179,     0,   180,   221,   182,   -59,     0,
     -59,   -59,   -59,   -59,     0,     0,    89,    90,   -58,     0,
     -58,   -58,   -58,   -58,     0,     0,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,    31,     7,     1,     4,   130,    12,    43,     7,   211,
      26,    41,    29,     0,     1,     8,    12,    12,    18,    14,
       7,    21,     8,    29,   226,    30,    42,    11,   153,    65,
      28,    30,    34,   126,   127,    28,   129,    67,    68,    41,
       8,    71,    28,    79,     1,    14,    30,    77,    12,   127,
      14,   144,    41,     0,    12,    12,    14,    15,   151,    31,
      28,    30,    19,    63,    21,    67,    23,    24,    25,    71,
      27,    28,    29,    11,    11,    77,    14,    15,    67,    11,
      11,     7,    71,    14,    15,    16,    17,    76,    77,    28,
      92,    11,    30,    30,    14,    15,    16,   127,    30,    30,
     130,   127,   138,   139,    12,   127,   136,   129,   124,   125,
      30,    12,    11,    11,   150,   127,    14,    15,     1,    31,
      29,    29,   144,   153,   140,    29,    29,   127,    29,   151,
      11,    30,    30,    14,   136,   165,    19,    29,    21,   127,
      23,    24,    25,    26,    27,    28,    29,   136,    12,    30,
      11,   153,   182,    14,    15,    16,   158,   159,   160,    35,
      36,    14,    15,   165,   153,    41,    12,    11,    11,    30,
      14,    11,    28,   175,   176,   177,   165,    30,    14,   195,
     182,   211,   275,   276,    12,   278,    30,    30,   281,    12,
      30,    67,    31,   182,    30,    71,   226,   275,   276,    31,
     278,    77,   238,   281,    12,    30,   236,   237,   210,   211,
      31,   213,   214,   215,   216,   217,   218,   219,   220,    31,
      11,   210,   211,   225,   226,    30,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    41,   225,   226,    11,    30,
      30,    14,    15,    16,    17,   275,   276,   236,   278,   275,
     276,   281,   278,   275,   276,   281,   278,    30,    30,   281,
     136,    67,    12,   275,   276,    71,   278,    11,    30,   281,
      12,    77,    11,    41,    30,   275,   276,   153,   278,    11,
      29,   281,    30,   159,   160,    91,    30,   275,   276,   165,
     278,    30,    11,   281,    14,    15,    16,    17,    30,    67,
     176,   177,    30,    71,    30,     1,   182,     0,     1,    77,
      30,    30,     0,     1,     7,    30,    12,     0,     1,     7,
      30,    89,    90,    19,     7,    21,    12,    23,    24,    25,
     136,    27,    28,    29,   210,   211,    12,   213,   214,   215,
     216,   217,   218,   219,    12,    14,    15,   153,    12,   225,
     226,     1,   228,   229,   230,   231,   232,   233,   234,   165,
     236,    30,    28,    30,     1,    14,    15,    16,   136,    19,
      12,    21,    12,    23,    24,    25,   182,    27,    28,    29,
      12,    30,    19,    29,    21,   153,    23,    24,    25,    12,
      27,    28,    29,    12,    12,    14,    15,   165,    12,    14,
      15,    16,    17,    30,   210,   211,    12,   213,   214,   215,
     216,   217,   218,   219,   182,    30,    14,    15,    16,   225,
     226,    30,   228,   229,   230,   231,   232,   233,   234,    19,
     236,    21,    30,    23,    24,    25,    30,    27,    28,    29,
      41,    12,   210,   211,    30,   213,   214,   215,   216,   217,
     218,    30,     0,     1,    30,    30,    21,   225,   226,     7,
     228,   229,   230,   231,   232,   233,    67,    41,   236,    12,
      71,    14,    15,    16,    17,    11,    77,     4,    14,    15,
      16,    17,    18,   270,    20,    21,    22,    88,     0,     1,
     237,    -1,    -1,    67,    30,     7,     1,    71,     3,     4,
       5,     6,     7,    77,     9,    10,    -1,    -1,    41,    -1,
       0,     1,    -1,    87,    19,    -1,    21,     7,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    -1,
       0,     1,    -1,    -1,    67,   136,    11,     7,    71,    14,
      15,    16,    17,    18,    77,    20,    21,    22,    41,    -1,
      -1,    19,   153,    86,    29,    30,    24,    25,    -1,    27,
      28,    29,   136,    -1,   165,    -1,    11,    -1,    -1,    14,
      15,    16,    17,    18,    67,    20,    21,    22,    71,   153,
      -1,   182,    -1,    -1,    77,    30,     0,     1,    -1,    12,
      -1,   165,    85,     7,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,   136,    27,    28,    29,    -1,   182,   210,
     211,    -1,   213,   214,   215,   216,     0,     1,    -1,    -1,
     153,    -1,    -1,     7,   225,   226,    -1,   228,   229,   230,
     231,    -1,   165,    -1,    -1,   236,   210,   211,    -1,   213,
     214,   215,    -1,   136,    -1,    -1,     0,     1,    -1,   182,
      -1,   225,   226,     7,   228,   229,   230,    -1,    -1,    -1,
     153,    -1,   236,    -1,    11,    -1,    -1,    14,    15,    16,
      17,    18,   165,    20,    21,    22,    -1,   210,   211,    -1,
     213,   214,     1,    30,     3,     4,     5,     6,     7,   182,
       9,    10,   225,   226,    -1,   228,   229,    -1,    -1,    -1,
      19,    -1,    21,   236,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    -1,    -1,   210,   211,    -1,
     213,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,   225,   226,    12,   228,    14,    15,    16,    17,
      19,    -1,    21,   236,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,     4,     5,     6,
       7,    19,     9,    10,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,     4,
       5,     6,     7,    19,     9,    10,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    24,    25,
      -1,    27,    28,    29,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      24,    25,    -1,    27,    28,    29,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    24,    25,    -1,    27,    28,    29,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,     1,    -1,     3,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
       1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,     1,    -1,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,     1,    -1,     3,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,     1,    31,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,     1,    31,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    11,    31,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    11,    29,
      30,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
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
      17,    18,    -1,    20,    21,    22,    11,    -1,    -1,    14,
      15,    16,    17,    30,    -1,    20,    21,    22,    11,    -1,
      -1,    14,    15,    16,    17,    30,    -1,    20,    21,    22,
      11,    -1,    -1,    14,    15,    16,    17,    30,    -1,    20,
      21,    22,    11,    -1,    -1,    14,    15,    16,    17,    30,
      -1,    20,    21,    22,    11,    -1,    -1,    14,    15,    16,
      17,    30,    -1,    20,    21,    22,    11,    -1,    -1,    14,
      15,    16,    17,    30,    11,    20,    21,    14,    15,    16,
      17,    -1,    -1,    20,    21,    30,    12,    13,    14,    15,
      16,    17,    18,    30,    20,    21,    22,    13,    14,    15,
      16,    17,    18,    29,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,    14,    15,    16,
      17,    18,    29,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    14,    15,    16,    17,    18,    -1,
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
       0,     1,     7,    34,    35,    36,    37,    42,    54,    12,
      29,     8,    28,     0,    36,    29,    12,    30,    40,    28,
      30,    38,    31,     7,    43,    54,    31,    43,     1,     3,
       5,     6,     9,    10,    19,    21,    23,    24,    25,    27,
      28,    29,    31,    44,    45,    46,    47,    49,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      66,     8,    28,    11,    30,    44,    30,    29,    29,    55,
      29,    29,    28,    64,    63,    63,    13,    29,    55,    44,
      32,    45,    12,    12,    12,    14,    15,    16,    17,    20,
      21,    22,    18,    12,    28,    54,    41,    32,    39,     1,
      55,     1,    51,    52,    55,     1,    28,     1,    26,    55,
      56,    30,    55,    65,    30,    32,    57,    58,    59,    60,
      61,    61,    62,    64,    31,    31,    30,    30,    50,    30,
      12,    30,    30,    30,    30,    30,    11,    30,    44,    44,
      31,    46,    48,    48,    30,    48,    52,    55,    32,    32,
      44,     4,    48,    12,    32,    48,    52,     7,    19,    21,
      23,    24,    25,    27,    28,    29,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    19,    21,    23,    24,    25,
      27,    28,    29,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,     3,     5,    31,    46,    47,    49,    53,
      54,    55,    66,    55,     8,    28,    28,    64,    63,    63,
      13,    29,    55,    14,    15,    16,    17,    20,    21,    22,
      18,    28,    64,    63,    63,    13,    29,    55,    14,    15,
      16,    17,    20,    21,    22,    18,    29,    29,    44,    12,
      12,    12,    12,    28,    56,    30,    65,    30,    57,    58,
      59,    60,    61,    61,    62,    64,    56,    30,    65,    30,
      57,    58,    59,    60,    61,    61,    62,    64,     1,    55,
       1,    51,    32,    30,    30,    30,    30,    50,    30,    48,
      48,    30,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    38,
      39,    37,    40,    41,    37,    37,    37,    42,    42,    43,
      43,    44,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    47,    48,    48,    49,    50,    49,
      51,    52,    52,    53,    53,    53,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     2,     0,
       0,     9,     0,     0,     9,     6,     6,     2,     3,     3,
       1,     2,     1,     1,     3,     1,     1,     2,     2,     2,
       2,     1,     5,     7,     5,     3,     1,     5,     0,     6,
       5,     1,     0,     4,     4,     4,     4,     4,     2,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     1,     2,     2,     1,     2,     3,
       1,     1,     3,     4,     3,     1,     1,     1,     3,     1,
       2
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
#line 85 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro), NULL);
                                                        if(num_erros_lexicos == 0)
                                                            printf("Sem erros lexicos\n");
                                                        else
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && var_ja_decl == 0) {
                                                            printf("Sem erros sintaticos\n\n");
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            desalocar(raiz);
                                                            printf("\n\n");
                                                        } else 
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
#line 1842 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 105 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 1848 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 106 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 1855 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 110 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1861 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 111 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1867 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 112 "./src/sintaxe.y"
                                                        {}
#line 1873 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 117 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1);}
#line 1879 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 117 "./src/sintaxe.y"
                                                                                         {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1885 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 117 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 1891 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 118 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1);}
#line 1897 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 118 "./src/sintaxe.y"
                                                                                        {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1903 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 118 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 1909 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 119 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 1915 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 120 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 1921 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 123 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 1930 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 128 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 1939 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 134 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 1945 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 135 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 1951 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt block  */
#line 138 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 1957 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: block  */
#line 139 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 1964 "./src/sintaxe.tab.c"
    break;

  case 23: /* block: stmt  */
#line 143 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1970 "./src/sintaxe.tab.c"
    break;

  case 24: /* block: ABRE_C moreStmt FECHA_C  */
#line 144 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 1976 "./src/sintaxe.tab.c"
    break;

  case 25: /* stmt: conditional  */
#line 147 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1982 "./src/sintaxe.tab.c"
    break;

  case 26: /* stmt: iteration  */
#line 148 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1988 "./src/sintaxe.tab.c"
    break;

  case 27: /* stmt: varDecl PV  */
#line 149 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1994 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: attribuition PV  */
#line 150 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2000 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: io PV  */
#line 151 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2006 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: ret PV  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2012 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: error  */
#line 153 "./src/sintaxe.y"
                                                        {}
#line 2018 "./src/sintaxe.tab.c"
    break;

  case 32: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 160 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2025 "./src/sintaxe.tab.c"
    break;

  case 33: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 162 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, NULL, (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-4].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2032 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 164 "./src/sintaxe.y"
                                                                                            {}
#line 2038 "./src/sintaxe.tab.c"
    break;

  case 35: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2044 "./src/sintaxe.tab.c"
    break;

  case 36: /* bracesStmt: stmt  */
#line 168 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2050 "./src/sintaxe.tab.c"
    break;

  case 37: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesStmt  */
#line 171 "./src/sintaxe.y"
                                                                   {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2056 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 172 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2062 "./src/sintaxe.tab.c"
    break;

  case 39: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesStmt  */
#line 172 "./src/sintaxe.y"
                                                                   {}
#line 2068 "./src/sintaxe.tab.c"
    break;

  case 40: /* iteArgs: expIte PV expIte PV expIte  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2074 "./src/sintaxe.tab.c"
    break;

  case 41: /* expIte: attribuition  */
#line 178 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2080 "./src/sintaxe.tab.c"
    break;

  case 42: /* expIte: %empty  */
#line 179 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2086 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 189 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2094 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 192 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2100 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 193 "./src/sintaxe.y"
                                                        {// Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2110 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 198 "./src/sintaxe.y"
                                                        {}
#line 2116 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P error FECHA_P  */
#line 199 "./src/sintaxe.y"
                                                        {}
#line 2122 "./src/sintaxe.tab.c"
    break;

  case 48: /* varDecl: TIPO ID  */
#line 203 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 2130 "./src/sintaxe.tab.c"
    break;

  case 49: /* varDecl: TIPO LIST ID  */
#line 207 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 2138 "./src/sintaxe.tab.c"
    break;

  case 50: /* attribuition: ID ATRIB expLogic  */
#line 212 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2146 "./src/sintaxe.tab.c"
    break;

  case 51: /* attribuition: expLogic  */
#line 215 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2152 "./src/sintaxe.tab.c"
    break;

  case 52: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 218 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2158 "./src/sintaxe.tab.c"
    break;

  case 53: /* expLogic: andLogic  */
#line 219 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2164 "./src/sintaxe.tab.c"
    break;

  case 54: /* andLogic: andLogic LOG_OP_E expComp  */
#line 222 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2170 "./src/sintaxe.tab.c"
    break;

  case 55: /* andLogic: expComp  */
#line 223 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2176 "./src/sintaxe.tab.c"
    break;

  case 56: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 226 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2182 "./src/sintaxe.tab.c"
    break;

  case 57: /* expComp: expRel  */
#line 227 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2188 "./src/sintaxe.tab.c"
    break;

  case 58: /* expRel: expRel REL_OP_ALTA expArit  */
#line 230 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2194 "./src/sintaxe.tab.c"
    break;

  case 59: /* expRel: expArit  */
#line 231 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2200 "./src/sintaxe.tab.c"
    break;

  case 60: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 234 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2206 "./src/sintaxe.tab.c"
    break;

  case 61: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 235 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2212 "./src/sintaxe.tab.c"
    break;

  case 62: /* expArit: expMul  */
#line 236 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2218 "./src/sintaxe.tab.c"
    break;

  case 63: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 239 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2224 "./src/sintaxe.tab.c"
    break;

  case 64: /* expMul: negElement  */
#line 240 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2230 "./src/sintaxe.tab.c"
    break;

  case 65: /* negElement: LOG_OP_NEG expList  */
#line 243 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2236 "./src/sintaxe.tab.c"
    break;

  case 66: /* negElement: ARIT_OP_MENOS expList  */
#line 244 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2242 "./src/sintaxe.tab.c"
    break;

  case 67: /* negElement: expList  */
#line 245 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2248 "./src/sintaxe.tab.c"
    break;

  case 68: /* expList: LIST_OP_UN element  */
#line 248 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2254 "./src/sintaxe.tab.c"
    break;

  case 69: /* expList: expList LIST_OP_BIN element  */
#line 249 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2260 "./src/sintaxe.tab.c"
    break;

  case 70: /* expList: element  */
#line 250 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2266 "./src/sintaxe.tab.c"
    break;

  case 71: /* element: ID  */
#line 253 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2273 "./src/sintaxe.tab.c"
    break;

  case 72: /* element: ABRE_P attribuition FECHA_P  */
#line 255 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2279 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: ID ABRE_P arguments FECHA_P  */
#line 256 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);}
#line 2286 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: ID ABRE_P FECHA_P  */
#line 258 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2293 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: CONST_INT  */
#line 260 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2299 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: CONST_FLOAT  */
#line 261 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2305 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: NIL  */
#line 262 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2311 "./src/sintaxe.tab.c"
    break;

  case 78: /* arguments: arguments VIRG attribuition  */
#line 265 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));}
#line 2317 "./src/sintaxe.tab.c"
    break;

  case 79: /* arguments: attribuition  */
#line 266 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2324 "./src/sintaxe.tab.c"
    break;

  case 80: /* ret: RETURN attribuition  */
#line 270 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2330 "./src/sintaxe.tab.c"
    break;


#line 2334 "./src/sintaxe.tab.c"

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

#line 273 "./src/sintaxe.y"



/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
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
