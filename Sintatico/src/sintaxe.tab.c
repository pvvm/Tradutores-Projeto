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

#line 98 "./src/sintaxe.tab.c"

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
  YYSYMBOL_conditional = 46,               /* conditional  */
  YYSYMBOL_bracesStmt = 47,                /* bracesStmt  */
  YYSYMBOL_iteration = 48,                 /* iteration  */
  YYSYMBOL_49_5 = 49,                      /* $@5  */
  YYSYMBOL_iteArgs = 50,                   /* iteArgs  */
  YYSYMBOL_expIte = 51,                    /* expIte  */
  YYSYMBOL_io = 52,                        /* io  */
  YYSYMBOL_varDecl = 53,                   /* varDecl  */
  YYSYMBOL_attribuition = 54,              /* attribuition  */
  YYSYMBOL_expLogic = 55,                  /* expLogic  */
  YYSYMBOL_andLogic = 56,                  /* andLogic  */
  YYSYMBOL_expComp = 57,                   /* expComp  */
  YYSYMBOL_expRel = 58,                    /* expRel  */
  YYSYMBOL_expArit = 59,                   /* expArit  */
  YYSYMBOL_expMul = 60,                    /* expMul  */
  YYSYMBOL_negElement = 61,                /* negElement  */
  YYSYMBOL_expList = 62,                   /* expList  */
  YYSYMBOL_element = 63,                   /* element  */
  YYSYMBOL_arguments = 64,                 /* arguments  */
  YYSYMBOL_ret = 65                        /* ret  */
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
#define YYLAST   2596

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

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
       0,    86,    86,   103,   106,   107,   111,   112,   113,   118,
     118,   118,   119,   119,   119,   120,   121,   124,   131,   139,
     140,   143,   144,   148,   149,   150,   151,   152,   153,   154,
     161,   162,   163,   166,   167,   170,   171,   171,   174,   177,
     178,   188,   190,   191,   197,   198,   202,   210,   219,   221,
     224,   225,   228,   229,   232,   233,   236,   237,   240,   241,
     242,   245,   246,   249,   250,   251,   254,   255,   256,   259,
     260,   261,   262,   263,   264,   265,   268,   269,   273
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
  "funcDecl", "parameters", "moreStmt", "stmt", "conditional",
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

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,    87,     5,    12,   347,   401,   446,   -10,     8,   465,
      -4,   -11,   125,  -117,   467,    -2,   547,   -15,    22,   241,
      34,    22,   655,    14,    -3,   100,   655,   102,   454,    41,
      45,  2437,    69,    72,   460,   350,   350,  2312,  2323,  2334,
    2019,  2448,  1108,  1138,  1168,  1198,    92,   117,   121,   128,
     629,   572,   586,  2565,  2466,  2477,  2345,  2356,   150,   111,
     104,    22,   134,  1228,   139,   402,    31,   210,     9,   303,
    2048,  2367,  2378,  2389,  2481,  2257,   188,   578,  1258,  1288,
    1318,  1348,  2481,  2481,  2481,  2481,  2481,  2481,  2481,   460,
    1378,   127,   177,   212,   670,   215,   219,   243,   249,   250,
     271,   280,   277,   288,   293,   315,   320,   289,  2400,   189,
     193,  2411,   867,   837,   747,  2575,  2499,  2510,  2521,  2422,
     655,   655,  1708,  1737,   321,  1708,  2055,   343,   344,   369,
     371,   375,  2525,  2433,  1408,  1438,   655,  1468,  1498,   361,
    1708,  1528,   406,   206,   692,   700,  1558,  1708,  1588,  2269,
    1618,  1648,   389,    38,   765,   626,   626,   521,  2088,  2099,
    2029,  2448,    11,   346,   305,   272,   551,  2209,  2220,  2110,
    2121,   795,   707,   707,  1773,  1790,  1807,   421,  2448,    37,
     237,   106,    75,   130,   322,  1972,  1824,  1841,   718,   393,
     399,   655,   748,   778,   808,   428,   432,   437,   442,   426,
     345,   459,  2071,  2132,  2143,  2154,  2536,  2281,   450,  2536,
    2536,  2536,  2536,  2536,  2536,  2536,   765,  1756,  1858,  1875,
    1892,  2547,  2293,   462,  2547,  2547,  2547,  2547,  2547,  2547,
    2547,   795,   598,    52,  1678,   838,   868,   898,   928,   464,
      98,  2165,   252,  2176,   390,   504,   487,   618,  2231,  2242,
    2253,  2187,    73,  1909,   255,  1926,   254,   169,   152,   510,
    1984,  1996,  2008,  1943,   470,   477,   249,   493,   958,  2198,
    1960,  1737,  1737,   498,  1737,   988,  1018,  1737,  1048,  1078
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,   529,  -117,  -117,  -117,  -117,  -117,  -117,
     524,   -12,   -40,   -76,  -116,   -66,   286,   325,  -111,   -13,
       0,   -30,   508,   488,   481,   -35,     3,   383,   284,   185,
      84,   -29,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    21,    95,    18,    93,     7,
      24,    42,    43,    44,   138,    45,   124,    99,   100,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   110,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    67,    78,   -12,     8,    -9,   165,   139,    61,   141,
     102,    76,    13,    11,    63,   142,    22,    19,    25,    15,
      16,    25,    59,    78,   148,   209,    17,    62,    20,    23,
     165,   151,    98,    12,   165,    97,   101,   103,   152,   106,
     182,   -49,    60,   -40,   166,   109,   200,   193,   -49,   114,
      34,   224,    35,   266,    36,    37,    38,   194,    39,    40,
      41,    92,    -3,     1,   -40,    26,   201,   -49,   166,     2,
      65,    34,   166,    35,    66,    36,    37,    38,   183,    39,
      40,    41,   137,   192,   -48,   137,   -55,   224,   115,   -55,
     -55,   -55,   227,   197,    78,    78,   101,   182,    68,     9,
     137,    69,   143,   -48,    79,   -55,    78,   137,   134,   135,
     195,   -20,   209,    61,   165,   -46,    10,   -53,    71,   199,
     -53,   -53,   226,   196,   146,   170,   165,   198,   -48,    80,
     -20,   208,    64,    81,   -46,   183,   -53,   -46,   -47,    91,
     -49,   -57,    82,   165,   -57,   -57,   -57,   -57,   223,   170,
     228,   229,   166,   170,   -17,   275,   276,   -47,   278,   187,
     -57,   279,    90,   -54,   166,   -13,   -54,   -54,   -54,   227,
     -10,   165,   182,   119,   165,   165,   246,   109,   242,   234,
     -52,   166,   -54,   -52,   -52,   226,   182,   182,   -19,   182,
     182,   258,   109,   254,    78,   193,   193,   165,   193,   -52,
     -77,   193,   265,   101,   132,   194,   194,   -19,   194,   166,
     183,   194,   166,   166,   166,   247,   187,   -76,   111,   -77,
      72,    73,   -78,   133,   183,   183,   169,   183,   183,   183,
     259,   192,   192,   170,   192,   166,   -76,   192,   203,   170,
     170,   197,   197,   120,   197,   170,   121,   197,   -51,   122,
     169,   -51,   225,   -47,   169,   218,   187,   187,   195,   195,
     186,   195,   170,   132,   195,   -50,   132,   -51,   -50,   225,
     -18,   196,   196,   123,   196,   198,   198,   196,   198,   -36,
     125,   198,   269,   126,   -50,   270,   -55,   -55,   -55,   212,
     170,   187,   -39,   170,   170,   170,   170,   170,   170,   170,
     251,   -48,   -55,    82,   104,   187,   187,   127,   187,   187,
     187,   187,   187,   187,   187,   263,   170,   186,   128,   -53,
     -53,   211,   154,   129,   155,   168,   156,   157,   158,   105,
     159,   160,   161,   -60,   169,   -53,   -60,   -60,   -60,   -60,
     204,   205,   -60,   -60,   230,   130,   169,    -2,     1,   168,
     131,   140,   -60,   168,     2,   -44,   -41,   219,   220,   185,
     -51,   210,   -30,   169,   -30,   147,   -30,   -30,   -30,    34,
     -30,   -30,   118,   239,    37,    38,   -51,    39,    70,    41,
     -30,   -45,   -30,   -43,   -30,   -30,   -30,   -42,   -30,   -30,
     -30,   169,   186,   -30,   169,   169,   169,   169,   169,   169,
     169,    -5,    -5,    96,   -50,   210,   186,   186,    -5,   186,
     186,   186,   186,   186,   186,   186,   185,   169,   149,   -38,
     -50,   154,   232,   155,   167,   156,   157,   158,   233,   159,
     160,   161,   -69,   168,   221,   -69,   -69,   -69,   -69,   -69,
     235,   -69,   -69,   -69,   236,   168,    -6,    -6,   167,   237,
     222,   -69,   167,    -6,   238,   -29,   -39,   -29,   184,   -29,
     -29,   -29,   168,   -29,   -29,    -8,    -8,    -4,    -4,   116,
     117,   -46,    -8,   -29,    -4,   -29,   -47,   -29,   -29,   -29,
     243,   -29,   -29,   -29,    37,    38,   -29,    39,    70,    41,
     168,   185,   255,   168,   168,   168,   168,   168,   168,   250,
     271,   -54,   -54,   -54,   212,   185,   185,   272,   185,   185,
     185,   185,   185,   185,   262,   184,   168,   -54,   -52,   -52,
     211,   -56,   164,   274,   -56,   -56,   -56,   -56,   277,   163,
     228,   229,   167,    14,   -52,   -73,   -73,   -73,   -73,   -73,
     -56,   -73,   -73,   -73,   167,    27,   164,    -7,    -7,   162,
     164,   -73,   273,   163,    -7,     0,   181,   163,   267,     0,
       0,   167,     0,   180,   113,   -57,   -57,   -57,   -57,     0,
     112,   213,   214,   162,     0,     0,     0,   162,   -16,   -16,
       0,   -57,   107,   179,   -53,   -16,   -53,   -53,    84,   167,
     184,     0,   167,   167,   167,   167,   248,   249,   -55,   264,
     -55,   -55,   -55,    85,   184,   184,     0,   184,   184,   184,
     184,   260,   261,   181,     0,   167,     0,   154,     0,   155,
     180,   156,   157,   158,     0,   159,   160,   161,     0,     0,
     164,     0,   -56,   -56,   -56,   -56,     0,   163,   213,   214,
     179,   -51,   164,   -51,    83,   154,     0,     0,   -56,   163,
     157,   158,     0,   159,   202,   161,    28,   162,    29,   164,
      30,    31,   153,     0,    32,    33,   163,     0,     0,   162,
     -15,   -15,     0,     0,    34,     0,    35,   -15,    36,    37,
      38,     0,    39,    40,    41,     0,   162,   164,   181,     0,
     164,   245,   -14,   -14,   163,   180,     0,   244,     0,   -14,
     -11,   -11,   181,   181,     0,   181,   257,   -11,     0,   180,
     180,     0,   256,   164,   240,   179,     0,     0,     0,   -29,
     163,   -29,   -29,   -29,   -29,   -29,   171,   -29,   -29,   252,
     179,   174,   175,     0,   176,   217,   178,   -29,     0,   -29,
     162,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,   -34,
     -29,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -54,
       0,   -54,   -54,   -54,    85,     0,     0,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -23,
     -34,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   157,
     158,     0,   159,   202,   161,     0,     0,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -24,
     -23,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   174,
     175,     0,   176,   217,   178,     0,     0,   -24,     0,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,   -27,
     -24,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -52,
       0,   -52,   -52,    84,     0,     0,     0,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -25,
     -27,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -50,
       0,   -50,    83,     0,     0,     0,     0,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,   -26,
     -25,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -28,
     -26,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,   -33,
     -28,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -32,
     -33,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -30,
     -32,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -35,
     -30,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -37,
     -35,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,     0,   -37,
       0,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,    28,
     -37,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,   -22,
      77,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,     0,
       0,     0,     0,     0,     0,     0,     0,   -22,     0,   -22,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -22,     0,   -23,
     -22,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,
       0,     0,     0,     0,     0,     0,     0,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -24,
     -23,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,     0,   -24,     0,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -24,     0,    28,
     -24,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,   -21,
      94,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,     0,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -27,
     -21,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -25,
     -27,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,   -26,
     -25,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,   -28,
     -26,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,   -28,     0,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,     0,    28,
     -28,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,    28,
     144,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,   -34,
     145,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -32,
     -34,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,   -35,
     -32,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,    28,
     -35,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,   -37,
     150,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,     0,   -37,
       0,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -33,
     -37,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -31,
     -33,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,    28,
     -31,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,     0,    28,
     268,    29,     0,    30,    31,   153,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,    35,
       0,    36,    37,    38,     0,    39,    40,    41,   188,   136,
     189,     0,   190,    31,   153,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,   -69,   191,     0,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
       0,     0,     0,     0,   -73,   222,   -69,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -74,     0,   -73,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,     0,     0,     0,     0,     0,   -75,     0,
     -74,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,     0,     0,     0,     0,   -65,     0,   -75,   -65,   -65,
     -65,   -65,   231,     0,   -65,   -65,   -65,     0,     0,     0,
       0,     0,   -68,     0,   -65,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,     0,     0,     0,     0,   -66,
       0,   -68,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,
     -66,     0,     0,     0,     0,     0,   -64,     0,   -66,   -64,
     -64,   -64,   -64,   231,     0,   -64,   -64,   -64,     0,     0,
       0,     0,     0,   -63,     0,   -64,   -63,   -63,   -63,   -63,
     231,     0,   -63,   -63,   -63,     0,     0,     0,     0,     0,
     -72,     0,   -63,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,     0,     0,     0,     0,     0,   -70,     0,   -72,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,
       0,     0,     0,     0,   -67,     0,   -70,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -71,     0,   -67,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -62,     0,     0,   -62,   -62,   -62,   -62,
     -71,     0,   -62,   -62,   -62,   -58,     0,     0,   -58,   -58,
     -58,   -58,   -62,     0,   -58,   -58,   230,   -59,     0,     0,
     -59,   -59,   -59,   -59,   -58,     0,   -59,   -59,   230,   -61,
       0,     0,   -61,   -61,   -61,   -61,   -59,     0,   -61,   -61,
     -61,   -69,    74,   -69,   -69,   -69,   -69,   -69,   -61,   -69,
     -69,   -69,   206,   -69,   -69,   -69,   -69,   -69,    75,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,   207,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -40,   -69,   -69,
     -69,     0,     0,     0,    34,     0,    35,    75,    36,    37,
      38,     0,    39,    40,    41,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
     207,   -69,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,     0,     0,   -75,   -75,   -75,   -75,   -75,   -74,   -75,
     -75,   -75,     0,     0,   -65,   -65,   -65,   -65,   216,   -75,
     -65,   -65,   -65,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -65,   -68,   -68,   -68,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -68,   -66,   -66,   -66,     0,     0,   -64,   -64,   -64,
     -64,   216,   -66,   -64,   -64,   -64,     0,     0,   -63,   -63,
     -63,   -63,   216,   -64,   -63,   -63,   -63,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -63,   -72,   -72,   -72,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -72,   -70,   -70,   -70,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -70,   -67,   -67,   -67,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -67,   -71,   -71,
     -71,     0,     0,   -60,   -60,   -60,   -60,     0,   -71,   -60,
     -60,   215,     0,     0,   -62,   -62,   -62,   -62,     0,   -60,
     -62,   -62,   -62,     0,     0,   -58,   -58,   -58,   -58,     0,
     -62,   -58,   -58,   215,     0,     0,   -59,   -59,   -59,   -59,
       0,   -58,   -59,   -59,   215,     0,     0,   -61,   -61,   -61,
     -61,     0,   -59,   -61,   -61,   -61,   171,     0,   172,     0,
     173,   174,   175,   -61,   176,   177,   178,   108,   154,     0,
     155,     0,   156,   157,   158,     0,   159,   160,   161,   -40,
     171,     0,   172,     0,   173,   174,   175,     0,   176,   177,
     178,   241,   171,     0,   172,     0,   173,   174,   175,     0,
     176,   177,   178,   253,   -73,     0,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -65,     0,   -65,
     -65,   -65,   -65,    89,     0,   -65,   -65,   -65,   -68,     0,
     -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -66,
       0,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -64,     0,   -64,   -64,   -64,   -64,    89,     0,   -64,   -64,
     -64,   -63,     0,   -63,   -63,   -63,   -63,    89,     0,   -63,
     -63,   -63,   -72,     0,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -70,     0,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -71,     0,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,    34,     0,    35,     0,
      36,    37,    38,     0,    39,    40,    41,   154,     0,   155,
       0,   156,   157,   158,     0,   159,   160,   161,   -60,     0,
     -60,   -60,   -60,   -60,     0,     0,   -60,   -60,    88,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,   -62,   -62,
      34,     0,    35,     0,    36,    37,    38,     0,    39,    70,
      41,   -58,     0,   -58,   -58,   -58,   -58,     0,     0,   -58,
     -58,    88,   -59,     0,   -59,   -59,   -59,   -59,     0,     0,
     -59,   -59,    88,   -61,     0,   -61,   -61,   -61,   -61,     0,
       0,   -61,   -61,   -61,   171,     0,   172,     0,   173,   174,
     175,     0,   176,   177,   178,   154,     0,   155,     0,   156,
     157,   158,     0,   159,   202,   161,   171,     0,   172,     0,
     173,   174,   175,     0,   176,   217,   178,   -57,     0,   -57,
     -57,   -57,   -57,     0,     0,    86,    87,   -56,     0,   -56,
     -56,   -56,   -56,     0,     0,    86,    87
};

