/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/asin.y"

	#include "header.h"
    #include <string.h>
	#include "libtds.h"
    int main_definida = 0;  // Variable para controlar la definición de main
	

#line 79 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CTE_ = 3,                       /* CTE_  */
  YYSYMBOL_id_ = 4,                        /* id_  */
  YYSYMBOL_OPSUMA_ = 5,                    /* OPSUMA_  */
  YYSYMBOL_OPRESTA_ = 6,                   /* OPRESTA_  */
  YYSYMBOL_OPMULT_ = 7,                    /* OPMULT_  */
  YYSYMBOL_OPDIV_ = 8,                     /* OPDIV_  */
  YYSYMBOL_OPAND_ = 9,                     /* OPAND_  */
  YYSYMBOL_OPOR_ = 10,                     /* OPOR_  */
  YYSYMBOL_OPNOT_ = 11,                    /* OPNOT_  */
  YYSYMBOL_COMPMAYOR_ = 12,                /* COMPMAYOR_  */
  YYSYMBOL_COMPMENOR_ = 13,                /* COMPMENOR_  */
  YYSYMBOL_COMPMAYORIG_ = 14,              /* COMPMAYORIG_  */
  YYSYMBOL_COMPMENORIG_ = 15,              /* COMPMENORIG_  */
  YYSYMBOL_OPASIG_ = 16,                   /* OPASIG_  */
  YYSYMBOL_OPNOTASIG_ = 17,                /* OPNOTASIG_  */
  YYSYMBOL_ASIG_ = 18,                     /* ASIG_  */
  YYSYMBOL_FOR_ = 19,                      /* FOR_  */
  YYSYMBOL_IF_ = 20,                       /* IF_  */
  YYSYMBOL_ELSE_ = 21,                     /* ELSE_  */
  YYSYMBOL_INT_ = 22,                      /* INT_  */
  YYSYMBOL_BOOL_ = 23,                     /* BOOL_  */
  YYSYMBOL_READ_ = 24,                     /* READ_  */
  YYSYMBOL_PRINT_ = 25,                    /* PRINT_  */
  YYSYMBOL_RETURN_ = 26,                   /* RETURN_  */
  YYSYMBOL_TRUE_ = 27,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 28,                    /* FALSE_  */
  YYSYMBOL_LLAVE1_ = 29,                   /* LLAVE1_  */
  YYSYMBOL_LLAVE2_ = 30,                   /* LLAVE2_  */
  YYSYMBOL_PARENTESIS1_ = 31,              /* PARENTESIS1_  */
  YYSYMBOL_PARENTESIS2_ = 32,              /* PARENTESIS2_  */
  YYSYMBOL_CHT1_ = 33,                     /* CHT1_  */
  YYSYMBOL_CHT2_ = 34,                     /* CHT2_  */
  YYSYMBOL_SEMICOLON_ = 35,                /* SEMICOLON_  */
  YYSYMBOL_COMA_ = 36,                     /* COMA_  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_listaDecla = 40,                /* listaDecla  */
  YYSYMBOL_decla = 41,                     /* decla  */
  YYSYMBOL_declaVar = 42,                  /* declaVar  */
  YYSYMBOL_const = 43,                     /* const  */
  YYSYMBOL_tipoSimp = 44,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 45,                 /* declaFunc  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_48_4 = 48,                      /* @4  */
  YYSYMBOL_paramForm = 49,                 /* paramForm  */
  YYSYMBOL_listaParamForm = 50,            /* listaParamForm  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_declaVarLocal = 52,             /* declaVarLocal  */
  YYSYMBOL_listInst = 53,                  /* listInst  */
  YYSYMBOL_inst = 54,                      /* inst  */
  YYSYMBOL_instExpre = 55,                 /* instExpre  */
  YYSYMBOL_instEntSal = 56,                /* instEntSal  */
  YYSYMBOL_instSelec = 57,                 /* instSelec  */
  YYSYMBOL_instIter = 58,                  /* instIter  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_expreOp = 60,                   /* expreOp  */
  YYSYMBOL_expre = 61,                     /* expre  */
  YYSYMBOL_expreLogic = 62,                /* expreLogic  */
  YYSYMBOL_expreIgual = 63,                /* expreIgual  */
  YYSYMBOL_expreRel = 64,                  /* expreRel  */
  YYSYMBOL_expreAd = 65,                   /* expreAd  */
  YYSYMBOL_expreMul = 66,                  /* expreMul  */
  YYSYMBOL_expreUna = 67,                  /* expreUna  */
  YYSYMBOL_expreSufi = 68,                 /* expreSufi  */
  YYSYMBOL_paramAct = 69,                  /* paramAct  */
  YYSYMBOL_listaParamAct = 70,             /* listaParamAct  */
  YYSYMBOL_opLogic = 71,                   /* opLogic  */
  YYSYMBOL_opIgual = 72,                   /* opIgual  */
  YYSYMBOL_opRel = 73,                     /* opRel  */
  YYSYMBOL_opAd = 74,                      /* opAd  */
  YYSYMBOL_opMul = 75,                     /* opMul  */
  YYSYMBOL_opUna = 76                      /* opUna  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    35,    45,    46,    50,    51,    55,    62,
      71,    89,    90,    91,    95,    96,   100,   100,   112,   100,
     121,   125,   132,   137,   146,   160,   161,   165,   166,   170,
     171,   172,   173,   174,   178,   179,   183,   189,   197,   207,
     207,   220,   221,   225,   226,   235,   251,   252,   262,   263,
     280,   281,   292,   293,   304,   305,   316,   317,   335,   336,
     337,   347,   359,   379,   380,   384,   385,   390,   391,   395,
     396,   400,   401,   402,   403,   407,   408,   412,   413,   417,
     418,   419
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
  "\"end of file\"", "error", "\"invalid token\"", "CTE_", "id_",
  "OPSUMA_", "OPRESTA_", "OPMULT_", "OPDIV_", "OPAND_", "OPOR_", "OPNOT_",
  "COMPMAYOR_", "COMPMENOR_", "COMPMAYORIG_", "COMPMENORIG_", "OPASIG_",
  "OPNOTASIG_", "ASIG_", "FOR_", "IF_", "ELSE_", "INT_", "BOOL_", "READ_",
  "PRINT_", "RETURN_", "TRUE_", "FALSE_", "LLAVE1_", "LLAVE2_",
  "PARENTESIS1_", "PARENTESIS2_", "CHT1_", "CHT2_", "SEMICOLON_", "COMA_",
  "$accept", "programa", "$@1", "listaDecla", "decla", "declaVar", "const",
  "tipoSimp", "declaFunc", "$@2", "$@3", "@4", "paramForm",
  "listaParamForm", "bloque", "declaVarLocal", "listInst", "inst",
  "instExpre", "instEntSal", "instSelec", "instIter", "$@5", "expreOp",
  "expre", "expreLogic", "expreIgual", "expreRel", "expreAd", "expreMul",
  "expreUna", "expreSufi", "paramAct", "listaParamAct", "opLogic",
  "opIgual", "opRel", "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -82,     8,    -6,   -82,   -82,   -82,    -6,   -82,   -82,    20,
     -82,   -82,    10,    12,    11,   -82,    -1,   -82,   -82,   -82,
       9,    27,    -6,   -82,    28,    62,    47,   -82,   -82,    52,
     -82,    -6,   -82,   -82,    48,   -82,   -82,    -6,   -82,    86,
       7,    10,    29,   -82,   -82,   -82,    64,    65,    73,    77,
      88,   -82,    88,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
      75,    44,    41,    -9,    81,    93,   -82,   -82,   117,    88,
      88,    88,    88,    88,   107,    88,    79,    45,    80,   -82,
     -82,   -82,   117,   -82,   -82,   117,   -82,   -82,   -82,   -82,
     117,   -82,   -82,   117,   -82,   -82,   117,   -24,   -82,   -82,
      82,    85,   -82,    90,    91,   -82,    95,    97,    98,   101,
     -82,   -82,    41,    -9,    81,    93,   -82,    88,    88,   -82,
     114,    88,    78,    99,   100,   -82,   102,   -82,    88,   103,
     104,   -82,   -82,   -82,   -82,    88,    78,   -82,   -82,   105,
      78,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     0,     0,     8,     0,    11,    12,    13,
       0,     0,    21,     9,     0,     0,     0,    20,    10,    22,
      17,     0,    18,    23,     0,    25,    19,    27,    26,     0,
       0,     0,    60,    79,    80,    81,     0,     0,     0,     0,
       0,    27,     0,    35,    58,    28,    30,    31,    32,    33,
       0,    43,    46,    48,    50,    52,    54,    56,     0,     0,
      63,     0,    41,     0,     0,     0,     0,     0,     0,    34,
      67,    68,     0,    69,    70,     0,    71,    72,    73,    74,
       0,    75,    76,     0,    77,    78,     0,    60,    57,    44,
      65,     0,    64,     0,     0,    42,     0,     0,     0,     0,
      29,    59,    47,    49,    51,    53,    55,     0,     0,    62,
      61,     0,     0,     0,     0,    24,     0,    66,     0,     0,
       0,    36,    37,    61,    45,    41,     0,    39,    38,     0,
       0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,   -82,   127,   106,   126,    15,   -82,   -82,
     -82,   -82,   -82,   109,   -82,   -82,    96,   -81,   -82,   -82,
     -82,   -82,   -82,     6,   -50,   -82,    60,    61,    59,    57,
     -67,   -82,   -82,    33,   -82,   -82,   -82,   -82,   -82,   -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    54,     9,    10,    16,
      32,    34,    26,    27,    36,    37,    40,    55,    56,    57,
      58,    59,   139,   104,    60,    61,    62,    63,    64,    65,
      66,    67,   101,   102,    82,    85,    90,    93,    96,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      76,    98,    78,    86,    87,    88,    89,    70,     3,   117,
      17,    42,    43,    44,    21,    17,     4,     5,    45,    99,
     100,   103,   105,   106,    12,   108,    46,    47,    13,   116,
      22,    48,    49,    50,    18,    19,    51,    25,    52,    18,
      19,   130,    53,    14,    23,    15,    25,    69,    17,    42,
      43,    44,    39,    80,    81,   138,    45,    83,    84,   141,
      70,    24,    71,    28,    46,    47,    29,   126,   100,    48,
      49,   129,    18,    19,    51,   110,    52,    35,   134,    30,
      53,    17,    42,    43,    44,   105,    91,    92,    31,    45,
      41,    17,    42,    43,    44,    72,    73,    46,    47,    45,
      94,    95,    48,    49,    74,    18,    19,    51,    75,    52,
      79,   107,   111,    53,   109,    18,    19,   119,   118,    52,
      17,    97,    43,    44,   120,   136,   121,   122,    45,   123,
     124,   125,   128,    11,   131,   132,   133,   140,   135,    20,
      33,   137,   112,    38,    18,    19,   113,    77,    52,   114,
     115,   127
};

static const yytype_uint8 yycheck[] =
{
      50,    68,    52,    12,    13,    14,    15,    31,     0,    33,
       3,     4,     5,     6,     3,     3,    22,    23,    11,    69,
      70,    71,    72,    73,     4,    75,    19,    20,    18,    96,
      31,    24,    25,    26,    27,    28,    29,    22,    31,    27,
      28,   122,    35,    33,    35,    35,    31,    18,     3,     4,
       5,     6,    37,     9,    10,   136,    11,    16,    17,   140,
      31,    34,    33,    35,    19,    20,     4,   117,   118,    24,
      25,   121,    27,    28,    29,    30,    31,    29,   128,    32,
      35,     3,     4,     5,     6,   135,     5,     6,    36,    11,
       4,     3,     4,     5,     6,    31,    31,    19,    20,    11,
       7,     8,    24,    25,    31,    27,    28,    29,    31,    31,
      35,     4,    32,    35,    35,    27,    28,    32,    36,    31,
       3,     4,     5,     6,    34,    21,    35,    32,    11,    32,
      32,    30,    18,     6,    35,    35,    34,    32,    35,    13,
      31,   135,    82,    37,    27,    28,    85,    51,    31,    90,
      93,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,    22,    23,    40,    41,    42,    44,
      45,    41,     4,    18,    33,    35,    46,     3,    27,    28,
      43,     3,    31,    35,    34,    44,    49,    50,    35,     4,
      32,    36,    47,    50,    48,    29,    51,    52,    42,    44,
      53,     4,     4,     5,     6,    11,    19,    20,    24,    25,
      26,    29,    31,    35,    43,    54,    55,    56,    57,    58,
      61,    62,    63,    64,    65,    66,    67,    68,    76,    18,
      31,    33,    31,    31,    31,    31,    61,    53,    61,    35,
       9,    10,    71,    16,    17,    72,    12,    13,    14,    15,
      73,     5,     6,    74,     7,     8,    75,     4,    67,    61,
      61,    69,    70,    61,    60,    61,    61,     4,    61,    35,
      30,    32,    63,    64,    65,    66,    67,    33,    36,    32,
      34,    35,    32,    32,    32,    30,    61,    70,    18,    61,
      54,    35,    35,    34,    61,    35,    21,    60,    54,    59,
      32,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    42,
      42,    43,    43,    43,    44,    44,    46,    47,    48,    45,
      49,    49,    50,    50,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    59,
      58,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     0,     9,
       1,     0,     2,     4,     7,     0,     2,     0,     2,     3,
       1,     1,     1,     1,     2,     1,     5,     5,     7,     0,
      10,     0,     1,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     4,     4,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* $@1: %empty  */
