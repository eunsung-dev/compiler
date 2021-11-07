/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     AUTO_SYM = 259,
     BREAK_SYM = 260,
     CASE_SYM = 261,
     CONTINUE_SYM = 262,
     DEFAULT_SYM = 263,
     DO_SYM = 264,
     ELSE_SYM = 265,
     ENUM_SYM = 266,
     FOR_SYM = 267,
     IF_SYM = 268,
     RETURN_SYM = 269,
     SIZEOF_SYM = 270,
     STATIC_SYM = 271,
     STRUCT_SYM = 272,
     SWITCH_SYM = 273,
     TYPEDEF_SYM = 274,
     UNION_SYM = 275,
     WHILE_SYM = 276,
     TYPE_IDENTIFIER = 277,
     PLUSPLUS = 278,
     MINUSMINUS = 279,
     ARROW = 280,
     LSS = 281,
     GTR = 282,
     LEQ = 283,
     GEQ = 284,
     EQL = 285,
     NEQ = 286,
     AMPAMP = 287,
     BARBAR = 288,
     DOTDOTDOT = 289,
     LP = 290,
     RP = 291,
     LB = 292,
     RB = 293,
     LR = 294,
     RR = 295,
     COLON = 296,
     PERIOD = 297,
     COMMA = 298,
     EXCL = 299,
     STAR = 300,
     SLASH = 301,
     PERCENT = 302,
     AMP = 303,
     SEMICOLON = 304,
     PLUS = 305,
     MINUS = 306,
     ASSIGN = 307,
     INTEGER_CONSTANT = 308,
     FLOAT_CONSTANT = 309,
     STRING_LITERAL = 310,
     CHARACTER_CONSTANT = 311,
     VARIABLE_SYM = 312
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define AUTO_SYM 259
#define BREAK_SYM 260
#define CASE_SYM 261
#define CONTINUE_SYM 262
#define DEFAULT_SYM 263
#define DO_SYM 264
#define ELSE_SYM 265
#define ENUM_SYM 266
#define FOR_SYM 267
#define IF_SYM 268
#define RETURN_SYM 269
#define SIZEOF_SYM 270
#define STATIC_SYM 271
#define STRUCT_SYM 272
#define SWITCH_SYM 273
#define TYPEDEF_SYM 274
#define UNION_SYM 275
#define WHILE_SYM 276
#define TYPE_IDENTIFIER 277
#define PLUSPLUS 278
#define MINUSMINUS 279
#define ARROW 280
#define LSS 281
#define GTR 282
#define LEQ 283
#define GEQ 284
#define EQL 285
#define NEQ 286
#define AMPAMP 287
#define BARBAR 288
#define DOTDOTDOT 289
#define LP 290
#define RP 291
#define LB 292
#define RB 293
#define LR 294
#define RR 295
#define COLON 296
#define PERIOD 297
#define COMMA 298
#define EXCL 299
#define STAR 300
#define SLASH 301
#define PERCENT 302
#define AMP 303
#define SEMICOLON 304
#define PLUS 305
#define MINUS 306
#define ASSIGN 307
#define INTEGER_CONSTANT 308
#define FLOAT_CONSTANT 309
#define STRING_LITERAL 310
#define CHARACTER_CONSTANT 311
#define VARIABLE_SYM 312




/* Copy the first part of user declarations.  */
#line 9 "kim.y"

#include "stdio.h"
#line 12 "kim.y"

int yylex();
#line 15 "kim.y"

