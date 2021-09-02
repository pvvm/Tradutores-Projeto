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
int tmp;
int num_args = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(char *);
struct No* montaNo(char *, struct No*, struct No* , struct No*);

#line 99 "./src/sintaxe.tab.c"

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
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_multLineStmt = 46,              /* multLineStmt  */
  YYSYMBOL_conditional = 47,               /* conditional  */
  YYSYMBOL_bracesStmt = 48,                /* bracesStmt  */
  YYSYMBOL_iteration = 49,                 /* iteration  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_iteArgs = 51,                   /* iteArgs  */
  YYSYMBOL_expIte = 52,                    /* expIte  */
  YYSYMBOL_oneLineStmt = 53,               /* oneLineStmt  */
  YYSYMBOL_io = 54,                        /* io  */
  YYSYMBOL_varDecl = 55,                   /* varDecl  */
  YYSYMBOL_attribuition = 56,              /* attribuition  */
  YYSYMBOL_expLogic = 57,                  /* expLogic  */
  YYSYMBOL_andLogic = 58,                  /* andLogic  */
  YYSYMBOL_expComp = 59,                   /* expComp  */
  YYSYMBOL_expRel = 60,                    /* expRel  */
  YYSYMBOL_expArit = 61,                   /* expArit  */
  YYSYMBOL_expMul = 62,                    /* expMul  */
  YYSYMBOL_negElement = 63,                /* negElement  */
  YYSYMBOL_expList = 64,                   /* expList  */
  YYSYMBOL_element = 65,                   /* element  */
  YYSYMBOL_arguments = 66,                 /* arguments  */
  YYSYMBOL_ret = 67                        /* ret  */
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
#define YYLAST   2384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

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
       0,    81,    81,    98,   101,   102,   105,   106,   107,   112,
     112,   112,   113,   113,   113,   114,   115,   118,   127,   137,
     138,   141,   142,   145,   146,   149,   150,   153,   154,   155,
     158,   159,   162,   163,   163,   166,   169,   170,   173,   174,
     175,   176,   177,   180,   182,   183,   185,   186,   190,   200,
     211,   213,   216,   217,   220,   221,   224,   225,   228,   229,
     232,   233,   234,   237,   238,   241,   242,   243,   246,   247,
     248,   251,   252,   253,   254,   255,   256,   257,   260,   261,
     264
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
  "funcDecl", "parameters", "moreStmt", "stmt", "multLineStmt",
  "conditional", "bracesStmt", "iteration", "$@5", "iteArgs", "expIte",
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

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     196,    36,     7,    16,   279,   318,   342,   -12,    10,   454,
      -2,    -7,    52,  -155,   471,     1,   499,    27,    72,   169,
      49,    72,  1550,    39,     9,    45,  1550,    91,   832,    64,
      79,  2225,    82,    85,   559,   618,   618,  2100,  2111,  2122,
    1813,  2236,   862,   892,   922,   952,   982,  1012,   106,   122,
     137,     0,   394,   861,   741,  2353,  2254,  2265,  2133,  2144,
     147,   115,   131,    72,   138,  1042,   141,   214,    17,   148,
       2,   129,  1842,  2155,  2166,  2177,  2269,   590,   171,   501,
    1072,  1102,  1132,  1162,  2269,  2269,  2269,  2269,  2269,  2269,
    2269,   559,  1192,   154,   197,   173,   535,   176,   179,   184,
     191,   194,   213,   222,   224,   232,   236,   248,   252,    40,
    2188,   199,   201,  2199,   462,   891,   771,  2363,  2287,  2298,
    2309,  2210,  1550,  1550,   305,  1521,   253,   305,   329,   228,
     272,   285,   288,   290,  2313,  2221,  1222,  1252,  1550,  1282,
    1312,    67,   305,  1342,   301,   234,   538,   567,  1372,   305,
    1402,  2057,  1432,  1462,   275,    54,   789,   671,   671,  1869,
    1880,  1891,  1823,  2236,    -5,   345,   293,   411,  2045,   383,
    2001,  1902,  1913,   819,   701,   701,   586,   614,  1569,   543,
    2236,    98,   153,    90,   202,  1794,  1734,  1746,  1586,  1603,
     488,  1550,   652,   304,   308,   309,   323,   287,   310,   328,
    1852,  1924,  1935,  1946,  2324,  2069,   315,  2324,  2324,  2324,
    2324,  2324,  2324,  2324,   789,   274,  1620,  1637,  1654,  2335,
    2081,   316,  2335,  2335,  2335,  2335,  2335,  2335,  2335,   819,
    1492,   682,   712,   742,   772,   339,    73,  1957,   235,  1968,
     362,   511,   429,  2053,  2012,  2023,  2034,  1979,   133,  1671,
     239,  1688,   233,   121,   436,  1802,  1758,  1770,  1782,  1705,
     802,  1990,  1722
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,   351,  -155,  -155,  -155,  -155,  -155,  -155,
     341,   -25,   -10,  -155,  -155,  -123,  -155,  -155,  -155,  -117,
     -64,   249,     6,   -18,   447,   419,   371,   324,   260,   210,
     159,    48,   -34,  -154,   255
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,    97,    18,    95,     7,
      24,    42,    43,    44,    45,   139,    46,   126,   101,   102,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,   112,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    65,   141,   104,   143,   -12,     8,   172,    -9,   207,
       8,   144,   -51,    69,    84,    11,    13,    15,   100,   150,
      63,    19,    16,    78,    25,   -51,   153,    25,    17,   -37,
     105,    20,    80,   172,   154,    12,    34,   172,    35,    64,
      36,    37,    38,   189,    39,    40,    41,    61,     9,    99,
     103,   238,   -50,   108,    84,    80,   -20,   121,    22,   111,
     140,   192,   198,   140,   -48,    10,   250,    62,   -27,    94,
     -27,   149,   -27,   -27,   -27,   -20,   -27,   -27,   140,    23,
      26,   -17,   199,    74,    75,   140,   -27,   207,   -27,   171,
     -27,   -27,   -27,    67,   -27,   -27,   -27,   136,   137,   -27,
     189,   -55,    63,   -50,   -55,   -55,   224,   195,    68,   -51,
     103,    70,   222,   148,    71,   171,   145,   172,    81,   171,
     -55,    66,   201,   172,   172,   188,    80,    80,   -51,   172,
     106,   194,   -54,   197,    82,   -54,   -54,   224,    80,   216,
     189,   189,   -48,    93,   -50,   206,   172,   222,   156,    83,
     157,   -54,   158,   159,   160,   107,   161,   162,   163,    92,
     -80,   -48,   221,   -50,   -53,   -49,   230,   -53,   223,   -13,
     172,   189,   -10,   172,   172,   172,   172,   172,   172,   172,
     247,   -49,   188,   -53,   -49,   189,   189,   111,   189,   189,
     189,   189,   189,   189,   189,   259,    -3,     1,   -18,   171,
     170,   113,   111,     2,   122,   202,   203,   123,   -19,   124,
     -79,   171,   134,   -57,   125,    98,   -57,   -57,   -57,   225,
      80,   -33,   217,   218,   127,   128,   170,   -19,   171,   -79,
     170,   135,   -57,   156,   -36,   157,   187,   158,   159,   160,
     -46,   161,   162,   163,   -52,   -78,   134,   -52,   223,   120,
     134,   169,   171,   188,   129,   171,   171,   171,   171,   171,
     171,   171,   130,   -52,   -78,   261,   131,   188,   188,   262,
     188,   188,   188,   188,   188,   188,   188,   169,   132,    -2,
       1,   169,   133,   142,   -43,   -71,     2,   186,   -71,   -71,
     -71,   -71,   -71,   187,   -71,   -71,   -71,   -47,   118,   119,
     -45,   168,   -44,   220,   -71,   -35,    28,   -55,   -55,   209,
     170,    31,   155,   151,    32,    33,   231,   -36,    -5,    -5,
     232,   233,   170,   -55,    34,    -5,    35,   168,    36,    37,
      38,   168,    39,    40,    41,   234,   138,   185,   235,   170,
     -48,   -37,    -6,    -6,   186,   239,   251,   117,    34,    -6,
      35,   -49,    36,    37,    38,    14,    39,    40,    41,   -53,
     208,   169,    27,   170,   187,   167,   170,   170,   170,   170,
     170,   170,   246,   169,   193,   -53,   -52,   208,   187,   187,
     196,   187,   187,   187,   187,   187,   187,   258,     0,     0,
     169,   167,   -52,     0,   185,   167,     0,   -62,   -62,   -62,
     -62,   184,     0,   -62,   -62,   213,   -53,     0,   -53,    85,
     116,   168,   166,   -62,   169,   186,     0,   169,   169,   169,
     169,   244,   245,   168,     0,   -57,   -57,   -57,   210,   186,
     186,     0,   186,   186,   186,   186,   256,   257,   166,     0,
     168,   -57,   166,   -56,   -56,   -56,   210,   -56,   183,     0,
     -56,   -56,   -56,   225,    -8,    -8,   115,     0,   184,   -56,
     165,    -8,     0,     0,   168,   185,   -56,   168,   168,   168,
     243,    -4,    -4,     0,   -52,   167,   -52,    85,    -4,   185,
     185,     0,   185,   185,   185,   255,   165,   167,   164,   -42,
     165,   -42,   -42,   -42,   -42,   -42,   182,   -42,   -42,    -7,
      -7,   -16,   -16,   114,   167,   183,    -7,   -42,   -16,   -42,
       0,   -42,   -42,   -42,   164,   -42,   -42,   -42,   164,     0,
     -42,     0,   166,   109,   181,   -54,   -54,   209,   167,   184,
       0,   167,   167,   242,   166,   -15,   -15,     0,   -14,   -14,
       0,   -54,   -15,   184,   184,   -14,   184,   184,   254,     0,
       0,   166,     0,   182,   -71,     0,   219,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,     0,   -11,   -11,     0,
     165,     0,   220,   -71,   -11,   166,   183,     0,   166,   241,
       0,   181,   165,    37,    38,     0,    39,    72,    41,     0,
     183,   183,     0,   183,   253,     0,     0,   -75,   164,   165,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   173,
     164,   174,     0,   175,   176,   177,   -75,   178,   179,   180,
     110,     0,     0,   165,   182,   -76,   240,   164,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,    34,   182,   182,
       0,   252,    37,    38,   -76,    39,    72,    41,     0,     0,
       0,   236,   181,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,   248,   181,     0,     0,
       0,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -40,   -31,   -40,   -40,   -40,   -40,   -40,
     156,   -40,   -40,     0,     0,   159,   160,     0,   161,   200,
     163,   -40,     0,   -40,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,     0,   -38,   -40,   -38,   -38,   -38,   -38,   -38,
     173,   -38,   -38,     0,     0,   176,   177,     0,   178,   215,
     180,   -38,     0,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -39,   -38,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -57,     0,   -57,   -57,   -57,    87,     0,
       0,   -39,     0,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,   -39,     0,   -41,   -39,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -56,     0,   -56,   -56,   -56,    87,     0,
       0,   -41,     0,   -41,     0,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,   -30,   -41,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   159,   160,     0,   161,   200,   163,     0,
       0,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -42,   -30,   -42,     0,   -42,   -42,   -42,
       0,   -42,   -42,   176,   177,     0,   178,   215,   180,     0,
       0,   -42,     0,   -42,     0,   -42,   -42,   -42,     0,   -42,
     -42,   -42,     0,    28,   -42,    29,     0,    30,    31,   155,
       0,    32,    33,   -55,     0,   -55,   -55,    86,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,   -22,    79,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -54,     0,   -54,   -54,    86,     0,     0,
       0,   -22,     0,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,     0,   -24,   -22,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,   -24,     0,   -24,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,     0,   -25,   -24,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,   -26,   -25,   -26,     0,   -26,   -26,   -26,
       0,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,     0,   -26,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -23,   -26,   -23,     0,   -23,   -23,   -23,
       0,   -23,   -23,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,     0,    28,   -23,    29,     0,    30,    31,   155,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,   -21,    96,   -21,     0,   -21,   -21,   -21,
       0,   -21,   -21,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,     0,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,     0,   -40,   -21,   -40,     0,   -40,   -40,   -40,
       0,   -40,   -40,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,     0,   -40,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,     0,   -38,   -40,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,     0,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -39,   -38,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,     0,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,   -39,     0,   -41,   -39,   -41,     0,   -41,   -41,   -41,
       0,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,     0,   -41,     0,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,    28,   -41,    29,     0,    30,    31,   155,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,    28,   146,    29,     0,    30,    31,   155,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,   -29,   147,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,     0,   -31,   -29,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -32,   -31,   -32,     0,   -32,   -32,   -32,
       0,   -32,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,     0,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,    28,   -32,    29,     0,    30,    31,   155,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,   -34,   152,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -30,   -34,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -28,   -30,   -28,     0,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,     0,    28,   -28,    29,     0,    30,    31,   155,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,   190,     0,   260,     0,     0,    31,   155,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,    28,   191,    29,     0,    30,    31,   155,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,    35,     0,    36,    37,    38,     0,    39,    40,    41,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,     0,     0,     0,     0,   -67,     0,   -77,
     -67,   -67,   -67,   -67,   229,     0,   -67,   -67,   -67,     0,
       0,     0,     0,     0,   -70,     0,   -67,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,     0,     0,     0,     0,
       0,   -68,     0,   -70,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   -66,     0,
     -68,   -66,   -66,   -66,   -66,   229,     0,   -66,   -66,   -66,
       0,     0,     0,     0,     0,   -65,     0,   -66,   -65,   -65,
     -65,   -65,   229,     0,   -65,   -65,   -65,     0,     0,     0,
       0,     0,   -74,     0,   -65,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,     0,     0,     0,     0,     0,   -72,
       0,   -74,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -69,     0,   -72,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,   -73,     0,   -69,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -62,     0,     0,   -62,   -62,
     -62,   -62,   -73,     0,   -62,   -62,   228,   -64,     0,     0,
     -64,   -64,   -64,   -64,   -62,     0,   -64,   -64,   -64,   -60,
       0,     0,   -60,   -60,   -60,   -60,   -64,     0,   -60,   -60,
     228,   -61,     0,     0,   -61,   -61,   -61,   -61,   -60,     0,
     -61,   -61,   228,   -63,     0,     0,   -63,   -63,   -63,   -63,
     -61,     0,   -63,   -63,   -63,   -59,     0,     0,   -59,   -59,
     -59,   -59,   -63,   -58,   226,   227,   -58,   -58,   -58,   -58,
       0,     0,   226,   227,   -59,   -71,    76,   -71,   -71,   -71,
     -71,   -71,   -58,   -71,   -71,   -71,   204,   -71,   -71,   -71,
     -71,   -71,    77,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,   205,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,    77,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   205,   -71,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,     0,   -76,   -76,   -76,   -76,   -76,   -75,
     -76,   -76,   -76,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -76,   -77,   -77,   -77,     0,     0,   -67,   -67,   -67,   -67,
     214,   -77,   -67,   -67,   -67,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -67,   -70,   -70,   -70,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -70,   -68,   -68,   -68,     0,     0,   -66,
     -66,   -66,   -66,   214,   -68,   -66,   -66,   -66,     0,     0,
     -65,   -65,   -65,   -65,   214,   -66,   -65,   -65,   -65,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -65,   -74,   -74,   -74,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -74,   -72,   -72,
     -72,     0,     0,   -69,   -69,   -69,   -69,   -69,   -72,   -69,
     -69,   -69,     0,     0,   -73,   -73,   -73,   -73,   -73,   -69,
     -73,   -73,   -73,     0,     0,   -64,   -64,   -64,   -64,     0,
     -73,   -64,   -64,   -64,     0,     0,   -60,   -60,   -60,   -60,
       0,   -64,   -60,   -60,   213,     0,     0,   -61,   -61,   -61,
     -61,     0,   -60,   -61,   -61,   213,     0,     0,   -63,   -63,
     -63,   -63,     0,   -61,   -63,   -63,   -63,     0,     0,   -59,
     -59,   -59,   -59,     0,   -63,   211,   212,   -58,   -58,   -58,
     -58,     0,     0,   211,   212,   -59,   156,     0,   157,     0,
     158,   159,   160,   -58,   161,   162,   163,   -37,   173,     0,
     174,     0,   175,   176,   177,     0,   178,   179,   180,   237,
     173,     0,   174,     0,   175,   176,   177,     0,   178,   179,
     180,   249,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -67,     0,   -67,   -67,   -67,
     -67,    91,     0,   -67,   -67,   -67,   -70,     0,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -68,     0,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -66,     0,
     -66,   -66,   -66,   -66,    91,     0,   -66,   -66,   -66,   -65,
       0,   -65,   -65,   -65,   -65,    91,     0,   -65,   -65,   -65,
     -74,     0,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -72,     0,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -69,     0,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -73,     0,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,    34,     0,    35,     0,    36,    37,
      38,     0,    39,    40,    41,   156,     0,   157,     0,   158,
     159,   160,     0,   161,   162,   163,   -62,     0,   -62,   -62,
     -62,   -62,     0,     0,   -62,   -62,    90,   -64,     0,   -64,
     -64,   -64,   -64,     0,     0,   -64,   -64,   -64,    34,     0,
      35,     0,    36,    37,    38,     0,    39,    72,    41,   -60,
       0,   -60,   -60,   -60,   -60,     0,     0,   -60,   -60,    90,
     -61,     0,   -61,   -61,   -61,   -61,     0,     0,   -61,   -61,
      90,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,   -63,
     -63,   -63,   173,     0,   174,     0,   175,   176,   177,     0,
     178,   179,   180,   156,     0,   157,     0,   158,   159,   160,
       0,   161,   200,   163,   173,     0,   174,     0,   175,   176,
     177,     0,   178,   215,   180,   -59,     0,   -59,   -59,   -59,
     -59,     0,     0,    88,    89,   -58,     0,   -58,   -58,   -58,
     -58,     0,     0,    88,    89
};

