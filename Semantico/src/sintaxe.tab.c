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
  YYSYMBOL_bracesOrNot = 50,               /* bracesOrNot  */
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
#define YYLAST   2943

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

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
     158,   161,   162,   166,   167,   168,   171,   172,   173,   174,
     175,   176,   180,   182,   184,   187,   188,   191,   192,   192,
     195,   198,   199,   205,   209,   211,   217,   218,   222,   229,
     236,   270,   273,   274,   277,   278,   281,   282,   285,   286,
     289,   318,   320,   323,   324,   325,   328,   329,   332,   340,
     348,   356,   365,   370,   380,   382,   433,   444,   447,   450,
     454,   458,   464
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
  "moreStmt", "block", "stmt", "conditional", "bracesOrNot", "iteration",
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

#define YYPACT_NINF (-153)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     299,    47,    20,    12,   301,   321,   520,   -16,    50,    -2,
     -12,    39,  -153,   550,     1,   586,    -9,    49,    40,    35,
      49,   306,    23,     0,    62,   306,    63,  1088,    70,    84,
    2840,   121,   126,   411,   411,   411,   411,  2588,  2601,  2614,
    2291,  2852,   306,  1122,  1156,  1190,  1224,  1258,   115,   148,
     151,     8,    51,   540,   747,   341,  2872,  2627,  2640,  2653,
     157,    45,    77,    49,   163,  1292,   179,   645,    60,   210,
      13,   383,  2331,  2666,  2679,  2692,  2705,  2876,  2710,    88,
    1326,   618,  1360,  1394,  1428,  1462,  2876,  2876,  2876,  2876,
    2876,  2876,  2876,  2876,  2876,  1496,    93,   127,   190,   653,
     191,   222,   226,   237,   239,   279,   280,   251,   287,   288,
     293,   184,   141,  2731,   102,   129,  2744,  1530,   406,   681,
     781,   713,  2896,  2908,  2757,  2770,  2783,   306,   306,   607,
    1904,   311,   607,  2340,   326,   355,   357,   367,   370,  2912,
    2796,  1564,  1598,   306,  1632,  1666,   571,   607,  1700,   374,
     122,   655,   691,  1734,   607,  1768,  2801,  1802,  1836,   363,
      37,   481,   481,   481,   481,  2369,  2380,  2391,  2358,  2852,
      96,   349,   471,   330,  2545,  2402,  2413,  2424,  2310,   212,
     801,   801,   801,   801,   412,  1956,  1975,   517,  2852,   168,
      44,    82,   271,  2241,  1994,  2013,  2032,  2852,  2912,   680,
     264,   376,   306,   714,   748,   782,   421,   438,   442,   423,
     427,   444,  2435,  2446,  2457,  2468,  2814,   217,  2852,  2852,
    2852,  2852,  2852,  2852,  2852,  2852,  2852,  2051,  2070,  2089,
    2108,  2827,   238,  2912,  2912,  2912,  2912,  2912,  2912,  2912,
    2912,   282,   204,  1935,  1920,  1870,   816,   850,   884,   447,
    2479,   153,  2490,   385,   552,  2577,  2556,  2567,  2501,  2512,
    2523,   241,  2127,   209,  2146,   107,   130,   458,  2260,  2279,
    2165,  2184,  2203,   433,   436,   237,   446,   918,  2534,  2222,
    1904,  1904,   450,  1904,   952,   986,  1904,  1020,  1054
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,   480,  -153,  -153,  -153,  -153,  -153,  -153,
     475,    15,   -36,  -113,  -109,  -105,   -53,   216,   254,  -120,
     -46,     6,   -30,   263,   451,   426,   283,   327,   227,   154,
      41,   -32,  -152,   -38
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
      69,    73,    74,    75,    76,   -12,     8,    82,    -9,   177,
       8,    63,    12,   149,   107,    14,   144,   203,    18,   144,
     -51,   204,    86,    24,    21,   146,    24,   148,    10,    82,
      16,    61,    64,    19,   144,   177,   159,   102,   106,   177,
      65,   144,   155,   108,    82,   210,   196,    -8,    -8,   158,
      11,   -48,   -49,    62,    -8,   -55,    22,    80,   -55,   -55,
     234,   103,    15,   -53,   251,   -53,    87,   211,    25,    97,
     -17,   -18,   -42,   -20,    63,    96,   -55,   205,     9,   263,
      33,    34,   176,    35,   206,    36,    37,    38,   -48,    39,
      40,    41,   208,   -57,   -20,    66,   -57,   -57,   -57,   235,
     207,    67,   197,   106,   -49,    82,    82,   196,   176,   -48,
     -53,   218,   176,   -81,   -57,    68,   198,    82,   -54,   195,
     116,   -54,   -54,   234,   177,   -49,   209,    83,   -53,   212,
     213,   214,   215,   -80,   -81,   126,   198,   177,   -19,   -54,
     139,   -56,   141,   142,   -56,   -56,   -56,   235,   227,   228,
     229,   230,    70,   -50,   -80,    86,   177,    71,   153,   -19,
      84,   140,   -56,    85,   139,   177,   196,   203,   203,    95,
     203,   204,   204,   203,   204,   284,   285,   204,   287,   -53,
     195,   288,   -53,   233,   196,   278,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   175,   -13,   176,   197,   196,
     -53,   196,   196,   196,   196,   196,   196,   196,   196,    82,
     176,   177,   -10,   274,   106,   -52,   138,   245,   -52,   233,
     139,   175,   -82,   127,   128,   175,   197,   205,   205,   176,
     205,   197,   194,   205,   206,   206,   -52,   206,   176,   195,
     206,   279,   208,   208,   -51,   208,   124,   125,   208,   252,
     207,   207,   197,   207,   129,   197,   207,   195,   130,   176,
     176,   176,   176,   176,   176,   176,   260,   176,   174,   -38,
     264,   132,   195,   -50,   195,   195,   195,   195,   195,   195,
     195,   272,   -59,   134,   176,   -59,   -59,   -59,   -59,   236,
     237,   133,   -41,   194,   174,   243,   -52,   218,   174,    -3,
       1,    -2,     1,   -59,    79,   193,     2,    27,     2,    28,
     175,    29,    30,   160,   -52,    31,    32,   122,   123,   135,
     136,    -5,    -5,   175,   172,   137,    33,    34,    -5,    35,
     179,    36,    37,    38,   111,    39,    40,    41,   -46,    42,
     112,   114,   175,   147,   -59,   -59,   -59,   -59,   221,   222,
     172,   175,   194,   -59,   172,   -59,   -59,   -59,   -59,    90,
      91,   191,   -59,   -55,   -55,   219,   193,   -43,   173,   -47,
     194,   120,   175,   175,   175,   175,   175,   258,   259,   -45,
     175,   -55,   -44,   174,   109,   194,   156,   194,   194,   194,
     194,   194,   270,   271,   173,   -40,   174,   175,   173,   -54,
     -54,   219,   150,   161,   162,   192,   163,   244,   164,   165,
     166,   110,   167,   168,   169,   174,   121,   -54,   -52,   179,
     -52,    87,   191,   -77,   174,   193,   -77,   -77,   -77,   -77,
     -77,   -77,   217,   246,   -77,   -77,   -77,    37,    38,   172,
      39,    72,    41,   193,   -77,   174,   174,   174,   256,   257,
     247,   232,   172,   174,   248,   -41,   -48,   249,   193,   -49,
     193,   193,   193,   268,   269,   280,   192,   171,   281,   -58,
     174,   172,   -58,   -58,   -58,   -58,   236,   237,   283,   114,
     172,   191,   286,   173,    13,   -57,   -57,   -57,   220,   261,
     -58,   282,   170,   171,   114,    26,   173,   171,   276,   191,
       0,   172,   254,   -57,   190,     0,   179,   165,   166,   172,
     167,   168,   169,   119,   191,   173,   191,   266,   170,     0,
      -6,    -6,   170,     0,   173,   192,   172,    -6,   -73,   189,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   118,     0,   -73,
     -73,   -73,     0,   192,     0,   173,   173,   255,   231,   -73,
      -4,    -4,   -55,   173,   -55,   -55,    88,    -4,   192,     0,
     192,   192,   267,     0,     0,   190,   -56,   -56,   -56,   220,
     173,     0,   -32,     0,   -32,   154,   -32,   -32,   -32,     0,
     -32,   -32,   171,     0,   -56,     0,    -7,    -7,     0,     0,
     189,   -32,   -32,    -7,   -32,   171,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,   -32,   -32,     0,   170,    27,     0,
      28,     0,    29,    30,   171,     0,    31,    32,   -16,   -16,
     170,     0,     0,   171,   190,   -16,     0,    33,    34,     0,
      35,     0,    36,    37,    38,     0,    39,    40,    41,   170,
     143,     0,   190,     0,   253,     0,   101,     0,   241,   242,
       0,     0,   171,   -15,   -15,   -14,   -14,   190,     0,   265,
     -15,     0,   -14,     0,     0,   161,   162,   189,   163,   171,
     164,   165,   166,     0,   167,   178,   169,   170,     0,     0,
       0,   -31,   189,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -11,   -11,   -54,   170,   -54,   -54,    88,   -11,     0,
     -31,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -58,     0,   -58,   -58,   -58,
     -58,    90,    91,     0,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -26,
       0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -57,
       0,   -57,   -57,   -57,    89,     0,     0,     0,   -26,   -26,
       0,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
       0,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -56,     0,   -56,   -56,   -56,    89,     0,
       0,     0,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   184,   185,     0,
     186,   187,   188,     0,     0,     0,   -29,   -29,     0,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,     0,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,     0,   -39,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -31,
       0,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
       0,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,    27,     0,    28,     0,    29,    30,   160,
       0,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,    35,     0,    36,    37,    38,
       0,    39,    40,    41,     0,    42,    81,   -22,     0,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,     0,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -23,     0,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,     0,   -23,   -23,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -27,
       0,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
       0,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,    27,     0,    28,     0,    29,    30,   160,
       0,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,    35,     0,    36,    37,    38,
       0,    39,    40,    41,     0,    42,    99,    27,     0,    28,
       0,    29,    30,   160,     0,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,    42,
     117,   -21,     0,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,     0,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -29,     0,   -29,     0,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -24,
       0,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
       0,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -28,     0,   -28,     0,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,     0,   -28,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,     0,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,   -25,   -25,    27,     0,    28,     0,    29,
      30,   160,     0,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,     0,    35,     0,    36,
      37,    38,     0,    39,    40,    41,     0,    42,   151,    27,
       0,    28,     0,    29,    30,   160,     0,    31,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
       0,    35,     0,    36,    37,    38,     0,    39,    40,    41,
       0,    42,   152,   -36,     0,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,     0,   -37,     0,   -37,   -37,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,    27,     0,    28,     0,    29,
      30,   160,     0,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,     0,    35,     0,    36,
      37,    38,     0,    39,    40,    41,     0,    42,   157,   -39,
       0,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -35,     0,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,    27,     0,    28,     0,    29,    30,   160,     0,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,    42,   277,   199,     0,   200,     0,   201,
      30,     0,     0,    31,    32,     0,     0,     0,     0,     0,
       0,   275,     0,     0,    33,    34,     0,    35,     0,    36,
      37,    38,   -42,    39,    40,    41,   273,   202,     0,     0,
      33,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,     0,     0,     0,   161,   162,     0,   163,     0,
     164,   165,   166,     0,   167,   178,   169,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,   -78,
     -78,     0,     0,     0,     0,     0,   -79,     0,   -78,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,   -79,   -79,
       0,     0,     0,     0,     0,   -65,     0,   -79,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -65,   -65,   240,     0,
       0,     0,     0,     0,   -67,     0,   -65,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -72,     0,   -67,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,   -72,   -72,     0,     0,     0,
       0,     0,   -70,     0,   -72,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -70,   -70,     0,     0,     0,     0,
       0,   -71,     0,   -70,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,   -71,   -71,     0,     0,     0,     0,     0,
     -69,     0,   -71,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,   -68,
       0,   -69,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   -76,     0,
     -68,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -76,
     -76,   -76,     0,     0,     0,     0,     0,   -74,     0,   -76,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -63,     0,   -74,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   -63,   240,
       0,     0,     0,     0,     0,   -64,     0,   -63,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -64,   -64,   240,     0,
       0,     0,     0,     0,   -66,     0,   -64,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -66,   -66,     0,     0,
       0,     0,     0,   -75,     0,   -66,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -75,   -75,   -75,     0,     0,     0,
       0,     0,   -62,     0,   -75,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,   238,   239,     0,     0,     0,     0,     0,
       0,   -60,     0,   -62,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,   238,   239,     0,     0,     0,     0,     0,     0,
     -61,     0,   -60,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   238,   239,   -73,    77,   -73,   -73,   -73,   -73,   -73,
     -73,   -61,     0,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,    78,   226,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,   216,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -42,   -73,   -73,   -73,     0,     0,     0,     0,
      33,    34,    78,    35,     0,    36,    37,    38,     0,    39,
      40,    41,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -77,   -77,   -77,   -77,   -77,   -77,   216,
     -73,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -77,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -78,   -79,   -79,   -79,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -79,   -65,   -65,   225,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -65,   -67,   -67,   -67,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -67,   -72,   -72,   -72,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -72,   -70,   -70,   -70,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -70,   -71,   -71,
     -71,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -71,   -69,
     -69,   -69,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -69,
     -68,   -68,   -68,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -68,   -76,   -76,   -76,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -76,   -74,   -74,   -74,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   -74,   -63,   -63,   225,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -63,   -64,   -64,   225,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -64,   -66,   -66,   -66,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -66,   -75,   -75,   -75,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -75,   223,   224,     0,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -62,   223,   224,
       0,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -60,   223,
     224,   -58,   -58,   -58,   -58,   221,   222,     0,     0,   -61,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -58,
     -77,   -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,   -79,   -79,   -79,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -65,    94,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -67,   -67,   -67,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,   -72,   -72,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -71,   -71,   -71,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -68,   -68,   -68,
     180,   181,     0,   182,     0,   183,   184,   185,     0,   186,
     187,   188,   113,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,   -74,   -74,   -74,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,
     -63,    94,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -64,   -64,    94,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -66,   -66,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,
     -75,   161,   162,     0,   163,     0,   164,   165,   166,     0,
     167,   178,   169,   -42,   180,   181,     0,   182,     0,   183,
     184,   185,     0,   186,   187,   188,   250,   180,   181,     0,
     182,     0,   183,   184,   185,     0,   186,   187,   188,   262,
      33,    34,     0,    35,     0,    36,    37,    38,     0,    39,
      40,    41,   161,   162,     0,   163,     0,   164,   165,   166,
       0,   167,   168,   169,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,    92,    93,    33,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    72,    41,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,    92,    93,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
      92,    93,   180,   181,     0,   182,     0,   183,   184,   185,
       0,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      30,    33,    34,    35,    36,     7,     0,    43,     7,    41,
       4,    11,     0,   133,     1,    31,   129,   130,    30,   132,
      12,   130,    14,    17,    33,   130,    20,   132,     8,    65,
      32,     8,    32,    32,   147,    67,   156,    67,    68,    71,
      25,   154,   147,    30,    80,     8,    78,     0,     1,   154,
      30,    12,    12,    30,     7,    11,     7,    42,    14,    15,
      16,     1,    12,    12,   216,    14,    15,    30,    33,    63,
      31,    31,    12,    11,    11,    30,    32,   130,    31,   231,
      20,    21,    41,    23,   130,    25,    26,    27,    11,    29,
      30,    31,   130,    11,    32,    32,    14,    15,    16,    17,
     130,    31,    14,   133,    11,   141,   142,   139,    67,    32,
      14,    15,    71,    11,    32,    31,    14,   153,    11,    78,
      32,    14,    15,    16,   156,    32,   156,    12,    32,   161,
     162,   163,   164,    11,    32,    94,    14,   169,    11,    32,
      11,    11,   127,   128,    14,    15,    16,    17,   180,   181,
     182,   183,    31,    12,    32,    14,   188,    31,   143,    32,
      12,    32,    32,    12,    11,   197,   198,   280,   281,    12,
     283,   280,   281,   286,   283,   280,   281,   286,   283,    11,
     139,   286,    14,    15,   216,    32,   218,   219,   220,   221,
     222,   223,   224,   225,   226,    41,    33,   156,    14,   231,
      32,   233,   234,   235,   236,   237,   238,   239,   240,   245,
     169,   243,    33,   243,   244,    11,    32,   202,    14,    15,
      11,    67,    12,    33,    33,    71,    14,   280,   281,   188,
     283,    14,    78,   286,   280,   281,    32,   283,   197,   198,
     286,    32,   280,   281,    32,   283,    92,    93,   286,    32,
     280,   281,    14,   283,    32,    14,   286,   216,    32,   218,
     219,   220,   221,   222,   223,   224,   225,   226,    41,    32,
      32,    32,   231,    32,   233,   234,   235,   236,   237,   238,
     239,   240,    11,    32,   243,    14,    15,    16,    17,    18,
      19,    12,    12,   139,    67,    31,    14,    15,    71,     0,
       1,     0,     1,    32,    41,    78,     7,     1,     7,     3,
     156,     5,     6,     7,    32,     9,    10,    90,    91,    32,
      32,     0,     1,   169,    41,    32,    20,    21,     7,    23,
      67,    25,    26,    27,    71,    29,    30,    31,    12,    33,
      77,    78,   188,    32,    14,    15,    16,    17,    18,    19,
      67,   197,   198,    12,    71,    14,    15,    16,    17,    18,
      19,    78,    32,    14,    15,    16,   139,    12,    41,    12,
     216,    88,   218,   219,   220,   221,   222,   223,   224,    12,
     226,    32,    12,   156,     1,   231,    12,   233,   234,   235,
     236,   237,   238,   239,    67,    32,   169,   243,    71,    14,
      15,    16,   139,    20,    21,    78,    23,    31,    25,    26,
      27,    28,    29,    30,    31,   188,    89,    32,    12,   156,
      14,    15,   139,    11,   197,   198,    14,    15,    16,    17,
      18,    19,   169,    12,    22,    23,    24,    26,    27,   156,
      29,    30,    31,   216,    32,   218,   219,   220,   221,   222,
      12,   188,   169,   226,    12,    32,    12,    30,   231,    12,
     233,   234,   235,   236,   237,    32,   139,    41,    32,    11,
     243,   188,    14,    15,    16,    17,    18,    19,    32,   216,
     197,   198,    32,   156,     4,    14,    15,    16,    17,   226,
      32,   275,    41,    67,   231,    20,   169,    71,   244,   216,
      -1,   218,   219,    32,    78,    -1,   243,    26,    27,   226,
      29,    30,    31,    87,   231,   188,   233,   234,    67,    -1,
       0,     1,    71,    -1,   197,   198,   243,     7,    11,    78,
      -1,    14,    15,    16,    17,    18,    19,    86,    -1,    22,
      23,    24,    -1,   216,    -1,   218,   219,   220,    31,    32,
       0,     1,    12,   226,    14,    15,    16,     7,   231,    -1,
     233,   234,   235,    -1,    -1,   139,    14,    15,    16,    17,
     243,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,   156,    -1,    32,    -1,     0,     1,    -1,    -1,
     139,    20,    21,     7,    23,   169,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    34,    -1,   156,     1,    -1,
       3,    -1,     5,     6,   188,    -1,     9,    10,     0,     1,
     169,    -1,    -1,   197,   198,     7,    -1,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,   188,
      33,    -1,   216,    -1,   218,    -1,     1,    -1,   197,   198,
      -1,    -1,   226,     0,     1,     0,     1,   231,    -1,   233,
       7,    -1,     7,    -1,    -1,    20,    21,   216,    23,   243,
      25,    26,    27,    -1,    29,    30,    31,   226,    -1,    -1,
      -1,     1,   231,     3,     4,     5,     6,     7,    -1,     9,
      10,     0,     1,    12,   243,    14,    15,    16,     7,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    29,    30,    31,    -1,    33,    34,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    33,    34,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    20,    21,    -1,    23,
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
       6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    12,    29,    30,    31,     1,    33,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    29,    30,    31,    11,    -1,    -1,
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
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    32,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    32,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    32,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    32,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    12,    13,    14,    15,    16,    17,    18,
      19,    32,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    12,    22,    23,    24,    -1,    -1,    -1,    -1,
      20,    21,    31,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    14,    15,    16,    17,    18,    19,    31,
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
      -1,    32,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    -1,    32,    22,    23,    24,    14,    15,    16,    17,
      18,    19,    -1,    32,    22,    23,    24,    14,    15,    16,
      17,    18,    19,    -1,    32,    22,    23,    24,    14,    15,
      16,    17,    18,    19,    -1,    32,    22,    23,    24,    14,
      15,    16,    17,    18,    19,    -1,    32,    22,    23,    -1,
      14,    15,    16,    17,    18,    19,    -1,    32,    22,    23,
      -1,    14,    15,    16,    17,    18,    19,    -1,    32,    22,
      23,    14,    15,    16,    17,    18,    19,    -1,    -1,    32,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    32,
      22,    23,    24,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    12,    -1,    14,    15,    16,    17,    18,
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
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31
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
      31,    31,    30,    66,    66,    66,    66,    13,    31,    58,
      46,    34,    47,    12,    12,    12,    14,    15,    16,    17,
      18,    19,    22,    23,    24,    12,    30,    56,    43,    34,
      41,     1,    57,     1,    53,    54,    57,     1,    30,     1,
      28,    58,    58,    32,    58,    67,    32,    34,    59,    60,
      61,    62,    63,    63,    64,    64,    65,    33,    33,    32,
      32,    52,    32,    12,    32,    32,    32,    32,    32,    11,
      32,    46,    46,    33,    48,    50,    50,    32,    50,    54,
      58,    34,    34,    46,     4,    50,    12,    34,    50,    54,
       7,    20,    21,    23,    25,    26,    27,    29,    30,    31,
      59,    60,    61,    62,    63,    64,    65,    66,    30,    58,
      20,    21,    23,    25,    26,    27,    29,    30,    31,    59,
      60,    61,    62,    63,    64,    65,    66,    14,    14,     1,
       3,     5,    33,    48,    49,    51,    55,    57,    68,    57,
       8,    30,    66,    66,    66,    66,    31,    58,    15,    16,
      17,    18,    19,    22,    23,    24,    13,    66,    66,    66,
      66,    31,    58,    15,    16,    17,    18,    19,    22,    23,
      24,    59,    59,    31,    31,    46,    12,    12,    12,    30,
      32,    67,    32,    60,    61,    62,    63,    63,    64,    64,
      65,    58,    32,    67,    32,    60,    61,    62,    63,    63,
      64,    64,    65,     1,    57,     1,    53,    34,    32,    32,
      32,    32,    52,    32,    50,    50,    32,    50,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    40,
      41,    39,    42,    43,    39,    39,    39,    44,    44,    45,
      45,    46,    46,    47,    47,    47,    48,    48,    48,    48,
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
       1,     2,     1,     1,     2,     3,     1,     1,     2,     2,
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
#line 2157 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 129 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2163 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 130 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2170 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 134 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2176 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 135 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2182 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 136 "./src/sintaxe.y"
                                                     {}