void yyerror();


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 230 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNRULES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    21,
      24,    28,    30,    32,    35,    38,    40,    42,    44,    46,
      50,    52,    56,    58,    60,    62,    68,    73,    76,    78,
      80,    82,    85,    89,    91,    95,    97,   103,   108,   111,
     113,   117,   119,   123,   126,   128,   130,   133,   135,   139,
     144,   149,   150,   152,   153,   155,   157,   161,   163,   167,
     170,   173,   175,   177,   179,   182,   186,   190,   194,   199,
     204,   206,   210,   215,   217,   221,   223,   225,   227,   229,
     231,   233,   238,   242,   247,   248,   251,   252,   255,   257,
     260,   266,   274,   280,   286,   293,   303,   304,   306,   310,
     313,   316,   318,   320,   322,   324,   326,   330,   332,   337,
     342,   346,   350,   353,   356,   357,   359,   361,   365,   367,
     370,   373,   376,   379,   382,   385,   388,   391,   396,   398,
     403,   405,   408,   410,   414,   418,   422,   424,   428,   432,
     434,   438,   442,   446,   450,   452,   456,   460,   462,   466,
     468,   472,   474,   476,   478
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    -1,    60,    61,    -1,
      62,    -1,    63,    -1,    64,    78,    92,    -1,    78,    92,
      -1,    64,    49,    -1,    64,    66,    49,    -1,    68,    -1,
      65,    -1,    68,    64,    -1,    65,    64,    -1,     4,    -1,
      16,    -1,    19,    -1,    67,    -1,    66,    43,    67,    -1,
      78,    -1,    78,    52,    88,    -1,    69,    -1,    75,    -1,
      22,    -1,    70,     3,    39,    71,    40,    -1,    70,    39,
      71,    40,    -1,    70,     3,    -1,    17,    -1,    20,    -1,
      72,    -1,    71,    72,    -1,    68,    73,    49,    -1,    74,
      -1,    73,    43,    74,    -1,    78,    -1,    11,     3,    39,
      76,    40,    -1,    11,    39,    76,    40,    -1,    11,     3,
      -1,    77,    -1,    76,    43,    77,    -1,     3,    -1,     3,
      52,   113,    -1,    79,    80,    -1,    80,    -1,    45,    -1,
      45,    79,    -1,     3,    -1,    35,    78,    36,    -1,    80,
      37,    81,    38,    -1,    80,    35,    82,    36,    -1,    -1,
     113,    -1,    -1,    83,    -1,    84,    -1,    84,    43,    34,
      -1,    85,    -1,    84,    43,    85,    -1,    64,    78,    -1,
      64,    86,    -1,    64,    -1,    79,    -1,    87,    -1,    79,
      87,    -1,    35,    86,    36,    -1,    37,    81,    38,    -1,
      35,    82,    36,    -1,    87,    37,    81,    38,    -1,    87,
      35,    82,    36,    -1,   113,    -1,    39,    89,    40,    -1,
      39,    89,    43,    40,    -1,    88,    -1,    89,    43,    88,
      -1,    91,    -1,    92,    -1,    95,    -1,    96,    -1,    97,
      -1,    99,    -1,     6,   113,    41,    90,    -1,     8,    41,
      90,    -1,    39,    93,    94,    40,    -1,    -1,    93,    63,
      -1,    -1,    94,    90,    -1,    49,    -1,   114,    49,    -1,
      13,    35,   114,    36,    90,    -1,    13,    35,   114,    36,
      90,    10,    90,    -1,    18,    35,   114,    36,    90,    -1,
      21,    35,   114,    36,    90,    -1,     9,    90,    21,    35,
     114,    36,    -1,    12,    35,    98,    49,    98,    49,    98,
      36,    90,    -1,    -1,   114,    -1,    14,    98,    49,    -1,
       7,    49,    -1,     5,    49,    -1,     3,    -1,    53,    -1,
      54,    -1,    56,    -1,    55,    -1,    35,   114,    36,    -1,
     100,    -1,   101,    37,   114,    38,    -1,   101,    35,   102,
      36,    -1,   101,    42,     3,    -1,   101,    25,     3,    -1,
     101,    23,    -1,   101,    24,    -1,    -1,   103,    -1,   115,
      -1,   103,    43,   115,    -1,   101,    -1,    23,   104,    -1,
      24,   104,    -1,    48,   105,    -1,    45,   105,    -1,    44,
     105,    -1,    51,   105,    -1,    50,   105,    -1,    15,   104,
      -1,    15,    35,   106,    36,    -1,   104,    -1,    35,   106,
      36,   105,    -1,    64,    -1,    64,    86,    -1,   105,    -1,
     107,    45,   105,    -1,   107,    46,   105,    -1,   107,    47,
     105,    -1,   107,    -1,   108,    50,   107,    -1,   108,    51,
     107,    -1,   108,    -1,   109,    26,   108,    -1,   109,    27,
     108,    -1,   109,    28,   108,    -1,   109,    29,   108,    -1,
     109,    -1,   110,    30,   109,    -1,   110,    31,   109,    -1,
     110,    -1,   111,    32,   110,    -1,   111,    -1,   111,    33,
     111,    -1,   114,    -1,   115,    -1,   112,    -1,   104,    52,
     115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    24,    25,    28,    29,    32,    33,    36,
      37,    40,    41,    42,    43,    46,    47,    48,    51,    52,
      55,    56,    59,    60,    61,    64,    65,    66,    69,    70,
      73,    74,    77,    80,    81,    84,    87,    88,    89,    92,
      93,    96,    97,   100,   101,   104,   105,   108,   109,   110,
     111,   113,   115,   117,   119,   122,   123,   126,   127,   130,
     131,   132,   135,   136,   137,   140,   141,   142,   143,   144,
     147,   148,   149,   152,   153,   156,   157,   158,   159,   160,
     161,   164,   165,   168,   170,   172,   174,   176,   179,   180,
     183,   184,   185,   188,   189,   190,   192,   194,   197,   198,
     199,   202,   203,   204,   205,   206,   207,   210,   211,   212,
     213,   214,   215,   216,   218,   220,   223,   224,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   239,   240,
     243,   244,   247,   248,   249,   250,   253,   254,   255,   258,
     259,   260,   261,   262,   265,   266,   267,   270,   271,   274,
     275,   278,   281,   284,   285
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "AUTO_SYM", "BREAK_SYM",
  "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM",
  "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM",
  "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM",
  "WHILE_SYM", "TYPE_IDENTIFIER", "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS",
  "GTR", "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP",
  "RP", "LB", "RB", "LR", "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR",
  "SLASH", "PERCENT", "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL",
  "CHARACTER_CONSTANT", "VARIABLE_SYM", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list", "enumerator", "declarator",
  "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "constant_expression",
  "expression", "assignment_expression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    97,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   112,
     112,   113,   114,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     1,     3,     1,     5,     4,     2,     1,
       3,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       4,     0,     1,     0,     1,     1,     3,     1,     3,     2,
       2,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     4,     0,     2,     0,     2,     1,     2,
       5,     7,     5,     5,     6,     9,     0,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       1,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    15,     0,    16,    28,    17,    29,    24,     0,
      45,     0,     2,     3,     5,     6,     0,    12,    11,    22,
       0,    23,     0,     0,    44,    38,     0,     0,    46,     1,
       4,     9,     0,    18,    20,    14,    13,    27,     0,    84,
       8,    43,    53,    51,     0,    41,     0,    39,    48,     0,
      10,     0,     7,     0,     0,     0,    30,    86,    61,     0,
      54,    55,    57,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   105,   104,     0,   107,   118,
     128,   132,   136,   139,   144,   147,   149,   153,    52,   151,
     152,     0,     0,    37,     0,    19,    20,     0,    21,    70,
       0,     0,    33,    35,    26,    31,    85,     0,     0,    53,
      51,    59,    62,    60,    63,    50,     0,     0,   126,     0,
     119,   120,   130,     0,     0,   128,   123,   122,   121,   125,
     124,    49,   112,   113,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    42,    40,    73,     0,    25,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
      83,    88,    87,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,    64,    53,    51,    56,    58,     0,    53,
      62,   131,     0,   106,   111,     0,   115,   116,     0,   110,
     154,   133,   134,   135,   137,   138,   140,   141,   142,   143,
     145,   146,   148,   150,    71,     0,    34,   100,     0,    99,
       0,     0,    96,     0,     0,    97,     0,     0,    89,    67,
      65,    66,     0,     0,   127,   129,   109,     0,   108,    72,
      74,     0,    82,     0,     0,     0,    98,     0,     0,    69,
      68,   117,    81,     0,    96,     0,     0,     0,     0,     0,
      90,    92,    93,    94,    96,     0,     0,    91,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    58,    17,    32,    33,
      18,    19,    20,    55,    56,   101,   102,    21,    46,    47,
      22,    23,    24,    77,   180,    60,    61,    62,   181,   114,
      98,   156,   172,   173,   174,    57,   108,   175,   176,   177,
     224,   178,    78,    79,   195,   196,    80,    81,   123,    82,
      83,    84,    85,    86,    87,    88,   179,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -183