static const yytype_int16 yycheck[] =
{
      34,    26,   125,     1,   127,     7,     0,    41,     7,    14,
       4,   128,    12,    31,    14,     8,     0,    29,     1,   142,
      11,    28,    12,    41,    18,    30,   149,    21,    30,    12,
      28,    30,    42,    67,   151,    28,    19,    71,    21,    30,
      23,    24,    25,    77,    27,    28,    29,     8,    12,    67,
      68,   205,    12,    71,    14,    65,    11,    91,    31,    77,
     124,   125,     8,   127,    12,    29,   220,    28,     1,    63,
       3,     4,     5,     6,     7,    30,     9,    10,   142,     7,
      31,    29,    28,    35,    36,   149,    19,    14,    21,    41,
      23,    24,    25,    29,    27,    28,    29,   122,   123,    32,
     134,    11,    11,    30,    14,    15,    16,   125,    29,    11,
     128,    29,    14,   138,    29,    67,   134,   151,    12,    71,
      30,    30,   156,   157,   158,    77,   136,   137,    30,   163,
       1,   125,    11,   151,    12,    14,    15,    16,   148,   173,
     174,   175,    11,    28,    11,   163,   180,    14,    19,    12,
      21,    30,    23,    24,    25,    26,    27,    28,    29,    12,
      12,    30,   180,    30,    11,    11,   191,    14,    15,    31,
     204,   205,    31,   207,   208,   209,   210,   211,   212,   213,
     214,    12,   134,    30,    30,   219,   220,   205,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     1,    29,   151,
      41,    30,   220,     7,    31,   157,   158,    31,    11,    30,
      11,   163,    11,    11,    30,     1,    14,    15,    16,    17,
     230,    30,   174,   175,    30,    12,    67,    30,   180,    30,
      71,    30,    30,    19,    12,    21,    77,    23,    24,    25,
      12,    27,    28,    29,    11,    11,    11,    14,    15,    90,
      11,    41,   204,   205,    30,   207,   208,   209,   210,   211,
     212,   213,    30,    30,    30,    30,    30,   219,   220,    30,
     222,   223,   224,   225,   226,   227,   228,    67,    30,     0,
       1,    71,    30,    30,    12,    11,     7,    77,    14,    15,
      16,    17,    18,   134,    20,    21,    22,    12,    88,    89,
      12,    41,    12,    29,    30,    30,     1,    14,    15,    16,
     151,     6,     7,    12,     9,    10,    12,    30,     0,     1,
      12,    12,   163,    30,    19,     7,    21,    67,    23,    24,
      25,    71,    27,    28,    29,    12,    31,    77,    28,   180,
      12,    12,     0,     1,   134,    30,    30,    87,    19,     7,
      21,    12,    23,    24,    25,     4,    27,    28,    29,    14,
      15,   151,    21,   204,   205,    41,   207,   208,   209,   210,
     211,   212,   213,   163,   125,    30,    14,    15,   219,   220,
     125,   222,   223,   224,   225,   226,   227,   228,    -1,    -1,
     180,    67,    30,    -1,   134,    71,    -1,    14,    15,    16,
      17,    77,    -1,    20,    21,    22,    12,    -1,    14,    15,
      86,   151,    41,    30,   204,   205,    -1,   207,   208,   209,
     210,   211,   212,   163,    -1,    14,    15,    16,    17,   219,
     220,    -1,   222,   223,   224,   225,   226,   227,    67,    -1,
     180,    30,    71,    14,    15,    16,    17,    11,    77,    -1,
      14,    15,    16,    17,     0,     1,    85,    -1,   134,    30,
      41,     7,    -1,    -1,   204,   205,    30,   207,   208,   209,
     210,     0,     1,    -1,    12,   151,    14,    15,     7,   219,
     220,    -1,   222,   223,   224,   225,    67,   163,    41,     1,
      71,     3,     4,     5,     6,     7,    77,     9,    10,     0,
       1,     0,     1,    84,   180,   134,     7,    19,     7,    21,
      -1,    23,    24,    25,    67,    27,    28,    29,    71,    -1,
      32,    -1,   151,    76,    77,    14,    15,    16,   204,   205,
      -1,   207,   208,   209,   163,     0,     1,    -1,     0,     1,
      -1,    30,     7,   219,   220,     7,   222,   223,   224,    -1,
      -1,   180,    -1,   134,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    -1,     0,     1,    -1,
     151,    -1,    29,    30,     7,   204,   205,    -1,   207,   208,
      -1,   134,   163,    24,    25,    -1,    27,    28,    29,    -1,
     219,   220,    -1,   222,   223,    -1,    -1,    11,   151,   180,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    19,
     163,    21,    -1,    23,    24,    25,    30,    27,    28,    29,
      30,    -1,    -1,   204,   205,    11,   207,   180,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    19,   219,   220,
      -1,   222,    24,    25,    30,    27,    28,    29,    -1,    -1,
      -1,   204,   205,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,     4,     5,     6,     7,
      19,     9,    10,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,     4,     5,     6,     7,
      19,     9,    10,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,     4,     5,     6,     7,
      -1,     9,    10,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,     4,     5,     6,     7,
      -1,     9,    10,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,     4,     5,     6,     7,
      -1,     9,    10,    24,    25,    -1,    27,    28,    29,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    24,    25,    -1,    27,    28,    29,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,     1,    32,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,     1,    -1,    32,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,     1,    31,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    23,    24,    25,    -1,    27,    28,    29,
      11,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
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
      22,    -1,    -1,    -1,    -1,    -1,    11,    -1,    30,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    30,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    11,    -1,    -1,    14,    15,
      16,    17,    30,    -1,    20,    21,    22,    11,    -1,    -1,
      14,    15,    16,    17,    30,    -1,    20,    21,    22,    11,
      -1,    -1,    14,    15,    16,    17,    30,    -1,    20,    21,
      22,    11,    -1,    -1,    14,    15,    16,    17,    30,    -1,
      20,    21,    22,    11,    -1,    -1,    14,    15,    16,    17,
      30,    -1,    20,    21,    22,    11,    -1,    -1,    14,    15,
      16,    17,    30,    11,    20,    21,    14,    15,    16,    17,
      -1,    -1,    20,    21,    30,    12,    13,    14,    15,    16,
      17,    18,    30,    20,    21,    22,    13,    14,    15,    16,
      17,    18,    29,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    12,    -1,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    -1,    14,    15,    16,    17,
      18,    29,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
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
      15,    16,    17,    -1,    30,    20,    21,    14,    15,    16,
      17,    -1,    -1,    20,    21,    30,    19,    -1,    21,    -1,
      23,    24,    25,    30,    27,    28,    29,    30,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    12,    -1,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    12,    -1,    14,    15,    16,    17,    18,
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
      -1,    20,    21,    22,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    20,    21,    22,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    12,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    19,    -1,    21,    -1,    23,    24,    25,
      -1,    27,    28,    29,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    20,    21,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    37,    42,    55,    12,
      29,     8,    28,     0,    36,    29,    12,    30,    40,    28,
      30,    38,    31,     7,    43,    55,    31,    43,     1,     3,
       5,     6,     9,    10,    19,    21,    23,    24,    25,    27,
      28,    29,    44,    45,    46,    47,    49,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      67,     8,    28,    11,    30,    44,    30,    29,    29,    56,
      29,    29,    28,    65,    64,    64,    13,    29,    56,    32,
      45,    12,    12,    12,    14,    15,    16,    17,    20,    21,
      22,    18,    12,    28,    55,    41,    32,    39,     1,    56,
       1,    51,    52,    56,     1,    28,     1,    26,    56,    57,
      30,    56,    66,    30,    58,    59,    60,    61,    62,    62,
      63,    65,    31,    31,    30,    30,    50,    30,    12,    30,
      30,    30,    30,    30,    11,    30,    44,    44,    31,    48,
      53,    48,    30,    48,    52,    56,    32,    32,    44,     4,
      48,    12,    32,    48,    52,     7,    19,    21,    23,    24,
      25,    27,    28,    29,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    19,    21,    23,    24,    25,    27,    28,
      29,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       1,    31,    53,    54,    55,    56,    67,    56,     8,    28,
      28,    65,    64,    64,    13,    29,    56,    14,    15,    16,
      17,    20,    21,    22,    18,    28,    65,    64,    64,    13,
      29,    56,    14,    15,    16,    17,    20,    21,    22,    18,
      44,    12,    12,    12,    12,    28,    57,    30,    66,    30,
      58,    59,    60,    61,    62,    62,    63,    65,    57,    30,
      66,    30,    58,    59,    60,    61,    62,    62,    63,    65,
      32,    30,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    38,
      39,    37,    40,    41,    37,    37,    37,    42,    42,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    47,    47,
      48,    48,    49,    50,    49,    51,    52,    52,    53,    53,
      53,    53,    53,    54,    54,    54,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     2,     0,
       0,     9,     0,     0,     9,     6,     6,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     5,     7,     5,
       3,     1,     5,     0,     6,     5,     1,     0,     2,     2,
       2,     2,     1,     4,     4,     4,     4,     4,     2,     3,
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
#line 81 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", (yyvsp[0].no), NULL, NULL);
                                                        if(num_erros_lexicos == 0)
                                                            printf("Sem erros lexicos\n");
                                                        else
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0 && var_ja_decl == 0) {
                                                            printf("Sem erros sintaticos\n\n");
                                                            printf("=========================================== ARVORE SINTATICA ABSTRADA ==========================================\n\n");
                                                            printaArvore(raiz, 0);
                                                            desalocar(raiz);
                                                            printf("\n\n");
                                                        } else 
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("\n\n============================================== TABELA DE SIMBOLOS =============================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
#line 1762 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 101 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("declarations", (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1768 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 102 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1774 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 105 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1780 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 106 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1786 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 107 "./src/sintaxe.y"
                                                        {}
#line 1792 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 112 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1);}
#line 1798 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 112 "./src/sintaxe.y"
                                                                                         {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1804 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 112 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), (yyvsp[-1].no));}
