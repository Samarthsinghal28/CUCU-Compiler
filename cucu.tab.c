/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
#line 1 "cucu.y"

    #include<stdio.h>
    #include<stdlib.h>
    int yyerror(char *error_msg);
    int yylex();    
    FILE *lex_out, *yyout , *yyin;

    int yyerror (char *str){
        fprintf(yyout, "Syntax Error ! : %s\n",str);
    }


/* Line 189 of yacc.c  */
#line 85 "cucu.tab.c"

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
     INTEGER_DT = 258,
     CHARACTER_DT = 259,
     IF = 260,
     ELSE = 261,
     WHILE = 262,
     RETURN = 263,
     EQUALS_ASSIGN = 264,
     EQUAL = 265,
     NOT_EQUAL = 266,
     LESS_THAN = 267,
     LESS_THAN_EQUAL = 268,
     GRTR_THAN = 269,
     GRTR_THAN_EQUAL = 270,
     LEFT_PARENTHESIS = 271,
     RIGHT_PARENTHESIS = 272,
     OPEN_CURLY_BRACE = 273,
     CLOSE_CURLY_BRACE = 274,
     PLUS = 275,
     MINUS = 276,
     DIVIDE = 277,
     MULTIPLY = 278,
     COMMA = 279,
     SEMICOLON = 280,
     STR = 281,
     VAR = 282,
     INT = 283
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "cucu.y"

    int n;                      /* Integer value */     
    char *str;                  /* String value */