static const yytype_int16 yycheck[] =
{
       0,    31,    42,     7,     4,     7,    41,   123,    11,   125,
       1,    41,     0,     8,    26,   126,    31,    28,    18,    29,
      12,    21,     8,    63,   140,    14,    30,    30,    30,     7,
      65,   147,     1,    28,    69,    65,    66,    28,   149,    69,
      75,    30,    28,    12,    41,    75,     8,   123,    11,    84,
      19,    14,    21,     1,    23,    24,    25,   123,    27,    28,
      29,    61,     0,     1,    12,    31,    28,    30,    65,     7,
      29,    19,    69,    21,    29,    23,    24,    25,    75,    27,
      28,    29,   122,   123,    11,   125,    11,    14,    85,    14,
      15,    16,    17,   123,   134,   135,   126,   132,    29,    12,
     140,    29,   132,    30,    12,    30,   146,   147,   120,   121,
     123,    11,    14,    11,   149,    11,    29,    11,    34,   149,
      14,    15,    16,   123,   136,    41,   161,   123,    30,    12,
      30,   161,    30,    12,    30,   132,    30,    12,    11,    28,
      12,    11,    14,   178,    14,    15,    16,    17,   178,    65,
      20,    21,   149,    69,    29,   271,   272,    30,   274,    75,
      30,   277,    12,    11,   161,    31,    14,    15,    16,    17,
      31,   206,   207,    89,   209,   210,   211,   207,   207,   191,
      11,   178,    30,    14,    15,    16,   221,   222,    11,   224,
     225,   226,   222,   222,   234,   271,   272,   232,   274,    30,
      11,   277,   232,   233,    11,   271,   272,    30,   274,   206,
     207,   277,   209,   210,   211,   212,   132,    11,    30,    30,
      35,    36,    12,    30,   221,   222,    41,   224,   225,   226,
     227,   271,   272,   149,   274,   232,    30,   277,   154,   155,
     156,   271,   272,    31,   274,   161,    31,   277,    11,    30,
      65,    14,    15,    12,    69,   171,   172,   173,   271,   272,
      75,   274,   178,    11,   277,    11,    11,    30,    14,    15,
      29,   271,   272,    30,   274,   271,   272,   277,   274,    30,
      30,   277,    30,    12,    30,    30,    14,    15,    16,    17,
     206,   207,    12,   209,   210,   211,   212,   213,   214,   215,
     216,    12,    30,    14,     1,   221,   222,    30,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   132,    30,    14,
      15,    16,    19,    30,    21,    41,    23,    24,    25,    26,
      27,    28,    29,    11,   149,    30,    14,    15,    16,    17,
     155,   156,    20,    21,    22,    30,   161,     0,     1,    65,
      30,    30,    30,    69,     7,    12,    12,   172,   173,    75,
      14,    15,     1,   178,     3,     4,     5,     6,     7,    19,
       9,    10,    88,    28,    24,    25,    30,    27,    28,    29,
      19,    12,    21,    12,    23,    24,    25,    12,    27,    28,
      29,   206,   207,    32,   209,   210,   211,   212,   213,   214,
     215,     0,     1,     1,    14,    15,   221,   222,     7,   224,
     225,   226,   227,   228,   229,   230,   132,   232,    12,    30,
      30,    19,    29,    21,    41,    23,    24,    25,    29,    27,
      28,    29,    11,   149,    13,    14,    15,    16,    17,    18,
      12,    20,    21,    22,    12,   161,     0,     1,    65,    12,
      29,    30,    69,     7,    12,     1,    30,     3,    75,     5,
       6,     7,   178,     9,    10,     0,     1,     0,     1,    86,
      87,    12,     7,    19,     7,    21,    12,    23,    24,    25,
      30,    27,    28,    29,    24,    25,    32,    27,    28,    29,
     206,   207,    30,   209,   210,   211,   212,   213,   214,   215,
      30,    14,    15,    16,    17,   221,   222,    30,   224,   225,
     226,   227,   228,   229,   230,   132,   232,    30,    14,    15,
      16,    11,    41,    30,    14,    15,    16,    17,    30,    41,
      20,    21,   149,     4,    30,    14,    15,    16,    17,    18,
      30,    20,    21,    22,   161,    21,    65,     0,     1,    41,
      69,    30,   266,    65,     7,    -1,    75,    69,   233,    -1,
      -1,   178,    -1,    75,    83,    14,    15,    16,    17,    -1,
      82,    20,    21,    65,    -1,    -1,    -1,    69,     0,     1,
      -1,    30,    74,    75,    12,     7,    14,    15,    16,   206,
     207,    -1,   209,   210,   211,   212,   213,   214,    12,     1,
      14,    15,    16,    17,   221,   222,    -1,   224,   225,   226,
     227,   228,   229,   132,    -1,   232,    -1,    19,    -1,    21,
     132,    23,    24,    25,    -1,    27,    28,    29,    -1,    -1,
     149,    -1,    14,    15,    16,    17,    -1,   149,    20,    21,
     132,    12,   161,    14,    15,    19,    -1,    -1,    30,   161,
      24,    25,    -1,    27,    28,    29,     1,   149,     3,   178,
       5,     6,     7,    -1,     9,    10,   178,    -1,    -1,   161,
       0,     1,    -1,    -1,    19,    -1,    21,     7,    23,    24,
      25,    -1,    27,    28,    29,    -1,   178,   206,   207,    -1,
     209,   210,     0,     1,   206,   207,    -1,   209,    -1,     7,
       0,     1,   221,   222,    -1,   224,   225,     7,    -1,   221,
     222,    -1,   224,   232,   206,   207,    -1,    -1,    -1,     1,
     232,     3,     4,     5,     6,     7,    19,     9,    10,   221,
     222,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
     232,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
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
      -1,    14,    15,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,     1,
      32,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
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
      -1,    23,    24,    25,    -1,    27,    28,    29,     1,    31,
       3,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    11,    31,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    11,    29,    30,    14,    15,    16,
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
      22,    12,    13,    14,    15,    16,    17,    18,    30,    20,
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
      22,    -1,    -1,    14,    15,    16,    17,    -1,    30,    20,
      21,    22,    -1,    -1,    14,    15,    16,    17,    -1,    30,
      20,    21,    22,    -1,    -1,    14,    15,    16,    17,    -1,
      30,    20,    21,    22,    -1,    -1,    14,    15,    16,    17,
      -1,    30,    20,    21,    22,    -1,    -1,    14,    15,    16,
      17,    -1,    30,    20,    21,    22,    19,    -1,    21,    -1,
      23,    24,    25,    30,    27,    28,    29,    30,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    19,    -1,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    12,    -1,    14,    15,    16,    17,
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
      18,    -1,    20,    21,    22,    12,    -1,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    19,    -1,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    20,    21,    22,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    12,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    12,    -1,    14,    15,    16,    17,    -1,    -1,
      20,    21,    22,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    19,    -1,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    19,    -1,    21,    -1,    23,
      24,    25,    -1,    27,    28,    29,    19,    -1,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    21,    12,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    37,    42,    53,    12,
      29,     8,    28,     0,    36,    29,    12,    30,    40,    28,
      30,    38,    31,     7,    43,    53,    31,    43,     1,     3,
       5,     6,     9,    10,    19,    21,    23,    24,    25,    27,
      28,    29,    44,    45,    46,    48,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    65,     8,
      28,    11,    30,    44,    30,    29,    29,    54,    29,    29,
      28,    63,    62,    62,    13,    29,    54,    32,    45,    12,
      12,    12,    14,    15,    16,    17,    20,    21,    22,    18,
      12,    28,    53,    41,    32,    39,     1,    54,     1,    50,
      51,    54,     1,    28,     1,    26,    54,    55,    30,    54,
      64,    30,    56,    57,    58,    59,    60,    60,    61,    63,
      31,    31,    30,    30,    49,    30,    12,    30,    30,    30,
      30,    30,    11,    30,    44,    44,    31,    45,    47,    47,
      30,    47,    51,    54,    32,    32,    44,     4,    47,    12,
      32,    47,    51,     7,    19,    21,    23,    24,    25,    27,
      28,    29,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    19,    21,    23,    24,    25,    27,    28,    29,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     1,     3,
       5,    31,    45,    46,    48,    52,    53,    54,    65,    54,
       8,    28,    28,    63,    62,    62,    13,    29,    54,    14,
      15,    16,    17,    20,    21,    22,    18,    28,    63,    62,
      62,    13,    29,    54,    14,    15,    16,    17,    20,    21,
      22,    18,    29,    29,    44,    12,    12,    12,    12,    28,
      55,    30,    64,    30,    56,    57,    58,    59,    60,    60,
      61,    63,    55,    30,    64,    30,    56,    57,    58,    59,
      60,    60,    61,    63,     1,    54,     1,    50,    32,    30,
      30,    30,    30,    49,    30,    47,    47,    30,    47,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    38,
      39,    37,    40,    41,    37,    37,    37,    42,    42,    43,
      43,    44,    44,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    46,    47,    47,    48,    49,    48,    50,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     2,     0,
       0,     9,     0,     0,     9,     6,     6,     2,     3,     3,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       5,     7,     5,     3,     1,     5,     0,     6,     5,     1,
       0,     4,     4,     4,     4,     4,     2,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     1,     2,     2,     1,     2,     3,     1,     1,
       3,     4,     3,     1,     1,     1,     3,     1,     2
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
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro));
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
#line 1800 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 106 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 1806 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 107 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 1813 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 111 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1819 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 112 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1825 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error PV  */
#line 113 "./src/sintaxe.y"
                                                        {}