#line 1810 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 113 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1);}
#line 1816 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 113 "./src/sintaxe.y"
                                                                                        {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1822 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 113 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), (yyvsp[-1].no), NULL);}
#line 1828 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 114 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), (yyvsp[-1].no), NULL);}
#line 1834 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 115 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-1].no), NULL, NULL);}
#line 1840 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 118 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL);
                                                        // Cria o no do ID
                                                        (yyval.no)->no1 = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        tmp = popEsc(&primeiro);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1853 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 127 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo(strcat((yyvsp[-2].tok).lexema, " list"), NULL, NULL, NULL);
                                                        // Cria o no do ID
                                                        (yyval.no)->no1 = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        tmp = popEsc(&primeiro);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-2].tok).lexema, "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1866 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 137 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("parameters", (yyvsp[-2].no), (yyvsp[0].no), NULL); num_args++;}
#line 1872 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 138 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 1878 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt stmt  */
#line 141 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("moreStmt", (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1884 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: stmt  */
#line 142 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1890 "./src/sintaxe.tab.c"
    break;

  case 23: /* stmt: oneLineStmt  */
#line 145 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1896 "./src/sintaxe.tab.c"
    break;

  case 24: /* stmt: multLineStmt  */
#line 146 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1902 "./src/sintaxe.tab.c"
    break;

  case 25: /* multLineStmt: conditional  */