#line 35 "src/asin.y"
          {niv = 0; dvar = 0; cargaContexto(niv); }
#line 1245 "asin.c"
    break;

  case 3: /* programa: $@1 listaDecla  */
#line 37 "src/asin.y"
        {
    if(!main_definida){
        yyerror("El programa no tiene una función main ");
        }
    }
#line 1255 "asin.c"
    break;

  case 4: /* listaDecla: decla  */
#line 45 "src/asin.y"
            { (yyval.cent) = (yyvsp[0].cent); }
#line 1261 "asin.c"
    break;

  case 5: /* listaDecla: listaDecla decla  */
#line 46 "src/asin.y"
                       { (yyval.cent) = (yyvsp[-1].cent) + (yyvsp[0].cent);}
#line 1267 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp id_ SEMICOLON_  */
#line 55 "src/asin.y"
                              {
        if (!insTdS( (yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) { 
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
#line 1279 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp id_ ASIG_ const SEMICOLON_  */
#line 62 "src/asin.y"
                                          {
        if (!insTdS( (yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)){
            yyerror("El id de la variable ya ha sido utilizado"); 
        } else if (! (((yyvsp[-4].cent) == T_ENTERO && (yyvsp[-1].cent) == T_ENTERO) || ((yyvsp[-4].cent) == T_LOGICO && (yyvsp[-1].cent) == T_LOGICO)) ) {
            yyerror("Error de tipos en la instrucción de asignación");
        }else {
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
#line 1293 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp id_ CHT1_ CTE_ CHT2_ SEMICOLON_  */
#line 71 "src/asin.y"
                                               {        
		int numelem = (yyvsp[-2].cent);
        if ((yyvsp[-2].cent) <= 0) {
            yyerror("Talla inapropiada del array");
            numelem = 0;
        } else if (((yyvsp[-2].cent) == T_ENTERO)) {
            yyerror("El indice del array debe ser un entero");
        }
        int refe = insTdA((yyvsp[-5].cent), numelem);
        if (!insTdS( (yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe)) {
            yyerror("El id del array ya ha sido utilizado");
        } else {
            dvar += numelem * TALLA_TIPO_SIMPLE;
        }
    }
#line 1313 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 89 "src/asin.y"
              { (yyval.cent) = T_ENTERO; }
#line 1319 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 90 "src/asin.y"
              { (yyval.cent) = T_LOGICO; }
#line 1325 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 91 "src/asin.y"
              { (yyval.cent) = T_LOGICO; }
#line 1331 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 95 "src/asin.y"
           { (yyval.cent) = T_ENTERO; }
#line 1337 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 96 "src/asin.y"
            { (yyval.cent) = T_LOGICO; }
#line 1343 "asin.c"
    break;

  case 16: /* $@2: %empty  */
#line 100 "src/asin.y"
                   { niv = 1; cargaContexto(niv); }
#line 1349 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 100 "src/asin.y"
                                                                                       {
        if (strcmp((yyvsp[-4].ident), "main") == 0) {
            if (main_definida == 1) {
                yyerror("La función 'main' ya ha sido definida");
            } else {
                main_definida = 1;
            }
        }
        if (!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv-1, dvar, (yyvsp[-1].lista).ref)) {
            yyerror("Función ya declarada");
        }
    }
#line 1366 "asin.c"
    break;

  case 18: /* @4: %empty  */
#line 112 "src/asin.y"
    { (yyval.cent) = dvar; dvar = 0; }
#line 1372 "asin.c"
    break;

  case 19: /* declaFunc: tipoSimp id_ $@2 PARENTESIS1_ paramForm PARENTESIS2_ $@3 @4 bloque  */
#line 112 "src/asin.y"
                                          { 
        descargaContexto(niv); // Liberar contexto después de la declaración
        niv = 0;
        dvar = (yyvsp[-1].cent);
		(yyval.cent) = (yyvsp[-8].cent);
    }
#line 1383 "asin.c"
    break;

  case 20: /* paramForm: listaParamForm  */
#line 121 "src/asin.y"
                    {
        (yyval.lista).ref = (yyvsp[0].lista).ref;
        (yyval.lista).talla = (yyvsp[0].lista).talla;
    }
#line 1392 "asin.c"
    break;

  case 21: /* paramForm: %empty  */
#line 125 "src/asin.y"
       {
        (yyval.lista).ref = insTdD(-1, T_VACIO);
        (yyval.lista).talla = 0;
    }
#line 1401 "asin.c"
    break;

  case 22: /* listaParamForm: tipoSimp id_  */
#line 132 "src/asin.y"
                       {
		(yyval.lista).ref = insTdD(-1, (yyvsp[-1].cent));
		(yyval.lista).talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, -(yyval.lista).talla, -1)) yyerror("Error de tipos en la instruccion de lista de parametros de una funcion"); 
    }
#line 1411 "asin.c"
    break;

  case 23: /* listaParamForm: tipoSimp id_ COMA_ listaParamForm  */
#line 137 "src/asin.y"
                                           {
		(yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].cent));
		(yyval.lista).talla = (yyvsp[0].lista).talla + TALLA_TIPO_SIMPLE;
		if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, -(yyval.lista).talla, -1))  yyerror("Ya existe un parametro con el mismo identificador.");
	}
#line 1421 "asin.c"
    break;

  case 24: /* bloque: LLAVE1_ declaVarLocal listInst RETURN_ expre SEMICOLON_ LLAVE2_  */
#line 146 "src/asin.y"
                                                                      {
        // Obtener información de la función actual
        INF inf = obtTdD(-1);  // Obtiene la información del descriptor actual
        if (inf.tipo == T_ERROR) {
            yyerror("Error en la declaración de la función, no se puede verificar el return.");
        } else {
            if (inf.tipo != (yyvsp[-2].cent)) {
                yyerror("Incompatibilidad de tipos en el return.");
            }
        }
    }
#line 1437 "asin.c"
    break;

  case 36: /* instEntSal: READ_ PARENTESIS1_ id_ PARENTESIS2_ SEMICOLON_  */
#line 183 "src/asin.y"
                                                         {
        SIMB simbolo = obtTdS((yyvsp[-2].ident));
        if (simbolo.t != T_ENTERO && simbolo.t != T_ERROR) {
            yyerror("READ solo acepta variables de tipo entero");
        }
    }
#line 1448 "asin.c"
    break;

  case 37: /* instEntSal: PRINT_ PARENTESIS1_ expre PARENTESIS2_ SEMICOLON_  */
#line 189 "src/asin.y"
                                                            {
        if ((yyvsp[-2].cent) != T_ENTERO) {
            yyerror("PRINT solo acepta expresiones de tipo entero");
        }
    }
#line 1458 "asin.c"
    break;

  case 38: /* instSelec: IF_ PARENTESIS1_ expre PARENTESIS2_ inst ELSE_ inst  */
#line 197 "src/asin.y"
                                                              {
        if ((yyvsp[-4].cent) != T_ERROR) {
            if ((yyvsp[-4].cent) != T_LOGICO) {
                yyerror("La condición del IF debe ser de tipo lógico");
            }  
        }
    }
#line 1470 "asin.c"
    break;

  case 39: /* $@5: %empty  */
#line 207 "src/asin.y"
                                                                        { 
		if ((yyvsp[-2].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != T_LOGICO) {
                yyerror("La condición del FOR debe ser de tipo lógico");
            }
        } 
        if ((yyvsp[-4].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-4].cent) == T_ARRAY || (yyvsp[0].cent) == T_ARRAY) { yyerror("La expresion del 'for' ha de ser de tipo simple"); }
        }
    }