static const yytype_int16 yypact[] =
{
     478,  -183,  -183,     9,  -183,  -183,  -183,  -183,  -183,    34,
     -19,    41,   478,  -183,  -183,  -183,    17,   332,   332,  -183,
      19,  -183,    18,    36,   136,    31,    58,    44,  -183,  -183,
    -183,  -183,    10,  -183,    -7,  -183,  -183,    52,   218,  -183,
    -183,   136,   332,   387,    58,    46,    59,  -183,  -183,    34,
    -183,   364,  -183,   218,    34,   146,  -183,   332,    28,   105,
    -183,   101,  -183,  -183,   401,   424,   424,   318,   387,   387,
     387,   387,   387,  -183,  -183,  -183,  -183,   109,  -183,   269,
      98,  -183,   -12,    62,   104,    96,   107,  -183,  -183,  -183,
    -183,    67,   387,  -183,    58,  -183,   108,   364,  -183,  -183,
     192,    60,  -183,  -183,  -183,  -183,  -183,    17,   210,   132,
     387,  -183,    40,  -183,   150,  -183,   142,   318,  -183,   387,
    -183,  -183,    55,   120,   134,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,   175,   387,   387,   179,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,  -183,  -183,  -183,  -183,    94,  -183,    34,  -183,
     139,   387,   140,   163,   264,   185,   195,   387,   201,   206,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   193,
     208,   211,   213,   150,   332,   387,  -183,  -183,   212,   492,
     202,  -183,   387,  -183,  -183,   216,   203,  -183,   215,  -183,
    -183,  -183,  -183,  -183,   -12,   -12,    62,    62,    62,    62,
     104,   104,    96,   224,  -183,   341,  -183,  -183,   221,  -183,
     264,   236,   387,   387,   219,  -183,   387,   387,  -183,  -183,
    -183,  -183,   238,   237,  -183,  -183,  -183,   387,  -183,  -183,
    -183,   264,  -183,   245,   232,   247,  -183,   248,   250,  -183,
    -183,  -183,  -183,   387,   387,   264,   264,   264,   253,   241,
     281,  -183,  -183,  -183,   387,   264,   259,  -183,   264,  -183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,   284,  -183,   240,    11,  -183,  -183,   249,
     -17,  -183,  -183,   252,   -36,  -183,   143,  -183,   256,   222,
      -3,    -8,   -18,  -101,   -39,  -183,  -183,   186,   -33,  -102,
     -90,  -183,  -160,  -183,    22,  -183,  -183,  -183,  -183,  -183,
    -182,  -183,  -183,  -183,  -183,  -183,    51,   -54,   190,    32,
      61,    78,   160,   172,  -183,   -50,   -43,  -108
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      89,    99,    28,    59,   221,    41,    27,   155,    89,   182,
     183,    16,    25,    34,   126,   127,   128,   129,   130,   105,
       1,    54,    37,    16,   124,   113,    10,   197,    35,    36,
     200,     1,    39,   139,   140,   141,    54,     1,    54,     1,
     244,    29,   153,     1,    40,    51,    96,    99,    26,    89,
     112,   103,     9,    49,    89,   111,    52,    39,    38,    50,
     242,    45,    10,   109,   105,   110,    31,    89,   107,     9,
      44,     9,   259,    10,   124,   109,   124,   110,   122,    10,
      48,   252,   266,    54,   233,   201,   202,   203,   183,   191,
     189,    53,   110,   198,    41,   260,   261,   262,    92,    93,
      10,   112,    94,   158,    96,   267,    27,   152,   269,   159,
      94,   218,   142,   143,   190,   118,   120,   121,    89,   125,
     125,   125,   125,   125,   225,   240,   148,   149,   122,   251,
     144,   145,   146,   147,   214,     1,     2,   215,   235,   150,
     151,   115,    89,     3,   116,   232,     2,   131,     4,     5,
     138,     6,     7,     3,     8,   103,   192,     3,     4,     5,
      51,     6,     7,     5,     8,    99,     7,   109,     8,   110,
     193,    42,    89,    43,   204,   205,   186,    10,   194,   225,
     245,   190,   199,   247,   248,   184,   104,   185,   217,   219,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,     3,   220,   206,   207,   208,   209,     5,
     258,   225,     7,    63,     8,   160,   161,   162,   163,   164,
     222,   225,   165,   166,   167,    64,   210,   211,   168,     3,
     223,   169,   157,    65,    66,     5,   226,   189,     7,   110,
       8,   227,   228,   125,   229,    67,   237,   230,   234,    39,
     170,   231,   236,   238,    68,    69,   150,   243,    70,   171,
      71,    72,   241,    73,    74,    75,    76,    63,   246,   160,
     161,   162,   163,   164,   249,   250,   165,   166,   167,    64,
     253,   254,   168,   255,   256,   169,   257,    65,    66,   263,
     264,   265,   132,   133,   134,   268,    30,   106,    95,    67,
      91,   216,   187,    39,   135,   100,   136,   188,    68,    69,
     212,   137,    70,   171,    71,    72,   154,    73,    74,    75,
      76,    63,     2,   213,     0,     0,     0,     0,     0,     3,
       0,     0,     0,    64,     4,     5,     2,     6,     7,     0,
       8,    65,    66,     3,    63,     0,     0,     0,     4,     5,
       0,     6,     7,    67,     8,     0,    64,     0,     0,     0,
       0,     0,    68,    69,    65,    66,    70,    63,    71,    72,
       0,    73,    74,    75,    76,     0,    67,     0,     0,    64,
      97,   239,     0,     0,     0,    68,    69,    65,    66,    70,
      63,    71,    72,     0,    73,    74,    75,    76,     0,    67,
       0,     0,    64,    97,    63,     0,     0,     0,    68,    69,
      65,    66,    70,     0,    71,    72,    64,    73,    74,    75,
      76,     0,    67,     0,    65,    66,     0,    63,     0,     0,
       0,    68,    69,     0,     0,    70,   117,    71,    72,    64,
      73,    74,    75,    76,     0,    68,    69,    65,    66,    70,
       0,    71,    72,     0,    73,    74,    75,    76,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,     0,    70,     0,    71,    72,     0,    73,    74,    75,
      76,     1,     2,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     4,     5,     2,     6,     7,     0,
       8,     0,     0,     3,     0,     0,     0,     0,     4,     5,
       0,     6,     7,     9,     8,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,   189,     0,   110,
       0,     0,     0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      43,    51,    10,    42,   164,    23,     9,    97,    51,   110,
     112,     0,     3,    16,    68,    69,    70,    71,    72,    55,
       3,    38,     3,    12,    67,    58,    45,   135,    17,    18,
     138,     3,    39,    45,    46,    47,    53,     3,    55,     3,
     222,     0,    92,     3,    22,    52,    49,    97,    39,    92,
      58,    54,    35,    43,    97,    58,    34,    39,    39,    49,
     220,     3,    45,    35,   100,    37,    49,   110,    57,    35,
      39,    35,   254,    45,   117,    35,   119,    37,    67,    45,
      36,   241,   264,   100,   185,   139,   140,   141,   190,   122,
      35,    39,    37,   136,   112,   255,   256,   257,    52,    40,
      45,   109,    43,    43,   107,   265,   109,    40,   268,    49,
      43,   161,    50,    51,   122,    64,    65,    66,   161,    68,
      69,    70,    71,    72,   167,   215,    30,    31,   117,   237,
      26,    27,    28,    29,    40,     3,     4,    43,   192,    32,
      33,    36,   185,    11,    43,   184,     4,    38,    16,    17,
      52,    19,    20,    11,    22,   158,    36,    11,    16,    17,
      52,    19,    20,    17,    22,   215,    20,    35,    22,    37,
      36,    35,   215,    37,   142,   143,    34,    45,     3,   222,
     223,   189,     3,   226,   227,    35,    40,    37,    49,    49,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    11,    41,   144,   145,   146,   147,    17,
     253,   254,    20,     3,    22,     5,     6,     7,     8,     9,
      35,   264,    12,    13,    14,    15,   148,   149,    18,    11,
      35,    21,    40,    23,    24,    17,    35,    35,    20,    37,
      22,    35,    49,   192,    36,    35,    43,    36,    36,    39,
      40,    38,    36,    38,    44,    45,    32,    21,    48,    49,
      50,    51,    41,    53,    54,    55,    56,     3,    49,     5,
       6,     7,     8,     9,    36,    38,    12,    13,    14,    15,
      35,    49,    18,    36,    36,    21,    36,    23,    24,    36,
      49,    10,    23,    24,    25,    36,    12,    57,    49,    35,
      44,   158,   116,    39,    35,    53,    37,   117,    44,    45,
     150,    42,    48,    49,    50,    51,    94,    53,    54,    55,
      56,     3,     4,   151,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,     4,    19,    20,    -1,
      22,    23,    24,    11,     3,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    35,    22,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    44,    45,    23,    24,    48,     3,    50,    51,
      -1,    53,    54,    55,    56,    -1,    35,    -1,    -1,    15,
      39,    40,    -1,    -1,    -1,    44,    45,    23,    24,    48,
       3,    50,    51,    -1,    53,    54,    55,    56,    -1,    35,
      -1,    -1,    15,    39,     3,    -1,    -1,    -1,    44,    45,
      23,    24,    48,    -1,    50,    51,    15,    53,    54,    55,
      56,    -1,    35,    -1,    23,    24,    -1,     3,    -1,    -1,
      -1,    44,    45,    -1,    -1,    48,    35,    50,    51,    15,
      53,    54,    55,    56,    -1,    44,    45,    23,    24,    48,
      -1,    50,    51,    -1,    53,    54,    55,    56,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    48,    -1,    50,    51,    -1,    53,    54,    55,
      56,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    16,    17,     4,    19,    20,    -1,
      22,    -1,    -1,    11,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    35,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    11,    16,    17,    19,    20,    22,    35,
      45,    59,    60,    61,    62,    63,    64,    65,    68,    69,
      70,    75,    78,    79,    80,     3,    39,    78,    79,     0,
      61,    49,    66,    67,    78,    64,    64,     3,    39,    39,
      92,    80,    35,    37,    39,     3,    76,    77,    36,    43,
      49,    52,    92,    39,    68,    71,    72,    93,    64,    82,
      83,    84,    85,     3,    15,    23,    24,    35,    44,    45,
      48,    50,    51,    53,    54,    55,    56,    81,   100,   101,
     104,   105,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    76,    52,    40,    43,    67,    78,    39,    88,   113,
      71,    73,    74,    78,    40,    72,    63,    64,    94,    35,
      37,    78,    79,    86,    87,    36,    43,    35,   104,    35,
     104,   104,    64,   106,   114,   104,   105,   105,   105,   105,
     105,    38,    23,    24,    25,    35,    37,    42,    52,    45,
      46,    47,    50,    51,    26,    27,    28,    29,    30,    31,
      32,    33,    40,   113,    77,    88,    89,    40,    43,    49,
       5,     6,     7,     8,     9,    12,    13,    14,    18,    21,
      40,    49,    90,    91,    92,    95,    96,    97,    99,   114,
      82,    86,    81,    87,    35,    37,    34,    85,   106,    35,
      79,    86,    36,    36,     3,   102,   103,   115,   114,     3,
     115,   105,   105,   105,   107,   107,   108,   108,   108,   108,
     109,   109,   110,   111,    40,    43,    74,    49,   113,    49,
      41,    90,    35,    35,    98,   114,    35,    35,    49,    36,
      36,    38,    82,    81,    36,   105,    36,    43,    38,    40,
      88,    41,    90,    21,    98,   114,    49,   114,   114,    36,
      38,   115,    90,    35,    49,    36,    36,    36,   114,    98,
      90,    90,    90,    36,    49,    10,    98,    90,    36,    90
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */
#line 1749 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 287 "kim.y"

int line_no;

void yyerror(const char *s)
{
    printf("yyerror: %s\n",s);
}

void main()
{
    yyparse();
}
