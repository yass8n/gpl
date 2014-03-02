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
     T_INT = 258,
     T_DOUBLE = 259,
     T_STRING = 260,
     T_TRIANGLE = 261,
     T_PIXMAP = 262,
     T_CIRCLE = 263,
     T_RECTANGLE = 264,
     T_TEXTBOX = 265,
     T_FORWARD = 266,
     T_INITIALIZATION = 267,
     T_TRUE = 268,
     T_FALSE = 269,
     T_ON = 270,
     T_SPACE = 271,
     T_LEFTARROW = 272,
     T_RIGHTARROW = 273,
     T_UPARROW = 274,
     T_DOWNARROW = 275,
     T_LEFTMOUSE_DOWN = 276,
     T_MIDDLEMOUSE_DOWN = 277,
     T_RIGHTMOUSE_DOWN = 278,
     T_LEFTMOUSE_UP = 279,
     T_MIDDLEMOUSE_UP = 280,
     T_RIGHTMOUSE_UP = 281,
     T_MOUSE_MOVE = 282,
     T_MOUSE_DRAG = 283,
     T_F1 = 284,
     T_AKEY = 285,
     T_SKEY = 286,
     T_DKEY = 287,
     T_FKEY = 288,
     T_HKEY = 289,
     T_JKEY = 290,
     T_KKEY = 291,
     T_LKEY = 292,
     T_WKEY = 293,
     T_TOUCHES = 294,
     T_NEAR = 295,
     T_ANIMATION = 296,
     T_IF = 297,
     T_FOR = 298,
     T_ELSE = 299,
     T_EXIT = 300,
     T_PRINT = 301,
     T_LPAREN = 302,
     T_RPAREN = 303,
     T_LBRACE = 304,
     T_RBRACE = 305,
     T_LBRACKET = 306,
     T_RBRACKET = 307,
     T_SEMIC = 308,
     T_COMMA = 309,
     T_PERIOD = 310,
     T_ASSIGN = 311,
     T_PLUS_ASSIGN = 312,
     T_MINUS_ASSIGN = 313,
     T_PLUS_PLUS = 314,
     T_MINUS_MINUS = 315,
     T_ASTERISK = 316,
     T_DIVIDE = 317,
     T_MOD = 318,
     T_PLUS = 319,
     T_MINUS = 320,
     T_SIN = 321,
     T_COS = 322,
     T_TAN = 323,
     T_ASIN = 324,
     T_ACOS = 325,
     T_ATAN = 326,
     T_SQRT = 327,
     T_FLOOR = 328,
     T_ABS = 329,
     T_RANDOM = 330,
     T_LESS = 331,
     T_GREATER = 332,
     T_LESS_EQUAL = 333,
     T_GREATER_EQUAL = 334,
     T_EQUAL = 335,
     T_NOT_EQUAL = 336,
     T_AND = 337,
     T_OR = 338,
     T_NOT = 339,
     T_INT_CONSTANT = 340,
     T_ID = 341,
     T_ERROR = 342,
     T_DOUBLE_CONSTANT = 343,
     T_STRING_CONSTANT = 344,
     UNARY_OPS = 345,
     IF_NO_ELSE = 346,
     IF_ELSE = 347
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_DOUBLE 259
#define T_STRING 260
#define T_TRIANGLE 261
#define T_PIXMAP 262
#define T_CIRCLE 263
#define T_RECTANGLE 264
#define T_TEXTBOX 265
#define T_FORWARD 266
#define T_INITIALIZATION 267
#define T_TRUE 268
#define T_FALSE 269
#define T_ON 270
#define T_SPACE 271
#define T_LEFTARROW 272
#define T_RIGHTARROW 273
#define T_UPARROW 274
#define T_DOWNARROW 275
#define T_LEFTMOUSE_DOWN 276
#define T_MIDDLEMOUSE_DOWN 277
#define T_RIGHTMOUSE_DOWN 278
#define T_LEFTMOUSE_UP 279
#define T_MIDDLEMOUSE_UP 280
#define T_RIGHTMOUSE_UP 281
#define T_MOUSE_MOVE 282
#define T_MOUSE_DRAG 283
#define T_F1 284
#define T_AKEY 285
#define T_SKEY 286
#define T_DKEY 287
#define T_FKEY 288
#define T_HKEY 289
#define T_JKEY 290
#define T_KKEY 291
#define T_LKEY 292
#define T_WKEY 293
#define T_TOUCHES 294
#define T_NEAR 295
#define T_ANIMATION 296
#define T_IF 297
#define T_FOR 298
#define T_ELSE 299
#define T_EXIT 300
#define T_PRINT 301
#define T_LPAREN 302
#define T_RPAREN 303
#define T_LBRACE 304
#define T_RBRACE 305
#define T_LBRACKET 306
#define T_RBRACKET 307
#define T_SEMIC 308
#define T_COMMA 309
#define T_PERIOD 310
#define T_ASSIGN 311
#define T_PLUS_ASSIGN 312
#define T_MINUS_ASSIGN 313
#define T_PLUS_PLUS 314
#define T_MINUS_MINUS 315
#define T_ASTERISK 316
#define T_DIVIDE 317
#define T_MOD 318
#define T_PLUS 319
#define T_MINUS 320
#define T_SIN 321
#define T_COS 322
#define T_TAN 323
#define T_ASIN 324
#define T_ACOS 325
#define T_ATAN 326
#define T_SQRT 327
#define T_FLOOR 328
#define T_ABS 329
#define T_RANDOM 330
#define T_LESS 331
#define T_GREATER 332
#define T_LESS_EQUAL 333
#define T_GREATER_EQUAL 334
#define T_EQUAL 335
#define T_NOT_EQUAL 336
#define T_AND 337
#define T_OR 338
#define T_NOT 339
#define T_INT_CONSTANT 340
#define T_ID 341
#define T_ERROR 342
#define T_DOUBLE_CONSTANT 343
#define T_STRING_CONSTANT 344
#define UNARY_OPS 345
#define IF_NO_ELSE 346
#define IF_ELSE 347