#line 2188 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 140 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1); argumentos = 1;}
#line 2194 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 140 "./src/sintaxe.y"
                                                                                                         {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2200 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 140 "./src/sintaxe.y"
                                                                                                                                                                                                                                                    {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2206 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 141 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1); argumentos = 1;}
#line 2212 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 141 "./src/sintaxe.y"
                                                                                                        {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2218 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 141 "./src/sintaxe.y"
                                                                                                                                                                                                                                                    {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2224 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 142 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2230 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 143 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2236 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 146 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);}
#line 2246 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);}
#line 2254 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 157 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2260 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 158 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2266 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt block  */
#line 161 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2272 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: block  */
#line 162 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2279 "./src/sintaxe.tab.c"
    break;

  case 23: /* block: stmt  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2285 "./src/sintaxe.tab.c"
    break;

  case 24: /* block: varDecl PV  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2291 "./src/sintaxe.tab.c"
    break;

  case 25: /* block: ABRE_C moreStmt FECHA_C  */
#line 168 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2297 "./src/sintaxe.tab.c"
    break;

  case 26: /* stmt: conditional  */
#line 171 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2303 "./src/sintaxe.tab.c"
    break;

  case 27: /* stmt: iteration  */
#line 172 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2309 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: attribuition PV  */
#line 173 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2315 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: io PV  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2321 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: ret PV  */
#line 175 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2327 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: error  */
#line 176 "./src/sintaxe.y"
                                                        {}
