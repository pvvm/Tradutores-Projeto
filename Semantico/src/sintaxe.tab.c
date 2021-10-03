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
#line 18 "./src/sintaxe.y"

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
int num_args_chamada = 0;
int argumentos = 0;
char aux[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;
struct listaArgs* args = NULL;

void yyerror(const char *);

#line 100 "./src/sintaxe.tab.c"

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
  YYSYMBOL_expList = 62,                   /* expList  */
  YYSYMBOL_expArit = 63,                   /* expArit  */
  YYSYMBOL_expMul = 64,                    /* expMul  */
  YYSYMBOL_negElement = 65,                /* negElement  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3072

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

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
       0,   102,   102,   124,   129,   130,   134,   135,   136,   140,
     140,   140,   141,   141,   141,   142,   143,   146,   152,   157,
     158,   161,   162,   166,   167,   170,   171,   172,   173,   174,
     175,   176,   179,   181,   183,   186,   187,   190,   191,   191,
     194,   197,   198,   204,   208,   210,   216,   217,   221,   228,
     235,   263,   266,   267,   270,   271,   274,   275,   278,   279,
     282,   311,   313,   316,   317,   318,   321,   322,   325,   333,
     341,   349,   358,   363,   373,   375,   426,   437,   440,   443,
     447,   451,   457
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
  "andLogic", "expComp", "expRel", "expList", "expArit", "expMul",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,     2,    42,    26,    59,    99,   313,   -10,    52,     8,
      31,    43,  -204,   333,    21,   376,    32,    61,   117,    37,
      61,  1959,    49,    62,    73,  1959,    79,   298,    44,    67,
    2945,    97,   100,   569,   569,   569,   569,  2693,  2706,  2719,
    2396,  2957,  1959,  1177,  1211,  1245,  1279,  1313,    90,   125,
     126,     4,   372,   685,   627,   589,  2977,  2732,  2745,  2758,
     129,   163,   103,    61,   165,  1347,   192,   590,    66,   184,
       5,   374,  2436,  2771,  2784,  2797,  2810,  2981,  2815,   169,
    1381,   378,  1415,  1449,  1483,  1517,  2981,  2981,  2981,  2981,
    2981,  2981,  2981,  2981,  2981,  1551,   104,   111,   223,   389,
     226,   181,   234,   241,   249,   278,   282,   264,   266,   274,
     279,   280,    15,  2836,   191,   209,  2849,  1585,   461,   802,
     734,   700,  3001,  3013,  2862,  2875,  2888,  1959,  1959,  1990,
    2021,   290,  1990,  2445,   288,   314,   318,   324,   325,  3017,
    2901,  1619,  1653,  1959,  1687,  1721,   701,  1990,  1755,   326,
     250,   425,   526,  1789,  1990,  1823,  2906,  1857,  1891,   309,
      50,   599,   599,   599,   599,  2474,  2485,  2496,  2415,  2957,
     180,   328,   438,   168,   664,  2650,  2507,  2518,  2529,   754,
     754,   754,   754,   399,  2080,  2099,  2042,  2957,    71,   131,
     463,   145,   136,   102,  2118,  2137,  2156,   735,   350,   367,
    1959,   769,   803,   837,   394,   408,   416,   417,   395,   409,
     426,  2463,  2540,  2551,  2562,  2573,  3029,  2919,   410,  3029,
    3029,  3029,  3029,  3029,  3029,  3029,  3029,  3029,  2061,  2175,
    2194,  2213,  2232,  3041,  2932,   427,  3041,  3041,  3041,  3041,
    3041,  3041,  3041,  3041,  3041,   636,   522,  1925,   871,   905,
     939,   973,   456,   256,  2584,   251,  2595,   342,   523,   419,
    2682,  2661,  2672,  2606,  2617,  2628,   196,  2251,   253,  2270,
     377,   553,   500,   261,  2365,  2384,  2289,  2308,  2327,   439,
     440,   241,   449,  1007,  2639,  2346,  2021,  2021,   451,  2021,
    1041,  1075,  2021,  1109,  1143
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,   306,  -204,  -204,  -204,  -204,  -204,  -204,
     476,   -20,    -9,  -122,  -111,   -78,   -68,   217,   254,  -120,
     -47,     0,   -29,   -30,   458,   453,   415,   341,   268,   224,
     128,    10,  -203,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    20,   100,    17,    98,     7,
      23,    43,    44,    45,    46,   145,    47,   131,   104,   105,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   115,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    69,    -8,    -8,     8,    65,   107,   144,   201,    -8,
     144,   170,    79,   149,   255,   -12,   -51,    24,    86,   202,
      24,    14,    80,    -3,     1,   144,    12,   -50,    -9,    86,
       2,   268,   144,     9,    82,   108,   159,   170,   102,   106,
      16,   170,   111,    73,    74,    75,    76,   112,   188,   114,
      10,   178,   146,    19,   148,   -48,    82,    61,   209,    -2,
       1,    18,   203,    97,    15,    21,     2,   103,    22,   155,
      25,    82,    11,    63,   -17,    67,   158,   178,   -42,    62,
     210,   178,   -51,   204,   -20,   236,    33,    34,   196,    35,
      63,    36,    37,    38,    64,    39,    40,    41,    68,    -5,
      -5,   206,    83,   -51,   106,   -20,    -5,   141,   142,   188,
     150,    66,   207,   -62,   -48,   -49,   -62,   -62,   -62,   -62,
     -62,   -62,   -19,   153,   242,   243,   170,   208,    70,   -49,
     205,    71,    82,    82,   -62,   -48,   -49,    84,    85,   170,
     218,    95,   -53,   -19,    82,   -53,   237,   -59,   -18,   196,
     -59,   -59,   -59,   -59,   240,   241,   -57,   170,   235,   -57,
     -57,   -57,   239,   -53,   201,   201,   178,   201,   -59,   177,
     201,   212,   213,   214,   215,   202,   202,   -57,   202,   178,
     247,   202,   -57,   -57,   -57,   222,   253,   188,   114,   229,
     230,   231,   232,    96,   219,   177,   -82,   178,   -13,   177,
     -57,   116,   -81,   266,   188,   114,   195,   -50,   290,   291,
     236,   293,   -51,   129,   294,   170,   280,   106,   203,   203,
     139,   203,   126,   -81,   203,   -10,   178,   196,   -50,   178,
     178,   178,   178,   178,   178,   178,   178,   178,    82,   204,
     204,   140,   204,   196,   196,   204,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   178,   127,   206,   206,   128,
     206,   -80,   139,   206,   139,   176,   130,   195,   207,   207,
     219,   207,   -58,   -38,   207,   -58,   -58,   -58,   -58,   240,
     241,   132,   -80,   284,   177,   285,   205,   205,   -50,   205,
     133,   176,   205,   -58,   -41,   176,   134,   177,   135,   -31,
     -46,   -31,   194,   -31,   -31,   -31,   136,   -31,   -31,   175,
      13,   137,   138,    -6,    -6,   177,   124,   125,   -31,   -31,
      -6,   -31,   147,   -31,   -31,   -31,   -43,   -31,   -31,   -31,
     -47,   -31,   -31,    -4,    -4,   175,   -45,   -44,   156,   175,
      -4,   -40,   -53,   220,   177,   195,   193,   177,   177,   177,
     177,   177,   177,   177,   177,   265,   -52,   220,   122,   123,
     -53,   195,   195,   194,   195,   195,   195,   195,   195,   195,
     195,   195,   278,   177,   -52,   109,    -7,    -7,   -16,   -16,
     176,   245,   174,    -7,   -53,   -16,   -53,    87,   -52,   -15,
     -15,   -52,   237,   176,   161,   162,   -15,   163,   246,   164,
     165,   166,   110,   167,   168,   169,   248,   193,   174,   -52,
     -77,   176,   174,   -77,   -77,   -77,   -77,   -77,   -77,   192,
     249,   -77,   -77,   -77,   175,   -14,   -14,   -41,   250,   251,
     121,   -77,   -14,   -56,   -56,   -56,   222,   175,   -48,   252,
     176,   194,   256,   176,   176,   176,   176,   176,   176,   263,
     264,   -56,   -55,   -55,   221,   175,   173,   194,   194,   269,
     194,   194,   194,   194,   194,   194,   276,   277,   -49,   176,
     -55,   286,   287,   -52,   -55,   -52,    87,   -55,   -55,   238,
     192,   289,   173,   292,   175,   193,   173,   175,   175,   175,
     175,   261,   262,   191,   172,   -55,    26,   174,   288,   171,
     282,   193,   193,   120,   193,   193,   193,   193,   274,   275,
     174,   -56,     0,   175,   -56,   -56,   -56,   239,     0,     0,
     172,     0,     0,   281,   172,   171,   -11,   -11,   174,   171,
       0,   190,   -56,   -11,   -42,     0,   189,   -54,   -54,   221,
     119,     0,    33,    34,   118,    35,     0,    36,    37,    38,
       0,    39,    40,    41,   191,   -54,     0,   174,   192,     0,
     174,   174,   174,   260,   -54,     0,     0,   -54,   -54,   238,
       0,   173,     0,     0,   192,   192,     0,   192,   192,   192,
     273,     0,     0,     0,   173,   -54,   174,     0,     0,     0,
       0,   101,   190,     0,     0,    37,    38,   189,    39,    72,
      41,   -59,   173,   -59,   -59,   -59,   -59,    90,    91,   172,
     161,   162,     0,   163,   171,   164,   165,   166,     0,   167,
     168,   169,   172,     0,     0,   165,   166,   171,   167,   211,
     169,   173,   191,     0,   173,   173,   259,   279,     0,   -57,
     172,   -57,   -57,   -57,    89,   171,     0,     0,   191,   191,
       0,   191,   191,   272,     0,     0,   161,   162,     0,   163,
     173,   164,   165,   166,     0,   167,   168,   169,     0,   172,
     190,     0,   172,   258,   171,   189,     0,   257,   -59,   -59,
     -59,   -59,   223,   224,     0,     0,   190,   190,     0,   190,
     271,   189,   189,     0,   270,     0,   -59,   -55,   172,   -55,
     -55,    88,   -32,   171,   -32,   154,   -32,   -32,   -32,     0,
     -32,   -32,   -58,     0,   -58,   -58,   -58,   -58,    90,    91,
       0,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -56,     0,   -56,   -56,
     -56,    89,     0,     0,     0,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     183,   184,     0,   185,   228,   187,     0,     0,     0,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -54,     0,   -54,   -54,    88,     0,
       0,     0,     0,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,
     -26,   -26,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,     0,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,     0,   -39,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,    27,     0,
      28,     0,    29,    30,   160,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,     0,    36,    37,    38,     0,    39,    40,    41,     0,
      42,    81,   -22,     0,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -22,   -22,     0,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,   -23,     0,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -23,   -23,     0,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -25,     0,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -25,
     -25,     0,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -26,     0,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,     0,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,    27,     0,
      28,     0,    29,    30,   160,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,     0,    36,    37,    38,     0,    39,    40,    41,     0,
      42,    99,    27,     0,    28,     0,    29,    30,   160,     0,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    40,    41,     0,    42,   117,   -21,     0,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -21,   -21,     0,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -29,     0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,   -28,     0,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -24,     0,   -24,     0,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,
      27,     0,    28,     0,    29,    30,   160,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,     0,    42,   151,    27,     0,    28,     0,    29,    30,
     160,     0,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    35,     0,    36,    37,
      38,     0,    39,    40,    41,     0,    42,   152,   -36,     0,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,
     -36,   -36,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -37,     0,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
      27,     0,    28,     0,    29,    30,   160,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,     0,    42,   157,   -39,     0,   -39,     0,   -39,   -39,
     -39,     0,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,     0,   -39,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -35,     0,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,    27,     0,    28,     0,
      29,    30,   160,     0,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,     0,    42,   283,
      27,     0,    28,     0,    29,    30,   160,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    40,
      41,    27,    42,    28,     0,    29,    30,   160,     0,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,   197,   143,   198,     0,   199,    30,   160,     0,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    40,    41,   -73,   200,   233,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -73,   -73,   -73,     0,     0,     0,
       0,     0,   -73,   234,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -78,   234,   -73,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -78,   -78,   -78,     0,     0,     0,     0,     0,
     -79,     0,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,     0,     0,     0,     0,     0,   -65,
       0,   -79,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
     -65,   -65,   244,     0,     0,     0,     0,     0,   -67,     0,
     -65,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -72,     0,   -67,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -70,     0,   -72,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,   -70,   -70,   -70,
       0,     0,     0,     0,     0,   -71,     0,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -71,   -71,   -71,     0,
       0,     0,     0,     0,   -69,     0,   -71,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,   -68,     0,   -69,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -68,   -68,     0,     0,     0,
       0,     0,   -76,     0,   -68,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -74,     0,   -76,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -74,   -74,   -74,     0,     0,     0,     0,     0,
     -63,     0,   -74,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -63,   244,     0,     0,     0,     0,     0,   -64,
       0,   -63,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -64,   -64,   244,     0,     0,     0,     0,     0,   -66,     0,
     -64,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -75,     0,   -66,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,
     -75,     0,     0,     0,     0,     0,   -60,     0,   -75,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   242,   243,     0,
       0,     0,     0,     0,     0,   -61,     0,   -60,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   242,   243,   -73,    77,
     -73,   -73,   -73,   -73,   -73,   -73,   -61,     0,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,    78,   216,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,   217,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -42,   -73,   -73,
     -73,     0,     0,     0,     0,    33,    34,    78,    35,     0,
      36,    37,    38,     0,    39,    40,    41,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,   -73,   -73,   -73,   -77,   -77,
     -77,   -77,   -77,   -77,   217,   -73,   -77,   -77,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -77,   -78,   -78,   -78,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -78,   -79,   -79,
     -79,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -79,   -65,
     -65,   227,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -65,
     -67,   -67,   -67,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -67,   -72,   -72,   -72,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -72,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -70,   -71,   -71,   -71,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -71,   -69,   -69,   -69,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -69,   -68,   -68,   -68,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -68,   -76,   -76,   -76,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -76,   -74,   -74,   -74,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -74,   -63,   -63,
     227,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -63,   -64,
     -64,   227,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -64,
     -66,   -66,   -66,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -66,   -75,   -75,   -75,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -75,   225,   226,     0,   -60,   -60,   -60,   -60,   -60,
     -60,     0,   -62,   225,   226,     0,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -60,   225,   226,   -58,   -58,   -58,   -58,
     223,   224,     0,     0,   -61,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -58,   -77,   -77,   -77,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -65,    94,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -67,   -67,   -67,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -70,   -70,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -71,   -71,   -71,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -69,   -69,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -68,   -68,   -68,   179,   180,     0,   181,     0,
     182,   183,   184,     0,   185,   186,   187,   113,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -74,   -74,   -74,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -63,   -63,    94,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -64,   -64,    94,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,   -66,   -66,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -75,   -75,   -75,   161,   162,     0,   163,
       0,   164,   165,   166,     0,   167,   168,   169,   -42,   179,
     180,     0,   181,     0,   182,   183,   184,     0,   185,   186,
     187,   254,   179,   180,     0,   181,     0,   182,   183,   184,
       0,   185,   186,   187,   267,    33,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,   161,   162,     0,
     163,     0,   164,   165,   166,     0,   167,   168,   169,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,    92,
      93,    33,    34,     0,    35,     0,    36,    37,    38,     0,
      39,    72,    41,   -60,     0,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,    92,    93,   -61,     0,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,    92,    93,   179,   180,     0,
     181,     0,   182,   183,   184,     0,   185,   186,   187,   161,
     162,     0,   163,     0,   164,   165,   166,     0,   167,   211,
     169,   179,   180,     0,   181,     0,   182,   183,   184,     0,
     185,   228,   187
};

static const yytype_int16 yycheck[] =
{
       0,    30,     0,     1,     4,    25,     1,   129,   130,     7,
     132,    41,    41,   133,   217,     7,    12,    17,    14,   130,
      20,    31,    42,     0,     1,   147,     0,    12,     7,    14,
       7,   234,   154,    31,    43,    30,   156,    67,    67,    68,
      32,    71,    71,    33,    34,    35,    36,    77,    78,    78,
       8,    41,   130,    32,   132,    12,    65,     8,     8,     0,
       1,    30,   130,    63,    12,    33,     7,     1,     7,   147,
      33,    80,    30,    11,    31,    31,   154,    67,    12,    30,
      30,    71,    11,   130,    11,    14,    20,    21,    78,    23,
      11,    25,    26,    27,    32,    29,    30,    31,    31,     0,
       1,   130,    12,    32,   133,    32,     7,   127,   128,   139,
     139,    32,   130,    11,    11,    11,    14,    15,    16,    17,
      18,    19,    11,   143,    22,    23,   156,   156,    31,    12,
     130,    31,   141,   142,    32,    32,    32,    12,    12,   169,
     169,    12,    11,    32,   153,    14,    15,    11,    31,   139,
      14,    15,    16,    17,    18,    19,    11,   187,   187,    14,
      15,    16,    17,    32,   286,   287,   156,   289,    32,    41,
     292,   161,   162,   163,   164,   286,   287,    32,   289,   169,
     200,   292,    14,    15,    16,    17,   216,   217,   217,   179,
     180,   181,   182,    30,    14,    67,    12,   187,    33,    71,
      32,    32,    11,   233,   234,   234,    78,    11,   286,   287,
      14,   289,    32,    32,   292,   245,   245,   246,   286,   287,
      11,   289,    94,    32,   292,    33,   216,   217,    32,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   247,   286,
     287,    32,   289,   233,   234,   292,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    33,   286,   287,    33,
     289,    11,    11,   292,    11,    41,    32,   139,   286,   287,
      14,   289,    11,    32,   292,    14,    15,    16,    17,    18,
      19,    32,    32,    32,   156,    32,   286,   287,    32,   289,
      12,    67,   292,    32,    12,    71,    32,   169,    32,     1,
      12,     3,    78,     5,     6,     7,    32,     9,    10,    41,
       4,    32,    32,     0,     1,   187,    92,    93,    20,    21,
       7,    23,    32,    25,    26,    27,    12,    29,    30,    31,
      12,    33,    34,     0,     1,    67,    12,    12,    12,    71,
       7,    32,    14,    15,   216,   217,    78,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    14,    15,    90,    91,
      32,   233,   234,   139,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    32,     1,     0,     1,     0,     1,
     156,    31,    41,     7,    12,     7,    14,    15,    11,     0,
       1,    14,    15,   169,    20,    21,     7,    23,    31,    25,
      26,    27,    28,    29,    30,    31,    12,   139,    67,    32,
      11,   187,    71,    14,    15,    16,    17,    18,    19,    78,
      12,    22,    23,    24,   156,     0,     1,    32,    12,    12,
      89,    32,     7,    14,    15,    16,    17,   169,    12,    30,
     216,   217,    32,   219,   220,   221,   222,   223,   224,   225,
     226,    32,    14,    15,    16,   187,    41,   233,   234,    32,
     236,   237,   238,   239,   240,   241,   242,   243,    12,   245,
      32,    32,    32,    12,    11,    14,    15,    14,    15,    16,
     139,    32,    67,    32,   216,   217,    71,   219,   220,   221,
     222,   223,   224,    78,    41,    32,    20,   156,   281,    41,
     246,   233,   234,    88,   236,   237,   238,   239,   240,   241,
     169,    11,    -1,   245,    14,    15,    16,    17,    -1,    -1,
      67,    -1,    -1,     1,    71,    67,     0,     1,   187,    71,
      -1,    78,    32,     7,    12,    -1,    78,    14,    15,    16,
      87,    -1,    20,    21,    86,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,   139,    32,    -1,   216,   217,    -1,
     219,   220,   221,   222,    11,    -1,    -1,    14,    15,    16,
      -1,   156,    -1,    -1,   233,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,   169,    32,   245,    -1,    -1,    -1,
      -1,     1,   139,    -1,    -1,    26,    27,   139,    29,    30,
      31,    12,   187,    14,    15,    16,    17,    18,    19,   156,
      20,    21,    -1,    23,   156,    25,    26,    27,    -1,    29,
      30,    31,   169,    -1,    -1,    26,    27,   169,    29,    30,
      31,   216,   217,    -1,   219,   220,   221,     1,    -1,    12,
     187,    14,    15,    16,    17,   187,    -1,    -1,   233,   234,
      -1,   236,   237,   238,    -1,    -1,    20,    21,    -1,    23,
     245,    25,    26,    27,    -1,    29,    30,    31,    -1,   216,
     217,    -1,   219,   220,   216,   217,    -1,   219,    14,    15,
      16,    17,    18,    19,    -1,    -1,   233,   234,    -1,   236,
     237,   233,   234,    -1,   236,    -1,    32,    12,   245,    14,
      15,    16,     1,   245,     3,     4,     5,     6,     7,    -1,
       9,    10,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    33,    34,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
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
      31,     1,    33,     3,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,     1,    33,     3,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    11,    33,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    11,    31,    32,    14,    15,    16,    17,    18,
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
      23,    24,    -1,    -1,    -1,    -1,    -1,    11,    -1,    32,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    12,    13,
      14,    15,    16,    17,    18,    19,    32,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    12,    22,    23,
      24,    -1,    -1,    -1,    -1,    20,    21,    31,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    14,    15,
      16,    17,    18,    19,    31,    32,    22,    23,    24,    14,
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
      22,    23,    24,    14,    15,    16,    17,    18,    19,    -1,
      32,    22,    23,    24,    14,    15,    16,    17,    18,    19,
      -1,    32,    22,    23,    -1,    14,    15,    16,    17,    18,
      19,    -1,    32,    22,    23,    -1,    14,    15,    16,    17,
      18,    19,    -1,    32,    22,    23,    14,    15,    16,    17,
      18,    19,    -1,    -1,    32,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    32,    22,    23,    24,    12,    -1,
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
      -1,    -1,    22,    23,    24,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    32,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    32,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    32,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    32,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    20,
      21,    -1,    23,    -1,    25,    26,    27,    -1,    29,    30,
      31,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    36,    37,    38,    39,    44,    56,    31,
       8,    30,     0,    38,    31,    12,    32,    42,    30,    32,
      40,    33,     7,    45,    56,    33,    45,     1,     3,     5,
       6,     9,    10,    20,    21,    23,    25,    26,    27,    29,
      30,    31,    33,    46,    47,    48,    49,    51,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      68,     8,    30,    11,    32,    46,    32,    31,    31,    57,
      31,    31,    30,    66,    66,    66,    66,    13,    31,    57,
      46,    34,    47,    12,    12,    12,    14,    15,    16,    17,
      18,    19,    22,    23,    24,    12,    30,    56,    43,    34,
      41,     1,    57,     1,    53,    54,    57,     1,    30,     1,
      28,    57,    58,    32,    57,    67,    32,    34,    59,    60,
      61,    62,    63,    63,    64,    64,    65,    33,    33,    32,
      32,    52,    32,    12,    32,    32,    32,    32,    32,    11,
      32,    46,    46,    33,    48,    50,    50,    32,    50,    54,
      57,    34,    34,    46,     4,    50,    12,    34,    50,    54,
       7,    20,    21,    23,    25,    26,    27,    29,    30,    31,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    20,
      21,    23,    25,    26,    27,    29,    30,    31,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     1,     3,     5,
      33,    48,    49,    51,    55,    56,    57,    68,    57,     8,
      30,    30,    66,    66,    66,    66,    13,    31,    57,    14,
      15,    16,    17,    18,    19,    22,    23,    24,    30,    66,
      66,    66,    66,    13,    31,    57,    14,    15,    16,    17,
      18,    19,    22,    23,    24,    31,    31,    46,    12,    12,
      12,    12,    30,    58,    32,    67,    32,    59,    60,    61,
      62,    63,    63,    64,    64,    65,    58,    32,    67,    32,
      59,    60,    61,    62,    63,    63,    64,    64,    65,     1,
      57,     1,    53,    34,    32,    32,    32,    32,    52,    32,
      50,    50,    32,    50,    50
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
      62,    62,    62,    63,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     0,
       0,     9,     0,     0,     9,     6,     6,     2,     3,     3,
       1,     2,     1,     1,     3,     1,     1,     2,     2,     2,
       2,     1,     5,     7,     5,     3,     1,     5,     0,     6,
       5,     1,     0,     4,     4,     4,     4,     4,     2,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       2,     2,     1,     1,     3,     4,     3,     1,     1,     1,
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
#line 102 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro), NULL);

                                                        // Checa se existe main
                                                        if(procuraLista(&cabeca, "main", 0)) {
                                                            printf("Erro semantico: funcao main nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("Foram encontrados %d erros semanticos\n\n", num_erros_semanticos);
                                                        // Caso nao hajam erros lexicos, sintaticos e semanticos, imprime a arvore
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0/* && num_erros_semanticos == 0*/) {
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            //desalocar(raiz);      // Ver se tem problema tirar o desalocar daqui
                                                            printf("\n\n");
                                                        }
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        desalocar(raiz);
                                                        liberaEsc(primeiro);}