#line 1485 "asin.c"
    break;

  case 41: /* expreOp: %empty  */
#line 220 "src/asin.y"
          { (yyval.cent) = T_VACIO; }
#line 1491 "asin.c"
    break;

  case 42: /* expreOp: expre  */
#line 221 "src/asin.y"
            { (yyval.cent) = (yyvsp[0].cent); }
#line 1497 "asin.c"
    break;

  case 43: /* expre: expreLogic  */
#line 225 "src/asin.y"
                 { (yyval.cent) = (yyvsp[0].cent); }
#line 1503 "asin.c"
    break;

  case 44: /* expre: id_ ASIG_ expre  */
#line 226 "src/asin.y"
                      {
        (yyval.cent) = T_ERROR;
        SIMB simbolo = obtTdS((yyvsp[-2].ident));
        if ((yyvsp[0].cent) != T_ERROR){
            if (simbolo.t == T_ERROR) { yyerror("Variable no declarada"); } 
            else if (simbolo.t != (yyvsp[0].cent)) { yyerror("Error de tipo en la asignación"); }
            else if (simbolo.t != T_ERROR && (yyvsp[0].cent) != T_ERROR) { (yyval.cent) = simbolo.t; }
        }
    }
#line 1517 "asin.c"
    break;

  case 45: /* expre: id_ CHT1_ expre CHT2_ ASIG_ expre  */