#line 149 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1908 "./src/sintaxe.tab.c"
    break;

  case 26: /* multLineStmt: iteration  */
#line 150 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1914 "./src/sintaxe.tab.c"
    break;

  case 27: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 153 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1920 "./src/sintaxe.tab.c"
    break;

  case 28: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 154 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1926 "./src/sintaxe.tab.c"
    break;

  case 29: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 155 "./src/sintaxe.y"
                                                                                {}
#line 1932 "./src/sintaxe.tab.c"
    break;

  case 30: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1938 "./src/sintaxe.tab.c"
    break;

  case 31: /* bracesStmt: oneLineStmt  */
#line 159 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1944 "./src/sintaxe.tab.c"
    break;

  case 32: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesStmt  */
#line 162 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 1950 "./src/sintaxe.tab.c"
    break;

  case 33: /* $@5: %empty  */
#line 163 "./src/sintaxe.y"
                                   {yyerrok;}
#line 1956 "./src/sintaxe.tab.c"
    break;

  case 34: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesStmt  */
#line 163 "./src/sintaxe.y"
                                                                   {}
#line 1962 "./src/sintaxe.tab.c"
    break;

  case 35: /* iteArgs: expIte PV expIte PV expIte  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no));}
#line 1968 "./src/sintaxe.tab.c"
    break;

  case 36: /* expIte: attribuition  */
