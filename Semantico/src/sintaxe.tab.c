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
#line 4 "./src/sintaxe.y"

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
char tipo_func[50];
char tipo_func_return[50];
struct No * raiz;
struct tabelaSimb* cabeca = NULL;
struct listaEscopo* primeiro = NULL;
struct listaArgs* args = NULL;

void yyerror(const char *);

#line 102 "./src/sintaxe.tab.c"

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
  YYSYMBOL_44_5 = 44,                      /* $@5  */
  YYSYMBOL_45_6 = 45,                      /* $@6  */
  YYSYMBOL_funcDecl = 46,                  /* funcDecl  */
  YYSYMBOL_parameters = 47,                /* parameters  */
  YYSYMBOL_moreStmt = 48,                  /* moreStmt  */
  YYSYMBOL_block = 49,                     /* block  */
  YYSYMBOL_stmt = 50,                      /* stmt  */
  YYSYMBOL_conditional = 51,               /* conditional  */
  YYSYMBOL_bracesOrNot = 52,               /* bracesOrNot  */
  YYSYMBOL_iteration = 53,                 /* iteration  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_iteArgs = 55,                   /* iteArgs  */
  YYSYMBOL_expIte = 56,                    /* expIte  */
  YYSYMBOL_io = 57,                        /* io  */
  YYSYMBOL_varDecl = 58,                   /* varDecl  */
  YYSYMBOL_attribuition = 59,              /* attribuition  */
  YYSYMBOL_expLogic = 60,                  /* expLogic  */
  YYSYMBOL_andLogic = 61,                  /* andLogic  */
  YYSYMBOL_expComp = 62,                   /* expComp  */
  YYSYMBOL_expRel = 63,                    /* expRel  */
  YYSYMBOL_expList = 64,                   /* expList  */
  YYSYMBOL_expArit = 65,                   /* expArit  */
  YYSYMBOL_expMul = 66,                    /* expMul  */
  YYSYMBOL_expUn = 67,                     /* expUn  */
  YYSYMBOL_element = 68,                   /* element  */
  YYSYMBOL_arguments = 69,                 /* arguments  */
  YYSYMBOL_ret = 70                        /* ret  */
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
#define YYLAST   2907

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  291

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
       0,    90,    90,   111,   116,   117,   121,   122,   123,   127,
     128,   127,   146,   147,   146,   149,   149,   166,   166,   169,
     176,   182,   183,   186,   187,   191,   192,   193,   196,   197,
     198,   199,   200,   201,   205,   207,   209,   212,   213,   216,
     217,   217,   220,   223,   224,   230,   237,   239,   245,   246,
     250,   257,   264,   315,   318,   319,   322,   323,   326,   327,
     330,   331,   334,   367,   393,   396,   397,   398,   401,   402,
     405,   414,   423,   432,   444,   449,   460,   462,   527,   539,
     542,   545,   549,   553,   559
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
  "function", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "funcDecl",
  "parameters", "moreStmt", "block", "stmt", "conditional", "bracesOrNot",
  "iteration", "$@7", "iteArgs", "expIte", "io", "varDecl", "attribuition",
  "expLogic", "andLogic", "expComp", "expRel", "expList", "expArit",
  "expMul", "expUn", "element", "arguments", "ret", YY_NULLPTR
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

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     295,    24,    12,    11,   331,   414,   504,    36,     9,     8,
      38,   103,  -165,   517,    27,   580,   129,   146,   116,   132,
     146,   133,    30,    26,    52,   148,    80,   545,    96,    81,
     146,   149,   545,   158,  1124,   155,   177,  2816,   190,   206,
     702,   702,   702,   702,  2564,  2577,  2590,  2267,  2828,   545,
    1158,  1192,  1226,  1260,  1294,    45,   222,   241,     4,   321,
     700,   817,   749,  2848,  2603,  2616,  2629,   247,    88,    93,
     230,  1328,   245,   235,    50,  2307,   184,     6,   115,  2642,
    2655,  2668,  2681,  2816,  2686,   -10,  1362,   585,  1396,  1430,
    1464,  1498,  2816,  2816,  2816,  2816,  2816,  2816,  2816,  2816,
    2816,  1532,   545,   626,   545,   251,   267,   276,   282,   303,
     310,   288,   296,   307,   312,    68,   210,  2707,    87,   118,
    2720,  1566,   365,   953,   851,   783,  2860,  2872,  2733,  2746,
    2759,  1600,  1634,   403,  1940,   325,   403,  2316,   340,   352,
     359,   360,   387,  2876,  2772,   670,   704,   545,  1668,  1702,
     320,   403,  1736,   388,   107,  1770,   403,  1804,  2777,  1838,
    1872,   353,    58,   871,   871,   871,   871,  2345,  2356,  2367,
    2334,  2828,   203,   480,   506,   664,  2521,  2378,  2389,  2400,
    2286,   100,   905,   905,   905,   905,   579,   676,  1961,   351,
    2828,   302,   373,    79,   633,   379,  1980,  1999,  2018,  2828,
    2876,   716,   385,   386,   545,   750,   784,   818,   406,   413,
     415,   399,   409,   435,  2411,  2422,  2433,  2444,  2790,   153,
    2828,  2828,  2828,  2828,  2828,  2828,  2828,  2828,  2828,  2037,
    2056,  2075,  2094,  2803,   161,  2876,  2876,  2876,  2876,  2876,
    2876,  2876,  2876,   265,   344,   637,   280,  1906,   852,   886,
     920,   437,  2455,   119,  2466,   600,   604,  2553,  2532,  2543,
    2477,  2488,  2499,   165,  2113,   120,  2132,   461,    91,  2256,
    2227,  2246,  2151,  2170,  2189,   418,   420,   276,   436,   954,
    2510,  2208,  1940,  1940,   438,  1940,   988,  1022,  1940,  1056,
    1090
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   465,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,   451,   -30,   -45,  -124,  -105,  -128,   -82,   197,
     232,  -102,   -69,    13,   -73,   -34,   485,   441,   389,   308,
     264,   220,    49,     5,  -164,   -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    20,    72,    17,    70,    25,
      21,     7,    23,    50,    51,    52,    53,   149,    54,   135,
     108,   109,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   119,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,   110,    71,    76,   199,    88,   150,   111,   152,   148,
     205,    12,   148,     8,    85,   -12,   -53,     8,    92,    86,
      10,    15,   120,   157,    -8,    -8,    88,   148,   160,   206,
      24,    -8,   148,    24,    -9,   153,   112,    30,    28,   181,
      16,    88,    11,    69,   115,    79,    80,    81,    82,   116,
     118,   107,   207,   179,   253,     9,   161,    89,    31,    19,
      29,   209,   -44,   -22,   110,   208,   212,    14,    18,   265,
      40,    41,   131,    42,   132,    43,    44,    45,   179,    46,
      47,    48,   199,   179,   -22,   211,    88,    88,   213,   198,
     -59,    30,   -50,   -59,   -59,   -59,   237,   178,   -83,   -51,
     142,   200,   -58,   210,   -21,   -58,   -58,   -58,   237,   154,
      88,   -59,    33,   -50,   199,   -50,   113,   155,   -82,   -83,
     -51,   200,   178,   -58,   181,   -21,    68,   178,   -51,   143,
     143,   143,   -53,   197,   -19,   163,   164,   219,   165,   -82,
     166,   167,   168,   114,   169,   170,   171,   -20,   198,   130,
     144,   280,   281,    22,   286,   287,   234,   289,   205,   205,
     290,   205,   -17,   179,   205,   -15,    27,   199,   214,   215,
     216,   217,   276,   110,   247,   199,   179,   206,   206,   199,
     206,    32,   -13,   206,   118,   254,    73,   229,   230,   231,
     232,   -10,   197,   266,   263,   179,   -84,   -52,    92,   118,
     207,   207,    88,   207,   179,   198,   207,   178,    74,   209,
     209,   181,   209,   208,   208,   209,   208,   -55,   220,   208,
     178,    77,   -52,   198,    92,   179,   179,   179,   179,   179,
     179,   179,   179,   179,    90,   -55,   105,    78,   198,   178,
     198,   198,   198,   198,   198,   198,   198,   198,   178,   197,
     179,   210,   210,    91,   210,   163,   164,   210,   165,   101,
     166,   167,   168,   102,   169,   180,   171,   197,   177,   178,
     178,   178,   178,   178,   178,   178,   262,   178,   104,   -54,
     220,   277,   197,   133,   197,   197,   197,   197,   197,   197,
     197,   274,   -44,   177,   178,    -3,     1,   -54,   177,   134,
      40,    41,     2,    42,   196,    43,    44,    45,   -40,    46,
      47,    48,   176,   -55,   136,   137,   -55,   235,   128,   129,
     138,   -34,   -43,   -34,   156,   -34,   -34,   -34,   139,   -34,
     -34,    -2,     1,   -55,   -55,   -55,    93,   176,     2,   140,
     -34,   -34,   176,   -34,   141,   -34,   -34,   -34,   195,   -34,
     -34,   -34,   -48,   -34,   -34,   -54,   175,   151,   -54,   235,
     126,   127,   -75,   196,   -45,   -75,   -75,   -75,   -75,   -75,
     -75,   -49,   -47,   -75,   -75,   -75,   -54,   -54,   177,   -54,
      93,   175,   233,   -75,   -57,   -42,   175,   -57,   -57,   236,
     -64,   177,   194,   -64,   -64,   -64,   -64,   -64,   -64,   -46,
     158,   240,   241,   125,    34,   -57,    35,   195,    36,    37,
     177,   -64,    38,    39,    -5,    -5,   245,   246,   248,   177,
     196,    -5,   176,    40,    41,   249,    42,   250,    43,    44,
      45,   -43,    46,    47,    48,   176,   147,   174,   196,   251,
     177,   177,   177,   177,   177,   260,   261,   -50,   177,   -51,
     282,   194,   283,   196,   176,   196,   196,   196,   196,   196,
     272,   273,   174,   176,   195,   177,   175,   174,   285,    13,
     288,    26,   -56,   193,   284,   -56,   -56,   236,   278,   175,
       0,     0,   195,   124,   176,   176,   176,   258,   259,   173,
       0,     0,   176,   -56,   -57,   -57,   221,   195,   175,   195,
     195,   195,   270,   271,    -6,    -6,     0,   175,   194,   176,
       0,    -6,   -57,     0,   173,     0,     0,    -4,    -4,   173,
     -59,   -59,   -59,   222,    -4,   192,   194,     0,   175,   175,
     257,     0,   193,   172,   123,     0,   175,     0,   -59,     0,
       0,   194,     0,   194,   194,   269,    34,   174,    35,     0,
      36,    37,   162,   175,    38,    39,     0,     0,   172,     0,
     174,     0,     0,   172,     0,    40,    41,     0,    42,   191,
      43,    44,    45,     0,    46,    47,    48,   122,    49,   174,
      -7,    -7,     0,     0,   192,   -18,   -18,    -7,   174,   193,
     -79,     0,   -18,   -79,   -79,   -79,   -79,   -79,   -79,   173,
       0,   -79,   -79,   -79,     0,     0,     0,   193,     0,   174,
     256,   -79,   173,     0,   -56,   -56,   221,   174,   -58,   -58,
     -58,   222,   193,     0,   193,   268,   -16,   -16,   191,     0,
       0,   173,   -56,   -16,   174,     0,   -58,     0,   275,     0,
     173,   192,     0,   172,   -61,     0,     0,   -61,   -61,   -61,
     -61,   238,   239,     0,     0,     0,   172,   163,   164,   192,
     165,   255,   166,   167,   168,   -61,   169,   180,   171,   173,
     -14,   -14,     0,     0,   192,   172,   267,   -14,   -61,   -61,
     -61,   -61,   223,   224,   243,   244,   173,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -61,     0,   -80,   -80,
     -80,     0,     0,   191,   -11,   -11,     0,     0,   -80,     0,
       0,   -11,   -57,   172,   -57,   -57,    94,   -33,   191,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,     0,    44,    45,
     172,    46,    75,    48,     0,     0,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -61,     0,   -61,   -61,   -61,   -61,    96,    97,     0,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -60,     0,   -60,   -60,   -60,
     -60,    96,    97,     0,   -28,   -28,     0,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -59,
       0,   -59,   -59,   -59,    95,     0,     0,     0,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
       0,   -29,   -29,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -58,     0,   -58,   -58,   -58,    95,     0,
       0,     0,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -30,     0,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   167,   168,     0,
     169,   170,   171,     0,     0,     0,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   186,   187,     0,   188,   189,   190,     0,     0,     0,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -56,     0,   -56,   -56,    94,
       0,     0,     0,     0,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -39,     0,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
       0,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,     0,   -41,     0,   -41,   -41,   -41,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -33,     0,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,    34,
       0,    35,     0,    36,    37,   162,     0,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,    42,     0,    43,    44,    45,     0,    46,    47,    48,
       0,    49,    87,   -24,     0,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -24,   -24,     0,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -29,     0,   -29,     0,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,    34,
       0,    35,     0,    36,    37,   162,     0,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,    42,     0,    43,    44,    45,     0,    46,    47,    48,
       0,    49,   103,    34,     0,    35,     0,    36,    37,   162,
       0,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,     0,    42,     0,    43,    44,    45,
       0,    46,    47,    48,     0,    49,   121,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -23,   -23,     0,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,     0,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   -26,     0,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -30,
       0,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,   -32,     0,   -32,     0,   -32,   -32,   -32,
       0,   -32,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -27,   -27,     0,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,
     -27,    34,     0,    35,     0,    36,    37,   162,     0,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,    42,     0,    43,    44,    45,     0,    46,
      47,    48,     0,    49,   145,    34,     0,    35,     0,    36,
      37,   162,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,     0,    42,     0,    43,
      44,    45,     0,    46,    47,    48,     0,    49,   146,   -38,
       0,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,
       0,   -38,   -38,   -36,     0,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -39,     0,   -39,
       0,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,     0,   -39,
       0,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,    34,     0,    35,     0,    36,    37,   162,     0,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,    42,     0,    43,    44,    45,     0,    46,
      47,    48,     0,    49,   159,   -41,     0,   -41,     0,   -41,
     -41,   -41,     0,   -41,   -41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,   -41,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -37,
       0,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -35,     0,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,    34,     0,    35,
       0,    36,    37,   162,     0,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,     0,    42,
       0,    43,    44,    45,     0,    46,    47,    48,     0,    49,
     279,   201,     0,   202,     0,   203,    37,     0,     0,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,    42,     0,    43,    44,    45,     0,    46,
      47,    48,   -81,   204,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -81,   -81,   -81,     0,     0,     0,     0,
       0,   -67,     0,   -81,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -67,   -67,   242,     0,     0,     0,     0,     0,
     -69,     0,   -67,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,   -74,
       0,   -69,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
     -74,   -74,   -74,     0,     0,     0,     0,     0,   -72,     0,
     -74,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,
     -72,   -72,     0,     0,     0,     0,     0,   -73,     0,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,
     -73,     0,     0,     0,     0,     0,   -71,     0,   -73,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -71,   -71,
       0,     0,     0,     0,     0,   -70,     0,   -71,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,   -70,   -70,     0,
       0,     0,     0,     0,   -78,     0,   -70,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -78,   -78,   -78,     0,     0,
       0,     0,     0,   -76,     0,   -78,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -76,   -76,   -76,     0,     0,     0,
       0,     0,   -65,     0,   -76,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,   -65,   242,     0,     0,     0,     0,
       0,   -66,     0,   -65,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -66,   -66,   242,     0,     0,     0,     0,     0,
     -68,     0,   -66,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -68,   -68,     0,     0,     0,     0,     0,   -77,
       0,   -68,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -77,   -77,   -77,     0,     0,     0,     0,     0,   -62,     0,
     -77,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   240,
     241,     0,     0,     0,     0,     0,     0,   -63,     0,   -62,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -60,   240,   241,
     -60,   -60,   -60,   -60,   238,   239,     0,     0,   -63,   -75,
      83,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -60,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,    84,   228,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,   218,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -44,   -75,
     -75,   -75,     0,     0,     0,     0,    40,    41,    84,    42,
       0,    43,    44,    45,     0,    46,    47,    48,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -75,   -75,   -75,   -79,
     -79,   -79,   -79,   -79,   -79,   218,   -75,   -79,   -79,   -79,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -79,   -80,   -80,
     -80,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -80,   -81,
     -81,   -81,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -81,
     -67,   -67,   227,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -67,   -69,   -69,   -69,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -69,   -74,   -74,   -74,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -74,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -72,   -73,   -73,   -73,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -73,   -71,   -71,   -71,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -71,   -70,   -70,   -70,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -70,   -78,   -78,   -78,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -78,   -76,   -76,
     -76,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -76,   -65,
     -65,   227,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -65,
     -66,   -66,   227,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -66,   -68,   -68,   -68,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -68,   -77,   -77,   -77,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -77,   225,   226,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -64,   225,   226,     0,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -62,   225,   226,   -60,   -60,   -60,
     -60,   223,   224,     0,     0,   -63,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -60,   -79,   -79,   -79,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,
     -80,   -80,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -81,   -81,   -81,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -67,   100,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -69,
     -69,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -74,   -74,   -74,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,   -72,   -72,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -70,   -70,   182,   183,     0,   184,
       0,   185,   186,   187,     0,   188,   189,   190,   117,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,
     -78,   -78,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -65,   -65,   100,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,   -66,
     100,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -77,   -77,   -77,   163,   164,     0,
     165,     0,   166,   167,   168,     0,   169,   180,   171,   -44,
     182,   183,     0,   184,     0,   185,   186,   187,     0,   188,
     189,   190,   252,   182,   183,     0,   184,     0,   185,   186,
     187,     0,   188,   189,   190,   264,    40,    41,     0,    42,
       0,    43,    44,    45,     0,    46,    75,    48,   163,   164,
       0,   165,     0,   166,   167,   168,     0,   169,   170,   171,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
      98,    99,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,    98,    99,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,    98,    99,   182,   183,     0,   184,
       0,   185,   186,   187,     0,   188,   189,   190
};