#line 235 "src/asin.y"
                                       {
        (yyval.cent) = T_ERROR;
        SIMB simbolo = obtTdS((yyvsp[-5].ident));
        if (simbolo.t != T_ARRAY) { yyerror("El identificador no es un array"); }
        else {
            DIM array = obtTdA(simbolo.ref);
            if ((yyvsp[0].cent) != T_ERROR) {
                if (array.telem != (yyvsp[0].cent)) { yyerror("Error de tipos en la asignación del array"); }
                else if ((yyvsp[-3].cent) != T_ENTERO){ yyerror("Error el indice del array tiene que ser un entero"); }
                else { (yyval.cent) = simbolo.t; }
            }
        }
    }
#line 1535 "asin.c"
    break;

  case 46: /* expreLogic: expreIgual  */
#line 251 "src/asin.y"
                     { (yyval.cent) = (yyvsp[0].cent); }
#line 1541 "asin.c"
    break;

  case 47: /* expreLogic: expreLogic opLogic expreIgual  */
#line 252 "src/asin.y"
                                       {
		(yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión lógica, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_LOGICO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_LOGICO; }
        }
    }
#line 1554 "asin.c"
    break;

  case 48: /* expreIgual: expreRel  */
#line 262 "src/asin.y"
                   { (yyval.cent) = (yyvsp[0].cent); }