#line 169 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1974 "./src/sintaxe.tab.c"
    break;

  case 37: /* expIte: %empty  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 1980 "./src/sintaxe.tab.c"
    break;

  case 38: /* oneLineStmt: varDecl PV  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1986 "./src/sintaxe.tab.c"
    break;

  case 39: /* oneLineStmt: attribuition PV  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1992 "./src/sintaxe.tab.c"
    break;

  case 40: /* oneLineStmt: io PV  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1998 "./src/sintaxe.tab.c"
    break;

  case 41: /* oneLineStmt: ret PV  */
#line 176 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2004 "./src/sintaxe.tab.c"
    break;

  case 42: /* oneLineStmt: error  */
#line 177 "./src/sintaxe.y"
                                                        {}
#line 2010 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 180 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL);}
#line 2017 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 182 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL);}
#line 2023 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 183 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL);}
#line 2030 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 185 "./src/sintaxe.y"
                                                        {}
#line 2036 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P error FECHA_P  */
#line 186 "./src/sintaxe.y"
                                                        {}
#line 2042 "./src/sintaxe.tab.c"
    break;

  case 48: /* varDecl: TIPO ID  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL);
                                                        // Cria o no do ID
                                                        (yyval.no)->no1 = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        char aux[50];
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 2056 "./src/sintaxe.tab.c"
    break;

  case 49: /* varDecl: TIPO LIST ID  */