#line 2186 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 129 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2192 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 130 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2199 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 134 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2205 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 135 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2211 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 136 "./src/sintaxe.y"
                                                     {}
#line 2217 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 140 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1); argumentos = 1;}
#line 2223 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 140 "./src/sintaxe.y"
                                                                                                         {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2229 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 140 "./src/sintaxe.y"
                                                                                                                                                                                                                                                    {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2235 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 141 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1); argumentos = 1;}
#line 2241 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 141 "./src/sintaxe.y"
                                                                                                        {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2247 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 141 "./src/sintaxe.y"
                                                                                                                                                                                                                                                    {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2253 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 142 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2259 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 143 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2265 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 146 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 2275 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 2283 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 157 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2289 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2295 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt block  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2301 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: block  */
#line 162 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2308 "./src/sintaxe.tab.c"
    break;

  case 23: /* block: stmt  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2314 "./src/sintaxe.tab.c"
    break;

  case 24: /* block: ABRE_C moreStmt FECHA_C  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2320 "./src/sintaxe.tab.c"
    break;

  case 25: /* stmt: conditional  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2326 "./src/sintaxe.tab.c"
    break;

  case 26: /* stmt: iteration  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2332 "./src/sintaxe.tab.c"
    break;

  case 27: /* stmt: varDecl PV  */
#line 172 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2338 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: attribuition PV  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2344 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: io PV  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2350 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: ret PV  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2356 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: error  */
#line 176 "./src/sintaxe.y"
                                                        {}
#line 2362 "./src/sintaxe.tab.c"
    break;

  case 32: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 179 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2369 "./src/sintaxe.tab.c"
    break;

  case 33: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 181 "./src/sintaxe.y"
                                                                                            {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, NULL, (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-4].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2376 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 183 "./src/sintaxe.y"
                                                                                            {}
#line 2382 "./src/sintaxe.tab.c"
    break;

  case 35: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2388 "./src/sintaxe.tab.c"
    break;

  case 36: /* bracesStmt: stmt  */
#line 187 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2394 "./src/sintaxe.tab.c"
    break;

  case 37: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesStmt  */
#line 190 "./src/sintaxe.y"
                                                                   {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2400 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 191 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2406 "./src/sintaxe.tab.c"
    break;

  case 39: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesStmt  */
#line 191 "./src/sintaxe.y"
                                                                   {}
#line 2412 "./src/sintaxe.tab.c"
    break;

  case 40: /* iteArgs: expIte PV expIte PV expIte  */
#line 194 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2418 "./src/sintaxe.tab.c"
    break;

  case 41: /* expIte: attribuition  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2424 "./src/sintaxe.tab.c"
    break;

  case 42: /* expIte: %empty  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2430 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 204 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2438 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 208 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2444 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 210 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2454 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 216 "./src/sintaxe.y"
                                                        {}
#line 2460 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P error FECHA_P  */
#line 217 "./src/sintaxe.y"
                                                        {}
#line 2466 "./src/sintaxe.tab.c"
    break;

  case 48: /* varDecl: TIPO ID  */
#line 221 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        if(argumentos == 1)
                                                            pushArgs(&args, (yyvsp[-1].tok).lexema);
                                                        }
#line 2477 "./src/sintaxe.tab.c"
    break;

  case 49: /* varDecl: TIPO LIST ID  */
#line 228 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        if(argumentos == 1) 
                                                            pushArgs(&args, (yyvsp[-2].tok).lexema);
                                                        }
#line 2487 "./src/sintaxe.tab.c"
    break;

  case 50: /* attribuition: ID ATRIB expLogic  */
#line 235 "./src/sintaxe.y"
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
                                                                printf("Erro semantico: tipo errado na operacao %s (%s, %s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        } else if(!strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            if(strcmp((yyval.no)->no1->simbolo->tipo, "float list")) {
                                                                printf("Erro semantico: tipo errado na operacao %s (%s, %s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        } else {
                                                            //printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            //++num_erros_semanticos;
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        }}
#line 2520 "./src/sintaxe.tab.c"
    break;

  case 51: /* attribuition: expLogic  */
#line 263 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2526 "./src/sintaxe.tab.c"
    break;

  case 52: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 266 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2532 "./src/sintaxe.tab.c"
    break;

  case 53: /* expLogic: andLogic  */
#line 267 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2538 "./src/sintaxe.tab.c"
    break;

  case 54: /* andLogic: andLogic LOG_OP_E expComp  */
#line 270 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2544 "./src/sintaxe.tab.c"
    break;

  case 55: /* andLogic: expComp  */
#line 271 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2550 "./src/sintaxe.tab.c"
    break;

  case 56: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 274 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2556 "./src/sintaxe.tab.c"
    break;

  case 57: /* expComp: expRel  */
#line 275 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2562 "./src/sintaxe.tab.c"
    break;

  case 58: /* expRel: expRel REL_OP_ALTA expList  */
#line 278 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2568 "./src/sintaxe.tab.c"
    break;

  case 59: /* expRel: expList  */
#line 279 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2574 "./src/sintaxe.tab.c"
    break;

  case 60: /* expList: expList LIST_OP_BIN expArit  */
#line 282 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        int cont_erro = 0;
                                                        if(strcmp((yyvsp[-2].no)->simbolo->varOuFunc, "funcao")) {
                                                            printf("Erro semantico: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        } else if((yyvsp[-2].no)->simbolo->numArgs != 1) {
                                                            printf("Erro semantico: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
                                                        if(strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "float list")) {
                                                            printf("Erro semantico: termo a direita nao eh uma lista\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
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
#line 2608 "./src/sintaxe.tab.c"
    break;

  case 61: /* expList: expList LIST_OP_CONSTRUTOR expArit  */
#line 311 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2615 "./src/sintaxe.tab.c"
    break;

  case 62: /* expList: expArit  */
#line 313 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2621 "./src/sintaxe.tab.c"
    break;

  case 63: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 316 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2627 "./src/sintaxe.tab.c"
    break;

  case 64: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 317 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2633 "./src/sintaxe.tab.c"
    break;

  case 65: /* expArit: expMul  */
#line 318 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2639 "./src/sintaxe.tab.c"
    break;

  case 66: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 321 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2645 "./src/sintaxe.tab.c"
    break;

  case 67: /* expMul: negElement  */
#line 322 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2651 "./src/sintaxe.tab.c"
    break;

  case 68: /* negElement: LOG_OP_NEG element  */
#line 325 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2664 "./src/sintaxe.tab.c"
    break;

  case 69: /* negElement: ARIT_OP_MENOS element  */
#line 333 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "NIL")){
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2677 "./src/sintaxe.tab.c"
    break;

  case 70: /* negElement: LIST_OP_UN element  */
#line 341 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
#line 2690 "./src/sintaxe.tab.c"
    break;

  case 71: /* negElement: LIST_OP_HEADER element  */
#line 349 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            char* aux = strtok((yyvsp[0].no)->tipo, " ");
                                                            strcpy((yyval.no)->tipo, aux);
                                                        }}
#line 2704 "./src/sintaxe.tab.c"
    break;

  case 72: /* negElement: element  */
#line 358 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2710 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: ID  */
#line 363 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: variavel nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }}
#line 2724 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: ABRE_P attribuition FECHA_P  */
#line 373 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2730 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: ID ABRE_P arguments FECHA_P  */
#line 375 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL) {
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                            if((yyval.no)->simbolo->numArgs > num_args_chamada) {
                                                                printf("Erro semantico: poucos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            } else if((yyval.no)->simbolo->numArgs < num_args_chamada) {
                                                                printf("Erro semantico: muitos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                            if(args != NULL) {
                                                                struct listaArgs * aux1 = (yyval.no)->simbolo->tipoArgs;
                                                                struct listaArgs * aux2 = args;
                                                                int cont = 0;
                                                                struct listaNo * auxNo = (yyval.no)->lista;
                                                                while(aux1 != NULL && aux2 != NULL) {
                                                                    if(strcmp(aux1->tipo, aux2->tipo)) {
                                                                        if(!strcmp(aux1->tipo, "int list") || !strcmp(aux2->tipo, "int list")) {
                                                                            printf("Erro semantico: argumento de tipo errado %s\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                            ++num_erros_semanticos;
                                                                        } else if(!strcmp(aux1->tipo, "float list") || !strcmp(aux2->tipo, "float list")) {
                                                                            printf("Erro semantico: argumento de tipo errado %s\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                            ++num_erros_semanticos;
                                                                        } else {
                                                                            char aux[15];
                                                                            strcpy(aux, "(");
                                                                            strcat(aux, aux1->tipo);
                                                                            strcat(aux, ")");
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
                                                            printf("Erro semantico: funcao %s nao declarada\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        liberaArgs(args);
                                                        args = NULL;
                                                        num_args_chamada = 0;
                                                        }
#line 2785 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: ID ABRE_P FECHA_P  */
#line 426 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: funcao %s nao declarada\nLinha:%d\nColuna:%d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 2800 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: CONST_INT  */
#line 437 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");}
#line 2807 "./src/sintaxe.tab.c"
    break;

  case 78: /* element: CONST_FLOAT  */
#line 440 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");}
#line 2814 "./src/sintaxe.tab.c"
    break;

  case 79: /* element: NIL  */
#line 443 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 2821 "./src/sintaxe.tab.c"
    break;

  case 80: /* arguments: arguments VIRG attribuition  */
#line 447 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2829 "./src/sintaxe.tab.c"
    break;

  case 81: /* arguments: attribuition  */
#line 451 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2838 "./src/sintaxe.tab.c"
    break;

  case 82: /* ret: RETURN attribuition  */
#line 457 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2844 "./src/sintaxe.tab.c"
    break;


#line 2848 "./src/sintaxe.tab.c"

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

#line 460 "./src/sintaxe.y"



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