#line 1831 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 118 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1);}
#line 1837 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 118 "./src/sintaxe.y"
                                                                                         {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1843 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 118 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 1849 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 119 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1);}
#line 1855 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 119 "./src/sintaxe.y"
                                                                                        {insereArg(&cabeca, aux, 0, num_args); num_args = 0; popEsc(&primeiro);}
#line 1861 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 119 "./src/sintaxe.y"
                                                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 1867 "./src/sintaxe.tab.c"
    break;

  case 15: /* function: funcDecl ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 120 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", (yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 1873 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: error ABRE_P FECHA_P ABRE_C moreStmt FECHA_C  */
#line 121 "./src/sintaxe.y"
                                                                                                        {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 1879 "./src/sintaxe.tab.c"
    break;

  case 17: /* funcDecl: TIPO ID  */
#line 124 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        tmp = popEsc(&primeiro);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1890 "./src/sintaxe.tab.c"
    break;

  case 18: /* funcDecl: TIPO LIST ID  */
#line 131 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        tmp = popEsc(&primeiro);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 1901 "./src/sintaxe.tab.c"
    break;

  case 19: /* parameters: parameters VIRG varDecl  */
#line 139 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 1907 "./src/sintaxe.tab.c"
    break;

  case 20: /* parameters: varDecl  */
#line 140 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 1913 "./src/sintaxe.tab.c"
    break;

  case 21: /* moreStmt: moreStmt stmt  */
#line 143 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 1919 "./src/sintaxe.tab.c"
    break;

  case 22: /* moreStmt: stmt  */
#line 144 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 1926 "./src/sintaxe.tab.c"
    break;

  case 23: /* stmt: conditional  */
#line 148 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1932 "./src/sintaxe.tab.c"
    break;

  case 24: /* stmt: iteration  */
#line 149 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1938 "./src/sintaxe.tab.c"
    break;

  case 25: /* stmt: varDecl PV  */
#line 150 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1944 "./src/sintaxe.tab.c"
    break;

  case 26: /* stmt: attribuition PV  */
#line 151 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1950 "./src/sintaxe.tab.c"
    break;

  case 27: /* stmt: io PV  */
#line 152 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1956 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: ret PV  */
#line 153 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 1962 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: error  */
#line 154 "./src/sintaxe.y"
                                                        {}
#line 1968 "./src/sintaxe.tab.c"
    break;

  case 30: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt  */
#line 161 "./src/sintaxe.y"
                                                                                {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 1974 "./src/sintaxe.tab.c"
    break;

  case 31: /* conditional: IF ABRE_P attribuition FECHA_P bracesStmt ELSE bracesStmt  */
#line 162 "./src/sintaxe.y"
                                                                                           {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro));}