#line 200 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo(strcat((yyvsp[-2].tok).lexema, " list"), NULL, NULL, NULL);
                                                        // Cria o no do ID
                                                        (yyval.no)->no1 = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);
                                                        tmp = popEsc(&primeiro);
                                                        char aux[50];
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", (yyvsp[-2].tok).lexema, "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 2070 "./src/sintaxe.tab.c"
    break;

  case 50: /* attribuition: ID ATRIB expLogic  */
#line 211 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, (yyvsp[0].no), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL);}
#line 2077 "./src/sintaxe.tab.c"
    break;

  case 51: /* attribuition: expLogic  */
#line 213 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2083 "./src/sintaxe.tab.c"
    break;

  case 52: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 216 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2089 "./src/sintaxe.tab.c"
    break;

  case 53: /* expLogic: andLogic  */
#line 217 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2095 "./src/sintaxe.tab.c"
    break;

  case 54: /* andLogic: andLogic LOG_OP_E expComp  */
#line 220 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2101 "./src/sintaxe.tab.c"
    break;

  case 55: /* andLogic: expComp  */
#line 221 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2107 "./src/sintaxe.tab.c"
    break;

  case 56: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 224 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2113 "./src/sintaxe.tab.c"
    break;

  case 57: /* expComp: expRel  */