#line 2333 "./src/sintaxe.tab.c"
    break;

  case 32: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot  */
#line 180 "./src/sintaxe.y"
                                                                                             {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2340 "./src/sintaxe.tab.c"
    break;

  case 33: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot ELSE bracesOrNot  */
#line 182 "./src/sintaxe.y"
                                                                                                  {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, NULL, (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-4].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2347 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P error FECHA_P bracesOrNot  */
#line 184 "./src/sintaxe.y"
                                                                                             {}
#line 2353 "./src/sintaxe.tab.c"
    break;

  case 35: /* bracesOrNot: ABRE_C moreStmt FECHA_C  */
#line 187 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2359 "./src/sintaxe.tab.c"
    break;

  case 36: /* bracesOrNot: stmt  */
#line 188 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2365 "./src/sintaxe.tab.c"
    break;

  case 37: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesOrNot  */
#line 191 "./src/sintaxe.y"
                                                                    {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2371 "./src/sintaxe.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 192 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2377 "./src/sintaxe.tab.c"
    break;

  case 39: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesOrNot  */
#line 192 "./src/sintaxe.y"
                                                                    {}
#line 2383 "./src/sintaxe.tab.c"
    break;

  case 40: /* iteArgs: expIte PV expIte PV expIte  */
#line 195 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2389 "./src/sintaxe.tab.c"
    break;

  case 41: /* expIte: attribuition  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2395 "./src/sintaxe.tab.c"
    break;

  case 42: /* expIte: %empty  */
#line 199 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2401 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 205 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2409 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: SAIDA ABRE_P expLogic FECHA_P  */
#line 209 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2415 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 211 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2425 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 217 "./src/sintaxe.y"
                                                        {}
#line 2431 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P error FECHA_P  */
#line 218 "./src/sintaxe.y"
                                                        {}
#line 2437 "./src/sintaxe.tab.c"
    break;

  case 48: /* varDecl: TIPO ID  */
#line 222 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        if(argumentos == 1)
                                                            pushArgs(&args, (yyvsp[-1].tok).lexema);
                                                        }
#line 2448 "./src/sintaxe.tab.c"
    break;

  case 49: /* varDecl: TIPO LIST ID  */
#line 229 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        if(argumentos == 1) 
                                                            pushArgs(&args, (yyvsp[-2].tok).lexema);
                                                        }
#line 2458 "./src/sintaxe.tab.c"
    break;

  case 50: /* attribuition: ID ATRIB expLogic  */
#line 236 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        //printf("%s e %s\n", simb->tipo, $3->tipo);
                                                        if(simb != NULL) {
                                                            if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp((yyval.no)->no1->simbolo->tipo, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp((yyval.no)->no1->simbolo->tipo, "int"))) {
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                strcat(aux, simb->tipo);
                                                                strcat(aux, ")");
                                                                struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no2 = no;
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "int list")){
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "int list")) {
                                                                    printf("Erro semantico: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "float list")){
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "float list")) {
                                                                    printf("Erro semantico: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else {
                                                                //printf("Erro semantico: tipo errado na operacao %s\nLinha:%d\nColuna:%d\n\n", $2.lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                //++num_erros_semanticos;
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            }
                                                        } else {
                                                            printf("Erro semantico: variavel %s nao declarada\nLinha: %d\nColuna: %d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                        }}
#line 2497 "./src/sintaxe.tab.c"
    break;

  case 51: /* attribuition: expLogic  */
#line 270 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2503 "./src/sintaxe.tab.c"
    break;

  case 52: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 273 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2509 "./src/sintaxe.tab.c"
    break;

  case 53: /* expLogic: andLogic  */
#line 274 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2515 "./src/sintaxe.tab.c"
    break;

  case 54: /* andLogic: andLogic LOG_OP_E expComp  */
#line 277 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2521 "./src/sintaxe.tab.c"
    break;

  case 55: /* andLogic: expComp  */
#line 278 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2527 "./src/sintaxe.tab.c"
    break;

  case 56: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 281 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2533 "./src/sintaxe.tab.c"
    break;

  case 57: /* expComp: expRel  */
#line 282 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2539 "./src/sintaxe.tab.c"
    break;

  case 58: /* expRel: expRel REL_OP_ALTA expList  */
#line 285 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2545 "./src/sintaxe.tab.c"
    break;

  case 59: /* expRel: expList  */
#line 286 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2551 "./src/sintaxe.tab.c"
    break;

  case 60: /* expList: expList LIST_OP_BIN expArit  */
#line 289 "./src/sintaxe.y"
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
#line 2585 "./src/sintaxe.tab.c"
    break;

  case 61: /* expList: expList LIST_OP_CONSTRUTOR expArit  */
#line 318 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);}
#line 2592 "./src/sintaxe.tab.c"
    break;

  case 62: /* expList: expArit  */
#line 320 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2598 "./src/sintaxe.tab.c"
    break;

  case 63: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 323 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2604 "./src/sintaxe.tab.c"
    break;

  case 64: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 324 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2610 "./src/sintaxe.tab.c"
    break;

  case 65: /* expArit: expMul  */
#line 325 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2616 "./src/sintaxe.tab.c"
    break;

  case 66: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 328 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2622 "./src/sintaxe.tab.c"
    break;

  case 67: /* expMul: negElement  */
#line 329 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2628 "./src/sintaxe.tab.c"
    break;

  case 68: /* negElement: LOG_OP_NEG element  */
#line 332 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2641 "./src/sintaxe.tab.c"
    break;

  case 69: /* negElement: ARIT_OP_MENOS element  */
#line 340 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "NIL")){
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2654 "./src/sintaxe.tab.c"
    break;

  case 70: /* negElement: LIST_OP_UN element  */
#line 348 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
#line 2667 "./src/sintaxe.tab.c"
    break;

  case 71: /* negElement: LIST_OP_HEADER element  */
#line 356 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            printf("Erro semantico: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            char* aux = strtok((yyvsp[0].no)->tipo, " ");
                                                            strcpy((yyval.no)->tipo, aux);
                                                        }}