/* Copy the first part of user declarations.  */
#line 1 "gpl.y"
  // bison syntax to indicate the start of the header
    // the header is copied directly into y.tab.c

extern int yylex();         // this lexer function returns next token
extern int yyerror(char *); // used to print errors
extern int line_count;      // the current line in the input; from array.l

#include "error.h"      // class for printing errors (used by gpl)
#include "gpl_assert.h" // function version of standard assert.h
#include <sstream>
#include "parser.h"
#include "gpl_type.h"
#include "symbol_table.h"
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
using namespace std;

// use this global variable to store all the values in the array
// add vectors here for additional types

// bison syntax to indicate the end of the header


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
typedef union YYSTYPE
#line 27 "gpl.y"
{
 int                  union_int;
 std::string         *union_string;  // MUST be a pointer to a string (this sucks!)
 double               union_double;
 Gpl_type             union_gpl_type;
 Expression          *union_expression_type;
 Variable            *union_variable_type;
 Operator_type        union_operator_type;
}
/* Line 193 of yacc.c.  */
#line 316 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 329 "y.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    14,    17,    20,    24,
      30,    32,    34,    36,    39,    41,    47,    53,    55,    57,
      59,    61,    63,    65,    67,    71,    73,    77,    84,    87,
      89,    91,    93,    95,    98,    99,   110,   113,   116,   119,
     122,   125,   128,   132,   134,   136,   138,   140,   142,   144,
     146,   148,   150,   152,   154,   156,   158,   160,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   182,   184,   190,
     191,   192,   195,   197,   199,   201,   204,   207,   210,   216,
     224,   238,   243,   248,   252,   256,   260,   262,   267,   271,
     278,   280,   284,   288,   292,   296,   300,   304,   308,   312,
     316,   320,   324,   328,   332,   335,   338,   343,   347,   349,
     351,   353,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    95,   106,    -1,    95,    96,    -1,   130,
      -1,    97,    53,    -1,   100,    53,    -1,   105,    53,    -1,
      98,    86,    99,    -1,    98,    86,    51,    85,    52,    -1,
       3,    -1,     4,    -1,     5,    -1,    56,   127,    -1,   130,
      -1,   101,    86,    47,   102,    48,    -1,   101,    86,    51,
     127,    52,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   103,    -1,   130,    -1,   103,    54,   104,
      -1,   104,    -1,    86,    56,   127,    -1,    11,    41,    86,
      47,   111,    48,    -1,   106,   107,    -1,   130,    -1,   108,
      -1,   109,    -1,   113,    -1,    12,   116,    -1,    -1,    41,
      86,    47,   112,    48,    49,   110,   119,    50,   118,    -1,
     101,    86,    -1,     6,    86,    -1,     7,    86,    -1,     8,
      86,    -1,     9,    86,    -1,    10,    86,    -1,    15,   114,
     116,    -1,    16,    -1,    19,    -1,    20,    -1,    17,    -1,
      18,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    29,    -1,   117,   120,
     118,    -1,   116,    -1,    49,   117,   119,    50,   118,    -1,
      -1,    -1,   119,   120,    -1,   130,    -1,   121,    -1,   122,
      -1,   125,    53,    -1,   123,    53,    -1,   124,    53,    -1,
      42,    47,   127,    48,   115,    -1,    42,    47,   127,    48,
     115,    44,   115,    -1,    43,    47,   117,   125,   118,    53,
     127,    53,   117,   125,   118,    48,   116,    -1,    46,    47,
     127,    48,    -1,    45,    47,   127,    48,    -1,   126,    56,
     127,    -1,   126,    57,   127,    -1,   126,    58,   127,    -1,
      86,    -1,    86,    51,   127,    52,    -1,    86,    55,    86,
      -1,    86,    51,   127,    52,    55,    86,    -1,   128,    -1,
     127,    83,   127,    -1,   127,    82,   127,    -1,   127,    78,
     127,    -1,   127,    79,   127,    -1,   127,    76,   127,    -1,
     127,    77,   127,    -1,   127,    80,   127,    -1,   127,    81,
     127,    -1,   127,    64,   127,    -1,   127,    65,   127,    -1,
     127,    61,   127,    -1,   127,    62,   127,    -1,   127,    63,
     127,    -1,    65,   127,    -1,    84,   127,    -1,   129,    47,
     127,    48,    -1,    47,   127,    48,    -1,   126,    -1,    85,
      -1,    13,    -1,    14,    -1,    88,    -1,    89,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    74,    -1,    73,    -1,    75,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   171,   172,   177,   178,   179,   184,   275,
     306,   311,   316,   324,   328,   337,   338,   343,   344,   345,
     346,   347,   352,   353,   358,   359,   364,   369,   374,   375,
     380,   381,   382,   387,   392,   392,   397,   402,   403,   404,
     405,   406,   411,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   443,   444,   449,   453,
     458,   464,   465,   470,   471,   472,   473,   474,   479,   480,
     485,   490,   495,   500,   501,   502,   507,   511,   515,   516,
     521,   525,   539,   545,   559,   573,   587,   601,   607,   621,
     627,   641,   653,   667,   682,   696,   708,   869,   873,   878,
     883,   887,   891,   895,   911,   916,   920,   924,   928,   932,
     936,   940,   944,   948,   955
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_DOUBLE", "T_STRING",
  "T_TRIANGLE", "T_PIXMAP", "T_CIRCLE", "T_RECTANGLE", "T_TEXTBOX",
  "T_FORWARD", "T_INITIALIZATION", "T_TRUE", "T_FALSE", "T_ON", "T_SPACE",
  "T_LEFTARROW", "T_RIGHTARROW", "T_UPARROW", "T_DOWNARROW",
  "T_LEFTMOUSE_DOWN", "T_MIDDLEMOUSE_DOWN", "T_RIGHTMOUSE_DOWN",
  "T_LEFTMOUSE_UP", "T_MIDDLEMOUSE_UP", "T_RIGHTMOUSE_UP", "T_MOUSE_MOVE",
  "T_MOUSE_DRAG", "T_F1", "T_AKEY", "T_SKEY", "T_DKEY", "T_FKEY", "T_HKEY",
  "T_JKEY", "T_KKEY", "T_LKEY", "T_WKEY", "T_TOUCHES", "T_NEAR",
  "T_ANIMATION", "T_IF", "T_FOR", "T_ELSE", "T_EXIT", "T_PRINT",
  "T_LPAREN", "T_RPAREN", "T_LBRACE", "T_RBRACE", "T_LBRACKET",
  "T_RBRACKET", "T_SEMIC", "T_COMMA", "T_PERIOD", "T_ASSIGN",
  "T_PLUS_ASSIGN", "T_MINUS_ASSIGN", "T_PLUS_PLUS", "T_MINUS_MINUS",
  "T_ASTERISK", "T_DIVIDE", "T_MOD", "T_PLUS", "T_MINUS", "T_SIN", "T_COS",
  "T_TAN", "T_ASIN", "T_ACOS", "T_ATAN", "T_SQRT", "T_FLOOR", "T_ABS",
  "T_RANDOM", "T_LESS", "T_GREATER", "T_LESS_EQUAL", "T_GREATER_EQUAL",
  "T_EQUAL", "T_NOT_EQUAL", "T_AND", "T_OR", "T_NOT", "T_INT_CONSTANT",
  "T_ID", "T_ERROR", "T_DOUBLE_CONSTANT", "T_STRING_CONSTANT", "UNARY_OPS",
  "IF_NO_ELSE", "IF_ELSE", "$accept", "program", "declaration_list",
  "declaration", "variable_declaration", "simple_type",
  "optional_initializer", "object_declaration", "object_type",
  "parameter_list_or_empty", "parameter_list", "parameter",
  "forward_declaration", "block_list", "block", "initialization_block",
  "animation_block", "@1", "animation_parameter",
  "check_animation_parameter", "on_block", "keystroke", "if_block",
  "statement_block", "statement_block_creator", "end_of_statement_block",
  "statement_list", "statement", "if_statement", "for_statement",
  "print_statement", "exit_statement", "assign_statement", "variable",
  "expression", "primary_expression", "math_operator", "empty", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   105,   106,   106,
     107,   107,   107,   108,   110,   109,   111,   112,   112,   112,
     112,   112,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   117,
     118,   119,   119,   120,   120,   120,   120,   120,   121,   121,
     122,   123,   124,   125,   125,   125,   126,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     2,     2,     3,     5,
       1,     1,     1,     2,     1,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     6,     2,     1,
       1,     1,     1,     2,     0,    10,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     5,     0,
       0,     2,     1,     1,     1,     2,     2,     2,     5,     7,
      13,     4,     4,     3,     3,     3,     1,     4,     3,     6,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     124,     0,   124,     4,     1,    10,    11,    12,    17,    18,
      19,    20,    21,     0,     3,     0,     0,     0,     0,     0,
       2,    29,     0,     5,   124,     6,     0,     7,     0,     0,
       0,    28,    30,    31,    32,     0,     0,     0,     8,    14,
     124,     0,    69,    33,    43,    46,    47,    44,    45,    48,
      49,    50,    51,    52,    53,    54,    55,    65,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,   110,   111,     0,     0,   114,   115,   116,   117,   118,
     119,   120,   122,   121,   123,     0,   109,    86,   112,   113,
     108,    13,    90,     0,     0,     0,    22,    25,    23,     0,
     124,    42,     0,     0,     0,     9,     0,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    16,     0,
      72,     0,     0,     0,     0,     0,     0,    36,    27,   107,
       0,    88,   101,   102,   103,    99,   100,    95,    96,    93,
      94,    97,    98,    92,    91,     0,    26,    24,     0,     0,
       0,     0,    70,    71,    73,    74,     0,     0,     0,     0,
      37,    38,    39,    40,    41,     0,    87,   106,     0,    69,
       0,     0,    68,    76,    77,    75,     0,     0,     0,    34,
       0,     0,     0,     0,     0,    83,    84,    85,   124,    89,
      69,    70,    82,    81,     0,    78,    67,     0,     0,    70,
      69,    70,     0,    35,    79,    66,     0,    69,     0,    70,
       0,     0,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    14,    15,    16,    38,    17,    18,    95,
      96,    97,    19,    20,    31,    32,    33,   198,   104,   136,
      34,    67,   205,   206,   207,   182,   129,   163,   164,   165,
     166,   167,   168,    90,    91,    92,    93,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
    -178,     9,   255,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,   -13,  -178,    -6,   -55,    10,   -53,    18,
      -9,  -178,   -46,  -178,   -29,  -178,   -22,  -178,    13,   337,
       7,  -178,  -178,  -178,  -178,    50,    11,    93,  -178,  -178,
       8,    93,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,    13,    51,    49,
      48,  -178,  -178,    93,    93,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,    93,  -178,   -25,  -178,  -178,
    -178,   315,  -178,    54,    58,    56,    61,  -178,  -178,   215,
    -178,  -178,    82,    17,    57,  -178,    47,   315,   315,    93,
      35,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,  -178,     8,  -178,   -38,
    -178,    36,    59,    60,    69,    70,    95,  -178,  -178,  -178,
     238,  -178,  -178,  -178,  -178,   -19,   -19,    89,    89,    89,
      89,   247,   247,   -12,    55,   122,   315,  -178,    97,   110,
     124,   125,  -178,  -178,  -178,  -178,   116,   121,   127,   -20,
    -178,  -178,  -178,  -178,  -178,   126,   133,  -178,    93,  -178,
      93,    93,  -178,  -178,  -178,  -178,    93,    93,    93,  -178,
     103,   146,   104,   169,   192,   315,   315,   315,  -178,  -178,
      13,  -178,  -178,  -178,   -32,   147,  -178,   -26,   139,  -178,
      13,  -178,    93,  -178,  -178,  -178,   269,  -178,   104,  -178,
     148,    13,  -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   128,  -178,
    -178,    68,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,    -4,   -28,   -41,   198,    14,     6,  -178,  -178,
    -178,  -178,  -177,  -105,   -39,  -178,  -178,    21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,   100,    99,    28,   158,   159,    29,   160,   161,     4,
     158,   159,   162,   160,   161,   201,   158,   159,   209,   160,
     161,     3,    36,    21,   169,    40,   109,    37,    22,    41,
     110,    24,    30,    26,   106,   107,   186,   187,   188,   101,
      35,   219,   111,   112,   113,    39,   108,    23,    87,   111,
     112,   113,   114,   115,    87,     8,     9,    10,    11,    12,
      87,    98,    42,    25,   116,   117,   118,   119,   120,   121,
     140,    27,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   169,   131,   132,
     133,   134,   135,    68,    94,   139,    70,    69,   102,   169,
     105,   124,   169,   137,   126,   138,    71,    72,   111,   112,
     113,   114,   115,   169,   125,   127,   111,   112,   113,   114,
     115,   141,   170,   116,   117,   118,   119,   120,   121,   122,
     123,   116,   117,   118,   119,   120,   121,   122,   192,   191,
      73,   193,   194,   175,   178,   171,   172,   195,   196,   197,
     111,   112,   113,   114,   115,   173,   174,   179,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   183,
     177,   180,   181,   216,   184,   189,   218,    85,    86,    87,
     185,    88,    89,   111,   112,   113,   114,   115,   190,   199,
      87,   210,   212,   222,   200,   157,   221,   103,   116,   117,
     118,   119,   120,   121,   122,   123,   214,   111,   112,   113,
     114,   115,   204,   211,     0,     0,     0,   202,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
     111,   112,   113,   114,   115,     0,     0,     0,     0,     0,
     203,     0,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   111,   112,   113,   114,   115,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   128,   116,   117,
     118,   119,   120,   121,   122,   123,   111,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   116,   117,   118,   119,   120,   121,   122,   123,   111,
     112,   113,   114,   115,     0,     0,     0,     0,   111,   112,
     113,   114,   115,     0,   116,   117,   118,   119,   120,   121,
     122,   123,   217,   116,   117,   118,   119,     0,     0,     0,
     111,   112,   113,   114,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,   111,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,   122,   123,   208,
       0,     0,     0,     0,     0,     0,     0,   213,     0,   215,
       0,     0,     0,     0,     0,     0,     0,   220
};