#line 1560 "asin.c"
    break;

  case 49: /* expreIgual: expreIgual opIgual expreRel  */
#line 263 "src/asin.y"
                                      {
		(yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión de comparación, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { 
                yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); 
                (yyval.cent) = T_LOGICO; 
            }
            else { 
                yyerror("Error tipos en la comparacion, deben ser expresiones logicas");
                (yyval.cent) = T_ENTERO; 
            }
        }
    }
#line 1579 "asin.c"
    break;

  case 50: /* expreRel: expreAd  */
#line 280 "src/asin.y"
                  { (yyval.cent) = (yyvsp[0].cent); }
#line 1585 "asin.c"
    break;

  case 51: /* expreRel: expreRel opRel expreAd  */
#line 281 "src/asin.y"
                                 {     
		(yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión de adición, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_LOGICO; }
        }
    }
#line 1598 "asin.c"
    break;

  case 52: /* expreAd: expreMul  */
#line 292 "src/asin.y"
                   { (yyval.cent) = (yyvsp[0].cent); }
#line 1604 "asin.c"
    break;

  case 53: /* expreAd: expreAd opAd expreMul  */
#line 293 "src/asin.y"
                                {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión de multiplicación, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_ENTERO; }
        }
    }
#line 1617 "asin.c"
    break;

  case 54: /* expreMul: expreUna  */
