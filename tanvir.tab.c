
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "tanvir.y"

	#include<stdio.h>
	#include <math.h>
	#include<stdlib.h>
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],sym[1000];
	void insert (storage *p, char *s, int n);

	#define pi  3.1416
	


/* Line 189 of yacc.c  */
#line 90 "tanvir.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     FUNCTION = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     LP = 268,
     RP = 269,
     LB = 270,
     RB = 271,
     CM = 272,
     SM = 273,
     PLUS = 274,
     MINUS = 275,
     MULT = 276,
     DIV = 277,
     POW = 278,
     OR = 279,
     OROR = 280,
     AND = 281,
     ANDAND = 282,
     MOD = 283,
     FACT = 284,
     ASSIGN = 285,
     FOR = 286,
     COL = 287,
     WHILE = 288,
     BREAK = 289,
     COLON = 290,
     DEFAULT = 291,
     CASE = 292,
     SWITCH = 293,
     INC = 294,
     DEC = 295,
     LOG = 296,
     LOG10 = 297,
     SIN = 298,
     COS = 299,
     TAN = 300,
     LOSAGU = 301,
     GOSAGU = 302,
     not = 303,
     funct = 304,
     IFX = 305,
     ELIFX = 306,
     GT = 307,
     LT = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "tanvir.y"

        int number;
        char *string;