/* Line 214 of yacc.c  */
#line 156 "cucu.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 168 "cucu.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    13,    17,    23,    27,
      33,    39,    44,    49,    51,    53,    57,    61,    65,    69,
      73,    80,    87,    93,    99,   108,   109,   126,   134,   137,
     140,   145,   150,   152,   155,   158,   161,   164,   166,   170,
     174,   182,   191,   200,   206,   213,   221,   229,   237,   247,
     253,   254,   256,   258,   262,   266,   268,   270,   272,   274,
     276,   278,   280,   284
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      30,     0,    -1,    33,    30,    -1,    34,    30,    -1,    31,
      30,    -1,    -1,     3,    27,    25,    -1,     3,    27,     9,
      32,    25,    -1,     4,    27,    25,    -1,     4,    27,     9,
      27,    25,    -1,     4,    27,     9,    26,    25,    -1,    27,
       9,    26,    25,    -1,    27,     9,    32,    25,    -1,    28,
      -1,    27,    -1,    32,    20,    32,    -1,    32,    21,    32,
      -1,    32,    23,    32,    -1,    32,    22,    32,    -1,    16,
      32,    17,    -1,     3,    27,    16,    36,    17,    25,    -1,
       4,    27,    16,    36,    17,    25,    -1,     3,    27,    16,
      17,    25,    -1,     4,    27,    16,    17,    25,    -1,     3,
      27,    16,    36,    17,    18,    37,    19,    -1,    -1,     4,
      27,    16,    36,    17,    18,    37,    19,    35,     3,    27,
      16,    17,    18,    37,    19,    -1,     4,    27,    16,    17,
      18,    37,    19,    -1,     3,    27,    -1,     4,    27,    -1,
       3,    27,    24,    36,    -1,     4,    27,    24,    36,    -1,
      38,    -1,    31,    38,    -1,    42,    38,    -1,    41,    38,
      -1,    40,    38,    -1,    39,    -1,     8,    32,    25,    -1,
       8,    26,    25,    -1,    27,     9,    27,    16,    46,    17,
      25,    -1,     3,    27,     9,    27,    16,    46,    17,    25,
      -1,     4,    27,     9,    27,    16,    46,    17,    25,    -1,
      27,    16,    46,    17,    25,    -1,    27,     9,    27,    16,
      17,    25,    -1,     3,    27,     9,    27,    16,    17,    25,
      -1,     4,    27,     9,    27,    16,    17,    25,    -1,     7,
      16,    44,    17,    18,    37,    19,    -1,     5,    16,    44,
      17,    18,    37,    19,    43,    37,    -1,     6,    18,    37,
      19,    37,    -1,    -1,    28,    -1,    27,    -1,    28,    45,
      28,    -1,    27,    45,    27,    -1,    10,    -1,    11,    -1,
      14,    -1,    15,    -1,    12,    -1,    13,    -1,    32,    -1,
      32,    10,    32,    -1,    32,    24,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    38,    38,    38,    40,    41,    42,    43,
      44,    45,    46,    50,    51,    52,    53,    54,    55,    56,
      58,    60,    62,    64,    68,    71,    70,    74,    79,    80,
      81,    82,    86,    88,    89,    90,    91,    92,    95,    96,
      98,   100,   102,   104,   106,   108,   110,   116,   120,   125,
     126,   128,   129,   130,   131,   134,   135,   136,   137,   138,
     139,   143,   144,   145
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_DT", "CHARACTER_DT", "IF",
  "ELSE", "WHILE", "RETURN", "EQUALS_ASSIGN", "EQUAL", "NOT_EQUAL",
  "LESS_THAN", "LESS_THAN_EQUAL", "GRTR_THAN", "GRTR_THAN_EQUAL",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "OPEN_CURLY_BRACE",
  "CLOSE_CURLY_BRACE", "PLUS", "MINUS", "DIVIDE", "MULTIPLY", "COMMA",
  "SEMICOLON", "STR", "VAR", "INT", "$accept", "PROGRAM",
  "VAR_DECLARATION", "EXPR", "FUNCTION_DECLARATION", "FUNCTION_DEFINATION",
  "$@1", "ARGUMENTS", "STATEMENTS", "STATEMENT", "FUNCTION_RETURN",
  "FUNCTION_CALL", "WHILE_LOOP", "IF_CONDITION", "ELSE_CONDITION",
  "CONDITION", "INEQUALITY", "PARAMETERS", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    30,    30,    30,    31,    31,    31,    31,
      31,    31,    31,    32,    32,    32,    32,    32,    32,    32,
      33,    33,    33,    33,    34,    35,    34,    34,    36,    36,
      36,    36,    37,    38,    38,    38,    38,    38,    39,    39,
      40,    40,    40,    40,    40,    40,    40,    41,    42,    43,
      43,    44,    44,    44,    44,    45,    45,    45,    45,    45,
      45,    46,    46,    46
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     5,     3,     5,
       5,     4,     4,     1,     1,     3,     3,     3,     3,     3,
       6,     6,     5,     5,     8,     0,    16,     7,     2,     2,
       4,     4,     1,     2,     2,     2,     2,     1,     3,     3,
       7,     8,     8,     5,     6,     7,     7,     7,     9,     5,
       0,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     5,     5,     5,     0,     0,
       0,     1,     4,     2,     3,     0,     0,     6,     0,     0,
       8,     0,     0,    14,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    12,     7,    28,    29,    22,     0,    10,     9,     0,
      23,     0,    19,    15,    16,    18,    17,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      37,     0,     0,     0,     0,    21,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    27,    36,
      35,    34,     0,    24,     0,     0,    52,    51,     0,     0,
      39,    38,    14,    61,     0,    25,    14,     0,    55,    56,
      59,    60,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    53,     0,     0,     0,
       0,    62,    63,    43,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    45,     0,    46,     0,    50,    47,
      40,     0,    41,    42,     0,     0,     0,     0,    48,     0,
       0,     0,     0,    26,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    67,   103,     6,     7,   122,    30,    68,    69,
      70,    71,    72,    73,   155,    98,   114,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
      11,    -1,     4,    28,    21,    11,    11,    11,     8,     9,
      34,   -59,   -59,   -59,   -59,    58,    19,   -59,   -20,    39,
     -59,    58,    14,   -59,   -59,   123,   129,    27,    30,    48,
      51,    73,    75,    26,    91,    98,   -59,    58,    58,    58,
      58,   -59,   -59,    87,   143,   -59,    71,   -59,   -59,     5,
     -59,    85,   -59,   -59,   -59,    67,    67,   113,   113,     5,
     -59,    95,   104,    86,   131,    37,    43,     5,   134,   -59,
     -59,     5,     5,     5,     5,   -59,   -59,   -59,   140,    -6,
      -5,   106,   106,   144,   135,    50,    58,   -59,   -59,   -59,
     -59,   -59,   149,   -59,    65,   139,   127,   127,   153,   154,
     -59,   -59,   156,    25,   157,   -59,   159,    42,   -59,   -59,
     -59,   -59,   -59,   -59,   146,   148,   160,   161,    55,    58,
      58,   152,   177,    63,    78,   -59,   -59,     5,     5,   158,
     164,   141,   -59,   -59,   155,   162,   167,   163,   168,   170,
     171,   -59,   166,   176,   -59,   169,   -59,   172,   180,   -59,
     -59,   178,   -59,   -59,   175,     5,   181,     5,   -59,     5,
     179,   182,     5,   -59,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   119,   107,   -10,   -59,   -59,   -59,   -17,   -58,    56,
     -59,   -59,   -59,   -59,   -59,   114,   103,    12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,    78,    34,    94,    95,    26,    31,    32,    61,    62,
      63,    35,    64,    65,     1,     2,    92,    15,    18,    17,
      20,    11,    27,    28,    16,    19,     8,    53,    54,    55,
      56,     9,    66,    17,    20,   119,    29,    10,     3,    36,
      76,    77,    27,    28,    49,    37,    38,    39,    40,   120,
      21,    50,    85,    21,    43,    84,    33,    44,   124,    86,
      22,    23,    24,    83,    23,    24,    21,    48,    46,   139,
     140,    21,   129,    45,    21,    25,    22,   102,    24,    21,
     135,    21,    23,    24,    26,    23,    24,    37,    38,    59,
      23,    24,   106,    24,    21,   137,    60,   158,    47,   160,
      48,   161,    81,    74,   164,    23,    24,     5,    51,   131,
      75,    57,     5,     5,     5,    52,    27,    28,    37,    38,
      39,    40,    79,    87,    12,    13,    14,    89,    90,    91,
     130,    80,   132,    96,    97,   136,   138,   108,   109,   110,
     111,   112,   113,    37,    38,    39,    40,    82,    41,    37,
      38,    39,    40,    88,    42,    37,    38,    39,    40,    93,
     101,    37,    38,    39,    40,    31,   107,    58,   105,   100,
     116,   117,   118,   125,   121,   123,   126,   133,   127,   128,
     134,   142,   143,   141,   145,   147,   154,   144,   146,   148,
     149,   150,   151,   157,   152,   156,    99,   153,   162,   159,
     115,   163
};