#line 304 "src/asin.y"
                   { (yyval.cent) = (yyvsp[0].cent); }
#line 1623 "asin.c"
    break;

  case 55: /* expreMul: expreMul opMul expreUna  */
#line 305 "src/asin.y"
                                 {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[-2].cent) != T_ERROR && (yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[-2].cent) != (yyvsp[0].cent)) { yyerror("Error de tipos en la expresión unaria, no son del mismo tipo"); }
            else if ((yyvsp[-2].cent) != T_ENTERO) { yyerror("Error tipos en la comparacion, deben ser expresiones de enteros"); }
            else { (yyval.cent) = T_ENTERO; }
        }
    }
#line 1636 "asin.c"
    break;

  case 56: /* expreUna: expreSufi  */
#line 316 "src/asin.y"
                    { (yyval.cent) = (yyvsp[0].cent); }
#line 1642 "asin.c"
    break;

  case 57: /* expreUna: opUna expreUna  */
#line 317 "src/asin.y"
                         {
        (yyval.cent) = T_ERROR;
        if ((yyvsp[0].cent) != T_ERROR){
            if ((yyvsp[0].cent) != T_ENTERO) {
                if ((yyvsp[-1].cent) == OP_NOT) { yyerror("Incompatibilidad de tipos, no se puede negar un entero"); }
            }
            else if ((yyvsp[0].cent) == T_LOGICO) { 
                if ((yyvsp[-1].cent) == OP_SUMA || (yyvsp[-1].cent) == OP_RESTA) { yyerror("Incompatibilidad de tipos, no se puede sumar o restar un booleano"); }
            } 
            else if ((yyvsp[0].cent) == T_VACIO || (yyvsp[0].cent) == T_ARRAY){
                yyerror("Error de tipo en la expresion unaria");
            }
            else (yyval.cent)=(yyvsp[0].cent);
        }
    }
