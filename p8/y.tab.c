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
     IF_NO_ELSE = 345,
     IF_ELSE = 346,
     UNARY_OPS = 347
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
#define IF_NO_ELSE 345
#define IF_ELSE 346
#define UNARY_OPS 347




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
# include "game_object.h"
# include "rectangle.h"
# include "triangle.h"
# include "pixmap.h"
# include "circle.h"
# include "textbox.h"
# include "animation_block.h"
# include "statement.h"
# include "print.h"
# include "assign.h"
# include "exit.h"
# include "if.h"
# include "for.h"
# include "statement_block.h"
# include <stack>
# include "window.h"
# include "event_manager.h"
using namespace std;

// use this global variable to store all the values in the array
// add vectors here for additional types
Game_object* cur_object;
string name_of_object = "";
stack <Statement_block*> statement_stack;
vector <string> vector_of_forward_animation_names;
vector <string> vector_of_animation_names;
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
#line 48 "gpl.y"
{
 int                  union_int;
 std::string         *union_string;  // MUST be a pointer to a string (this sucks!)
 double               union_double;
 Gpl_type             union_gpl_type;
 Statement_block     *union_statementblock_type;
 Statement           *union_statement_type;
 Expression          *union_expression_type;
 Variable            *union_variable_type;
 Symbol              *union_symbol_type;
 Operator_type        union_operator_type;
// Keystroke            union_keystroke_type;
}
/* Line 193 of yacc.c.  */
#line 341 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 354 "y.tab.c"

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
#define YYLAST   436

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  228

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
      30,    32,    34,    36,    39,    41,    42,    49,    55,    57,
      59,    61,    63,    65,    67,    69,    73,    75,    79,    86,
      89,    91,    93,    95,    97,   100,   101,   112,   115,   118,
     121,   124,   127,   130,   134,   136,   138,   140,   142,   144,
     146,   148,   150,   152,   154,   156,   158,   160,   162,   164,
     166,   168,   170,   172,   174,   176,   178,   180,   184,   186,
     192,   193,   194,   197,   199,   201,   203,   206,   209,   212,
     218,   226,   240,   245,   250,   254,   258,   262,   264,   269,
     273,   280,   282,   286,   290,   294,   298,   302,   306,   310,
     314,   318,   322,   326,   330,   334,   337,   340,   345,   349,
     353,   355,   357,   359,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   383,   385,   387,   389
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,    95,   107,    -1,    95,    96,    -1,   132,
      -1,    97,    53,    -1,   100,    53,    -1,   106,    53,    -1,
      98,    86,    99,    -1,    98,    86,    51,   128,    52,    -1,
       3,    -1,     4,    -1,     5,    -1,    56,   128,    -1,   132,
      -1,    -1,   102,    86,   101,    47,   103,    48,    -1,   102,
      86,    51,   128,    52,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,   104,    -1,   132,    -1,   104,
      54,   105,    -1,   105,    -1,    86,    56,   128,    -1,    11,
      41,    86,    47,   112,    48,    -1,   107,   108,    -1,   132,
      -1,   109,    -1,   110,    -1,   114,    -1,    12,   117,    -1,
      -1,    41,    86,    47,   113,    48,    49,   111,   120,    50,
     119,    -1,   102,    86,    -1,     6,    86,    -1,     7,    86,
      -1,     8,    86,    -1,     9,    86,    -1,    10,    86,    -1,
      15,   115,   117,    -1,    16,    -1,    19,    -1,    20,    -1,
      17,    -1,    18,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    29,    -1,
     118,   121,   119,    -1,   117,    -1,    49,   118,   120,    50,
     119,    -1,    -1,    -1,   120,   121,    -1,   132,    -1,   122,
      -1,   123,    -1,   126,    53,    -1,   124,    53,    -1,   125,
      53,    -1,    42,    47,   128,    48,   116,    -1,    42,    47,
     128,    48,   116,    44,   116,    -1,    43,    47,   118,   126,
     119,    53,   128,    53,   118,   126,   119,    48,   117,    -1,
      46,    47,   128,    48,    -1,    45,    47,   128,    48,    -1,
     127,    56,   128,    -1,   127,    57,   128,    -1,   127,    58,
     128,    -1,    86,    -1,    86,    51,   128,    52,    -1,    86,
      55,    86,    -1,    86,    51,   128,    52,    55,    86,    -1,
     129,    -1,   128,    83,   128,    -1,   128,    82,   128,    -1,
     128,    78,   128,    -1,   128,    79,   128,    -1,   128,    76,
     128,    -1,   128,    77,   128,    -1,   128,    80,   128,    -1,
     128,    81,   128,    -1,   128,    64,   128,    -1,   128,    65,
     128,    -1,   128,    61,   128,    -1,   128,    62,   128,    -1,
     128,    63,   128,    -1,    65,   128,    -1,    84,   128,    -1,
     131,    47,   128,    48,    -1,   127,   130,   127,    -1,    47,
     128,    48,    -1,   127,    -1,    85,    -1,    13,    -1,    14,
      -1,    88,    -1,    89,    -1,    39,    -1,    40,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    74,    -1,    73,    -1,    75,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   210,   210,   233,   234,   239,   240,   241,   246,   337,
     403,   408,   413,   421,   425,   434,   433,   454,   529,   533,
     537,   541,   545,   553,   554,   559,   560,   565,   648,   683,
     684,   689,   690,   691,   696,   707,   706,   749,   770,   771,
     772,   773,   774,   779,   789,   793,   797,   801,   805,   809,
     813,   817,   821,   825,   829,   833,   837,   841,   845,   849,
     853,   857,   861,   865,   869,   873,   877,   885,   889,   897,
     907,   916,   925,   926,   931,   932,   933,   934,   935,   940,
     948,   959,   972,   987,  1005,  1044,  1082,  1126,  1130,  1165,
    1198,  1242,  1246,  1274,  1302,  1317,  1332,  1347,  1362,  1377,
    1392,  1407,  1436,  1464,  1492,  1521,  1540,  1559,  1714,  1736,
    1740,  1744,  1748,  1752,  1756,  1760,  1769,  1773,  1781,  1785,
    1789,  1793,  1797,  1801,  1805,  1809,  1813,  1817,  1824
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
  "T_ID", "T_ERROR", "T_DOUBLE_CONSTANT", "T_STRING_CONSTANT",
  "IF_NO_ELSE", "IF_ELSE", "UNARY_OPS", "$accept", "program",
  "declaration_list", "declaration", "variable_declaration", "simple_type",
  "optional_initializer", "object_declaration", "@1", "object_type",
  "parameter_list_or_empty", "parameter_list", "parameter",
  "forward_declaration", "block_list", "block", "initialization_block",
  "animation_block", "@2", "animation_parameter",
  "check_animation_parameter", "on_block", "keystroke", "if_block",
  "statement_block", "statement_block_creator", "end_of_statement_block",
  "statement_list", "statement", "if_statement", "for_statement",
  "print_statement", "exit_statement", "assign_statement", "variable",
  "expression", "primary_expression", "geometric_operator",
  "math_operator", "empty", 0
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
      98,    98,    98,    99,    99,   101,   100,   100,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   106,   107,
     107,   108,   108,   108,   109,   111,   110,   112,   113,   113,
     113,   113,   113,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     118,   119,   120,   120,   121,   121,   121,   121,   121,   122,
     122,   123,   124,   125,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     2,     2,     3,     5,
       1,     1,     1,     2,     1,     0,     6,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     6,     2,
       1,     1,     1,     1,     2,     0,    10,     2,     2,     2,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     5,
       0,     0,     2,     1,     1,     1,     2,     2,     2,     5,
       7,    13,     4,     4,     3,     3,     3,     1,     4,     3,
       6,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     4,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     128,     0,   128,     4,     1,    10,    11,    12,    18,    19,
      20,    21,    22,     0,     3,     0,     0,     0,     0,     0,
       2,    30,     0,     5,   128,     6,    15,     7,     0,     0,
       0,    29,    31,    32,    33,     0,     0,     0,     8,    14,
       0,     0,    70,    34,    44,    47,    48,    45,    46,    49,
      50,    51,    52,    53,    54,    55,    56,    66,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
     112,   113,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   126,   125,   127,     0,   111,    87,   114,   115,   110,
       0,    91,     0,    13,     0,   128,   128,    43,     0,     0,
       0,     0,   105,   106,     0,     0,   116,   117,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,    23,    26,    24,
       0,    73,     0,     0,     0,     0,     0,     0,    37,    28,
     109,     0,    89,   108,   102,   103,   104,   100,   101,    96,
      97,    94,    95,    98,    99,    93,    92,     0,     0,    16,
       0,     0,     0,     0,     0,    71,    72,    74,    75,     0,
       0,     0,     0,    38,    39,    40,    41,    42,     0,    88,
     107,    27,    25,     0,    70,     0,     0,    69,    77,    78,
      76,     0,     0,     0,    35,     0,     0,     0,     0,     0,
      84,    85,    86,   128,    90,    70,    71,    83,    82,     0,
      79,    68,     0,     0,    71,    70,    71,     0,    36,    80,
      67,     0,    70,     0,    71,     0,     0,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    14,    15,    16,    38,    17,    41,    18,
     126,   127,   128,    19,    20,    31,    32,    33,   203,   100,
     137,    34,    67,   210,   211,   212,   187,   130,   166,   167,
     168,   169,   170,   171,    89,    90,    91,   108,    92,   131
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -192
static const yytype_int16 yypact[] =
{
    -192,    13,   125,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,   -18,  -192,   -13,   -48,   -11,   -39,    -3,
       2,  -192,   -16,  -192,   -41,  -192,     7,  -192,    20,   375,
     -14,  -192,  -192,  -192,  -192,    26,    99,    99,  -192,  -192,
      99,    41,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,    20,    42,    47,
    -192,  -192,    99,    99,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,    99,  -192,   -31,  -192,  -192,    21,
     230,  -192,    43,   353,   253,    12,  -192,  -192,    57,    15,
      51,   114,  -192,  -192,    99,    16,  -192,  -192,    17,  -192,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,  -192,    35,    58,    60,  -192,  -192,
     -34,  -192,    19,    29,    30,    31,    33,    72,  -192,  -192,
    -192,   276,  -192,  -192,  -192,  -192,  -192,   -17,   -17,   143,
     143,   143,   143,    32,    32,    62,   285,   138,    99,  -192,
      12,    74,    90,    98,   101,  -192,  -192,  -192,  -192,   100,
     105,   106,   -23,  -192,  -192,  -192,  -192,  -192,   102,    97,
    -192,   353,  -192,    99,  -192,    99,    99,  -192,  -192,  -192,
    -192,    99,    99,    99,  -192,    68,   161,    17,   184,   207,
     353,   353,   353,  -192,  -192,    20,  -192,  -192,  -192,   -24,
     116,  -192,   -15,   108,  -192,    20,  -192,    99,  -192,  -192,
    -192,   307,  -192,    17,  -192,   115,    20,  -192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   111,
    -192,  -192,    50,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,   -26,   -28,   -40,  -165,     8,     0,  -192,
    -192,  -192,  -192,  -191,  -105,   -36,  -192,  -192,  -192,     5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,    93,    96,   143,    94,     3,   206,    21,   161,   162,
      36,   163,   164,     4,    28,    37,   165,    29,   161,   162,
     104,   163,   164,    22,   105,   172,   214,   161,   162,    39,
     163,   164,   224,   191,   192,   193,   101,   102,    24,    97,
      23,   213,    25,    30,   110,   111,   112,    26,   103,   218,
      27,   220,    86,     8,     9,    10,    11,    12,    40,   225,
     106,   107,    86,   132,   133,   134,   135,   136,   141,    42,
      35,    86,    68,    69,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,    95,    98,
     123,   158,   172,   110,   111,   112,   113,   114,   125,   139,
     129,   138,   142,    86,   172,   173,   159,   172,   115,   116,
     117,   118,    70,    71,   160,   174,   175,   176,   172,   177,
     178,   183,   181,   110,   111,   112,   113,   114,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   184,   115,   116,
     117,   118,   119,   120,   197,   185,    72,   196,   186,   198,
     199,   194,   195,   188,   204,   200,   201,   202,   189,   190,
     215,   217,   140,   226,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   110,   111,   112,   113,   114,
      99,   221,   223,    84,    85,    86,   180,    87,    88,   219,
     115,   116,   117,   118,   119,   120,   121,   122,   227,   110,
     111,   112,   113,   114,   110,   111,   112,   113,   114,   205,
     182,   209,   216,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   110,   111,   112,   113,   114,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   110,   111,   112,   113,   114,
       0,     0,     0,     0,     0,   208,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   110,   111,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   115,   116,   117,   118,   119,   120,   121,
     122,   110,   111,   112,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   115,   116,   117,   118,
     119,   120,   121,   122,   110,   111,   112,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,   115,
     116,   117,   118,   119,   120,   121,   122,   110,   111,   112,
     113,   114,     0,     0,     0,     0,   110,   111,   112,   113,
     114,     0,   115,   116,   117,   118,   119,   120,   121,   122,
     222,   115,   116,   117,   118,   119,   120,   121,   110,   111,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   110,   111,   112,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,   120,   121,   122
};