#line 1980 "./src/sintaxe.tab.c"
    break;

  case 32: /* conditional: IF ABRE_P error FECHA_P bracesStmt  */
#line 163 "./src/sintaxe.y"
                                                                                {}
#line 1986 "./src/sintaxe.tab.c"
    break;

  case 33: /* bracesStmt: ABRE_C moreStmt FECHA_C  */
#line 166 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("QUESTAO PARA RESOLVER", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 1992 "./src/sintaxe.tab.c"
    break;

  case 34: /* bracesStmt: stmt  */
#line 167 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 1998 "./src/sintaxe.tab.c"
    break;

  case 35: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesStmt  */
#line 170 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2004 "./src/sintaxe.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 171 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2010 "./src/sintaxe.tab.c"
    break;

  case 37: /* iteration: FOR ABRE_P error $@5 FECHA_P bracesStmt  */
#line 171 "./src/sintaxe.y"
                                                                   {}
#line 2016 "./src/sintaxe.tab.c"
    break;

  case 38: /* iteArgs: expIte PV expIte PV expIte  */
#line 174 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro));}
#line 2022 "./src/sintaxe.tab.c"
    break;

  case 39: /* expIte: attribuition  */
#line 177 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2028 "./src/sintaxe.tab.c"
    break;

  case 40: /* expIte: %empty  */