#line 1662 "asin.c"
    break;

  case 58: /* expreSufi: const  */
#line 335 "src/asin.y"
                { (yyval.cent) = (yyvsp[0].cent); }
#line 1668 "asin.c"
    break;

  case 59: /* expreSufi: PARENTESIS1_ expre PARENTESIS2_  */
#line 336 "src/asin.y"
                                          { (yyval.cent) = (yyvsp[-1].cent); }
#line 1674 "asin.c"
    break;

  case 60: /* expreSufi: id_  */
#line 337 "src/asin.y"
              {
		(yyval.cent) = T_ERROR;
        SIMB sim = obtTdS((yyvsp[0].ident));
		if (sim.t == T_ERROR){
			yyerror("No existe ninguna variable con ese identificador.");
		} else {
			(yyval.cent) = sim.t;
		}

	}
#line 1689 "asin.c"
    break;

  case 61: /* expreSufi: id_ CHT1_ expre CHT2_  */
#line 347 "src/asin.y"
                                {
        SIMB sim = obtTdS((yyvsp[-3].ident));
        (yyval.cent) = T_ERROR;
        if (sim.t == T_ERROR) {
                yyerror("No existe ninguna variable con ese identificador.");
        } else if ((yyvsp[-1].cent) != T_ENTERO) {
				yyerror("El indice para acceder a un vector debe ser un entero 0 o positivo.");
        } else { 
            DIM dim = obtTdA(sim.ref);
            (yyval.cent) = dim.telem;
        }
	}
#line 1706 "asin.c"
    break;

  case 62: /* expreSufi: id_ PARENTESIS1_ paramAct PARENTESIS2_  */