/* Line 214 of yacc.c  */
#line 186 "tanvir.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "tanvir.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   903

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    20,    22,    24,
      26,    30,    32,    34,    42,    45,    50,    59,    73,   100,
     122,   132,   142,   145,   153,   155,   158,   159,   162,   168,
     173,   175,   177,   181,   185,   189,   193,   197,   201,   205,
     209,   213,   216,   220,   224,   228,   232,   235,   238,   241,
     244,   247,   250,   253,   257,   261,   265,   267,   269,   273,
     277,   281,   285,   289,   292,   296,   300,   304,   307,   310
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,     8,    13,    14,    15,    56,    16,    -1,
      -1,    56,    60,    -1,    57,    -1,    58,    59,    18,    -1,
       9,    -1,    10,    -1,    12,    -1,    59,    17,     4,    -1,
       4,    -1,    18,    -1,    38,    13,    67,    14,    15,    62,
      16,    -1,    66,    18,    -1,     4,    30,    66,    18,    -1,
       5,    13,    66,    14,    15,    66,    18,    16,    -1,     5,
      13,    66,    14,    15,    66,    18,    16,     7,    15,    66,
      18,    16,    -1,     5,    13,    66,    14,    15,     5,    13,
      66,    14,    15,    66,    18,    16,     7,    15,    66,    18,
      16,    66,    18,    16,     7,    15,    66,    18,    16,    -1,
       5,    13,    66,    14,    15,    66,    18,    16,     6,    13,
      66,    14,    15,    66,    18,    16,     7,    15,    66,    18,
      16,    -1,    31,    13,     3,    32,     3,    14,    15,    66,
      16,    -1,    33,    13,     3,    52,     3,    14,    15,    66,
      16,    -1,    49,    61,    -1,    32,    58,    13,    14,    15,
      60,    16,    -1,    63,    -1,    63,    65,    -1,    -1,    63,
      64,    -1,    37,     3,    32,    66,    18,    -1,    36,    32,
      66,    18,    -1,     3,    -1,     4,    -1,    66,    19,    66,
      -1,    66,    20,    66,    -1,    66,    21,    66,    -1,    66,
      22,    66,    -1,    66,    23,    66,    -1,    66,    24,    66,
      -1,    66,    25,    66,    -1,    66,    26,    66,    -1,    66,
      27,    66,    -1,    66,    29,    -1,    66,    53,    66,    -1,
      66,    52,    66,    -1,    66,    28,    66,    -1,    13,    66,
      14,    -1,    66,    39,    -1,    66,    40,    -1,    41,    66,
      -1,    42,    66,    -1,    43,    66,    -1,    44,    66,    -1,
      45,    66,    -1,    46,    66,    66,    -1,    47,    66,    66,
      -1,    48,    66,    48,    -1,     3,    -1,     4,    -1,    67,
      19,    67,    -1,    67,    20,    67,    -1,    67,    21,    67,
      -1,    67,    22,    67,    -1,    67,    23,    67,    -1,    67,
      29,    -1,    67,    53,    67,    -1,    67,    52,    67,    -1,
      13,    67,    14,    -1,    67,    39,    -1,    67,    40,    -1,
      48,    67,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    59,    61,    63,    66,    70,    72,    74,
      77,    90,   104,   105,   109,   111,   127,   138,   148,   162,
     176,   182,   195,   198,   207,   208,   211,   212,   215,   224,
     234,   236,   238,   240,   242,   244,   254,   256,   258,   260,
     262,   266,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   311,   324,   337,   339,   341,   343,
     345,   347,   357,   360,   370,   372,   374,   376,   378,   380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "FUNCTION", "INT", "FLOAT", "DOUBLE", "CHAR", "LP", "RP", "LB", "RB",
  "CM", "SM", "PLUS", "MINUS", "MULT", "DIV", "POW", "OR", "OROR", "AND",
  "ANDAND", "MOD", "FACT", "ASSIGN", "FOR", "COL", "WHILE", "BREAK",
  "COLON", "DEFAULT", "CASE", "SWITCH", "INC", "DEC", "LOG", "LOG10",
  "SIN", "COS", "TAN", "LOSAGU", "GOSAGU", "not", "funct", "IFX", "ELIFX",
  "GT", "LT", "$accept", "program", "cstatement", "cdeclaration", "TYPE",
  "ID1", "statement", "func", "BASE", "Bas", "Cs", "Dflt", "expression",
  "switch_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    57,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    62,    62,    63,    63,    64,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     3,     1,     1,     1,
       3,     1,     1,     7,     2,     4,     8,    13,    26,    21,
       9,     9,     2,     7,     1,     2,     0,     2,     5,     4,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     7,     8,     9,
       0,     5,     0,    30,    31,     0,     0,     2,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,    11,     0,     0,     0,    31,     0,     0,
       0,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,    22,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    46,    47,     0,     0,     0,     6,
       0,     0,    45,     0,     0,    56,    57,     0,     0,     0,
      53,    54,    55,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    44,    43,    42,    10,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      67,    68,     0,     0,     0,     0,     0,     0,    66,    69,
      26,    58,    59,    60,    61,    62,    65,    64,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
      13,     0,     0,    27,    25,     0,     0,    16,     0,     0,
       0,     0,    23,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,    18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    12,    34,    31,    51,   133,   134,
     143,   144,    32,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
      10,    49,    80,    81,   -53,    83,    12,   -53,   -53,   -53,
     146,   -53,    97,   -53,    72,    90,   193,   -53,   -53,    91,
     103,   104,   193,   193,   193,   193,   193,   193,   193,   193,
      89,   -53,   417,   -53,    18,   193,   193,   -53,    86,   115,
     116,     1,    51,    51,    51,    51,    51,    44,    44,   835,
      12,   -53,   -53,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   -53,   -53,   -53,   193,   193,   120,   -53,
     453,   249,   -53,   100,    88,   -53,   -53,     1,     1,   315,
      51,    51,   -53,   122,   426,   426,   390,   390,   196,     2,
     -25,    31,   105,   -53,   225,   225,   -53,   -53,   126,   151,
     152,   337,   850,   141,     1,     1,     1,     1,     1,   -53,
     -53,   -53,     1,     1,   144,   214,   149,   155,   -53,   -53,
     -53,    -6,    -6,   113,   113,   -53,   108,   108,   145,   153,
     489,   150,   158,   159,    45,   167,   193,   162,   193,   193,
     -53,   142,   178,   -53,   -53,   166,   271,    87,   359,   381,
     193,   154,   -53,   168,   186,   187,   -53,   -53,   525,   193,
     193,   193,   193,   -53,   561,   597,   293,   633,   -53,   185,
     188,   191,   197,   193,   -53,   210,   669,   193,   212,   705,
     219,   213,   215,   193,   193,   741,   777,   216,   217,   224,
     -53,   227,   193,   813,   250,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   -53,   -53,   229,   -53,   132,   -53,   -53,   -53,
     -53,   -53,   -16,   -52
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      38,    60,    61,    62,    75,    76,    42,    43,    44,    45,
      46,    47,    48,    49,    77,   106,   107,   108,     1,    70,
      71,     7,     8,   109,     9,   101,   102,    59,    60,    61,
      62,    80,    81,   110,   111,    68,    69,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    13,    37,    78,
      94,    95,   121,   122,   123,   124,   125,    16,    61,    62,
     126,   127,     3,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    57,    58,    59,    60,    61,    62,
       4,   141,   142,    64,    65,    22,    23,    24,    25,    26,
      27,    28,    29,   154,   155,     5,    66,    67,     6,   130,
      72,    33,    35,    36,    39,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    40,    41,    73,    74,
     146,    50,   148,   149,    96,    64,    65,   104,   105,   106,
     107,   108,    99,    62,   158,   114,   108,   109,    66,    67,
     100,   115,   109,   164,   165,   166,   167,   110,   111,    13,
      14,    15,   110,   111,   116,   117,   120,   176,   128,    16,
     135,   179,    17,   131,    18,   138,   136,   185,   186,   132,
      13,    14,    15,   139,   150,   140,   193,    19,   147,    20,
      16,   151,   152,   160,    21,    18,   159,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    37,    19,   161,
      20,   172,   162,   173,   175,    21,    16,   174,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    13,    37,   129,
      58,    59,    60,    61,    62,   177,   182,    16,   180,   183,
     184,   191,   189,   190,    22,    23,    24,    25,    26,    27,
      28,    29,   192,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    22,    23,    24,    25,    26,
      27,    28,    29,    98,    64,    65,   195,   145,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    83,
       0,     0,     0,     0,     0,   153,     0,     0,    64,    65,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    66,    67,     0,     0,     0,     0,   170,     0,     0,
      64,    65,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    66,    67,     0,     0,     0,     0,   103,
       0,     0,    64,    65,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,   109,    66,    67,     0,     0,     0,
       0,   118,     0,     0,   110,   111,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,   109,   112,   113,     0,
       0,     0,     0,     0,     0,   156,   110,   111,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,   112,
     113,     0,     0,     0,     0,     0,     0,   157,    64,    65,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    66,    67,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,     0,    66,    67,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,     0,    66,
      67,    97,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,   137,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    67,   163,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,   168,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,   169,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,   171,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,   178,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    67,   181,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,   187,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,   188,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,   194,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    66,    67,     0,     0,   104,
     105,   106,   107,   108,    64,    65,     0,     0,     0,   109,
       0,     0,     0,    82,     0,     0,     0,    66,    67,   110,
     111,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,   112,   113
};