#line 178 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2034 "./src/sintaxe.tab.c"
    break;

  case 41: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 188 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2041 "./src/sintaxe.tab.c"
    break;

  case 42: /* io: SAIDA ABRE_P attribuition FECHA_P  */
#line 190 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro));}
#line 2047 "./src/sintaxe.tab.c"
    break;

  case 43: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 191 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));
                                                        tmp = popEsc(&primeiro);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 2058 "./src/sintaxe.tab.c"
    break;

  case 44: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 197 "./src/sintaxe.y"
                                                        {}
#line 2064 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: SAIDA ABRE_P error FECHA_P  */
#line 198 "./src/sintaxe.y"
                                                        {}
#line 2070 "./src/sintaxe.tab.c"
    break;

  case 46: /* varDecl: TIPO ID  */
#line 202 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        tmp = popEsc(&primeiro);
                                                        char aux[50];
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", (yyvsp[-1].tok).lexema, "", tmp, (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 2082 "./src/sintaxe.tab.c"
    break;

  case 47: /* varDecl: TIPO LIST ID  */
#line 210 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        tmp = popEsc(&primeiro);
                                                        char aux[50];
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        var_ja_decl += push(&cabeca, aux, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", tmp, (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        pushEsc(&primeiro, tmp);}
#line 2094 "./src/sintaxe.tab.c"
    break;

  case 48: /* attribuition: ID ATRIB expLogic  */
#line 219 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2101 "./src/sintaxe.tab.c"
    break;

  case 49: /* attribuition: expLogic  */
#line 221 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2107 "./src/sintaxe.tab.c"
    break;

  case 50: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 224 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2113 "./src/sintaxe.tab.c"
    break;

  case 51: /* expLogic: andLogic  */
#line 225 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2119 "./src/sintaxe.tab.c"
    break;

  case 52: /* andLogic: andLogic LOG_OP_E expComp  */
#line 228 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2125 "./src/sintaxe.tab.c"
    break;

  case 53: /* andLogic: expComp  */
#line 229 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2131 "./src/sintaxe.tab.c"
    break;

  case 54: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 232 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2137 "./src/sintaxe.tab.c"
    break;

  case 55: /* expComp: expRel  */
#line 233 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2143 "./src/sintaxe.tab.c"
    break;

  case 56: /* expRel: expRel REL_OP_ALTA expArit  */
#line 236 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2149 "./src/sintaxe.tab.c"
    break;

  case 57: /* expRel: expArit  */
#line 237 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2155 "./src/sintaxe.tab.c"
    break;

  case 58: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 240 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2161 "./src/sintaxe.tab.c"
    break;

  case 59: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 241 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2167 "./src/sintaxe.tab.c"
    break;

  case 60: /* expArit: expMul  */
#line 242 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2173 "./src/sintaxe.tab.c"
    break;

  case 61: /* expMul: expMul ARIT_OP_ALTA negElement  */
#line 245 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2179 "./src/sintaxe.tab.c"
    break;

  case 62: /* expMul: negElement  */
#line 246 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2185 "./src/sintaxe.tab.c"
    break;

  case 63: /* negElement: LOG_OP_NEG expList  */
#line 249 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro));}
#line 2191 "./src/sintaxe.tab.c"
    break;

  case 64: /* negElement: ARIT_OP_MENOS expList  */
#line 250 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro));}
#line 2197 "./src/sintaxe.tab.c"
    break;

  case 65: /* negElement: expList  */
#line 251 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2203 "./src/sintaxe.tab.c"
    break;

  case 66: /* expList: LIST_OP_UN element  */
#line 254 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro));}
#line 2209 "./src/sintaxe.tab.c"
    break;

  case 67: /* expList: expList LIST_OP_BIN element  */
#line 255 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro));}
#line 2215 "./src/sintaxe.tab.c"
    break;

  case 68: /* expList: element  */
#line 256 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2221 "./src/sintaxe.tab.c"
    break;

  case 69: /* element: ID  */
#line 259 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2227 "./src/sintaxe.tab.c"
    break;

  case 70: /* element: ABRE_P attribuition FECHA_P  */
#line 260 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2233 "./src/sintaxe.tab.c"
    break;

  case 71: /* element: ID ABRE_P arguments FECHA_P  */
#line 261 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro));}
#line 2239 "./src/sintaxe.tab.c"
    break;

  case 72: /* element: ID ABRE_P FECHA_P  */
#line 262 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2245 "./src/sintaxe.tab.c"
    break;

  case 73: /* element: CONST_INT  */
#line 263 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2251 "./src/sintaxe.tab.c"
    break;

  case 74: /* element: CONST_FLOAT  */
#line 264 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2257 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: NIL  */
#line 265 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro));}
#line 2263 "./src/sintaxe.tab.c"
    break;

  case 76: /* arguments: arguments VIRG attribuition  */
#line 268 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));}
#line 2269 "./src/sintaxe.tab.c"
    break;

  case 77: /* arguments: attribuition  */
#line 269 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2276 "./src/sintaxe.tab.c"
    break;

  case 78: /* ret: RETURN attribuition  */
#line 273 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro));}
#line 2282 "./src/sintaxe.tab.c"
    break;


#line 2286 "./src/sintaxe.tab.c"

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

#line 276 "./src/sintaxe.y"



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