#line 359 "src/asin.y"
                                                {
		SIMB sim = obtTdS((yyvsp[-3].ident));
        (yyval.cent) = T_ERROR;
		if (sim.t == T_ERROR) {
            yyerror("No existe ninguna variable con ese identificador.");
        } else {
            INF inf = obtTdD(sim.ref);
            if (inf.tipo == T_ERROR) { yyerror("No existe ninguna funcion con ese identificador.");} 
            else {
                if (!cmpDom(sim.ref, (yyvsp[-1].lista).ref)) {
                	yyerror("Los parámetros actuales no coinciden con los declarados en la función.");
            	} else {
                	(yyval.cent) = inf.tipo; // Tipo de retorno de la función
				}
            }
        }
    }
#line 1728 "asin.c"
    break;

  case 63: /* paramAct: %empty  */
#line 379 "src/asin.y"
          { (yyval.lista).ref = -1; }
#line 1734 "asin.c"
    break;

  case 64: /* paramAct: listaParamAct  */
#line 380 "src/asin.y"
                        { (yyval.lista).ref = (yyvsp[0].lista).ref; }
#line 1740 "asin.c"
    break;

  case 65: /* listaParamAct: expre  */
#line 384 "src/asin.y"
                { (yyval.lista).ref = insTdD(-1, (yyvsp[0].cent)); }
#line 1746 "asin.c"
    break;

  case 66: /* listaParamAct: expre COMA_ listaParamAct  */
#line 385 "src/asin.y"
                                    { (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-2].cent)); }
#line 1752 "asin.c"
    break;

  case 67: /* opLogic: OPAND_  */
#line 390 "src/asin.y"
                        {(yyval.cent) = OP_AND;}
#line 1758 "asin.c"
    break;

  case 68: /* opLogic: OPOR_  */
#line 391 "src/asin.y"
                {(yyval.cent) = OP_OR;}
#line 1764 "asin.c"
    break;

  case 69: /* opIgual: OPASIG_  */
#line 395 "src/asin.y"
                               {(yyval.cent) = OP_IGUAL;}
#line 1770 "asin.c"
    break;

  case 70: /* opIgual: OPNOTASIG_  */
#line 396 "src/asin.y"
                       {(yyval.cent) = OP_DISTINTO;}
#line 1776 "asin.c"
    break;

  case 71: /* opRel: COMPMAYOR_  */
#line 400 "src/asin.y"
                                {(yyval.cent) = OP_MAYOR;}
#line 1782 "asin.c"
    break;

  case 72: /* opRel: COMPMENOR_  */
#line 401 "src/asin.y"
                        {(yyval.cent) = OP_MENOR;}
#line 1788 "asin.c"
    break;

  case 73: /* opRel: COMPMAYORIG_  */
#line 402 "src/asin.y"
                        {(yyval.cent) = OP_MAYORIG;}
#line 1794 "asin.c"
    break;

  case 74: /* opRel: COMPMENORIG_  */
#line 403 "src/asin.y"
                        {(yyval.cent) = OP_MENORIG;}
#line 1800 "asin.c"
    break;

  case 75: /* opAd: OPSUMA_  */
#line 407 "src/asin.y"
                        {(yyval.cent) = OP_SUMA;}
#line 1806 "asin.c"
    break;

  case 76: /* opAd: OPRESTA_  */
#line 408 "src/asin.y"
                        {(yyval.cent) = OP_RESTA;}
#line 1812 "asin.c"
    break;

  case 77: /* opMul: OPMULT_  */
#line 412 "src/asin.y"
                                {(yyval.cent) = OP_MULT;}
#line 1818 "asin.c"
    break;

  case 78: /* opMul: OPDIV_  */
#line 413 "src/asin.y"
                        {(yyval.cent) = OP_DIV;}
#line 1824 "asin.c"
    break;

  case 79: /* opUna: OPSUMA_  */
#line 417 "src/asin.y"
                                {(yyval.cent) = OP_SUMA;}
#line 1830 "asin.c"
    break;

  case 80: /* opUna: OPRESTA_  */
#line 418 "src/asin.y"
                        {(yyval.cent) = OP_RESTA;}
#line 1836 "asin.c"
    break;

  case 81: /* opUna: OPNOT_  */
#line 419 "src/asin.y"
                        {(yyval.cent) = OP_NOT;}
#line 1842 "asin.c"
    break;


#line 1846 "asin.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 423 "src/asin.y"

