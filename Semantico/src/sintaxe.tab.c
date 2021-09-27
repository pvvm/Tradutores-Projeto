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
#line 16 "./src/sintaxe.y"

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
int num_erros_semanticos = 0;
int escopo_max = 0;
int escopo_atual = 0;
int esc_aux;
int num_args = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;

void yyerror(const char *);

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
  YYSYMBOL_funcDecl = 44,                  /* funcDecl  */
  YYSYMBOL_parameters = 45,                /* parameters  */
  YYSYMBOL_moreStmt = 46,                  /* moreStmt  */
  YYSYMBOL_block = 47,                     /* block  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_conditional = 49,               /* conditional  */
  YYSYMBOL_bracesStmt = 50,                /* bracesStmt  */
  YYSYMBOL_iteration = 51,                 /* iteration  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_iteArgs = 53,                   /* iteArgs  */
  YYSYMBOL_expIte = 54,                    /* expIte  */
  YYSYMBOL_io = 55,                        /* io  */
  YYSYMBOL_varDecl = 56,                   /* varDecl  */
  YYSYMBOL_attribuition = 57,              /* attribuition  */
  YYSYMBOL_expLogic = 58,                  /* expLogic  */
  YYSYMBOL_andLogic = 59,                  /* andLogic  */
  YYSYMBOL_expComp = 60,                   /* expComp  */
  YYSYMBOL_expRel = 61,                    /* expRel  */
  YYSYMBOL_expArit = 62,                   /* expArit  */
  YYSYMBOL_expMul = 63,                    /* expMul  */
  YYSYMBOL_negElement = 64,                /* negElement  */
  YYSYMBOL_expList = 65,                   /* expList  */
  YYSYMBOL_element = 66,                   /* element  */
  YYSYMBOL_arguments = 67,                 /* arguments  */
  YYSYMBOL_ret = 68                        /* ret  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
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
       0,    97,    97,   124,   129,   130,   134,   135,   136,   140,
     140,   140,   141,   141,   141,   142,   143,   146,   152,   157,
     158,   161,   162,   166,   167,   170,   171,   172,   173,   174,
     175,   176,   179,   181,   183,   186,   187,   190,   191,   191,
     194,   197,   198,   204,   208,   210,   216,   217,   221,   225,
     229,   257,   260,   261,   264,   265,   268,   269,   272,   273,
     276,   277,   278,   281,   282,   285,   287,   289,   292,   294,
     298,   310,   312,   317,   326,   328,   337,   346,   349,   352,
     356,   357,   361
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
  "function", "$@1", "$@2", "$@3", "$@4", "funcDecl", "parameters",
  "moreStmt", "block", "stmt", "conditional", "bracesStmt", "iteration",
  "$@5", "iteArgs", "expIte", "io", "varDecl", "attribuition", "expLogic",
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
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     308,    47,    -2,     7,   387,   390,   491,   -29,    49,   514,
      16,    23,   177,  -144,   517,    19,   530,   -11,    62,   202,
      43,    62,  1958,    11,    92,    97,  1958,    98,  1142,    46,
      76,  2975,    83,    86,   542,   542,  2376,  2376,  2697,  2710,
    2723,  2398,  2987,  1958,  1176,  1210,  1244,  1278,  1312,   106,
     107,   134,    -4,   291,   592,   665,  3055,  2918,  2931,  2736,
    2749,   145,   139,   142,    62,   144,  1346,   147,   482,     4,
     163,    10,   378,  2438,  2762,  2775,  2788,  2801,  2999,   601,
     149,  1380,   558,  1414,  1448,  1482,  1516,  2999,  2999,  2999,
    2999,  2999,  2999,  2999,   542,   542,  1550,   168,   183,   153,
     588,   166,   171,   174,   199,   206,   222,   239,   221,   224,
     230,   234,   237,     1,  2814,   186,   200,  2827,  1584,   368,
     767,   699,  3067,  2944,  2957,  2970,  2840,  2853,  1958,  1958,
    1989,  2020,   246,  1989,  2447,   252,   269,   279,   285,   287,
    3011,  2866,  1618,  1652,  1958,  1686,  1720,   666,  1989,  1754,
     298,   260,   602,   646,  1788,  1989,  1822,  2871,  1856,  1890,
     281,    38,   635,   635,  3065,  3065,  2476,  2487,  2498,  2417,
    2987,    88,   280,   408,   314,   538,  2630,  2641,  2509,  2520,
     719,   719,  3077,  3077,  2060,  2079,  2098,   303,  2987,    80,
     111,    51,    41,   465,  2321,  2335,  2117,  2136,   700,   301,
     307,  1958,   734,   768,   802,   339,   340,   343,   352,   342,
     341,   374,  2465,  2531,  2542,  2553,  2564,  3023,  2884,   360,
    3023,  3023,  3023,  3023,  3023,  3023,  3023,   635,   635,  2041,
    2155,  2174,  2193,  2212,  3035,  2897,   364,  3035,  3035,  3035,
    3035,  3035,  3035,  3035,   719,   719,   555,    59,  1924,   836,
     870,   904,   938,   400,   120,  2575,   264,  2586,   334,   428,
     353,  2685,  2652,  2663,  2674,  2597,  2608,   130,  2231,   266,
    2250,   136,    84,   122,   627,  2349,  2363,  2377,  2269,  2288,
     393,   394,   199,   397,   972,  2619,  2307,  2020,  2020,   405,
    2020,  1006,  1040,  2020,  1074,  1108
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,   434,  -144,  -144,  -144,  -144,  -144,  -144,
     420,   -23,     6,   245,  -117,   -20,   -86,   164,   201,  -125,
     -38,     0,   -30,   422,   417,   -25,   379,   305,   232,   193,
     119,     2,  -143,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,   101,    18,    99,     7,
      24,    44,    45,    46,    47,   146,    48,   132,   105,   106,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,   116,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    70,    15,    66,     8,   104,    11,    13,   -51,   150,
      87,   108,    80,   -50,   203,    87,   -42,   173,    25,    62,
      81,    25,    22,   -12,    34,    35,    -9,    36,    12,    37,
      38,    39,   160,    40,    41,    42,    74,    75,   103,   107,
     109,    63,   112,   173,   179,   204,   210,   173,    17,   115,
      83,    20,   -57,    19,   191,   -57,   -57,   -57,   240,     9,
     282,    16,   -55,   120,    98,   -55,   -55,   239,   211,    23,
     179,   -42,    83,   -57,   179,   256,    26,    68,    10,    34,
      35,   197,    36,   -55,    37,    38,    39,    83,    40,    41,
      42,   -51,   269,   205,   237,   -54,   126,   127,   -54,   -54,
     239,   207,   220,    64,   107,   142,   143,    69,   -20,    64,
     151,   147,   -51,   149,    71,   191,   -54,    72,    84,    85,
     -51,   154,   -53,   208,    65,   -53,   238,   209,   156,   -20,
      67,   206,   173,   -56,   220,   159,   -56,   -56,   -56,   240,
     219,   -50,   197,   -53,   237,   173,    86,   -52,    83,    83,
     -52,   238,   -50,   -48,   -56,    76,    77,    96,   236,   179,
      83,   178,   -50,   173,   213,   214,   179,   179,   -52,    97,
     203,   203,   179,   203,   -48,   -82,   203,   -13,   248,   -49,
     -10,   117,   230,   231,   197,   197,   128,   178,   115,   -48,
     179,   178,   173,   191,   -19,   173,   259,   -81,   196,   129,
     -49,   204,   204,   130,   204,   115,   131,   204,   -17,   191,
     191,   140,   191,   272,   -49,   -19,   281,   107,   -81,   179,
     197,   173,   179,   179,   179,   179,   179,   179,   179,   265,
     266,   -38,   141,   -18,   134,   177,   197,   197,   133,   197,
     197,   197,   197,   197,   197,   197,   278,   279,   179,   205,
     205,   -41,   205,   135,    83,   205,   136,   207,   207,   196,
     207,   177,   137,   207,   -46,   177,   138,   291,   292,   139,
     294,   -80,   195,   295,   176,   140,   178,   140,   148,   208,
     208,   -43,   208,   215,   216,   208,   125,   206,   206,   178,
     206,   -47,   -80,   206,   -53,   221,   285,   -45,   286,   -44,
     176,   232,   233,   -53,   176,   -53,    88,   178,    -3,     1,
     157,   194,   -53,   -40,   -73,     2,   234,   -73,   -73,   -73,
     -73,   -73,   -73,   123,   124,   -73,   -73,   -73,   -57,   -57,
     -57,   223,   246,   195,   235,   -73,   178,   196,   247,   178,
     178,   178,   178,   178,   178,   178,   -57,   175,   -52,   221,
     177,   249,   250,   196,   196,   251,   196,   196,   196,   196,
     196,   196,   196,   177,   252,   178,   -52,   -56,   -56,   -56,
     223,   253,   194,   175,   -41,   145,   202,   175,   145,   110,
     -52,   177,   -52,    88,   193,   -56,   -48,    -2,     1,   176,
      -5,    -5,   257,   145,     2,   122,   270,    -5,   162,   163,
     145,   164,   176,   165,   166,   167,   111,   168,   169,   170,
     177,   195,   -49,   177,   177,   177,   177,   177,   177,   264,
     176,   174,   -55,   -55,   222,   287,   288,   195,   195,   290,
     195,   195,   195,   195,   195,   195,   277,   293,    14,   177,
     -55,    27,   -54,   -54,   222,   193,   289,   174,   283,   176,
     194,   174,   176,   176,   176,   176,   262,   263,   192,   172,
     -54,     0,   175,     0,   171,     0,   194,   194,   121,   194,
     194,   194,   194,   275,   276,   175,   -59,     0,   176,   -59,
     -59,   -59,   -59,   102,     0,   172,     0,   241,   242,   172,
     171,    -6,    -6,   175,   171,     0,   190,   -59,    -6,     0,
     113,   189,   162,   163,   119,   164,     0,   165,   166,   167,
       0,   168,   169,   170,    -8,    -8,     0,    -4,    -4,   192,
       0,    -8,   175,   193,    -4,   175,   175,   175,   261,     0,
      -7,    -7,   202,   202,     0,   202,   174,    -7,   202,   193,
     193,     0,   193,   193,   193,   274,     0,     0,     0,   174,
       0,   175,   -59,   -59,   -59,   -59,   280,   190,   -16,   -16,
     224,   225,   189,     0,     0,   -16,     0,   174,    38,    39,
     -59,    40,    73,    42,   172,   162,   163,     0,   164,   171,
     165,   166,   167,     0,   168,   169,   170,   172,   -15,   -15,
       0,     0,   171,     0,     0,   -15,   174,   192,     0,   174,
     174,   260,   -14,   -14,   -55,   172,   -55,   -55,    89,   -14,
     171,     0,     0,   192,   192,     0,   192,   192,   273,     0,
       0,   180,   181,     0,   182,   174,   183,   184,   185,     0,
     186,   187,   188,   114,   172,   190,     0,   258,   -58,   254,
     189,   -58,   -58,   -58,   -58,     0,   -11,   -11,     0,   241,
     242,   190,   190,   -11,   271,     0,   267,   189,     0,   -58,
       0,   166,   167,   172,   168,   212,   170,   -32,   171,   -32,
     155,   -32,   -32,   -32,     0,   -32,   -32,   -57,     0,   -57,
     -57,   -57,    90,     0,     0,     0,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -56,     0,   -56,   -56,   -56,    90,     0,     0,     0,
     -31,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   184,   185,     0,   186,   229,
     188,     0,     0,     0,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -54,
       0,   -54,   -54,    89,     0,     0,     0,     0,   -25,   -25,
       0,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,     0,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -28,   -28,     0,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -31,     0,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,    28,     0,    29,
       0,    30,    31,   161,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,    43,
      82,   -22,     0,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -22,   -22,     0,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,     0,   -22,   -22,   -23,     0,   -23,     0,   -23,
     -23,   -23,     0,   -23,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,     0,   -23,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -25,
       0,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -26,     0,   -26,     0,   -26,   -26,   -26,
       0,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,    28,     0,    29,
       0,    30,    31,   161,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,    40,    41,    42,     0,    43,
     100,    28,     0,    29,     0,    30,    31,   161,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,    40,
      41,    42,     0,    43,   118,   -21,     0,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,     0,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -29,
       0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -27,     0,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -28,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -24,     0,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -24,   -24,     0,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,    28,
       0,    29,     0,    30,    31,   161,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,    40,    41,    42,
       0,    43,   152,    28,     0,    29,     0,    30,    31,   161,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,    40,    41,    42,     0,    43,   153,   -36,     0,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,     0,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,
     -36,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -37,     0,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,    28,
       0,    29,     0,    30,    31,   161,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,    40,    41,    42,
       0,    43,   158,   -39,     0,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -39,     0,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,     0,   -39,   -39,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,    28,     0,    29,     0,    30,
      31,   161,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,    40,    41,    42,     0,    43,   284,    28,
       0,    29,     0,    30,    31,   161,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,    38,    39,     0,    40,    41,    42,
      28,    43,    29,     0,    30,    31,   161,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,    40,    41,
      42,   198,   144,   199,     0,   200,    31,   161,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,    40,
      41,    42,   -73,   201,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -77,   235,   -73,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -77,   -77,   -77,     0,     0,     0,     0,     0,
     -78,     0,   -77,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -79,
       0,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -79,   -79,   -79,     0,     0,     0,     0,     0,   -67,     0,
     -79,   -67,   -67,   -67,   -67,   244,   245,     0,     0,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -72,     0,   -67,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -68,     0,   -72,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -68,   -68,   -68,
       0,     0,     0,     0,     0,   -69,     0,   -68,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -69,   -69,   -69,     0,
       0,     0,     0,     0,   -66,     0,   -69,   -66,   -66,   -66,
     -66,   244,   245,     0,     0,   -66,   -66,   -66,     0,     0,
       0,     0,     0,   -65,     0,   -66,   -65,   -65,   -65,   -65,
     244,   245,     0,     0,   -65,   -65,   -65,     0,     0,     0,
       0,     0,   -76,     0,   -65,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -74,     0,   -76,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -74,   -74,   -74,     0,     0,     0,     0,     0,
     -70,     0,   -74,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -70,   -70,   -70,     0,     0,     0,     0,     0,   -71,
       0,   -70,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -71,   -71,     0,     0,     0,     0,     0,   -75,     0,
     -71,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,
     -75,   -75,   -62,     0,     0,   -62,   -62,   -62,   -62,   -75,
       0,     0,     0,   -62,   -62,   243,   -64,     0,     0,   -64,
     -64,   -64,   -64,   -62,     0,     0,     0,   -64,   -64,   -64,
     -60,     0,     0,   -60,   -60,   -60,   -60,   -64,     0,     0,
       0,   -60,   -60,   243,   -61,     0,     0,   -61,   -61,   -61,
     -61,   -60,     0,     0,     0,   -61,   -61,   243,   -63,     0,
       0,   -63,   -63,   -63,   -63,   -61,    34,    35,     0,   -63,
     -63,   -63,    38,    39,     0,    40,    73,    42,     0,   -63,
     -73,    78,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,    79,
     217,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,   218,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -42,
     -73,   -73,   -73,     0,     0,     0,     0,    34,    35,    79,
      36,     0,    37,    38,    39,     0,    40,    41,    42,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -77,   -77,   -77,   -77,   -77,   -77,   218,   -73,   -77,   -77,
     -77,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -77,   -78,
     -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -78,
     -79,   -79,   -79,   -67,   -67,   -67,   -67,   227,   228,     0,
     -79,   -67,   -67,   -67,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -67,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -72,   -68,   -68,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -68,   -69,   -69,   -69,   -66,   -66,   -66,
     -66,   227,   228,     0,   -69,   -66,   -66,   -66,   -65,   -65,
     -65,   -65,   227,   228,     0,   -66,   -65,   -65,   -65,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -65,   -76,   -76,   -76,
     -74,   -74,   -74,   -74,   -74,   -74,     0,   -76,   -74,   -74,
     -74,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -74,   -70,
     -70,   -70,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -70,
     -71,   -71,   -71,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -71,   -75,   -75,   -75,   -62,   -62,   -62,   -62,     0,     0,
       0,   -75,   -62,   -62,   226,   -64,   -64,   -64,   -64,     0,
       0,     0,   -62,   -64,   -64,   -64,   -60,   -60,   -60,   -60,
       0,     0,     0,   -64,   -60,   -60,   226,   -61,   -61,   -61,
     -61,     0,     0,     0,   -60,   -61,   -61,   226,   -63,   -63,
     -63,   -63,     0,     0,     0,   -61,   -63,   -63,   -63,   -58,
     -58,   -58,   -58,     0,     0,     0,   -63,   224,   225,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -58,     0,   -77,
     -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -78,   -78,   -78,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -79,   -79,   -79,   -67,     0,
     -67,   -67,   -67,   -67,    94,    95,     0,     0,   -67,   -67,
     -67,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,   -72,   -72,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -68,   -68,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -69,   -69,
     -66,     0,   -66,   -66,   -66,   -66,    94,    95,     0,     0,
     -66,   -66,   -66,   -65,     0,   -65,   -65,   -65,   -65,    94,
      95,     0,     0,   -65,   -65,   -65,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -76,   -76,   -76,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -74,
     -74,   -74,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -71,   -71,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,
     -75,   162,   163,     0,   164,     0,   165,   166,   167,     0,
     168,   169,   170,   -42,   180,   181,     0,   182,     0,   183,
     184,   185,     0,   186,   187,   188,   255,   180,   181,     0,
     182,     0,   183,   184,   185,     0,   186,   187,   188,   268,
     -62,     0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
     -62,   -62,    93,   -64,     0,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,   -64,   -64,   -64,   -60,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,   -60,   -60,    93,   -61,
       0,   -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,
     -61,    93,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,    34,    35,     0,    36,     0,
      37,    38,    39,     0,    40,    41,    42,   162,   163,     0,
     164,     0,   165,   166,   167,     0,   168,   169,   170,    34,
      35,     0,    36,     0,    37,    38,    39,     0,    40,    73,
      42,   180,   181,     0,   182,     0,   183,   184,   185,     0,
     186,   187,   188,   162,   163,     0,   164,     0,   165,   166,
     167,     0,   168,   212,   170,   180,   181,     0,   182,     0,
     183,   184,   185,     0,   186,   229,   188,   -59,     0,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,    91,    92,   -58,
       0,   -58,   -58,   -58,   -58,   162,   163,     0,     0,    91,
      92,   166,   167,     0,   168,   212,   170,   180,   181,     0,
       0,     0,     0,   184,   185,     0,   186,   229,   188
};

static const yytype_int16 yycheck[] =
{
       0,    31,    31,    26,     4,     1,     8,     0,    12,   134,
      14,     1,    42,    12,   131,    14,    12,    42,    18,     8,
      43,    21,    33,     7,    20,    21,     7,    23,    30,    25,
      26,    27,   157,    29,    30,    31,    34,    35,    68,    69,
      30,    30,    72,    68,    42,   131,     8,    72,    32,    79,
      44,    32,    11,    30,    79,    14,    15,    16,    17,    12,
       1,    12,    11,    88,    64,    14,    15,    16,    30,     7,
      68,    12,    66,    32,    72,   218,    33,    31,    31,    20,
      21,    79,    23,    32,    25,    26,    27,    81,    29,    30,
      31,    11,   235,   131,    14,    11,    94,    95,    14,    15,
      16,   131,    14,    11,   134,   128,   129,    31,    11,    11,
     140,   131,    32,   133,    31,   140,    32,    31,    12,    12,
      32,   144,    11,   131,    32,    14,    15,   157,   148,    32,
      32,   131,   157,    11,    14,   155,    14,    15,    16,    17,
     170,    11,   140,    32,    14,   170,    12,    11,   142,   143,
      14,    15,    32,    11,    32,    36,    37,    12,   188,   157,
     154,    42,    32,   188,   162,   163,   164,   165,    32,    30,
     287,   288,   170,   290,    32,    12,   293,    33,   201,    11,
      33,    32,   180,   181,   182,   183,    33,    68,   218,    12,
     188,    72,   217,   218,    11,   220,   221,    11,    79,    33,
      32,   287,   288,    32,   290,   235,    32,   293,    31,   234,
     235,    11,   237,   238,    12,    32,   246,   247,    32,   217,
     218,   246,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    32,    32,    31,    12,    42,   234,   235,    32,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   287,
     288,    12,   290,    32,   248,   293,    32,   287,   288,   140,
     290,    68,    32,   293,    12,    72,    32,   287,   288,    32,
     290,    11,    79,   293,    42,    11,   157,    11,    32,   287,
     288,    12,   290,   164,   165,   293,    93,   287,   288,   170,
     290,    12,    32,   293,    14,    15,    32,    12,    32,    12,
      68,   182,   183,    12,    72,    14,    15,   188,     0,     1,
      12,    79,    32,    32,    11,     7,    13,    14,    15,    16,
      17,    18,    19,    91,    92,    22,    23,    24,    14,    15,
      16,    17,    31,   140,    31,    32,   217,   218,    31,   220,
     221,   222,   223,   224,   225,   226,    32,    42,    14,    15,
     157,    12,    12,   234,   235,    12,   237,   238,   239,   240,
     241,   242,   243,   170,    12,   246,    32,    14,    15,    16,
      17,    30,   140,    68,    32,   130,   131,    72,   133,     1,
      12,   188,    14,    15,    79,    32,    12,     0,     1,   157,
       0,     1,    32,   148,     7,    90,    32,     7,    20,    21,
     155,    23,   170,    25,    26,    27,    28,    29,    30,    31,
     217,   218,    12,   220,   221,   222,   223,   224,   225,   226,
     188,    42,    14,    15,    16,    32,    32,   234,   235,    32,
     237,   238,   239,   240,   241,   242,   243,    32,     4,   246,
      32,    21,    14,    15,    16,   140,   282,    68,   247,   217,
     218,    72,   220,   221,   222,   223,   224,   225,    79,    42,
      32,    -1,   157,    -1,    42,    -1,   234,   235,    89,   237,
     238,   239,   240,   241,   242,   170,    11,    -1,   246,    14,
      15,    16,    17,     1,    -1,    68,    -1,    22,    23,    72,
      68,     0,     1,   188,    72,    -1,    79,    32,     7,    -1,
      78,    79,    20,    21,    87,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,     0,     1,    -1,     0,     1,   140,
      -1,     7,   217,   218,     7,   220,   221,   222,   223,    -1,
       0,     1,   287,   288,    -1,   290,   157,     7,   293,   234,
     235,    -1,   237,   238,   239,   240,    -1,    -1,    -1,   170,
      -1,   246,    14,    15,    16,    17,     1,   140,     0,     1,
      22,    23,   140,    -1,    -1,     7,    -1,   188,    26,    27,
      32,    29,    30,    31,   157,    20,    21,    -1,    23,   157,
      25,    26,    27,    -1,    29,    30,    31,   170,     0,     1,
      -1,    -1,   170,    -1,    -1,     7,   217,   218,    -1,   220,
     221,   222,     0,     1,    12,   188,    14,    15,    16,     7,
     188,    -1,    -1,   234,   235,    -1,   237,   238,   239,    -1,
      -1,    20,    21,    -1,    23,   246,    25,    26,    27,    -1,
      29,    30,    31,    32,   217,   218,    -1,   220,    11,   217,
     218,    14,    15,    16,    17,    -1,     0,     1,    -1,    22,
      23,   234,   235,     7,   237,    -1,   234,   235,    -1,    32,
      -1,    26,    27,   246,    29,    30,    31,     1,   246,     3,
       4,     5,     6,     7,    -1,     9,    10,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,    -1,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
       1,    33,     3,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,     1,    33,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    11,    33,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    11,    31,    32,    14,    15,    16,    17,    18,    19,
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
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    32,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      32,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    11,    -1,    -1,    14,    15,    16,    17,    32,
      -1,    -1,    -1,    22,    23,    24,    11,    -1,    -1,    14,
      15,    16,    17,    32,    -1,    -1,    -1,    22,    23,    24,
      11,    -1,    -1,    14,    15,    16,    17,    32,    -1,    -1,
      -1,    22,    23,    24,    11,    -1,    -1,    14,    15,    16,
      17,    32,    -1,    -1,    -1,    22,    23,    24,    11,    -1,
      -1,    14,    15,    16,    17,    32,    20,    21,    -1,    22,
      23,    24,    26,    27,    -1,    29,    30,    31,    -1,    32,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    12,
      22,    23,    24,    -1,    -1,    -1,    -1,    20,    21,    31,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      14,    15,    16,    17,    18,    19,    31,    32,    22,    23,
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
      22,    23,    24,    14,    15,    16,    17,    18,    19,    -1,
      32,    22,    23,    24,    14,    15,    16,    17,    -1,    -1,
      -1,    32,    22,    23,    24,    14,    15,    16,    17,    -1,
      -1,    -1,    32,    22,    23,    24,    14,    15,    16,    17,
      -1,    -1,    -1,    32,    22,    23,    24,    14,    15,    16,
      17,    -1,    -1,    -1,    32,    22,    23,    24,    14,    15,
      16,    17,    -1,    -1,    -1,    32,    22,    23,    24,    14,
      15,    16,    17,    -1,    -1,    -1,    32,    22,    23,    12,
      -1,    14,    15,    16,    17,    18,    19,    32,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
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
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    32,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    12,
      -1,    14,    15,    16,    17,    20,    21,    -1,    -1,    22,
      23,    26,    27,    -1,    29,    30,    31,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    -1,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    36,    37,    38,    39,    44,    56,    12,
      31,     8,    30,     0,    38,    31,    12,    32,    42,    30,
      32,    40,    33,     7,    45,    56,    33,    45,     1,     3,
       5,     6,     9,    10,    20,    21,    23,    25,    26,    27,
      29,    30,    31,    33,    46,    47,    48,    49,    51,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    68,     8,    30,    11,    32,    46,    32,    31,    31,
      57,    31,    31,    30,    66,    66,    65,    65,    13,    31,
      57,    46,    34,    47,    12,    12,    12,    14,    15,    16,
      17,    22,    23,    24,    18,    19,    12,    30,    56,    43,
      34,    41,     1,    57,     1,    53,    54,    57,     1,    30,
       1,    28,    57,    58,    32,    57,    67,    32,    34,    59,
      60,    61,    62,    63,    63,    64,    66,    66,    33,    33,
      32,    32,    52,    32,    12,    32,    32,    32,    32,    32,
      11,    32,    46,    46,    33,    48,    50,    50,    32,    50,
      54,    57,    34,    34,    46,     4,    50,    12,    34,    50,
      54,     7,    20,    21,    23,    25,    26,    27,    29,    30,
      31,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      20,    21,    23,    25,    26,    27,    29,    30,    31,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     1,     3,
       5,    33,    48,    49,    51,    55,    56,    57,    68,    57,
       8,    30,    30,    66,    66,    65,    65,    13,    31,    57,
      14,    15,    16,    17,    22,    23,    24,    18,    19,    30,
      66,    66,    65,    65,    13,    31,    57,    14,    15,    16,
      17,    22,    23,    24,    18,    19,    31,    31,    46,    12,
      12,    12,    12,    30,    58,    32,    67,    32,    59,    60,
      61,    62,    63,    63,    64,    66,    66,    58,    32,    67,
      32,    59,    60,    61,    62,    63,    63,    64,    66,    66,
       1,    57,     1,    53,    34,    32,    32,    32,    32,    52,
      32,    50,    50,    32,    50,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    40,
      41,    39,    42,    43,    39,    39,    39,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    50,    50,    51,    52,    51,
      53,    54,    54,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68
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
       3,     3,     1,     3,     1,     2,     2,     1,     2,     2,
       3,     3,     1,     1,     3,     4,     3,     1,     1,     1,
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
#line 97 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro), NULL);

                                                        // Checa se existe main
                                                        if(procuraLista(&cabeca, "main", 0)) {
                                                            printf("Erro semantico: funcao main nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        
                                                        // Caso nao hajam erros lexicos, sintaticos e semanticos, imprime a arvore
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0/* && num_erros_semanticos == 0*/) {
                                                            printf("Sem erros lexicos\n");
                                                            printf("Sem erros sintaticos\n");
                                                            printf("Sem erros semanticos\n\n");
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            //desalocar(raiz);      // Ver se tem problema tirar o desalocar daqui
                                                            printf("\n\n");
                                                        } else {
                                                            printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                            printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                            printf("Foram encontrados %d erros semanticos\n", num_erros_semanticos);
                                                        }
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        desalocar(raiz);
                                                        liberaEsc(primeiro);}