#line 225 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2119 "./src/sintaxe.tab.c"
    break;

  case 58: /* expRel: expRel REL_OP_ALTA expArit  */
#line 228 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2125 "./src/sintaxe.tab.c"
    break;

  case 59: /* expRel: expArit  */
#line 229 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2131 "./src/sintaxe.tab.c"
    break;

  case 60: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 232 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2137 "./src/sintaxe.tab.c"
    break;

  case 61: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 233 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2143 "./src/sintaxe.tab.c"
    break;

  case 62: /* expArit: expMul  */
#line 234 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2149 "./src/sintaxe.tab.c"
    break;

  case 63: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 237 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2155 "./src/sintaxe.tab.c"
    break;

  case 64: /* expMul: negElement  */
#line 238 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2161 "./src/sintaxe.tab.c"
    break;

  case 65: /* negElement: LOG_OP_NEG expList  */
#line 241 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL);}
#line 2167 "./src/sintaxe.tab.c"
    break;

  case 66: /* negElement: ARIT_OP_MENOS expList  */
#line 242 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL);}
#line 2173 "./src/sintaxe.tab.c"
    break;

  case 67: /* negElement: expList  */
#line 243 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2179 "./src/sintaxe.tab.c"
    break;

  case 68: /* expList: LIST_OP_UN element  */