static const yytype_int16 yycheck[] =
{
      28,    37,    42,   108,    40,     0,   197,     2,    42,    43,
      51,    45,    46,     0,    12,    56,    50,    15,    42,    43,
      51,    45,    46,    41,    55,   130,    50,    42,    43,    24,
      45,    46,   223,    56,    57,    58,    72,    73,    86,    67,
      53,   206,    53,    41,    61,    62,    63,    86,    84,   214,
      53,   216,    86,     6,     7,     8,     9,    10,    51,   224,
      39,    40,    86,     6,     7,     8,     9,    10,   104,    49,
      86,    86,    86,    47,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    47,    47,
      47,    56,   197,    61,    62,    63,    64,    65,    86,    48,
      95,    86,    86,    86,   209,    86,    48,   212,    76,    77,
      78,    79,    13,    14,    54,    86,    86,    86,   223,    86,
      48,    47,   158,    61,    62,    63,    64,    65,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    47,    76,    77,
      78,    79,    80,    81,   184,    47,    47,   183,    47,   185,
     186,    49,    55,    53,    86,   191,   192,   193,    53,    53,
      44,    53,    48,    48,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    61,    62,    63,    64,    65,
      69,   217,   222,    84,    85,    86,    48,    88,    89,   215,
      76,    77,    78,    79,    80,    81,    82,    83,   226,    61,
      62,    63,    64,    65,    61,    62,    63,    64,    65,    48,
     160,   203,   212,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    76,    77,    78,    79,    80,    81,    82,
      83,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    76,    77,    78,    79,
      80,    81,    82,    83,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    76,
      77,    78,    79,    80,    81,    82,    83,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      53,    76,    77,    78,    79,    80,    81,    82,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,    95,   132,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    96,    97,    98,   100,   102,   106,
     107,   132,    41,    53,    86,    53,    86,    53,    12,    15,
      41,   108,   109,   110,   114,    86,    51,    56,    99,   132,
      51,   101,    49,   117,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   115,    86,    47,
      13,    14,    47,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    84,    85,    86,    88,    89,   127,
     128,   129,   131,   128,   128,    47,   118,   117,    47,   102,
     112,   128,   128,   128,    51,    55,    39,    40,   130,    52,
      61,    62,    63,    64,    65,    76,    77,    78,    79,    80,
      81,    82,    83,    47,    52,    86,   103,   104,   105,   132,
     120,   132,     6,     7,     8,     9,    10,   113,    86,    48,
      48,   128,    86,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,    56,    48,
      54,    42,    43,    45,    46,    50,   121,   122,   123,   124,
     125,   126,   127,    86,    86,    86,    86,    86,    48,    52,
      48,   128,   105,    47,    47,    47,    47,   119,    53,    53,
      53,    56,    57,    58,    49,    55,   128,   118,   128,   128,
     128,   128,   128,   111,    86,    48,   126,    48,    48,   120,
     116,   117,   118,   119,    50,    44,   121,    53,   119,   116,
     119,   128,    53,   118,   126,   119,    48,   117
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
        case 2:
#line 211 "gpl.y"
    {
   Symbol_table *sym_table = Symbol_table::instance();
   vector <string>::iterator it;
   for (it = vector_of_forward_animation_names.begin();
        it != vector_of_forward_animation_names.end();
        it ++)
        {
           Symbol * sym = sym_table->get(*it);
           if (sym->get_animation_block()->empty() == true)
               Error::error(Error::NO_BODY_PROVIDED_FOR_FORWARD, *it); 
        }
/*
      Event_manager *e_man = Event_manager::instance();
      e_man->execute_handlers(Window::INITIALIZE);
*/
}
    break;

  case 8:
#line 247 "gpl.y"
    {
Expression *error_exp = new Expression();
 Symbol_table *sym_table = Symbol_table::instance();
//sym_table is a singleton so we always get the same symbol table
 string id = *(yyvsp[(2) - (3)].union_string);
     if (!sym_table->lookup(id))//if the variable is not on the sym_table, then insert it
     {
          if ((yyvsp[(3) - (3)].union_expression_type) != NULL)
          {
string ts;
double td;
int ti;
          int type = (yyvsp[(3) - (3)].union_expression_type)->get_type();
           if (type == INT)
              ti = (yyvsp[(3) - (3)].union_expression_type)->eval_int();
           if (type == DOUBLE)
              td = (yyvsp[(3) - (3)].union_expression_type)->eval_double();
           if (type == STRING)
              ts = (yyvsp[(3) - (3)].union_expression_type)->eval_string();

          if ((yyvsp[(1) - (3)].union_gpl_type) == INT)//put into symbol table
          {
             int initial_value = 0;
             if (type == INT)
	       initial_value = (int)ti;
             if (type == DOUBLE)
               Error::error(Error::INVALID_TYPE_FOR_INITIAL_VALUE, id); 
             if (type == STRING)
               Error::error(Error::INVALID_TYPE_FOR_INITIAL_VALUE, id); 
            Symbol *sym = new Symbol();
            (*sym).set(id, "INT", initial_value, 0, "");
            sym_table->set_sym(id, *sym);
          }
           if ((yyvsp[(1) - (3)].union_gpl_type) == DOUBLE)//put into symbol table
          {
             double initial_value = 0.0;
             if (type == INT)
              initial_value = (double)ti;
             if (type == DOUBLE)
              initial_value = (double)td;
             if (type == STRING)
              Error::error(Error::INVALID_TYPE_FOR_INITIAL_VALUE, id); 
           Symbol *sym = new Symbol();
           (*sym).set(id, "DOUBLE", 0, initial_value, "");
           sym_table->set_sym(id, *sym);
          }
           if ((yyvsp[(1) - (3)].union_gpl_type) == STRING)//put into symbol table
          {
             stringstream initial;
             if (type == INT)
              initial << ti;
             if (type == DOUBLE)
              initial << td;
             if (type == STRING)
              initial  << ts;
             string initial_value = initial.str();
           Symbol *sym = new Symbol();
           (*sym).set(id, "STRING", 0, 0, initial_value);
           sym_table->set_sym(id, *sym);
          }
         }
        else{

           if ((yyvsp[(1) - (3)].union_gpl_type) == INT)
           {
             Symbol *sym = new Symbol();
             (*sym).set(id, "INT", 0, 0, "");
             sym_table->set_sym(id, *sym);
           }
           if ((yyvsp[(1) - (3)].union_gpl_type) == DOUBLE)
           {
             Symbol *sym = new Symbol();
             (*sym).set(id, "DOUBLE", 0, 0, "");
             sym_table->set_sym(id, *sym);
           }
           if ((yyvsp[(1) - (3)].union_gpl_type) == STRING)
           {
             Symbol *sym = new Symbol();
             (*sym).set(id, "STRING", 0, 0, "");
             sym_table->set_sym(id, *sym);
           }
         }
       }
     else {
     //the variable was already in the sym table

      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    break;

  case 9:
#line 339 "gpl.y"
    {
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *(yyvsp[(2) - (5)].union_string);
     if (!sym_table->lookup(id))
      {
         if ((yyvsp[(4) - (5)].union_expression_type)->get_type()== STRING)
           { 
            string array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_string();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id, num.str()); 
           }
        if ((yyvsp[(4) - (5)].union_expression_type)->get_type()== STRING)
          { 
            double array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_double();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
          }
        else if (!sym_table->lookup(id) )
          {
           if( (yyvsp[(4) - (5)].union_expression_type)->get_type()== INT)
              {
              int array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_int();
              if (array_size <= 0)
              {
                stringstream num;
                num << array_size;
                Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
              }
       for (int i = 0; i < array_size; i++)
        {
          ostringstream name;
          name << id  << '[' << i << ']';
          Symbol * sym = new Symbol();
          if ((yyvsp[(1) - (5)].union_gpl_type) == INT)
             {
              int initial_value =  0;
              (*sym).set(name.str(), "INT", initial_value, 0, "");
             }
         if ((yyvsp[(1) - (5)].union_gpl_type) == DOUBLE)
             {
              double initial_value =  0.0;
              (*sym).set(name.str(), "DOUBLE", initial_value, 0, "");
             }
         if ((yyvsp[(1) - (5)].union_gpl_type) == STRING)
             {
              string initial_value = "";
              (*sym).set(name.str(), "STRING", 0, 0,initial_value); 
             }
        sym_table->set_sym(name.str(), *sym);
            }
       sym_table->insert_in_vector(id);
          }
        }
    }
     else {
      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    break;

  case 10:
#line 404 "gpl.y"
    {
     (yyval.union_gpl_type) = INT;
    }
    break;

  case 11:
#line 409 "gpl.y"
    {
     (yyval.union_gpl_type) = DOUBLE;
    }
    break;

  case 12:
#line 414 "gpl.y"
    {
     (yyval.union_gpl_type) = STRING;
    }
    break;

  case 13:
#line 422 "gpl.y"
    {
      (yyval.union_expression_type) = (yyvsp[(2) - (2)].union_expression_type);
    }
    break;

  case 14:
#line 426 "gpl.y"
    {
      (yyval.union_expression_type) = NULL;
    }
    break;

  case 15:
#line 434 "gpl.y"
    {
name_of_object = *(yyvsp[(2) - (2)].union_string);
if ((yyvsp[(1) - (2)].union_int) == T_TRIANGLE)
cur_object = new Triangle();
if ((yyvsp[(1) - (2)].union_int) == T_PIXMAP)
cur_object = new Pixmap();
if ((yyvsp[(1) - (2)].union_int) == T_CIRCLE)
cur_object = new Circle();
if ((yyvsp[(1) - (2)].union_int) == T_RECTANGLE)
cur_object = new Rectangle();
if ((yyvsp[(1) - (2)].union_int) == T_TEXTBOX)
cur_object = new Textbox();
          Symbol_table *sym_table = Symbol_table::instance();
	  Symbol * sym = new Symbol();
          (*sym).set_game_object(name_of_object, cur_object);
          sym_table->set_sym(name_of_object, *sym);
}
    break;

  case 16:
#line 452 "gpl.y"
    {
}
    break;

  case 17:
#line 455 "gpl.y"
    {
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *(yyvsp[(2) - (5)].union_string);
     if (!sym_table->lookup(id))
      {
         if ((yyvsp[(4) - (5)].union_expression_type)->get_type()== STRING)
           { 
            string array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_string();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id, num.str()); 
           }
        if ((yyvsp[(4) - (5)].union_expression_type)->get_type()== STRING)
          { 
            double array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_double();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
          }
        else if (!sym_table->lookup(id) )
          {
           if( (yyvsp[(4) - (5)].union_expression_type)->get_type()== INT)
              {
              int array_size = (yyvsp[(4) - (5)].union_expression_type)->eval_int();
              if (array_size <= 0)
              {
                stringstream num;
                num << array_size;
                Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
              }
       for (int i = 0; i < array_size; i++)
        {
          ostringstream name;
          name << id  << '[' << i << ']';
          Symbol * sym = new Symbol();
          if ((yyvsp[(1) - (5)].union_int) == T_TRIANGLE)
             {
              cur_object = new Triangle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ((yyvsp[(1) - (5)].union_int) == T_PIXMAP)
             {
              cur_object = new Pixmap();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ((yyvsp[(1) - (5)].union_int) == T_CIRCLE)
             {
              cur_object = new Circle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ((yyvsp[(1) - (5)].union_int) == T_RECTANGLE)
             {
              cur_object = new Rectangle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ((yyvsp[(1) - (5)].union_int) == T_TEXTBOX)
             {
              cur_object = new Textbox();
              (*sym).set_game_object(name.str(), cur_object);
             }
        sym_table->set_sym(name.str(), *sym);
            }
       sym_table->insert_in_vector(id);
          }
        }
    }
     else {
      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    break;

  case 18:
#line 530 "gpl.y"
    {
 (yyval.union_int) = T_TRIANGLE;
}
    break;

  case 19:
#line 534 "gpl.y"
    {
 (yyval.union_int) = T_PIXMAP;
}
    break;

  case 20:
#line 538 "gpl.y"
    {
 (yyval.union_int) = T_CIRCLE;
}
    break;

  case 21:
#line 542 "gpl.y"
    {
 (yyval.union_int) = T_RECTANGLE;
}
    break;

  case 22:
#line 546 "gpl.y"
    {
 (yyval.union_int) = T_TEXTBOX;
}
    break;

  case 27:
#line 566 "gpl.y"
    {  
string param = *(yyvsp[(1) - (3)].union_string);
Gpl_type gpl_type;
Symbol_table *sym_table = Symbol_table::instance();
Status status = cur_object->get_member_variable_type(param, gpl_type);
if (status == MEMBER_NOT_DECLARED)
         Error::error(Error::UNKNOWN_CONSTRUCTOR_PARAMETER, cur_object->type(), param);
if (status == MEMBER_NOT_OF_GIVEN_TYPE)
        cout << "member not of given type" << endl;

int type = (yyvsp[(3) - (3)].union_expression_type)->get_type();
    if (gpl_type == INT)
       {
          if(type != INT)
            {
               Error::error(Error::INCORRECT_CONSTRUCTOR_PARAMETER_TYPE, name_of_object, param);
            }
          else 
             cur_object->set_member_variable(param, (yyvsp[(3) - (3)].union_expression_type)->eval_int());
       }
    else if (gpl_type == DOUBLE)
       {
          if(type != INT && type != DOUBLE)
             { cout << "error2" << endl; }
          else if (type == INT)
             {
              double d = ((double) (yyvsp[(3) - (3)].union_expression_type)->eval_int()); 
             cur_object->set_member_variable(param, d); 
             }
           else if (type == DOUBLE)
             {
              cur_object->set_member_variable(*(yyvsp[(1) - (3)].union_string), (yyvsp[(3) - (3)].union_expression_type)->eval_double());
             }
        }
    else if (gpl_type == STRING)
       {
          if(type != INT && type != DOUBLE && type != STRING)
             { cout << "error3" << endl; }
          else if (type == INT)
             {
               int name= (yyvsp[(3) - (3)].union_expression_type)->eval_int();
               stringstream parameter;
               parameter<< name;
               cur_object->set_member_variable(param, parameter.str());
             }
           else if (type == DOUBLE)
             {
               double name= (yyvsp[(3) - (3)].union_expression_type)->eval_double();
               stringstream parameter;
               parameter<< name;
               cur_object->set_member_variable(param, parameter.str());
             }
           else if (type == STRING)
             {
               cur_object->set_member_variable(param,(yyvsp[(3) - (3)].union_expression_type)->eval_string()); 
             }
         }
     else if(param  == "animation_block") 
         {
             if (gpl_type!= ANIMATION_BLOCK)
                 cout << "error4" << endl;
            Symbol_table *sym_table = Symbol_table::instance();
             Symbol *s = sym_table->get((yyvsp[(3) - (3)].union_expression_type)->get_var_name());
            if (s->get_animation_block()->get_parameter_symbol()->get_game_object()->type() != cur_object->type())
               {
                Error::error(Error::TYPE_MISMATCH_BETWEEN_ANIMATION_BLOCK_AND_OBJECT, name_of_object,s->get_name() );
               }    
            else
               cur_object->set_member_variable(param, (yyvsp[(3) - (3)].union_expression_type)->eval_animation_block());
         }
     else  if (type == GAME_OBJECT)
         {
            Symbol_table *sym_table = Symbol_table::instance();
            Symbol *sym = new Symbol();
            sym->set_game_object(param, cur_object);
            sym_table->set_sym(param, *sym);
         }
}
    break;

  case 28:
#line 649 "gpl.y"
    {

     Symbol_table *sym_table = Symbol_table::instance();
      string id = *(yyvsp[(3) - (6)].union_string);
     if (!sym_table->lookup(id))//if the variable is not on the sym_table, then insert it
     {
        if ((yyvsp[(5) - (6)].union_symbol_type) != NULL)
        {
                              Symbol *temp1 = (yyvsp[(5) - (6)].union_symbol_type);
                              if (!sym_table->lookup(temp1->get_name()))//if the variable is not on the sym_table, then insert it
                                 {
                                    Animation_block *block = new Animation_block((yyvsp[(1) - (6)].union_int),(yyvsp[(5) - (6)].union_symbol_type),id);
                                    Symbol_table *sym_table = Symbol_table::instance();
                                    Symbol *sym = new Symbol();
                                    sym_table->set_sym(temp1->get_name(), *temp1);
                                    sym->set_animation_block(id, block);
                                    sym_table->set_sym(id, *sym);
                                    vector_of_forward_animation_names.push_back(id);
                                 }
                              else
                                  {
                                   Error::error(Error::ANIMATION_PARAMETER_NAME_NOT_UNIQUE, temp1->get_name());
                                  }
                                  
        }
     }
    else 
         Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id);
}
    break;

  case 34:
#line 697 "gpl.y"
    {
      Event_manager *e_man = Event_manager::instance();
      e_man->insert((yyvsp[(2) - (2)].union_statementblock_type), Window::INITIALIZE);
}
    break;

  case 35:
#line 707 "gpl.y"
    {

 Symbol_table *sym_table = Symbol_table::instance();
 Symbol * sym= sym_table->get(*(yyvsp[(2) - (6)].union_string));
 if (sym == NULL)
  {
      Error::error(Error::NO_FORWARD_FOR_ANIMATION_BLOCK, *(yyvsp[(2) - (6)].union_string));
      Statement_block * anim_block;
      statement_stack.push(anim_block);
  }
 else
  {
   bool already_declared_animation = false;
   vector <string>::iterator it;
   for (it = vector_of_animation_names.begin();
        it != vector_of_animation_names.end();
        it ++)
        {
           if (*it == *(yyvsp[(2) - (6)].union_string))
             {
               Error::error(Error::PREVIOUSLY_DEFINED_ANIMATION_BLOCK, *(yyvsp[(2) - (6)].union_string)); 
               Statement_block * anim_block;
               statement_stack.push(anim_block);
               already_declared_animation = true;
               it = vector_of_animation_names.end();
               it--;
             }
        }
   if (already_declared_animation == false)
       {
        Statement_block * anim_block = sym->get_animation_block();
        statement_stack.push(anim_block);
        vector_of_animation_names.push_back(*(yyvsp[(2) - (6)].union_string));
       }
  }
}
    break;

  case 37:
#line 750 "gpl.y"
    {   
Game_object * cur_ob;
if ((yyvsp[(1) - (2)].union_int) == T_TRIANGLE)
cur_ob = new Triangle();
if ((yyvsp[(1) - (2)].union_int) == T_PIXMAP)
cur_ob = new Pixmap();
if ((yyvsp[(1) - (2)].union_int) == T_CIRCLE)
cur_ob = new Circle();
if ((yyvsp[(1) - (2)].union_int) == T_RECTANGLE)
cur_ob = new Rectangle();
if ((yyvsp[(1) - (2)].union_int) == T_TEXTBOX)
cur_ob = new Textbox();
	  Symbol * sym = new Symbol();
          sym->set_game_object(*(yyvsp[(2) - (2)].union_string), cur_ob);
(yyval.union_symbol_type) = sym;
}
    break;

  case 43:
#line 780 "gpl.y"
    {
      Event_manager *e_man = Event_manager::instance();
      e_man->insert((yyvsp[(3) - (3)].union_statementblock_type), (yyvsp[(2) - (3)].union_int));
    }
    break;

  case 44:
#line 790 "gpl.y"
    {
(yyval.union_int) = 0;
}
    break;

  case 45:
#line 794 "gpl.y"
    {
(yyval.union_int) = 3;
}
    break;

  case 46:
#line 798 "gpl.y"
    {
(yyval.union_int) = 4;
}
    break;

  case 47:
#line 802 "gpl.y"
    {
(yyval.union_int) = 1;
}
    break;

  case 48:
#line 806 "gpl.y"
    {
(yyval.union_int) = 2;
}
    break;

  case 49:
#line 810 "gpl.y"
    {
(yyval.union_int) = 5;
}
    break;

  case 50:
#line 814 "gpl.y"
    {
(yyval.union_int) = 6;
}
    break;

  case 51:
#line 818 "gpl.y"
    {
(yyval.union_int) = 7;
}
    break;

  case 52:
#line 822 "gpl.y"
    {
(yyval.union_int) =8;
}
    break;

  case 53:
#line 826 "gpl.y"
    {
(yyval.union_int) =9;
}
    break;

  case 54:
#line 830 "gpl.y"
    {
(yyval.union_int) = 10;
}
    break;

  case 55:
#line 834 "gpl.y"
    {
(yyval.union_int) = 11;
}
    break;

  case 56:
#line 838 "gpl.y"
    {
(yyval.union_int) = 12;
}
    break;

  case 57:
#line 842 "gpl.y"
    {
(yyval.union_int) = 14;
}
    break;

  case 58:
#line 846 "gpl.y"
    {
(yyval.union_int) = 15;
}
    break;

  case 59:
#line 850 "gpl.y"
    {
(yyval.union_int) = 16;
}
    break;

  case 60:
#line 854 "gpl.y"
    {
(yyval.union_int) = 17;
}
    break;

  case 61:
#line 858 "gpl.y"
    {
(yyval.union_int) = 18;
}
    break;

  case 62:
#line 862 "gpl.y"
    {
(yyval.union_int) = 19;
}
    break;

  case 63:
#line 866 "gpl.y"
    {
(yyval.union_int) = 20;
}
    break;

  case 64:
#line 870 "gpl.y"
    {
(yyval.union_int) = 21;
}
    break;

  case 65:
#line 874 "gpl.y"
    {
(yyval.union_int) = 22;
}
    break;

  case 66:
#line 878 "gpl.y"
    {
(yyval.union_int) = 13;
}
    break;

  case 67:
#line 886 "gpl.y"
    {
  (yyval.union_statementblock_type) = (yyvsp[(3) - (3)].union_statementblock_type);
}
    break;

  case 68:
#line 890 "gpl.y"
    {
  (yyval.union_statementblock_type) = (yyvsp[(1) - (1)].union_statementblock_type);
}
    break;

  case 69:
#line 898 "gpl.y"
    {
       (yyval.union_statementblock_type) = (yyvsp[(5) - (5)].union_statementblock_type);
    }
    break;

  case 70:
#line 907 "gpl.y"
    {
       statement_stack.push(new Statement_block(line_count));
     }
    break;

  case 71:
#line 916 "gpl.y"
    {
      Statement_block *s = statement_stack.top();
      statement_stack.pop();
      (yyval.union_statementblock_type) = s;
     }
    break;

  case 79:
#line 941 "gpl.y"
    {
    if((yyvsp[(3) - (5)].union_expression_type)->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_IF_STMT_EXPRESSION);
    If * if_statement = new If((yyvsp[(3) - (5)].union_expression_type), (yyvsp[(5) - (5)].union_statementblock_type), NULL);
    statement_stack.top()->insert(if_statement);
}
    break;

  case 80:
#line 949 "gpl.y"
    {
    if((yyvsp[(3) - (7)].union_expression_type)->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_IF_STMT_EXPRESSION);
    If * else_statement = new If((yyvsp[(3) - (7)].union_expression_type),(yyvsp[(5) - (7)].union_statementblock_type), (yyvsp[(7) - (7)].union_statementblock_type));
    statement_stack.top()->insert(else_statement);
}
    break;

  case 81:
#line 960 "gpl.y"
    {
   if ((yyvsp[(7) - (13)].union_expression_type)->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_FOR_STMT_EXPRESSION);

   For * for_statement = new For((yyvsp[(5) - (13)].union_statementblock_type), (yyvsp[(7) - (13)].union_expression_type), (yyvsp[(11) - (13)].union_statementblock_type), (yyvsp[(13) - (13)].union_statementblock_type));
   statement_stack.top()->insert(for_statement);
}
    break;

  case 82:
#line 973 "gpl.y"
    {
      if((yyvsp[(3) - (4)].union_expression_type)->get_type()!= INT && 
         (yyvsp[(3) - (4)].union_expression_type)->get_type()!= DOUBLE && 
         (yyvsp[(3) - (4)].union_expression_type)->get_type()!= STRING)
         Error::error(Error::INVALID_TYPE_FOR_PRINT_STMT_EXPRESSION);
      Statement *print_statement = new Print((yyvsp[(1) - (4)].union_int), (yyvsp[(3) - (4)].union_expression_type));
      statement_stack.top()->insert(print_statement);
      
    }
    break;

  case 83:
#line 988 "gpl.y"
    {
    if((yyvsp[(3) - (4)].union_expression_type)->get_type()!=INT)
     {
      string type;
      if ((yyvsp[(3) - (4)].union_expression_type)->get_type()==DOUBLE)
         type = "double";
      if ((yyvsp[(3) - (4)].union_expression_type)->get_type()==STRING)
         type = "string";
      Error::error(Error::EXIT_STATUS_MUST_BE_AN_INTEGER,type );
     }
    Exit * exit_statement = new Exit((yyvsp[(1) - (4)].union_int),(yyvsp[(3) - (4)].union_expression_type));
    statement_stack.top()->insert(exit_statement);
}
    break;

  case 84:
#line 1006 "gpl.y"
    {
      Gpl_type type_of_variable = (yyvsp[(1) - (3)].union_variable_type)->get_type();
      string type_v;
      if (type_of_variable == INT)
         type_v = "int";
      if (type_of_variable == DOUBLE)
         type_v = "double";
      if (type_of_variable == STRING)
         type_v = "string";
      if (type_of_variable == ANIMATION_BLOCK)
         type_v = "animation_block";
      if (type_of_variable == GAME_OBJECT)
         type_v = "game_object";
      Gpl_type type_of_expression = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      string type_e;
      if (type_of_expression == INT)
         type_e = "int";
      if (type_of_expression == DOUBLE)
         type_e = "double";
      if (type_of_expression == STRING)
         type_e = "string";
          if (type_v == "int")
          {
             if (type_e == "double" || type_e == "string")
               Error::error(Error::ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
           if (type_v == "double")
          {
             if (type_e == "string")
               Error::error(Error::ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
          if (type_v == "game_object")
          {
               Error::error(Error::INVALID_LHS_OF_ASSIGNMENT,(yyvsp[(1) - (3)].union_variable_type)->get_name(), type_v ); 
          }
      Statement * assign_statement = new Assign((yyvsp[(1) - (3)].union_variable_type), (yyvsp[(3) - (3)].union_expression_type), "=");
      statement_stack.top()->insert(assign_statement);
    }
    break;

  case 85:
#line 1045 "gpl.y"
    {
      Gpl_type type_of_variable = (yyvsp[(1) - (3)].union_variable_type)->get_type();
      string type_v;
      if (type_of_variable == INT)
         type_v = "int";
      if (type_of_variable == DOUBLE)
         type_v = "double";
      if (type_of_variable == STRING)
         type_v = "string";
      if (type_of_variable == ANIMATION_BLOCK)
         type_v = "animation_block";
      if (type_of_variable == GAME_OBJECT)
         type_v = "game_object";
      Gpl_type type_of_expression = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      string type_e;
      if (type_of_expression == INT)
         type_e = "int";
      if (type_of_expression == DOUBLE)
         type_e = "double";
      if (type_of_expression == STRING)
         type_e = "string";
          if (type_v == "int")
          {
             if (type_e == "double" || type_e == "string")
               Error::error(Error::PLUS_ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
           if (type_v == "double")
          {
             if (type_e == "string")
               Error::error(Error::PLUS_ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
          if (type_v == "animation_block" || type_v == "game_object")
               Error::error(Error::INVALID_LHS_OF_PLUS_ASSIGNMENT,(yyvsp[(1) - (3)].union_variable_type)->get_name(), type_v ); 

      Statement * assign_statement = new Assign((yyvsp[(1) - (3)].union_variable_type), (yyvsp[(3) - (3)].union_expression_type), "+=");
      statement_stack.top()->insert(assign_statement);
    }
    break;

  case 86:
#line 1083 "gpl.y"
    {
      Gpl_type type_of_variable = (yyvsp[(1) - (3)].union_variable_type)->get_type();
      string type_v;
      if (type_of_variable == INT)
         type_v = "int";
      if (type_of_variable == DOUBLE)
         type_v = "double";
      if (type_of_variable == STRING)
         type_v = "string";
      if (type_of_variable == ANIMATION_BLOCK)
         type_v = "animation_block";
      if (type_of_variable == GAME_OBJECT)
         type_v = "game_object";
      Gpl_type type_of_expression = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      string type_e;
      if (type_of_expression == INT)
         type_e = "int";
      if (type_of_expression == DOUBLE)
         type_e = "double";
      if (type_of_expression == STRING)
         type_e = "string";
          if (type_v == "int")
          {
             if (type_e == "double" || type_e == "string")
               Error::error(Error::MINUS_ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
           if (type_v == "double")
          {
             if (type_e == "string")
               Error::error(Error::MINUS_ASSIGNMENT_TYPE_ERROR,type_v, type_e ); 
          }
          if (type_v == "game_object" || type_v == "animation_block" || 
              type_v == "string")
          {
               Error::error(Error::INVALID_LHS_OF_MINUS_ASSIGNMENT,(yyvsp[(1) - (3)].union_variable_type)->get_name(), type_v ); 
          }
      Statement * assign_statement = new Assign((yyvsp[(1) - (3)].union_variable_type), (yyvsp[(3) - (3)].union_expression_type), "-=");
      statement_stack.top()->insert(assign_statement);
    }
    break;

  case 87:
#line 1127 "gpl.y"
    {
      (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (1)].union_string));
    }
    break;

  case 88:
#line 1131 "gpl.y"
    {
 Symbol_table *sym_table = Symbol_table::instance();
      if ((yyvsp[(3) - (4)].union_expression_type)->get_type() == STRING)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *(yyvsp[(1) - (4)].union_string), "A string expression"); 
         Expression *error_exp = new Expression(INT, 0);
         (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (4)].union_string), error_exp);

      }
      if ((yyvsp[(3) - (4)].union_expression_type)->get_type() == DOUBLE)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *(yyvsp[(1) - (4)].union_string), "A double expression"); 
         Expression *error_exp = new Expression(INT, 0);
         (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (4)].union_string), error_exp);
      }
   if ((yyvsp[(3) - (4)].union_expression_type)->get_type() == INT)
    {
      stringstream name;
      name << *(yyvsp[(1) - (4)].union_string) << '[' << 0 << ']';
      if(sym_table->lookup(name.str()))
      {
           (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (4)].union_string), (yyvsp[(3) - (4)].union_expression_type));
      }
      else if(sym_table->lookup(*(yyvsp[(1) - (4)].union_string)))
        //its in the symbol table but its stored without the brackets...its not an array
        //so return an "error" variable
      {
         Error::error(Error::VARIABLE_NOT_AN_ARRAY, *(yyvsp[(1) - (4)].union_string));
         (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (4)].union_string), 0);
      }

    }
}
    break;

  case 89:
#line 1166 "gpl.y"
    {
         string param = *(yyvsp[(3) - (3)].union_string);
         Gpl_type gpl_type;
         Symbol_table *sym_table = Symbol_table::instance();
         if(sym_table->lookup(*(yyvsp[(1) - (3)].union_string)))
           {
             Symbol *temp = sym_table->get(*(yyvsp[(1) - (3)].union_string)); 
               if (temp->get_type() != GAME_OBJECT)
                  {
                    Error::error(Error::LHS_OF_PERIOD_MUST_BE_OBJECT, *(yyvsp[(1) - (3)].union_string));
                    (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (3)].union_string), 0);
                  }
               if (temp->get_type() == GAME_OBJECT)
                  {
                         Status status = temp->get_game_object()->get_member_variable_type(param,gpl_type);
                         if (status == MEMBER_NOT_DECLARED)
                            {
                               Error::error(Error::UNDECLARED_MEMBER, *(yyvsp[(1) - (3)].union_string), param);
                               (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (3)].union_string), 0);
                             }
                         else if (status == MEMBER_NOT_OF_GIVEN_TYPE)
                              cout << "member not of given type" << endl;
                         else if (status == OK)
                               (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (3)].union_string), *(yyvsp[(3) - (3)].union_string));
                  } 
            }
         else 
           {
            Error::error(Error::UNDECLARED_VARIABLE, *(yyvsp[(1) - (3)].union_string));
            (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (3)].union_string), 0);
           }
}
    break;

  case 90:
#line 1199 "gpl.y"
    {
      if ((yyvsp[(3) - (6)].union_expression_type)->get_type() == STRING)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *(yyvsp[(1) - (6)].union_string), "A string expression"); 
         Expression *error_exp = new Expression(INT, 0);
         (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (6)].union_string), error_exp);

      }
      if ((yyvsp[(3) - (6)].union_expression_type)->get_type() == DOUBLE)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *(yyvsp[(1) - (6)].union_string), "A double expression"); 
         Expression *error_exp = new Expression(INT, 0);
         (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (6)].union_string), error_exp);
      }
      if( (yyvsp[(3) - (6)].union_expression_type)->get_type()== INT)
         {
             ostringstream name;
             name << *(yyvsp[(1) - (6)].union_string)  << '[' << 0 << ']';
             string param = *(yyvsp[(6) - (6)].union_string);
             Gpl_type gpl_type;
             Symbol_table *sym_table = Symbol_table::instance();
            if(sym_table->lookup(name.str()))
              {
                 Symbol *temp = sym_table->get(name.str());
                 if (temp->get_type() != GAME_OBJECT)
                   {
                       Error::error(Error::LHS_OF_PERIOD_MUST_BE_OBJECT, *(yyvsp[(1) - (6)].union_string));
                       (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (6)].union_string), 0);
                   }
                 else
                   (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (6)].union_string), *(yyvsp[(6) - (6)].union_string), (yyvsp[(3) - (6)].union_expression_type));
              }
             else 
              {
                 Error::error(Error::UNDECLARED_VARIABLE, *(yyvsp[(1) - (6)].union_string));
                 (yyval.union_variable_type) = new Variable(*(yyvsp[(1) - (6)].union_string), *(yyvsp[(6) - (6)].union_string));
              }
         }
}
    break;

  case 91:
#line 1243 "gpl.y"
    {
    (yyval.union_expression_type) = (yyvsp[(1) - (1)].union_expression_type);
}
    break;

  case 92:
#line 1247 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
          {
            int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
            int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "||"); 
                 (yyval.union_expression_type) = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "||"); 
                  (yyval.union_expression_type) = new Expression(INT,0); 
                }
             else
                 (yyval.union_expression_type) = new Expression(OR, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
           }
}
    break;

  case 93:
#line 1275 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
          {
            int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
            int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "&&"); 
                 (yyval.union_expression_type) = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "&&"); 
                  (yyval.union_expression_type) = new Expression(INT,0); 
                }
             else
                  (yyval.union_expression_type) = new Expression(AND, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
           }
}
    break;

  case 94:
#line 1303 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(LESS_THAN_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 95:
#line 1318 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 96:
#line 1333 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(LESS_THAN, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 97:
#line 1348 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(GREATER_THAN, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 98:
#line 1363 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 99:
#line 1378 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
       {
           (yyval.union_expression_type) = new Expression(NOT_EQUAL, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
       }
}
    break;

  case 100:
#line 1393 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
          {
              (yyval.union_expression_type) = new Expression(PLUS, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }
}
    break;

  case 101:
#line 1408 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
          {
        int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
        int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      if (type1 == STRING)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "-"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          } 
      else if (type3 == STRING)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "-"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
              (yyval.union_expression_type) = new Expression(MINUS, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }

}
    break;

  case 102:
#line 1437 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
          {
            int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
            int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "*"); 
                 (yyval.union_expression_type) = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "*"); 
                  (yyval.union_expression_type) = new Expression(INT,0); 
                }
             else
                  (yyval.union_expression_type) = new Expression(MULTIPLY, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
           }
}
    break;

  case 103:
#line 1465 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
         {
        int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
        int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      if (type1 == STRING)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "/"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          } 
      else if (type3 == STRING)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "/"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
              (yyval.union_expression_type) = new Expression(DIVIDE, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }
}
    break;

  case 104:
#line 1493 "gpl.y"
    {
      if ((yyvsp[(1) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(1) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else if ((yyvsp[(3) - (3)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (3)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
         {
        int type1 = (yyvsp[(1) - (3)].union_expression_type)->get_type();
        int type3 = (yyvsp[(3) - (3)].union_expression_type)->get_type();
      if (type1 != INT)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "%"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          } 
      else if (type3 != INT)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "%"); 
            (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
              (yyval.union_expression_type) = new Expression(MOD, (yyvsp[(1) - (3)].union_expression_type), (yyvsp[(3) - (3)].union_expression_type));
          }
}
    break;

  case 105:
#line 1522 "gpl.y"
    {
      if ((yyvsp[(2) - (2)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(2) - (2)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
         {
       int type = (yyvsp[(2) - (2)].union_expression_type)->get_type();
       if (type == STRING)
       {
           (yyval.union_expression_type) = new Expression(INT, 0); 
       }
       else
       {
           (yyval.union_expression_type) = new Expression(UNARY_MINUS, (yyvsp[(2) - (2)].union_expression_type));
       }
         }
}
    break;

  case 106:
#line 1541 "gpl.y"
    {
      if ((yyvsp[(2) - (2)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(2) - (2)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
         {
     int type = (yyvsp[(2) - (2)].union_expression_type)->get_type();
     if (type == STRING)
       {
          (yyval.union_expression_type) = new Expression(INT,0); 
       }
     else
            {
              (yyval.union_expression_type) = new Expression(NOT, (yyvsp[(2) - (2)].union_expression_type));
            }
         }
}
    break;

  case 107:
#line 1560 "gpl.y"
    {
      if ((yyvsp[(3) - (4)].union_expression_type)->get_string_type() == "variable" && !(yyvsp[(3) - (4)].union_expression_type)->exp_var_included())
          {
               (yyval.union_expression_type) = new Expression(INT,0); 
          }
      else
         {
       if ((yyvsp[(1) - (4)].union_operator_type) == SIN)
        {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == STRING)
            { 
               (yyval.union_expression_type) = new Expression(INT, 0);
            }
       else 
            { 
            (yyval.union_expression_type) = new Expression(SIN, (yyvsp[(3) - (4)].union_expression_type));
            }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == COS)
        {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
             if (type == STRING)
               { 
                (yyval.union_expression_type) = new Expression(INT, 0);
               }
             else 
            { 
                (yyval.union_expression_type) = new Expression(COS, (yyvsp[(3) - (4)].union_expression_type));
               }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == TAN)
       {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == STRING)
           { 
            (yyval.union_expression_type) = new Expression(INT,0);
           }
           else 
           { 
             (yyval.union_expression_type) = new Expression(TAN, (yyvsp[(3) - (4)].union_expression_type));
           }
       }
       if ((yyvsp[(1) - (4)].union_operator_type) == ASIN)
       {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == STRING)
            { 
              (yyval.union_expression_type) = new Expression(INT, 0);
            }
           else 
            { 
              (yyval.union_expression_type) = new Expression(ASIN, (yyvsp[(3) - (4)].union_expression_type));
            }
        }
       if ((yyvsp[(1) - (4)].union_operator_type) == ACOS)
         {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == STRING)
            { 
              (yyval.union_expression_type) = new Expression(INT,0);
            }
            else 
            { 
              (yyval.union_expression_type) = new Expression(ACOS, (yyvsp[(3) - (4)].union_expression_type));
            }
         }
       if ((yyvsp[(1) - (4)].union_operator_type) == ATAN)
         {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == STRING)
            { 
              (yyval.union_expression_type) = new Expression(INT,0);
            }
           else 
            { 
              (yyval.union_expression_type) = new Expression(ATAN, (yyvsp[(3) - (4)].union_expression_type));
            }
          }
       if ((yyvsp[(1) - (4)].union_operator_type) == SQRT)
         {
          int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
          if (type == STRING)
          { 
             Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "sqrt"); 
            (yyval.union_expression_type) = new Expression(INT,0);
          }
          else 
          { 
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == INT)
            {
                if ((yyvsp[(3) - (4)].union_expression_type)->eval_int() < 0)
                 {
                  (yyval.union_expression_type) = new Expression(INT,0);
                 }
                else
                {
                  (yyval.union_expression_type) = new Expression(SQRT, (yyvsp[(3) - (4)].union_expression_type));
                }
           }
           if (type == DOUBLE)
           {
              if ((yyvsp[(3) - (4)].union_expression_type)->eval_double() < 0)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "sqrt"); 
                  (yyval.union_expression_type) = new Expression(INT,0);
                }
              else
                   (yyval.union_expression_type) = new Expression(SQRT, (yyvsp[(3) - (4)].union_expression_type));
                 }
              }
         }
         if ((yyvsp[(1) - (4)].union_operator_type) == FLOOR)
         {
           int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
           if (type == STRING)
            { 
                Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "floor"); 
                (yyval.union_expression_type) = new Expression(INT,0);
            }
           else 
            { 
             (yyval.union_expression_type) = new Expression(FLOOR, (yyvsp[(3) - (4)].union_expression_type));
            }
         }
         if ((yyvsp[(1) - (4)].union_operator_type) == ABS)
         {
            int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
            if (type == STRING)
             { 
             Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "abs"); 
                (yyval.union_expression_type) = new Expression(INT,0);
             }
            else 
             { 
               (yyval.union_expression_type) = new Expression(ABS, (yyvsp[(3) - (4)].union_expression_type));
             }
         }
          if ((yyvsp[(1) - (4)].union_operator_type) == RANDOM)
             {
                int type = (yyvsp[(3) - (4)].union_expression_type)->get_type();
                if (type == STRING)
                 { 
                    Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "random"); 
                    (yyval.union_expression_type) = new Expression(INT,0);
                 }
                else 
                 { 
                    (yyval.union_expression_type) = new Expression(RANDOM, (yyvsp[(3) - (4)].union_expression_type));
                 }
             }
         }
}
    break;

  case 108:
#line 1715 "gpl.y"
    {
      Gpl_type type_of_variable1 = (yyvsp[(1) - (3)].union_variable_type)->get_type();
      Gpl_type type_of_variable2 = (yyvsp[(3) - (3)].union_variable_type)->get_type();
      if (type_of_variable1 != GAME_OBJECT)
        {
         Error::error(Error::OPERAND_MUST_BE_A_GAME_OBJECT, (yyvsp[(1) - (3)].union_variable_type)->get_name()); 
         (yyval.union_expression_type) = new Expression(INT,0);
        }
      else if (type_of_variable2 != GAME_OBJECT)
        {
         Error::error(Error::OPERAND_MUST_BE_A_GAME_OBJECT, (yyvsp[(3) - (3)].union_variable_type)->get_name()); 
         (yyval.union_expression_type) = new Expression(INT,0);
        }
      Expression * exp1 = new Expression((yyvsp[(1) - (3)].union_variable_type));
      Expression * exp2 = new Expression((yyvsp[(3) - (3)].union_variable_type));
      (yyval.union_expression_type) = new Expression((yyvsp[(2) - (3)].union_operator_type), exp1, exp2);
}
    break;

  case 109:
#line 1737 "gpl.y"
    {
    (yyval.union_expression_type) = (yyvsp[(2) - (3)].union_expression_type);
}
    break;

  case 110:
#line 1741 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression((yyvsp[(1) - (1)].union_variable_type));
}
    break;

  case 111:
#line 1745 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(INT, (yyvsp[(1) - (1)].union_int));
}
    break;

  case 112:
#line 1749 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(INT, 1);
}
    break;

  case 113:
#line 1753 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(INT, 0);
}
    break;

  case 114:
#line 1757 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(DOUBLE, (yyvsp[(1) - (1)].union_double));
}
    break;

  case 115:
#line 1761 "gpl.y"
    {
    (yyval.union_expression_type) = new Expression(STRING, *(yyvsp[(1) - (1)].union_string));
}
    break;

  case 116:
#line 1770 "gpl.y"
    {
    (yyval.union_operator_type) = TOUCHES;
}
    break;

  case 117:
#line 1774 "gpl.y"
    {
    (yyval.union_operator_type) = NEAR;
}
    break;

  case 118:
#line 1782 "gpl.y"
    {
   (yyval.union_operator_type) = SIN;
}
    break;

  case 119:
#line 1786 "gpl.y"
    {  
    (yyval.union_operator_type) = COS;
}
    break;

  case 120:
#line 1790 "gpl.y"
    { 
    (yyval.union_operator_type) = TAN;
}
    break;

  case 121:
#line 1794 "gpl.y"
    { 
    (yyval.union_operator_type) = ASIN;
}
    break;

  case 122:
#line 1798 "gpl.y"
    {
    (yyval.union_operator_type) = ACOS;
}
    break;

  case 123:
#line 1802 "gpl.y"
    {
    (yyval.union_operator_type) = ATAN;
}
    break;

  case 124:
#line 1806 "gpl.y"
    {
    (yyval.union_operator_type) = SQRT;
}
    break;

  case 125:
#line 1810 "gpl.y"
    {
     (yyval.union_operator_type) = ABS;
}
    break;

  case 126:
#line 1814 "gpl.y"
    {
     (yyval.union_operator_type) = FLOOR;
}
    break;

  case 127:
#line 1818 "gpl.y"
    {
    (yyval.union_operator_type) = RANDOM;
}
    break;


/* Line 1267 of yacc.c.  */
#line 3545 "y.tab.c"
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