#line 2194 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 129 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2200 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 130 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2207 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 134 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2213 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 135 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2219 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 136 "./src/sintaxe.y"
                                                        {}
#line 2225 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 140 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1);}
#line 2231 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 140 "./src/sintaxe.y"
                                                                                         {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 2237 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 140 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2243 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 141 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1);}
#line 2249 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 141 "./src/sintaxe.y"
                                                                                        {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 2255 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 141 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2261 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 142 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2267 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 143 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2273 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 146 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 2283 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 2291 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 157 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2297 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2303 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt block  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2309 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: block  */
#line 162 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2316 "./src/sintaxe.tab.c"
    break;

  case 23: /* block: stmt  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2322 "./src/sintaxe.tab.c"
    break;

  case 24: /* block: ABRE_C moreStmt FECHA_C  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2328 "./src/sintaxe.tab.c"
    break;

  case 25: /* stmt: conditional  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2334 "./src/sintaxe.tab.c"
    break;

  case 26: /* stmt: iteration  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2340 "./src/sintaxe.tab.c"
    break;

  case 27: /* stmt: varDecl PV  */
#line 172 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2346 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: attribuition PV  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2352 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: io PV  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2358 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: ret PV  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2364 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: error  */
#line 176 "./src/sintaxe.y"
                                                        {}
#line 2370 "./src/sintaxe.tab.c"
    break;

  case 32: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 179 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2377 "./src/sintaxe.tab.c"
    break;

  case 33: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 181 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, NULL, (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-4].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2384 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 183 "./src/sintaxe.y"
                                                                                            {}
#line 2390 "./src/sintaxe.tab.c"
    break;

  case 35: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2396 "./src/sintaxe.tab.c"
    break;

  case 36: /* bracesStmt: stmt  */
#line 187 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2402 "./src/sintaxe.tab.c"
    break;

  case 37: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesStmt  */
#line 190 "./src/sintaxe.y"
                                                                   {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2408 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 191 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2414 "./src/sintaxe.tab.c"
    break;

  case 39: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesStmt  */
#line 191 "./src/sintaxe.y"
                                                                   {}
#line 2420 "./src/sintaxe.tab.c"
    break;

  case 40: /* iteArgs: expIte PV expIte PV expIte  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2426 "./src/sintaxe.tab.c"
    break;

  case 41: /* expIte: attribuition  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2432 "./src/sintaxe.tab.c"
    break;

  case 42: /* expIte: %empty  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2438 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 204 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2446 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 208 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2452 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 210 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2462 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 216 "./src/sintaxe.y"
                                                        {}
#line 2468 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P error FECHA_P  */
#line 217 "./src/sintaxe.y"
                                                        {}
#line 2474 "./src/sintaxe.tab.c"
    break;

  case 48: /* varDecl: TIPO ID  */
#line 221 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 2482 "./src/sintaxe.tab.c"
    break;

  case 49: /* varDecl: TIPO LIST ID  */
#line 225 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 2489 "./src/sintaxe.tab.c"
    break;

  case 50: /* attribuition: ID ATRIB expLogic  */
#line 229 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        //printf("%s e %s\n", simb->tipo, $3->tipo);
                                                        if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp((yyval.no)->no1->simbolo->tipo, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp((yyval.no)->no1->simbolo->tipo, "int"))) {
                                                            char aux[15];
                                                            strcpy(aux, "(");
                                                            strcat(aux, simb->tipo);
                                                            strcat(aux, ")");
                                                            struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                            (yyval.no)->no2 = no;
                                                        } else if(!strcmp((yyvsp[0].no)->tipo, "int list")){
                                                            if(strcmp((yyval.no)->no1->simbolo->tipo, "int list")) {
                                                                printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        } else if(!strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            if(strcmp((yyval.no)->no1->simbolo->tipo, "float list")) {
                                                                printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        } else {
                                                            //printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            //++num_erros_semanticos;
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        }}
#line 2522 "./src/sintaxe.tab.c"
    break;

  case 51: /* attribuition: expLogic  */
#line 257 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2528 "./src/sintaxe.tab.c"
    break;

  case 52: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 260 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2534 "./src/sintaxe.tab.c"
    break;

  case 53: /* expLogic: andLogic  */
#line 261 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2540 "./src/sintaxe.tab.c"
    break;

  case 54: /* andLogic: andLogic LOG_OP_E expComp  */
#line 264 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2546 "./src/sintaxe.tab.c"
    break;

  case 55: /* andLogic: expComp  */
#line 265 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2552 "./src/sintaxe.tab.c"
    break;

  case 56: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 268 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2558 "./src/sintaxe.tab.c"
    break;

  case 57: /* expComp: expRel  */
#line 269 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2564 "./src/sintaxe.tab.c"
    break;

  case 58: /* expRel: expRel REL_OP_ALTA expArit  */
#line 272 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2570 "./src/sintaxe.tab.c"
    break;

  case 59: /* expRel: expArit  */
#line 273 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2576 "./src/sintaxe.tab.c"
    break;

  case 60: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 276 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2582 "./src/sintaxe.tab.c"
    break;

  case 61: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 277 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2588 "./src/sintaxe.tab.c"
    break;

  case 62: /* expArit: expMul  */
#line 278 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2594 "./src/sintaxe.tab.c"
    break;

  case 63: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 281 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2600 "./src/sintaxe.tab.c"
    break;

  case 64: /* expMul: negElement  */
#line 282 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2606 "./src/sintaxe.tab.c"
    break;

  case 65: /* negElement: LOG_OP_NEG expList  */
#line 285 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2613 "./src/sintaxe.tab.c"
    break;

  case 66: /* negElement: ARIT_OP_MENOS expList  */
#line 287 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2620 "./src/sintaxe.tab.c"
    break;

  case 67: /* negElement: expList  */
#line 289 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2626 "./src/sintaxe.tab.c"
    break;

  case 68: /* expList: LIST_OP_UN element  */
#line 292 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2633 "./src/sintaxe.tab.c"
    break;

  case 69: /* expList: LIST_OP_HEADER element  */
#line 294 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        char* aux = strtok((yyvsp[0].no)->tipo, " ");
                                                        strcpy((yyval.no)->tipo, aux);}
#line 2641 "./src/sintaxe.tab.c"
    break;

  case 70: /* expList: expList LIST_OP_BIN element  */
#line 298 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        char aux[15];
                                                        strcpy(aux, (yyvsp[-2].no)->simbolo->tipo);
                                                        strcat(aux, " list");
                                                        strcpy((yyval.no)->tipo, aux);
                                                        if(strcmp((yyvsp[-2].no)->simbolo->varOuFunc, "funcao")) {
                                                            printf("Erro semantico: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        } else if((yyvsp[-2].no)->simbolo->numArgs != 1) {
                                                            printf("Erro semantico: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}
#line 2658 "./src/sintaxe.tab.c"
    break;

  case 71: /* expList: expList LIST_OP_CONSTRUTOR element  */
#line 310 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2665 "./src/sintaxe.tab.c"
    break;

  case 72: /* expList: element  */
#line 312 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2671 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: ID  */
#line 317 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: variavel nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}
#line 2684 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: ABRE_P attribuition FECHA_P  */
#line 326 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2690 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: ID ABRE_P arguments FECHA_P  */
#line 328 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: funcao nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}
#line 2703 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: ID ABRE_P FECHA_P  */
#line 337 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: funcao nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }}
#line 2716 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: CONST_INT  */
#line 346 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");}
#line 2723 "./src/sintaxe.tab.c"
    break;

  case 78: /* element: CONST_FLOAT  */
#line 349 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");}
#line 2730 "./src/sintaxe.tab.c"
    break;

  case 79: /* element: NIL  */
#line 352 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 2737 "./src/sintaxe.tab.c"
    break;

  case 80: /* arguments: arguments VIRG attribuition  */
#line 356 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));}
#line 2743 "./src/sintaxe.tab.c"
    break;

  case 81: /* arguments: attribuition  */
#line 357 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2750 "./src/sintaxe.tab.c"
    break;

  case 82: /* ret: RETURN attribuition  */
#line 361 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2756 "./src/sintaxe.tab.c"
    break;


#line 2760 "./src/sintaxe.tab.c"

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

#line 364 "./src/sintaxe.y"



/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
void yyerror(const char *s) {
    printf("ERRO: %s\nLinha: %d\tColuna: %d\n\n", s, yylval.tok.linha, yylval.tok.coluna);
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