static const yytype_int16 yycheck[] =
{
      73,    74,    32,    37,    14,    50,   134,     1,   136,   133,
     134,     0,   136,     0,    48,     7,    12,     4,    14,    49,
       8,    12,    32,   151,     0,     1,    71,   151,   156,   134,
      17,     7,   156,    20,     7,   137,    30,    11,     8,    73,
      32,    86,    30,    30,    78,    40,    41,    42,    43,    83,
      84,     1,   134,    48,   218,    31,   158,    12,    32,    32,
      30,   134,    12,    11,   137,   134,     8,    31,    30,   233,
      20,    21,   102,    23,   104,    25,    26,    27,    73,    29,
      30,    31,    14,    78,    32,   158,   131,   132,    30,    84,
      11,    11,    11,    14,    15,    16,    17,    48,    11,    11,
      32,    14,    11,   134,    11,    14,    15,    16,    17,   143,
     155,    32,    32,    32,    14,    12,     1,   147,    11,    32,
      32,    14,    73,    32,   158,    32,    30,    78,    12,    11,
      11,    11,    32,    84,    31,    20,    21,   171,    23,    32,
      25,    26,    27,    28,    29,    30,    31,    31,   143,   100,
      32,    32,    32,     7,   282,   283,   190,   285,   282,   283,
     288,   285,    33,   158,   288,    33,    33,    14,   163,   164,
     165,   166,   245,   246,   204,    14,   171,   282,   283,    14,
     285,    33,    33,   288,   218,    32,    31,   182,   183,   184,
     185,    33,   143,    32,   228,   190,    12,    32,    14,   233,
     282,   283,   247,   285,   199,   200,   288,   158,    31,   282,
     283,   245,   285,   282,   283,   288,   285,    14,    15,   288,
     171,    31,    12,   218,    14,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    12,    32,     1,    31,   233,   190,
     235,   236,   237,   238,   239,   240,   241,   242,   199,   200,
     245,   282,   283,    12,   285,    20,    21,   288,    23,    12,
      25,    26,    27,    33,    29,    30,    31,   218,    48,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    33,    14,
      15,     1,   233,    32,   235,   236,   237,   238,   239,   240,
     241,   242,    12,    73,   245,     0,     1,    32,    78,    32,
      20,    21,     7,    23,    84,    25,    26,    27,    32,    29,
      30,    31,    48,    11,    32,    12,    14,    15,    98,    99,
      32,     1,    12,     3,     4,     5,     6,     7,    32,     9,
      10,     0,     1,    12,    32,    14,    15,    73,     7,    32,
      20,    21,    78,    23,    32,    25,    26,    27,    84,    29,
      30,    31,    12,    33,    34,    11,    48,    32,    14,    15,
      96,    97,    11,   143,    12,    14,    15,    16,    17,    18,
      19,    12,    12,    22,    23,    24,    32,    12,   158,    14,
      15,    73,    31,    32,    11,    32,    78,    14,    15,    16,
      11,   171,    84,    14,    15,    16,    17,    18,    19,    12,
      12,    22,    23,    95,     1,    32,     3,   143,     5,     6,
     190,    32,     9,    10,     0,     1,    31,    31,    12,   199,
     200,     7,   158,    20,    21,    12,    23,    12,    25,    26,
      27,    32,    29,    30,    31,   171,    33,    48,   218,    30,
     220,   221,   222,   223,   224,   225,   226,    12,   228,    12,
      32,   143,    32,   233,   190,   235,   236,   237,   238,   239,
     240,   241,    73,   199,   200,   245,   158,    78,    32,     4,
      32,    20,    11,    84,   277,    14,    15,    16,   246,   171,
      -1,    -1,   218,    94,   220,   221,   222,   223,   224,    48,
      -1,    -1,   228,    32,    14,    15,    16,   233,   190,   235,
     236,   237,   238,   239,     0,     1,    -1,   199,   200,   245,
      -1,     7,    32,    -1,    73,    -1,    -1,     0,     1,    78,
      14,    15,    16,    17,     7,    84,   218,    -1,   220,   221,
     222,    -1,   143,    48,    93,    -1,   228,    -1,    32,    -1,
      -1,   233,    -1,   235,   236,   237,     1,   158,     3,    -1,
       5,     6,     7,   245,     9,    10,    -1,    -1,    73,    -1,
     171,    -1,    -1,    78,    -1,    20,    21,    -1,    23,    84,
      25,    26,    27,    -1,    29,    30,    31,    92,    33,   190,
       0,     1,    -1,    -1,   143,     0,     1,     7,   199,   200,
      11,    -1,     7,    14,    15,    16,    17,    18,    19,   158,
      -1,    22,    23,    24,    -1,    -1,    -1,   218,    -1,   220,
     221,    32,   171,    -1,    14,    15,    16,   228,    14,    15,
      16,    17,   233,    -1,   235,   236,     0,     1,   143,    -1,
      -1,   190,    32,     7,   245,    -1,    32,    -1,     1,    -1,
     199,   200,    -1,   158,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,   171,    20,    21,   218,
      23,   220,    25,    26,    27,    32,    29,    30,    31,   228,
       0,     1,    -1,    -1,   233,   190,   235,     7,    14,    15,
      16,    17,    18,    19,   199,   200,   245,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    32,    -1,    22,    23,
      24,    -1,    -1,   218,     0,     1,    -1,    -1,    32,    -1,
      -1,     7,    12,   228,    14,    15,    16,     1,   233,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    26,    27,
     245,    29,    30,    31,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
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
      10,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    33,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    12,    -1,    14,    15,    16,
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
      -1,    33,    34,     1,    -1,     3,    -1,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    34,     1,    -1,     3,
      -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    -1,    33,
      34,     1,    -1,     3,    -1,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    11,    33,    -1,    14,    15,    16,    17,    18,
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
      19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    32,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    32,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    32,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      32,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    32,
      14,    15,    16,    17,    18,    19,    -1,    11,    22,    23,
      14,    15,    16,    17,    18,    19,    -1,    -1,    32,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    32,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    12,    22,
      23,    24,    -1,    -1,    -1,    -1,    20,    21,    31,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    14,
      15,    16,    17,    18,    19,    31,    32,    22,    23,    24,
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
      -1,    32,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    -1,    32,    22,    23,    -1,    14,    15,    16,    17,
      18,    19,    -1,    32,    22,    23,    -1,    14,    15,    16,
      17,    18,    19,    -1,    32,    22,    23,    14,    15,    16,
      17,    18,    19,    -1,    -1,    32,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    32,    22,    23,    24,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
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
      19,    -1,    -1,    22,    23,    24,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    32,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    30,    31,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    36,    37,    38,    39,    46,    58,    31,
       8,    30,     0,    38,    31,    12,    32,    42,    30,    32,
      40,    45,     7,    47,    58,    44,    47,    33,     8,    30,
      11,    32,    33,    32,     1,     3,     5,     6,     9,    10,
      20,    21,    23,    25,    26,    27,    29,    30,    31,    33,
      48,    49,    50,    51,    53,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    70,    30,    58,
      43,    48,    41,    31,    31,    30,    60,    31,    31,    68,
      68,    68,    68,    13,    31,    60,    48,    34,    49,    12,
      12,    12,    14,    15,    16,    17,    18,    19,    22,    23,
      24,    12,    33,    34,    33,     1,    59,     1,    55,    56,
      59,     1,    30,     1,    28,    60,    60,    32,    60,    69,
      32,    34,    61,    62,    63,    64,    65,    65,    66,    66,
      67,    48,    48,    32,    32,    54,    32,    12,    32,    32,
      32,    32,    32,    11,    32,    34,    34,    33,    50,    52,
      52,    32,    52,    56,    60,    48,     4,    52,    12,    34,
      52,    56,     7,    20,    21,    23,    25,    26,    27,    29,
      30,    31,    61,    62,    63,    64,    65,    66,    67,    68,
      30,    60,    20,    21,    23,    25,    26,    27,    29,    30,
      31,    61,    62,    63,    64,    65,    66,    67,    68,    14,
      14,     1,     3,     5,    33,    50,    51,    53,    57,    59,
      70,    59,     8,    30,    68,    68,    68,    68,    31,    60,
      15,    16,    17,    18,    19,    22,    23,    24,    13,    68,
      68,    68,    68,    31,    60,    15,    16,    17,    18,    19,
      22,    23,    24,    61,    61,    31,    31,    48,    12,    12,
      12,    30,    32,    69,    32,    62,    63,    64,    65,    65,
      66,    66,    67,    60,    32,    69,    32,    62,    63,    64,
      65,    65,    66,    66,    67,     1,    59,     1,    55,    34,
      32,    32,    32,    32,    54,    32,    52,    52,    32,    52,
      52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    38,    38,    40,
      41,    39,    42,    43,    39,    44,    39,    45,    39,    46,
      46,    47,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    52,    53,
      54,    53,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     2,     1,     0,
       0,     9,     0,     0,     9,     0,     7,     0,     7,     2,
       3,     3,     1,     2,     1,     1,     2,     3,     1,     1,
       2,     2,     2,     1,     5,     7,     5,     3,     1,     5,
       0,     6,     5,     1,     0,     4,     4,     4,     4,     4,
       2,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       2,     2,     2,     2,     1,     1,     3,     4,     3,     1,
       1,     1,     3,     1,     2
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
#line 90 "./src/sintaxe.y"
                                                        {raiz = montaNo("program", NULL, NULL, NULL, (yyvsp[0].lista), retUlt(&primeiro), NULL);

                                                        // Checa se existe main
                                                        if(procuraLista(&cabeca, "main", 0)) {
                                                            printf("ERRO SEMANTICO: funcao main nao declarada\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                        }
                                                        printf("Foram encontrados %d erros lexicos\n", num_erros_lexicos);
                                                        printf("Foram encontrados %d erros sintaticos\n", num_erros_sintaticos);
                                                        printf("Foram encontrados %d erros semanticos\n\n", num_erros_semanticos);
                                                        // Caso nao hajam erros lexicos e sintaticos, imprime a arvore
                                                        if(num_erros_sintaticos == 0 && num_erros_lexicos == 0/* && num_erros_semanticos == 0*/) {
                                                            printf("========================================================== ARVORE SINTATICA ABSTRADA =========================================================\n\n");
                                                            printaArvore(raiz);
                                                            desalocar(raiz);     
                                                            printf("\n\n");
                                                        }
                                                        printf("\n\n================================================================== TABELA DE SIMBOLOS =================================================================\n\n");
                                                        printaLista(cabeca);
                                                        liberaLista(cabeca);
                                                        liberaEsc(primeiro);}
#line 2155 "./src/sintaxe.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 116 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2161 "./src/sintaxe.tab.c"
    break;

  case 5: /* declarations: declaration  */
#line 117 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2168 "./src/sintaxe.tab.c"
    break;

  case 6: /* declaration: function  */
#line 121 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2174 "./src/sintaxe.tab.c"
    break;

  case 7: /* declaration: varDecl PV  */
#line 122 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2180 "./src/sintaxe.tab.c"
    break;

  case 8: /* declaration: error  */
#line 123 "./src/sintaxe.y"
                                                     {}
#line 2186 "./src/sintaxe.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 127 "./src/sintaxe.y"
                                {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func);}
#line 2192 "./src/sintaxe.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 128 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2198 "./src/sintaxe.tab.c"
    break;

  case 11: /* function: funcDecl ABRE_P $@1 parameters FECHA_P $@2 ABRE_C moreStmt FECHA_C  */
#line 129 "./src/sintaxe.y"
                    {(yyval.no) = montaNo("function", (yyvsp[-8].no), (yyvsp[-5].no), NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "NIL");
                    }
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");
                    }
#line 2219 "./src/sintaxe.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 146 "./src/sintaxe.y"
                               {pushEsc(&primeiro, escopo_max + 1); argumentos = 1; strcpy(tipo_func_return, tipo_func);}
#line 2225 "./src/sintaxe.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 147 "./src/sintaxe.y"
                    {insereArg(&cabeca, aux, 0, num_args, &args); num_args = 0; popEsc(&primeiro); argumentos = 0; args = NULL;}
#line 2231 "./src/sintaxe.tab.c"
    break;

  case 14: /* function: error ABRE_P $@3 parameters FECHA_P $@4 ABRE_C moreStmt FECHA_C  */
#line 147 "./src/sintaxe.y"
                                                                                                                                                                {(yyval.no) = montaNo("function",(yyvsp[-5].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2237 "./src/sintaxe.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 149 "./src/sintaxe.y"
                                          {strcpy(tipo_func_return, tipo_func);}
#line 2243 "./src/sintaxe.tab.c"
    break;

  case 16: /* function: funcDecl ABRE_P FECHA_P $@5 ABRE_C moreStmt FECHA_C  */
#line 150 "./src/sintaxe.y"
                    {(yyval.no) = montaNo("function", (yyvsp[-6].no), NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);
                    // Adiciona o return default do tipo da funcao
                    struct No *ret_default = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                    if(!strcmp(tipo_func_return, "int")) {
                        ret_default->no1 = montaNo("0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "int");
                    } else if(!strcmp(tipo_func_return, "float")) {
                        ret_default->no1 = montaNo("0.0", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, "float");
                    } else if(!strcmp(tipo_func_return, "int list") || !strcmp(tipo_func_return, "float list")) {
                        ret_default->no1 = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                        strcpy(ret_default->no1->tipo, tipo_func_return);
                    }
                    (yyval.no)->lista = novaListaNo(&(yyval.no)->lista, ret_default);
                    strcpy(tipo_func_return, "");}
#line 2263 "./src/sintaxe.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 166 "./src/sintaxe.y"
                                       {strcpy(tipo_func_return, tipo_func);}
#line 2269 "./src/sintaxe.tab.c"
    break;

  case 18: /* function: error ABRE_P FECHA_P $@6 ABRE_C moreStmt FECHA_C  */
#line 166 "./src/sintaxe.y"
                                                                                                            {(yyval.no) = montaNo("function", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL); strcpy(tipo_func_return, "");}
#line 2275 "./src/sintaxe.tab.c"
    break;

  case 19: /* funcDecl: TIPO ID  */
#line 169 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Variavel aux necessaria para inserir o numero de argumentos na tabela
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        strcpy(tipo_func, (yyvsp[-1].tok).lexema);}
#line 2286 "./src/sintaxe.tab.c"
    break;

  case 20: /* funcDecl: TIPO LIST ID  */
#line 176 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        strcpy(aux, (yyvsp[0].tok).lexema);
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "funcao", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        strcpy(tipo_func, (yyvsp[-2].tok).lexema);}
#line 2295 "./src/sintaxe.tab.c"
    break;

  case 21: /* parameters: parameters VIRG varDecl  */
#line 182 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-2].no); num_args++;}
#line 2301 "./src/sintaxe.tab.c"
    break;

  case 22: /* parameters: varDecl  */
#line 183 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no); num_args++;}
#line 2307 "./src/sintaxe.tab.c"
    break;

  case 23: /* moreStmt: moreStmt block  */
#line 186 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-1].lista), (yyvsp[0].no));}
#line 2313 "./src/sintaxe.tab.c"
    break;

  case 24: /* moreStmt: block  */
#line 187 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));}
#line 2320 "./src/sintaxe.tab.c"
    break;

  case 25: /* block: stmt  */
#line 191 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2326 "./src/sintaxe.tab.c"
    break;

  case 26: /* block: varDecl PV  */
#line 192 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2332 "./src/sintaxe.tab.c"
    break;

  case 27: /* block: ABRE_C moreStmt FECHA_C  */
#line 193 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("block", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2338 "./src/sintaxe.tab.c"
    break;

  case 28: /* stmt: conditional  */
#line 196 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2344 "./src/sintaxe.tab.c"
    break;

  case 29: /* stmt: iteration  */
#line 197 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2350 "./src/sintaxe.tab.c"
    break;

  case 30: /* stmt: attribuition PV  */
#line 198 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2356 "./src/sintaxe.tab.c"
    break;

  case 31: /* stmt: io PV  */
#line 199 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2362 "./src/sintaxe.tab.c"
    break;

  case 32: /* stmt: ret PV  */
#line 200 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2368 "./src/sintaxe.tab.c"
    break;

  case 33: /* stmt: error  */
#line 201 "./src/sintaxe.y"
                                                        {}
#line 2374 "./src/sintaxe.tab.c"
    break;

  case 34: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot  */
#line 205 "./src/sintaxe.y"
                                                                                             {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2381 "./src/sintaxe.tab.c"
    break;

  case 35: /* conditional: IF ABRE_P attribuition FECHA_P bracesOrNot ELSE bracesOrNot  */
#line 207 "./src/sintaxe.y"
                                                                                                  {(yyval.no) = montaNo((yyvsp[-6].tok).lexema, NULL, (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);
                                                                                            (yyval.no)->no1 = montaNo("condArg", (yyvsp[-4].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2388 "./src/sintaxe.tab.c"
    break;

  case 36: /* conditional: IF ABRE_P error FECHA_P bracesOrNot  */
#line 209 "./src/sintaxe.y"
                                                                                             {}
#line 2394 "./src/sintaxe.tab.c"
    break;

  case 37: /* bracesOrNot: ABRE_C moreStmt FECHA_C  */
#line 212 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), NULL);}
#line 2400 "./src/sintaxe.tab.c"
    break;

  case 38: /* bracesOrNot: stmt  */
#line 213 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("statements", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2406 "./src/sintaxe.tab.c"
    break;

  case 39: /* iteration: FOR ABRE_P iteArgs FECHA_P bracesOrNot  */
#line 216 "./src/sintaxe.y"
                                                                    {(yyval.no) = montaNo((yyvsp[-4].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);}
#line 2412 "./src/sintaxe.tab.c"
    break;

  case 40: /* $@7: %empty  */
#line 217 "./src/sintaxe.y"
                                   {yyerrok;}
#line 2418 "./src/sintaxe.tab.c"
    break;

  case 41: /* iteration: FOR ABRE_P error $@7 FECHA_P bracesOrNot  */
#line 217 "./src/sintaxe.y"
                                                                    {}
#line 2424 "./src/sintaxe.tab.c"
    break;

  case 42: /* iteArgs: expIte PV expIte PV expIte  */
#line 220 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("iteArgs", (yyvsp[-4].no), (yyvsp[-2].no), (yyvsp[0].no), NULL, retUlt(&primeiro), NULL);}
#line 2430 "./src/sintaxe.tab.c"
    break;

  case 43: /* expIte: attribuition  */
#line 223 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2436 "./src/sintaxe.tab.c"
    break;

  case 44: /* expIte: %empty  */
#line 224 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;}
#line 2442 "./src/sintaxe.tab.c"
    break;

  case 45: /* io: ENTRADA ABRE_P ID FECHA_P  */
#line 230 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if(simb != NULL)
                                                            strcpy((yyval.no)->no1->tipo, (yyval.no)->no1->simbolo->tipo);
                                                        }
#line 2453 "./src/sintaxe.tab.c"
    break;

  case 46: /* io: SAIDA ABRE_P expLogic FECHA_P  */
#line 237 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-3].tok).lexema, (yyvsp[-1].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);}
#line 2459 "./src/sintaxe.tab.c"
    break;

  case 47: /* io: SAIDA ABRE_P STRING FECHA_P  */
#line 239 "./src/sintaxe.y"
                                                        {// Inclui a string na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[-1].tok).lexema, "constante", "string", "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-1].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);}
#line 2469 "./src/sintaxe.tab.c"
    break;

  case 48: /* io: ENTRADA ABRE_P error FECHA_P  */
#line 245 "./src/sintaxe.y"
                                                        {}
#line 2475 "./src/sintaxe.tab.c"
    break;

  case 49: /* io: SAIDA ABRE_P error FECHA_P  */
#line 246 "./src/sintaxe.y"
                                                        {}
#line 2481 "./src/sintaxe.tab.c"
    break;

  case 50: /* varDecl: TIPO ID  */
#line 250 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        // Inclui o termo na tabela de simbolos
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", (yyvsp[-1].tok).lexema, "", retUlt(&primeiro), (yyvsp[-1].tok).linha, (yyvsp[-1].tok).coluna);
                                                        if(argumentos == 1)
                                                            pushArgs(&args, (yyvsp[-1].tok).lexema);
                                                        }
#line 2492 "./src/sintaxe.tab.c"
    break;

  case 51: /* varDecl: TIPO LIST ID  */
#line 257 "./src/sintaxe.y"
                                                        {(yyval.no) = NULL;
                                                        num_erros_semanticos += push(&cabeca, (yyvsp[0].tok).lexema, "variavel", strcat((yyvsp[-2].tok).lexema, " list"), "", retUlt(&primeiro), (yyvsp[-2].tok).linha, (yyvsp[-2].tok).coluna);
                                                        if(argumentos == 1) 
                                                            pushArgs(&args, (yyvsp[-2].tok).lexema);
                                                        }
#line 2502 "./src/sintaxe.tab.c"
    break;

  case 52: /* attribuition: ID ATRIB expLogic  */
#line 264 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        (yyval.no)->no1 = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        // Checagem de tipos na atribuicao
                                                        if(simb != NULL) {
                                                            strcpy((yyval.no)->no1->tipo, (yyval.no)->no1->simbolo->tipo);
                                                            strcpy((yyval.no)->tipo, (yyval.no)->no1->simbolo->tipo);
                                                            //Se for int com float
                                                            if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp((yyval.no)->no1->simbolo->tipo, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp((yyval.no)->no1->simbolo->tipo, "int"))) {
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(simb->tipo, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(simb->tipo, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no2 = no;
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "int list")){
                                                                //Se for int list e outro
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "int list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else if(!strcmp((yyvsp[0].no)->tipo, "float list")){
                                                                //Se for float list e outro
                                                                if(strcmp((yyval.no)->no1->simbolo->tipo, "float list")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else if(!strcmp((yyval.no)->no1->simbolo->tipo, "float list") || !strcmp((yyval.no)->no1->simbolo->tipo, "int list")){
                                                                //Se for int list ou float list na esquerda e outro tipo sem ser int list, float list ou NIL na direita
                                                                if(strcmp((yyvsp[0].no)->tipo, "float list") && strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                                    printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyval.no)->no1->simbolo->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            } else {
                                                                (yyval.no)->no2 = (yyvsp[0].no);
                                                            }

                                                        } else {
                                                            //Caso o operador da esquerda nao tenha sido declarado
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha: %d\nColuna: %d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            (yyval.no)->no2 = (yyvsp[0].no);
                                                            strcpy((yyval.no)->no1->tipo, "undefined");
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 2558 "./src/sintaxe.tab.c"
    break;

  case 53: /* attribuition: expLogic  */
#line 315 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2564 "./src/sintaxe.tab.c"
    break;

  case 54: /* expLogic: expLogic LOG_OP_OU andLogic  */
#line 318 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2570 "./src/sintaxe.tab.c"
    break;

  case 55: /* expLogic: andLogic  */
#line 319 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2576 "./src/sintaxe.tab.c"
    break;

  case 56: /* andLogic: andLogic LOG_OP_E expComp  */
#line 322 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2582 "./src/sintaxe.tab.c"
    break;

  case 57: /* andLogic: expComp  */
#line 323 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2588 "./src/sintaxe.tab.c"
    break;

  case 58: /* expComp: expComp REL_OP_BAIXA expRel  */
#line 326 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2594 "./src/sintaxe.tab.c"
    break;

  case 59: /* expComp: expRel  */
#line 327 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2600 "./src/sintaxe.tab.c"
    break;

  case 60: /* expRel: expRel REL_OP_ALTA expList  */
#line 330 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2606 "./src/sintaxe.tab.c"
    break;

  case 61: /* expRel: expList  */
#line 331 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2612 "./src/sintaxe.tab.c"
    break;

  case 62: /* expList: expList LIST_OP_BIN expArit  */
#line 334 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        int cont_erro = 0;
                                                        if(strcmp((yyvsp[-2].no)->simbolo->varOuFunc, "funcao")) {
                                                            //Checa se o operador da esquerda eh funcao
                                                            printf("ERRO SEMANTICO: termo a esquerda nao eh funcao\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        } else if((yyvsp[-2].no)->simbolo->numArgs != 1) {
                                                            //Checa se o numero de argumentos eh diferente de 1
                                                            printf("ERRO SEMANTICO: funcao nao eh unaria\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
                                                        //Checa se o tipo do operador da direita nao eh int list ou float list
                                                        if(strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "float list")) {
                                                            printf("ERRO SEMANTICO: termo a direita nao eh uma lista\nLinha:%d\nColuna:%d\n\n", yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            ++cont_erro;
                                                        }
                                                        //Controla o tipo do no apos a operacao de >> ou <<
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
#line 2650 "./src/sintaxe.tab.c"
    break;

  case 63: /* expList: expList LIST_OP_CONSTRUTOR expArit  */
#line 367 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, NULL, (yyvsp[0].no), NULL, NULL, retUlt(&primeiro), NULL);
                                                        // Checa se o tipo do operador da direita eh lista e se o da esquerda eh int ou float
                                                        if((strcmp((yyvsp[0].no)->tipo, "int list") && strcmp((yyvsp[0].no)->tipo, "float list")) || (strcmp((yyvsp[-2].no)->tipo, "int") && strcmp((yyvsp[-2].no)->tipo, "float"))) {
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha: %d\nColuna: %d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[-2].no)->tipo, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        } else {
                                                            char aux[15];
                                                            strcpy(aux, (yyvsp[0].no)->tipo);
                                                            char* aux1 = strtok(aux, " ");
                                                            //Adiciona o no de coercao
                                                            if(strcmp((yyvsp[-2].no)->tipo, aux1)) {
                                                                char aux2[15];
                                                                strcpy(aux2, "(");
                                                                if(!strcmp(aux1, "int"))
                                                                    strcat(aux2, "float_to_int)");
                                                                else if(!strcmp(aux1, "float"))
                                                                    strcat(aux2, "int_to_float)");
                                                                struct No* no = montaNo(aux2, (yyvsp[-2].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no1 = no;
                                                            } else {
                                                                (yyval.no)->no1 = (yyvsp[-2].no);
                                                            }
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
                                                        }
#line 2681 "./src/sintaxe.tab.c"
    break;

  case 64: /* expList: expArit  */
#line 393 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2687 "./src/sintaxe.tab.c"
    break;

  case 65: /* expArit: expArit ARIT_OP_MAIS expMul  */
#line 396 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2693 "./src/sintaxe.tab.c"
    break;

  case 66: /* expArit: expArit ARIT_OP_MENOS expMul  */
#line 397 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2699 "./src/sintaxe.tab.c"
    break;

  case 67: /* expArit: expMul  */
#line 398 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2705 "./src/sintaxe.tab.c"
    break;

  case 68: /* expMul: expMul ARIT_OP_ALTA expUn  */
#line 401 "./src/sintaxe.y"
                                                        {(yyval.no) = castNo((yyvsp[-1].tok).lexema, (yyvsp[-2].no), (yyvsp[0].no), retUlt(&primeiro), yylval.tok.linha, yylval.tok.coluna, &num_erros_semanticos);}
#line 2711 "./src/sintaxe.tab.c"
    break;

  case 69: /* expMul: expUn  */
#line 402 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2717 "./src/sintaxe.tab.c"
    break;

  case 70: /* expUn: LOG_OP_NEG element  */
#line 405 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else {
                                                            // Se nao eh lista
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2731 "./src/sintaxe.tab.c"
    break;

  case 71: /* expUn: ARIT_OP_MENOS element  */
#line 414 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list") || !strcmp((yyvsp[0].no)->tipo, "NIL")){
                                                            // Se eh lista ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }}
#line 2745 "./src/sintaxe.tab.c"
    break;

  case 72: /* expUn: LIST_OP_UN element  */
#line 423 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list"))
                                                            strcpy((yyval.no)->tipo, (yyvsp[0].no)->tipo);
                                                        }
#line 2759 "./src/sintaxe.tab.c"
    break;

  case 73: /* expUn: LIST_OP_HEADER element  */
#line 432 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[-1].tok).lexema, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        if(!strcmp((yyvsp[0].no)->tipo, "int") || !strcmp((yyvsp[0].no)->tipo, "float")  || !strcmp((yyvsp[0].no)->tipo, "NIL")) {
                                                            // Se eh int, float ou NIL
                                                            printf("ERRO SEMANTICO: tipo errado na operacao %s (%s)\nLinha:%d\nColuna:%d\n\n", (yyvsp[-1].tok).lexema, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                            ++num_erros_semanticos;
                                                        }else if(!strcmp((yyvsp[0].no)->tipo, "int list") || !strcmp((yyvsp[0].no)->tipo, "float list")){
                                                            char copia[15];
                                                            strcpy(copia, (yyvsp[0].no)->tipo);
                                                            char* aux = strtok(copia, " ");
                                                            strcpy((yyval.no)->tipo, aux);
                                                        }}
#line 2776 "./src/sintaxe.tab.c"
    break;

  case 74: /* expUn: element  */
#line 444 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[0].no);}
#line 2782 "./src/sintaxe.tab.c"
    break;

  case 75: /* element: ID  */
#line 449 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[0].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        else {
                                                            // Caso a variavel nao tenha sido declarada
                                                            printf("ERRO SEMANTICO: variavel %s nao declarada\nLinha:%d\nColuna:%d\n\n", (yyvsp[0].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }}
#line 2797 "./src/sintaxe.tab.c"
    break;

  case 76: /* element: ABRE_P expLogic FECHA_P  */
#line 460 "./src/sintaxe.y"
                                                        {(yyval.no) = (yyvsp[-1].no);}
#line 2803 "./src/sintaxe.tab.c"
    break;

  case 77: /* element: ID ABRE_P arguments FECHA_P  */
#line 462 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-3].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-3].tok).lexema, NULL, NULL, NULL, (yyvsp[-1].lista), retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL) {
                                                            if(!strcmp((yyval.no)->simbolo->varOuFunc, "funcao")) {
                                                                strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                                // Checa se o numero de argumentos esta correto
                                                                if((yyval.no)->simbolo->numArgs > num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: poucos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                } else if((yyval.no)->simbolo->numArgs < num_args_chamada) {
                                                                    printf("ERRO SEMANTICO: muitos argumentos para a funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                    ++num_erros_semanticos;
                                                                }
                                                                if(args != NULL) {
                                                                    struct listaArgs * aux1 = (yyval.no)->simbolo->tipoArgs;
                                                                    struct listaArgs * aux2 = args;
                                                                    int cont = 0;
                                                                    struct listaNo * auxNo = (yyval.no)->lista;
                                                                    // Itera sobre os tipos dos argumentos
                                                                    while(aux1 != NULL && aux2 != NULL) {
                                                                        // Se forem diferentes
                                                                        if(strcmp(aux1->tipo, aux2->tipo)) {
                                                                            // Se for int list
                                                                            if(!strcmp(aux1->tipo, "int list") || !strcmp(aux2->tipo, "int list")) {
                                                                                printf("ERRO SEMANTICO: argumento de tipo errado (%s)\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                                ++num_erros_semanticos;
                                                                            // Se for float list
                                                                            } else if(!strcmp(aux1->tipo, "float list") || !strcmp(aux2->tipo, "float list")) {
                                                                                printf("ERRO SEMANTICO: argumento de tipo errado (%s)\nLinha:%d\nColuna:%d\n\n", aux2->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                                ++num_erros_semanticos;
                                                                            } else {
                                                                                // Se nao, pode fazer o no de coercao
                                                                                char aux[15];
                                                                                strcpy(aux, "(");
                                                                                if(!strcmp(aux1->tipo, "int"))
                                                                                    strcat(aux, "float_to_int)");
                                                                                else if(!strcmp(aux1->tipo, "float"))
                                                                                    strcat(aux, "int_to_float)");
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
                                                                printf("ERRO SEMANTICO: %s nao eh uma funcao\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                                strcpy((yyval.no)->tipo, "undefined");
                                                            }
                                                        } else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-3].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        liberaArgs(args);
                                                        args = NULL;
                                                        num_args_chamada = 0;
                                                        }
#line 2872 "./src/sintaxe.tab.c"
    break;

  case 78: /* element: ID ABRE_P FECHA_P  */
#line 527 "./src/sintaxe.y"
                                                        {struct tabelaSimb *simb = retSimb(&cabeca, (yyvsp[-2].tok).lexema, &primeiro);
                                                        (yyval.no) = montaNo((yyvsp[-2].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), simb);
                                                        if((yyval.no)->simbolo != NULL)
                                                            strcpy((yyval.no)->tipo, (yyval.no)->simbolo->tipo);
                                                        // Caso a funcao ainda nao tenha sido declarada
                                                        else {
                                                            printf("ERRO SEMANTICO: declaracao implicita da funcao %s\nLinha:%d\nColuna:%d\n\n", (yyvsp[-2].tok).lexema, yylval.tok.linha, yylval.tok.coluna);
                                                            ++num_erros_semanticos;
                                                            strcpy((yyval.no)->tipo, "undefined");
                                                        }
                                                        }
#line 2888 "./src/sintaxe.tab.c"
    break;

  case 79: /* element: CONST_INT  */
#line 539 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "int");}
#line 2895 "./src/sintaxe.tab.c"
    break;

  case 80: /* element: CONST_FLOAT  */
#line 542 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo((yyvsp[0].tok).lexema, NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "float");}
#line 2902 "./src/sintaxe.tab.c"
    break;

  case 81: /* element: NIL  */
#line 545 "./src/sintaxe.y"
                                                        {(yyval.no) = montaNo("NIL", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        strcpy((yyval.no)->tipo, "NIL");}
#line 2909 "./src/sintaxe.tab.c"
    break;

  case 82: /* arguments: arguments VIRG expLogic  */
#line 549 "./src/sintaxe.y"
                                                        {(yyval.lista) = novaListaNo(&(yyvsp[-2].lista), (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2917 "./src/sintaxe.tab.c"
    break;

  case 83: /* arguments: expLogic  */
#line 553 "./src/sintaxe.y"
                                                        {struct listaNo* lista = NULL;
                                                        (yyval.lista) = novaListaNo(&lista, (yyvsp[0].no));
                                                        ++num_args_chamada;
                                                        pushArgs(&args, (yyvsp[0].no)->tipo);}
#line 2926 "./src/sintaxe.tab.c"
    break;

  case 84: /* ret: RETURN expLogic  */
#line 559 "./src/sintaxe.y"
                                                        {if(!strcmp((yyvsp[0].no)->tipo, tipo_func_return))
                                                            (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                        // Se o tipo do retorno nao for o mesmo da funcao
                                                        else {
                                                            // Se for int ou float, eh possivel fazer coercao
                                                            if((!strcmp((yyvsp[0].no)->tipo, "int") && !strcmp(tipo_func_return, "float")) || (!strcmp((yyvsp[0].no)->tipo, "float") && !strcmp(tipo_func_return, "int"))) {
                                                                (yyval.no) = montaNo("return", NULL, NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                char aux[15];
                                                                strcpy(aux, "(");
                                                                if(!strcmp(tipo_func_return, "int"))
                                                                    strcat(aux, "float_to_int)");
                                                                else if(!strcmp(tipo_func_return, "float"))
                                                                    strcat(aux, "int_to_float)");
                                                                struct No* no = montaNo(aux, (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                (yyval.no)->no1 = no;
                                                            } else {
                                                                (yyval.no) = montaNo("return", (yyvsp[0].no), NULL, NULL, NULL, retUlt(&primeiro), NULL);
                                                                printf("ERRO SEMANTICO: retorno de tipo errado (%s, %s)\nLinha:%d\nColuna:%d\n\n", tipo_func_return, (yyvsp[0].no)->tipo, yylval.tok.linha, yylval.tok.coluna);
                                                                ++num_erros_semanticos;
                                                            }
                                                        }
                                                        }
#line 2953 "./src/sintaxe.tab.c"
    break;


#line 2957 "./src/sintaxe.tab.c"

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

#line 583 "./src/sintaxe.y"



/*
    Funcao que imprime onde ocorreu o erro sintatico
*/
void yyerror(const char *s) {
    printf("ERRO: %s\nLinha: %d\nColuna: %d\n\n", s, yylval.tok.linha, yylval.tok.coluna);
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