static const yytype_uint8 yycheck[] =
{
      10,    59,    19,     9,     9,    15,    26,    27,     3,     4,
       5,    21,     7,     8,     3,     4,    74,     9,     9,    25,
      25,     0,     3,     4,    16,    16,    27,    37,    38,    39,
      40,    27,    27,    25,    25,    10,    17,     9,    27,    25,
      57,    58,     3,     4,    18,    20,    21,    22,    23,    24,
      16,    25,     9,    16,    27,    65,    17,    27,    16,    16,
      26,    27,    28,    26,    27,    28,    16,    25,    17,   127,
     128,    16,    17,    25,    16,    85,    26,    27,    28,    16,
      17,    16,    27,    28,    94,    27,    28,    20,    21,    18,
      27,    28,    27,    28,    16,    17,    25,   155,    25,   157,
      25,   159,    16,    18,   162,    27,    28,     0,    17,   119,
      25,    24,     5,     6,     7,    17,     3,     4,    20,    21,
      22,    23,    27,    67,     5,     6,     7,    71,    72,    73,
     118,    27,   120,    27,    28,   123,   124,    10,    11,    12,
      13,    14,    15,    20,    21,    22,    23,    16,    25,    20,
      21,    22,    23,    19,    25,    20,    21,    22,    23,    19,
      25,    20,    21,    22,    23,    26,    27,    24,    19,    25,
      17,    17,    16,    27,    17,    16,    28,    25,    18,    18,
       3,    17,    27,    25,    17,    17,     6,    25,    25,    19,
      19,    25,    16,    18,    25,    17,    82,    25,    19,    18,
      97,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    27,    30,    31,    33,    34,    27,    27,
       9,     0,    30,    30,    30,     9,    16,    25,     9,    16,
      25,    16,    26,    27,    28,    32,    32,     3,     4,    17,
      36,    26,    27,    17,    36,    32,    25,    20,    21,    22,
      23,    25,    25,    27,    27,    25,    17,    25,    25,    18,
      25,    17,    17,    32,    32,    32,    32,    24,    24,    18,
      25,     3,     4,     5,     7,     8,    27,    31,    37,    38,
      39,    40,    41,    42,    18,    25,    36,    36,    37,    27,
      27,    16,    16,    26,    32,     9,    16,    38,    19,    38,
      38,    38,    37,    19,     9,     9,    27,    28,    44,    44,
      25,    25,    27,    32,    46,    19,    27,    27,    10,    11,
      12,    13,    14,    15,    45,    45,    17,    17,    16,    10,
      24,    17,    35,    16,    16,    27,    28,    18,    18,    17,
      46,    32,    46,    25,     3,    17,    46,    17,    46,    37,
      37,    25,    17,    27,    25,    17,    25,    17,    19,    19,
      25,    16,    25,    25,     6,    43,    17,    18,    37,    18,
      37,    37,    19,    19,    37
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
        case 6:

/* Line 1464 of yacc.c  */
#line 40 "cucu.y"
    { fprintf(yyout,"Variable type : Integer \nIdentifier : %s \n",(yyvsp[(2) - (3)].str));                  ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 41 "cucu.y"
    { fprintf(yyout,"Variable type : Integer \nIdentifier : %s \n",(yyvsp[(2) - (5)].str));                  ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 42 "cucu.y"
    { fprintf(yyout,"Variable type : Character \nIdentifier : %s \n",(yyvsp[(2) - (3)].str));                  ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 43 "cucu.y"
    { fprintf(yyout,"Variable type : Character \nIdentifier : %s \n",(yyvsp[(2) - (5)].str));                  ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 44 "cucu.y"
    { fprintf(yyout,"Variable type : Character \nIdentifier : %s\n",(yyvsp[(2) - (5)].str));                 ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 45 "cucu.y"
    { fprintf(yyout,"Character Identifier : %s \n",(yyvsp[(1) - (4)].str));                                            ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 46 "cucu.y"
    { fprintf(yyout,"Identifier : %s \n",(yyvsp[(1) - (4)].str));                                            ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 50 "cucu.y"
    {fprintf(yyout,"Integer :  %d \n", (yyvsp[(1) - (1)].n));         ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 51 "cucu.y"
    {fprintf(yyout,"Variable : %s \n", (yyvsp[(1) - (1)].str));         ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 52 "cucu.y"
    {fprintf(yyout,"Arithmetic Operator : + \n");   ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 53 "cucu.y"
    {fprintf(yyout,"Arithmetic Operator : - \n");   ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 54 "cucu.y"
    {fprintf(yyout,"Arithmetic Operator : * \n");   ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 55 "cucu.y"
    {fprintf(yyout,"Arithmetic Operator : / \n");   ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 59 "cucu.y"
    {    fprintf(yyout,"Function Declaration : \nReturn Type : Integer \nFunction name : %s \n",(yyvsp[(2) - (6)].str));;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 61 "cucu.y"
    {    fprintf(yyout,"Function Declaration \nReturn Type : Character \nFunction name : %s \n",(yyvsp[(2) - (6)].str)); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 63 "cucu.y"
    {    fprintf(yyout,"Function Declaration : \nReturn Type : Integer \nFunction name : %s \n",(yyvsp[(2) - (5)].str));;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 65 "cucu.y"
    {    fprintf(yyout,"Function Declaration \nReturn Type : Character \nFunction name : %s \n",(yyvsp[(2) - (5)].str)); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 69 "cucu.y"
    {   fprintf(yyout,"Function \nReturn Type : Integer \nFunction name : %s \n",(yyvsp[(2) - (8)].str));   ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 71 "cucu.y"
    {    fprintf(yyout,"Function \nReturn Type : Character \nFunction name : %s \n",(yyvsp[(2) - (8)].str));;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 73 "cucu.y"
    {   fprintf(yyout,"Function \nReturn Type : Integer \nFunction name : %s \n",(yyvsp[(2) - (16)].str));   ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 75 "cucu.y"
    {    fprintf(yyout,"Function \nReturn Type : Character \nFunction name : %s \n",(yyvsp[(2) - (7)].str));;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 79 "cucu.y"
    {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Integer",(yyvsp[(2) - (2)].str));                  ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 80 "cucu.y"
    {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Character",(yyvsp[(2) - (2)].str));                  ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 81 "cucu.y"
    {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Integer",(yyvsp[(2) - (4)].str));                  ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 82 "cucu.y"
    {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Character",(yyvsp[(2) - (4)].str));                  ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 95 "cucu.y"
    { fprintf(yyout,"RETURN TYPE : EXPRESSION \n");;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 96 "cucu.y"
    { fprintf(yyout,"RETURN VALUE : %s \n",(yyvsp[(2) - (3)].str));;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 99 "cucu.y"
    {    fprintf(yyout,"FUNCTION CALL  \nReturn var name : %s \nFunction name : %s \n",(yyvsp[(1) - (7)].str),(yyvsp[(3) - (7)].str));                          ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 101 "cucu.y"
    {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Integer \n Return var name : %s \nFunction name : %s \n",(yyvsp[(2) - (8)].str),(yyvsp[(4) - (8)].str));  ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 103 "cucu.y"
    {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Character \nReturn var name : %s \n Function name : %s \n",(yyvsp[(2) - (8)].str),(yyvsp[(4) - (8)].str));;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 105 "cucu.y"
    {   fprintf(yyout,"FUNCTION CALL \nFunction name : %s \n",(yyvsp[(1) - (5)].str));  ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 107 "cucu.y"
    {    fprintf(yyout,"FUNCTION CALL  \nReturn var name : %s \nFunction name : %s \n",(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));                          ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 109 "cucu.y"
    {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Integer \n Return var name : %s \nFunction name : %s \n",(yyvsp[(2) - (7)].str),(yyvsp[(4) - (7)].str));  ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 111 "cucu.y"
    {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Character \nReturn var name : %s \n Function name : %s \n",(yyvsp[(2) - (7)].str),(yyvsp[(4) - (7)].str));;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 117 "cucu.y"
    {    fprintf(yyout,"WHILE LOOP  \n");   ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 121 "cucu.y"
    {    fprintf(yyout,"IF statement : \n");    ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 125 "cucu.y"
    {    fprintf(yyout,"ELSE statement : \n");  ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 128 "cucu.y"
    {   fprintf(yyout,"CONDITION :  %d != 0 \n",(yyvsp[(1) - (1)].n));                        ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 129 "cucu.y"
    {   fprintf(yyout,"CONDITION :  %s != 0 \n",(yyvsp[(1) - (1)].str));                        ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 130 "cucu.y"
    {   fprintf(yyout,"First Operand : %d \nSecond Operand : %d \n",(yyvsp[(1) - (3)].n),(yyvsp[(3) - (3)].n)); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 131 "cucu.y"
    {   fprintf(yyout,"First Operand : %s \nSecond Operand : %s \n",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str)); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 134 "cucu.y"
    { fprintf(yyout,"CONDITION : Equals\n");                   ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 135 "cucu.y"
    { fprintf(yyout,"CONDITION : Not Equals\n");               ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 136 "cucu.y"
    { fprintf(yyout,"CONDITION : Greater than\n");             ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 137 "cucu.y"
    { fprintf(yyout,"CONDITION : Greater than equals\n");      ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 138 "cucu.y"
    { fprintf(yyout,"CONDITION : Less than \n");               ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 139 "cucu.y"
    { fprintf(yyout,"CONDITION : Less than equals\n");         ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 143 "cucu.y"
    {           fprintf(yyout,"Function Arguement : \n");                      ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 144 "cucu.y"
    {           fprintf(yyout,"Function Arguement : \n Operator : ==\n");      ;}
    break;



/* Line 1464 of yacc.c  */
#line 1852 "cucu.tab.c"
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



/* Line 1684 of yacc.c  */
#line 148 "cucu.y"


int yywrap()
{
	return 1;
}


int main(int argc , char *argv[])
{
    yyin = fopen(argv[1],"r");
    lex_out = fopen("Lexer.txt","w");
    yyout = fopen("Parser.txt","w");
    yyparse();

    fclose(yyin);
    fclose(lex_out);
    fclose(yyout);
    return 0;
}