#line 246 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL);}
#line 2185 "./src/sintaxe.tab.c"
    break;

  case 69: /* expList: expList LIST_OP_BIN element  */
#line 247 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2191 "./src/sintaxe.tab.c"
    break;

  case 70: /* expList: element  */
#line 248 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2197 "./src/sintaxe.tab.c"
    break;

  case 71: /* element: ID  */
#line 251 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);}
#line 2203 "./src/sintaxe.tab.c"
    break;

  case 72: /* element: ABRE_P attribuition FECHA_P  */
#line 252 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2209 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: ID ABRE_P arguments FECHA_P  */
#line 253 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL);}
#line 2215 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: ID ABRE_P FECHA_P  */
#line 254 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL);}
#line 2221 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: CONST_INT  */
#line 255 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);}
#line 2227 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: CONST_FLOAT  */
#line 256 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL);}
#line 2233 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: NIL  */
#line 257 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL);}
#line 2239 "./src/sintaxe.tab.c"
    break;

  case 78: /* arguments: arguments VIRG attribuition  */
#line 260 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("arguments", (yyvsp[-2].no), (yyvsp[0].no), NULL);}
#line 2245 "./src/sintaxe.tab.c"
    break;

  case 79: /* arguments: attribuition  */
#line 261 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2251 "./src/sintaxe.tab.c"
    break;

  case 80: /* ret: RETURN attribuition  */
#line 264 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL);}
#line 2257 "./src/sintaxe.tab.c"
    break;


#line 2261 "./src/sintaxe.tab.c"

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

#line 267 "./src/sintaxe.y"



/*
    Funcao que auxilia na criacao de um novo no
    Argumentos: o nome do no e os filhos
*/
struct No* montaNo(char *nome, struct No *no_1, struct No *no_2, struct No *no_3) {
    if(num_erros_lexicos == 0){ 
        struct No* no = novoNo(nome);       // Cria o no
        no->no1 = no_1;                     // Conecta com os filhos
        no->no2 = no_2;
        no->no3 = no_3;
        return no;
    }
    return NULL;
}

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