static const yytype_int16 yycheck[] =
{
      16,    26,    27,    28,     3,     4,    22,    23,    24,    25,
      26,    27,    28,    29,    13,    21,    22,    23,     8,    35,
      36,     9,    10,    29,    12,    77,    78,    25,    26,    27,
      28,    47,    48,    39,    40,    17,    18,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     3,     4,    48,
      66,    67,   104,   105,   106,   107,   108,    13,    27,    28,
     112,   113,    13,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    23,    24,    25,    26,    27,    28,
       0,    36,    37,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     6,     7,    14,    52,    53,    15,   115,
      14,     4,    30,    13,    13,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    13,    13,     3,     3,
     136,    32,   138,   139,     4,    39,    40,    19,    20,    21,
      22,    23,    32,    28,   150,    13,    23,    29,    52,    53,
      52,    15,    29,   159,   160,   161,   162,    39,    40,     3,
       4,     5,    39,    40,     3,     3,    15,   173,    14,    13,
      15,   177,    16,    14,    18,    15,    13,   183,   184,    14,
       3,     4,     5,    15,    32,    16,   192,    31,    16,    33,
      13,     3,    16,    15,    38,    18,    32,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     3,     4,    31,    13,
      33,    16,    15,    15,     7,    38,    13,    16,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     3,     4,     5,
      24,    25,    26,    27,    28,    15,     7,    13,    16,    16,
      15,     7,    16,    16,    41,    42,    43,    44,    45,    46,
      47,    48,    15,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    39,    40,    16,   135,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    50,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    39,    40,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    52,    53,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      39,    40,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    52,    53,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    39,    40,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    52,    53,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    39,    40,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    29,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    39,    40,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    16,    39,    40,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    52,    53,    23,    24,    25,    26,    27,    28,    29,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    52,    53,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    52,
      53,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    52,    53,    -1,    -1,    19,
      20,    21,    22,    23,    39,    40,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    55,    13,     0,    14,    15,     9,    10,    12,
      56,    57,    58,     3,     4,     5,    13,    16,    18,    31,
      33,    38,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    60,    66,     4,    59,    30,    13,     4,    66,    13,
      13,    13,    66,    66,    66,    66,    66,    66,    66,    66,
      32,    61,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    39,    40,    52,    53,    17,    18,
      66,    66,    14,     3,     3,     3,     4,    13,    48,    67,
      66,    66,    48,    58,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,     4,    18,    14,    32,
      52,    67,    67,    14,    19,    20,    21,    22,    23,    29,
      39,    40,    52,    53,    13,    15,     3,     3,    14,    48,
      15,    67,    67,    67,    67,    67,    67,    67,    14,     5,
      66,    14,    14,    62,    63,    15,    13,    18,    15,    15,
      16,    36,    37,    64,    65,    60,    66,    16,    66,    66,
      32,     3,    16,    14,     6,     7,    16,    16,    66,    32,
      15,    13,    15,    18,    66,    66,    66,    66,    18,    18,
      14,    18,    16,    15,    16,     7,    66,    15,    18,    66,
      16,    18,     7,    16,    15,    66,    66,    18,    18,    16,
      16,     7,    15,    66,    18,    16
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 56 "tanvir.y"
    { printf("\nSuccessful compilation\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "tanvir.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 77 "tanvir.y"
    {
						if(number_for_key((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							insert(&store[cnt],(yyvsp[(3) - (3)].string), cnt);
							cnt++;
							
						}
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 90 "tanvir.y"
    {
				if(number_for_key((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					insert(&store[cnt],(yyvsp[(1) - (1)].string), cnt);
							cnt++;
				}
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 105 "tanvir.y"
    {printf("SWITCH case.\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 109 "tanvir.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 111 "tanvir.y"
    {
							if(number_for_key((yyvsp[(1) - (4)].string))){
								int i = number_for_key2((yyvsp[(1) - (4)].string));
								if (!i){
									insert(&sym[cntt], (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].number));
									cntt++;
								}
								sym[i].n = (yyvsp[(3) - (4)].number);
								printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
							}
							
						;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 127 "tanvir.y"
    {
								if((yyvsp[(3) - (8)].number))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(6) - (8)].number)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 138 "tanvir.y"
    {
								 	if((yyvsp[(3) - (13)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (13)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(11) - (13)].number));
									}
								   ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 148 "tanvir.y"
    {
								 	if((yyvsp[(3) - (26)].number))
									{
										if((yyvsp[(8) - (26)].number))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (26)].number));
										else
											printf("\nvalue of expression middle ELSE: %d\n",(yyvsp[(16) - (26)].number));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(19) - (26)].number));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(24) - (26)].number));
									}
								   ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 162 "tanvir.y"
    {
								 	if((yyvsp[(3) - (21)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (21)].number));
									}
									else if((yyvsp[(11) - (21)].number))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(14) - (21)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(19) - (21)].number));
									}
								   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 176 "tanvir.y"
    {
	   int i=0;
	   for(i=(yyvsp[(3) - (9)].number);i<(yyvsp[(5) - (9)].number);i++){
	   printf("for loop statement\n");
	   }
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "tanvir.y"
    {
										int i;
										printf("While LOOP: ");
										for(i=(yyvsp[(3) - (9)].number);i<=(yyvsp[(5) - (9)].number);i++)
										{
											printf("%d ",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 199 "tanvir.y"
    {
								printf("Function Declared\n");
							;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 215 "tanvir.y"
    {
						
						if(val==(yyvsp[(2) - (5)].number)){
							  track=1;
							  printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (5)].number),(yyvsp[(4) - (5)].number));
						}
					;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 224 "tanvir.y"
    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
						}
						track=0;
					;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 234 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 236 "tanvir.y"
    { (yyval.number) = number_for_key2((yyvsp[(1) - (1)].string)); printf("Variable value: %d",(yyval.number));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 238 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 240 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 242 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 244 "tanvir.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 254 "tanvir.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 256 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) | (yyvsp[(3) - (3)].number) ; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 258 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) || (yyvsp[(3) - (3)].number) ; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 260 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) & (yyvsp[(3) - (3)].number) ; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 262 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) && (yyvsp[(3) - (3)].number) ; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 266 "tanvir.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;
						
					 ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 276 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 278 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 280 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) % (yyvsp[(3) - (3)].number); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 282 "tanvir.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 284 "tanvir.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 286 "tanvir.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 288 "tanvir.y"
    { (yyval.number)=log((yyvsp[(2) - (2)].number)); printf("log: %lf\n",log((yyvsp[(2) - (2)].number)));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 290 "tanvir.y"
    { (yyval.number)=log((yyvsp[(2) - (2)].number)); printf("log10: %lf\n",log10((yyvsp[(2) - (2)].number)));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 292 "tanvir.y"
    { (yyval.number)=sin((yyvsp[(2) - (2)].number)*3.1416/180); printf("sin: %lf\n",sin((yyvsp[(2) - (2)].number)*3.1416/180));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 294 "tanvir.y"
    { (yyval.number)=cos((yyvsp[(2) - (2)].number)*3.1416/180); printf("cos: %lf\n",cos((yyvsp[(2) - (2)].number)*3.1416/180));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 296 "tanvir.y"
    { (yyval.number)=tan((yyvsp[(2) - (2)].number)*3.1416/180); printf("tan: %lf\n",tan((yyvsp[(2) - (2)].number)*3.1416/180));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 298 "tanvir.y"
    { 
									int n1, n2 , i, gcd;
									n1 = (yyvsp[(2) - (3)].number); n2 = (yyvsp[(3) - (3)].number);
									for(i=1; i <= n1 && i <= n2; ++i)
									{
									if(n1%i==0 && n2%i==0)
										gcd = i;
									}

									printf("G.C.D of %d and %d is %d", n1, n2, gcd);
									(yyval.number) = gcd;
									;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "tanvir.y"
    { 
									int n1, n2 , i, max;
									n1 = (yyvsp[(2) - (3)].number); n2 = (yyvsp[(3) - (3)].number);
									max = (n1 > n2) ? n1 : n2;

									while (1) {
										if ((max % n1 == 0) && (max % n2 == 0)) {
										printf("L.C.M. of %d and %d is %d.", n1, n2, max);
										(yyval.number) = max;
										break;}
									++max;
									} ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 324 "tanvir.y"
    {
						if((yyvsp[(2) - (3)].number) != 0)
						{
							(yyval.number) = 0; printf("not: %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf("aff: %d\n",(yyval.number));
						}
					;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 337 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); val = (yyval.number);	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 339 "tanvir.y"
    { (yyval.number) = number_for_key2((yyvsp[(1) - (1)].string)); val = (yyval.number);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 341 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 343 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 345 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 347 "tanvir.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number); val = (yyval.number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							 val = (yyval.number);
				  		} 	
				    	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 357 "tanvir.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));  val = (yyval.number);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 360 "tanvir.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult; val = (yyval.number);
						
					 ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 370 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 372 "tanvir.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 374 "tanvir.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	 val = (yyval.number);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 376 "tanvir.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)+1; printf("inc: %d\n",(yyval.number)); val = (yyval.number);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 378 "tanvir.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)-1; printf("dec: %d\n",(yyval.number)); val = (yyval.number);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 380 "tanvir.y"
    {
						if((yyvsp[(2) - (3)].number) != 0)
						{
							(yyval.number) = 0; val = (yyval.number);
						}
						else{
							(yyval.number) = 1 ; val = (yyval.number);
						}
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2257 "tanvir.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 390 "tanvir.y"


void insert(storage *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}

int number_for_key(char *key)
{
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}



int number_for_key2(char *key)
{
    int i = 1;
    char *name = sym[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = sym[++i].str;
    }
    return 0;
}




int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