#line 2681 "./src/sintaxe.tab.c"
    break;

  case 72: /* negElement: element  */
#line 365 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2687 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: ID  */
#line 370 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            printf("Erro semantico: variavel %s nao declarada\nLinha:%d\nColuna:%d\n\n", (yyvsp[0].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }}
#line 2701 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: ABRE_P expLogic FECHA_P  */
#line 380 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2707 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: ID ABRE_P arguments FECHA_P  */
#line 382 "./src/sintaxe.y"
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
#line 2762 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: ID ABRE_P FECHA_P  */
#line 433 "./src/sintaxe.y"
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
#line 2777 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: CONST_INT  */
#line 444 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");}
#line 2784 "./src/sintaxe.tab.c"
    break;

  case 78: /* element: CONST_FLOAT  */
#line 447 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");}
#line 2791 "./src/sintaxe.tab.c"
    break;

  case 79: /* element: NIL  */
#line 450 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 2798 "./src/sintaxe.tab.c"
    break;

  case 80: /* arguments: arguments VIRG expLogic  */
#line 454 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2806 "./src/sintaxe.tab.c"
    break;

  case 81: /* arguments: expLogic  */
#line 458 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2815 "./src/sintaxe.tab.c"
    break;

  case 82: /* ret: RETURN attribuition  */
#line 464 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2821 "./src/sintaxe.tab.c"
    break;


#line 2825 "./src/sintaxe.tab.c"

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

#line 467 "./src/sintaxe.y"



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