static const yytype_int16 yycheck[] =
{
      28,    42,    41,    12,    42,    43,    15,    45,    46,     0,
      42,    43,    50,    45,    46,   192,    42,    43,    50,    45,
      46,     0,    51,     2,   129,    47,    51,    56,    41,    51,
      55,    86,    41,    86,    73,    74,    56,    57,    58,    67,
      86,   218,    61,    62,    63,    24,    85,    53,    86,    61,
      62,    63,    64,    65,    86,     6,     7,     8,     9,    10,
      86,    40,    49,    53,    76,    77,    78,    79,    80,    81,
     109,    53,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   192,     6,     7,
       8,     9,    10,    86,    86,    48,    85,    47,    47,   204,
      52,    47,   207,    86,    48,    48,    13,    14,    61,    62,
      63,    64,    65,   218,    56,    54,    61,    62,    63,    64,
      65,    86,    86,    76,    77,    78,    79,    80,    81,    82,
      83,    76,    77,    78,    79,    80,    81,    82,   179,   178,
      47,   180,   181,    48,    47,    86,    86,   186,   187,   188,
      61,    62,    63,    64,    65,    86,    86,    47,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    53,
      48,    47,    47,   212,    53,    49,   217,    84,    85,    86,
      53,    88,    89,    61,    62,    63,    64,    65,    55,    86,
      86,    44,    53,   221,    48,   127,    48,    69,    76,    77,
      78,    79,    80,    81,    82,    83,   210,    61,    62,    63,
      64,    65,   198,   207,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    61,    62,    63,    64,    65,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    52,    76,    77,
      78,    79,    80,    81,    82,    83,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    76,    77,    78,    79,    80,    81,    82,    83,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    53,    76,    77,    78,    79,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,    95,   130,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    96,    97,    98,   100,   101,   105,
     106,   130,    41,    53,    86,    53,    86,    53,    12,    15,
      41,   107,   108,   109,   113,    86,    51,    56,    99,   130,
      47,    51,    49,   116,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   114,    86,    47,
      85,    13,    14,    47,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    84,    85,    86,    88,    89,
     126,   127,   128,   129,    86,   102,   103,   104,   130,   127,
     117,   116,    47,   101,   111,    52,   127,   127,   127,    51,
      55,    61,    62,    63,    64,    65,    76,    77,    78,    79,
      80,    81,    82,    83,    47,    56,    48,    54,    52,   119,
     130,     6,     7,     8,     9,    10,   112,    86,    48,    48,
     127,    86,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   104,    42,    43,
      45,    46,    50,   120,   121,   122,   123,   124,   125,   126,
      86,    86,    86,    86,    86,    48,    52,    48,    47,    47,
      47,    47,   118,    53,    53,    53,    56,    57,    58,    49,
      55,   127,   117,   127,   127,   127,   127,   127,   110,    86,
      48,   125,    48,    48,   119,   115,   116,   117,   118,    50,
      44,   120,    53,   118,   115,   118,   127,    53,   117,   125,
     118,    48,   116
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
        case 8:
#line 185 "gpl.y"
    {
Expression *error_exp = new Expression();
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *(yyvsp[(2) - (3)].union_string);
     if (sym_table->lookup(id))
     {
          if ((yyvsp[(3) - (3)].union_expression_type) != NULL)
          {
string ts;
double td;
int ti;
          int type = (yyvsp[(3) - (3)].union_expression_type)->get_type();
          cout << type << " is the type " << endl;
           if (type == 1)
              ti = (yyvsp[(3) - (3)].union_expression_type)->eval_int();
           if (type == 2)
              td = (yyvsp[(3) - (3)].union_expression_type)->eval_double();
           if (type == 4)
              ts = (yyvsp[(3) - (3)].union_expression_type)->eval_string();
             

          if ((yyvsp[(1) - (3)].union_gpl_type) == INT)//put into symbol table
          {
             int initial_value = 0;
             if (type == 1)
	     initial_value = (int)ti;
             if (type == 2)
             initial_value = (int)td;
             //if (type == 4)
             //int initial_value = (int)ts;
            Symbol *sym = new Symbol();
            (*sym).set(id, "INT", initial_value, 0, "");
            sym_table->set(id, *sym);
          }
           if ((yyvsp[(1) - (3)].union_gpl_type) == DOUBLE)//put into symbol table
          {
             double initial_value = 0.0;
             if (type == 1)
             initial_value = (double)ti;
             if (type == 2)
             initial_value = (double)td;
             //if (type == 4)
             //initial_value = (double)ts;
           Symbol *sym = new Symbol();
           (*sym).set(id, "DOUBLE", 0, initial_value, "");
           sym_table->set(id, *sym);
          }
           if ((yyvsp[(1) - (3)].union_gpl_type) == STRING)//put into symbol table
          {
             stringstream initial;
             if (type == 1)
             initial << ti;
             if (type == 2)
             initial << td;
             if (type == 4)
             initial  << ts;
             string initial_value = initial.str();
           Symbol *sym = new Symbol();
           (*sym).set(id, "STRING", 0, 0, initial_value);
           sym_table->set(id, *sym);
          }
         }
        else{

           if ((yyvsp[(1) - (3)].union_gpl_type) == INT)
           {
           Symbol *sym = new Symbol();
           (*sym).set(id, "INT", 0, 0, "");
           sym_table->set(id, *sym);
           }
           if ((yyvsp[(1) - (3)].union_gpl_type) == DOUBLE)
           {
           Symbol *sym = new Symbol();
           (*sym).set(id, "DOUBLE", 0, 0, "");
           sym_table->set(id, *sym);
           }
           if ((yyvsp[(1) - (3)].union_gpl_type) == STRING)
           {
           Symbol *sym = new Symbol();
           (*sym).set(id, "STRING", 0, 0, "");
           sym_table->set(id, *sym);
           }
         }
       }
     else {

      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    break;

  case 9:
#line 277 "gpl.y"
    {
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *(yyvsp[(2) - (5)].union_string);

     if (sym_table->lookup(id))
     {
       for (int i = 0; i < (yyvsp[(4) - (5)].union_int); i++)
       {
        ostringstream name;
        name << id  << '[' << i << ']';
        Symbol * sym = new Symbol();
        if ((yyvsp[(1) - (5)].union_gpl_type) == INT)
        (*sym).set(name.str(), "INT", 42, 3.145, "Hello world");
        if ((yyvsp[(1) - (5)].union_gpl_type) == DOUBLE)
        (*sym).set(name.str(), "DOUBLE", 42, 3.145, "Hello world");
        if ((yyvsp[(1) - (5)].union_gpl_type) == STRING)
        (*sym).set(name.str(), "STRING", 42, 3.145, "Hello world");
        sym_table->set(name.str(), *sym);
       }
      sym_table->insert_in_vector(id);
     }
     else {
      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    break;

  case 10:
#line 307 "gpl.y"
    {
     (yyval.union_gpl_type) = INT;
    }
    break;

  case 11:
#line 312 "gpl.y"
    {
     (yyval.union_gpl_type) = DOUBLE;
    }
    break;

  case 12:
#line 317 "gpl.y"
    {
     (yyval.union_gpl_type) = STRING;
    }
    break;

  case 13:
#line 325 "gpl.y"
    {
    (yyval.union_expression_type) = (yyvsp[(2) - (2)].union_expression_type);
}
    break;

  case 14:
#line 329 "gpl.y"
    {
cout << "it  NULL" << endl;
   (yyval.union_expression_type) = NULL;
}
    break;

  case 34:
#line 392 "gpl.y"
    { }
    break;

  case 86:
#line 508 "gpl.y"
    {
      (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (1)].union_string));
}
    break;

  case 87:
#line 512 "gpl.y"
    {
      //$$ = new Variable(*$1, $3);
}
    break;

  case 90:
#line 522 "gpl.y"
    {
    (yyval.union_expression_type) = (yyvsp[(1) - (1)].union_expression_type);
}
    break;

  case 91:
#line 526 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to OR strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(OR, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 92:
#line 540 "gpl.y"
    {
       {
           (yyval.union_expression_type) = new Expression(AND, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 93:
#line 546 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to less then strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(LESS_THAN_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 94:
#line 560 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to GREATER_THAN_EQUAL strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 95:
#line 574 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to LESS_THAN strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(LESS_THAN, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 96:
#line 588 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to GREATER strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(GREATER_THAN, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 97:
#line 602 "gpl.y"
    {
       {
           (yyval.union_expression_type) = new Expression(EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 98:
#line 608 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to NOT_EQUAL strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(NOT_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 99:
#line 622 "gpl.y"
    {
          {
              (yyval.union_expression_type) = new Expression(PLUS, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }
}
    break;

  case 100:
#line 628 "gpl.y"
    {
        int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
        int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      if (type1 == 4 || type3 == 4)
          {
            cout << " error..trying to subtract strings " << endl;
            (yyval.union_expression_type) = new Expression(0); 
          }
      else
          {
              (yyval.union_expression_type) = new Expression(MINUS, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }
}
    break;

  case 101:
#line 642 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
      {
         cout << " error..trying to multiply strings " << endl;
         (yyval.union_expression_type) = new Expression(0); 
      }
    else
         (yyval.union_expression_type) = new Expression(MULTIPLY, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
}
    break;

  case 102:
#line 654 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to divide strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(DIVIDE, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 103:
#line 668 "gpl.y"
    {
      int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
      int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (type1 == 4 || type3 == 4)
       {
           cout << " error..trying to MOD strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(MOD, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 104:
#line 683 "gpl.y"
    {
     cout << "matched MINUS" << endl;
       int type = (yyvsp[(2) - (2)].union_expression_type)->get_type();
       if (type == 4)
       {
           cout << " error..trying to UNARY_MINUS strings " << endl;
           (yyval.union_expression_type) = new Expression(0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(UNARY_MINUS, (yyvsp[(2) - (2)].union_expression_type));
       }
}
    break;

  case 105:
#line 697 "gpl.y"
    {
     cout << "matched NOT" << endl;
     int type = (yyvsp[(2) - (2)].union_expression_type)->get_type();
     if (type == 4)
       {
          cout << " error..trying to NOT strings " << endl;
          (yyval.union_expression_type) = new Expression(0); 
       }
     else
          (yyval.union_expression_type) = new Expression(NOT, (yyvsp[(2) - (2)].union_expression_type));
}
    break;

  case 106:
#line 709 "gpl.y"
    {
       if ((yyvsp[(1) - (4)].union_operator_type) == SIN)
        {
       cout << "matched SIN" << endl;
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == 4)
            { 
               cout << "error...trying to get SIN of string" << endl;
               (yyval.union_expression_type) = new Expression(0);
            }
       else 
            { 
            (yyval.union_expression_type) = new Expression(SIN, (yyvsp[(3) - (4)].union_expression_type));
            }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == COS)
        {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
             if (type == 4)
               { 
                cout << "error...trying to get SIN of string" << endl;
                (yyval.union_expression_type) = new Expression(0);
               }
             else 
            { 
                (yyval.union_expression_type) = new Expression(COS, (yyvsp[(3) - (4)].union_expression_type));
               }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == TAN)
       {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == 4)
           { 
            cout << "error...trying to get SIN of string" << endl;
            (yyval.union_expression_type) = new Expression(0);
           }
           else 
           { 
             (yyval.union_expression_type) = new Expression(TAN, (yyvsp[(3) - (4)].union_expression_type));
           }
       }
       if ((yyvsp[(1) - (4)].union_operator_type) == ASIN)
       {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == 4)
            { 
              cout << "error...trying to get SIN of string" << endl;
              (yyval.union_expression_type) = new Expression(0);
            }
           else 
            { 
              (yyval.union_expression_type) = new Expression(ASIN, (yyvsp[(3) - (4)].union_expression_type));
            }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == ACOS)
         {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == 4)
            { 
           cout << "error...trying to get SIN of string" << endl;
              (yyval.union_expression_type) = new Expression(0);
            }
            else 
            { 
              (yyval.union_expression_type) = new Expression(ACOS, (yyvsp[(3) - (4)].union_expression_type));
            }
         }
       if ((yyvsp[(1) - (4)].union_operator_type) == ATAN)
         {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == 4)
            { 
              cout << "error...trying to get SIN of string" << endl;
              (yyval.union_expression_type) = new Expression(0);
            }
           else 
            { 
              (yyval.union_expression_type) = new Expression(ATAN, (yyvsp[(3) - (4)].union_expression_type));
            }
          }
       if ((yyvsp[(1) - (4)].union_operator_type) == SQRT)
         {
          int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
          if (type == 4)
          { 
            cout << "error...trying to get SIN of string" << endl;
            (yyval.union_expression_type) = new Expression(0);
          }
          else 
          { 
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == 1)
            {
                if ((yyvsp[(3) - (4)].union_expression_type)->eval_int() < 0)
                 {
                  cout << "error..trying to sqrt a neg number" << endl;
                  (yyval.union_expression_type) = new Expression(0);
                 }
                else
                {
                  (yyval.union_expression_type) = new Expression(SQRT, (yyvsp[(3) - (4)].union_expression_type));
                }
           }
           if (type == 2)
           {
              if ((yyvsp[(3) - (4)].union_expression_type)->eval_double() < 0)
                {
                  cout << "error..trying to sqrt a neg number" << endl;
                  (yyval.union_expression_type) = new Expression(0);
                }
              else
                   (yyval.union_expression_type) = new Expression(SQRT, (yyvsp[(3) - (4)].union_expression_type));
                 }
              }
         }
         if ((yyvsp[(1) - (4)].union_operator_type) == FLOOR)
         {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == 4)
            { 
                cout << "error...trying to get SIN of string" << endl;
                (yyval.union_expression_type) = new Expression(0);
            }
           else 
            { 
             (yyval.union_expression_type) = new Expression(FLOOR, (yyvsp[(3) - (4)].union_expression_type));
            }
         }
         if ((yyvsp[(1) - (4)].union_operator_type) == ABS)
         {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == 4)
             { 
                cout << "error...trying to get SIN of string" << endl;
                (yyval.union_expression_type) = new Expression(0);
             }
            else 
             { 
               (yyval.union_expression_type) = new Expression(ABS, (yyvsp[(3) - (4)].union_expression_type));
             }
         }
          if ((yyvsp[(1) - (4)].union_operator_type) == RANDOM)
             {
                int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
                if (type == 4)
                 { 
                    cout << "error...trying to get SIN of string" << endl;
                    (yyval.union_expression_type) = new Expression(0);
                 }
                else 
                 { 
                    (yyval.union_expression_type) = new Expression(RANDOM, (yyvsp[(3) - (4)].union_expression_type));
                 }
             }
}
    break;

  case 107:
#line 870 "gpl.y"
    {
    (yyval.union_expression_type) = (yyvsp[(2) - (3)].union_expression_type);
}
    break;

  case 108:
#line 874 "gpl.y"
    {
    cout << "MATCHED VARIABLE" << endl;
    (yyval.union_expression_type) = new Expression((yyvsp[(1) - (1)].union_variable_type));
}
    break;

  case 109:
#line 879 "gpl.y"
    {
cout << "matched INT BELOW" << endl;
    (yyval.union_expression_type) = new Expression(INT, (yyvsp[(1) - (1)].union_int));
}
    break;

  case 110:
#line 884 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression();
}
    break;

  case 111:
#line 888 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression();
}
    break;

  case 112:
#line 892 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(DOUBLE, (yyvsp[(1) - (1)].union_double));
}
    break;

  case 113:
#line 896 "gpl.y"
    {
cout << "matched STRING BELOW" << endl;
    (yyval.union_expression_type) = new Expression(STRING, *(yyvsp[(1) - (1)].union_string));
}
    break;

  case 114:
#line 912 "gpl.y"
    {
cout << "matched SIN BELOW" << endl;
   (yyval.union_operator_type) = SIN;
}
    break;

  case 115:
#line 917 "gpl.y"
    {  
    (yyval.union_operator_type) = COS;
}
    break;

  case 116:
#line 921 "gpl.y"
    { 
    (yyval.union_operator_type) = TAN;
}
    break;

  case 117:
#line 925 "gpl.y"
    { 
    (yyval.union_operator_type) = ASIN;
}
    break;

  case 118:
#line 929 "gpl.y"
    {
    (yyval.union_operator_type) = ACOS;
}
    break;

  case 119:
#line 933 "gpl.y"
    {
    (yyval.union_operator_type) = ATAN;
}
    break;

  case 120:
#line 937 "gpl.y"
    {
    (yyval.union_operator_type) = SQRT;
}
    break;

  case 121:
#line 941 "gpl.y"
    {
     (yyval.union_operator_type) = ABS;
}
    break;

  case 122:
#line 945 "gpl.y"
    {
     (yyval.union_operator_type) = FLOOR;
}
    break;

  case 123:
#line 949 "gpl.y"
    {
    (yyval.union_operator_type) = RANDOM;
}
    break;


/* Line 1267 of yacc.c.  */
#line 2484 "y.tab.c"
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



