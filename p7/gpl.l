/*
  Use this file as a starting point for your scanner.

  Use the following global variable to retrieve the current symbol (the one
  just read):

    char *yytext

  Use the following global variable to send information back to main():
      
    extern YYSTYPE yylval;

  The union YYSTYPE is the union declared in array.y.
  It is defined in y.tab.h (which is included by parser.h).
  You can use a union just like a struct (which is a lot like a class),
  except that only one member variable can be used at a time.
  y.tab.h is generated by bison from array.y.

*/

/* the %{ indicates the start of C/C++ code section */
/* you can put whatever C/C++ code in here that you want */
/* this code is copied to the generated file */
%{

#include "error.h"    // gpl file, using now to get use to it
#include "parser.h"   // gpl file, using now to get use to ti

// #include <ctype.h>
#include <iostream>
using namespace std;

Error error_handler; // error reporting object

// The following variable keeps track of what input line flex is reading.
// It will be used (by other parts of the program) for reporting the line
// numbers of errors.
// 
// It will be used by other parts of the program via the extern construct
//   If another .cpp file declares "extern int line_count" that line_count
//   in that file will be the line_count in this file (it becomes global)
int line_count = 1;
int emit_with_line_number(int token)
{
   yylval.union_int = line_count;
   return token;
}
int emit_int(int token)
{
  // convert the string yytext into an integer
  // put it into the global union used to send values to the parser (.y file)
  // the union and its union_int field are declared in the .y file
  yylval.union_int = atoi(yytext);

  return token;
}
int emit_double(int token)
{
  // convert the string yytext into an integer
  // put it into the global union used to send values to the parser (.y file)
  // the union and its union_int field are declared in the .y file
  yylval.union_double = atof(yytext);

  return token;
}
int emit_string(int token)
{
  // Would like to put a string in the union, but the way the union works
  // it has to be a pointer to a string
  // This is a potential memory leak.  Think carefully about where and when
  // this memory should be deleted.
  yylval.union_string = new string(yytext);

  return token;
}
int emit_string_without_quotes(int token)
{
  // Would like to put a string in the union, but the way the union works
  // it has to be a pointer to a string
  // This is a potential memory leak.  Think carefully about where and when
  // this memory should be deleted.
//counting the number of chars in yytext
/*
int counter = 0;
char *s = yytext;
for( *s; *s != 0; s++)
{
counter ++;
}
//making a char * with space for 
//the letters, but not the quotes""
char * char_array = new char[counter-2];
int i = 0;
char *str = yytext;
str ++;
//initializing the new char array 
for (*str; *str != '\"'; str++)
{
char_array[i] = *str;
i++;
}
  yylval.union_string = new string(char_array);
  */

  yytext[strlen(yytext) -1] = 0;
  yylval.union_string = new string(yytext + 1);

  return token;
}

int emit_error(int token)
{
  // have the error handling object report the problem
  // note: it uses line_count as a global variable
  error_handler.error(Error::ILLEGAL_TOKEN, yytext);

  // create a string to hold the current text
  // put that string in the yylval union so it can be used by parser (.y file)
  yylval.union_string = new string(yytext);
  return token;
}

// the %} below indicates the end of the C/C++ code section

%}

/*
The %% below indicates the start of the rules flex/lex will use
The left-hand-side (LHS) give a regular expression
The right-hand-side (RHS) gives an action (code to execute)
*/

%%

[\n]            line_count++; // count the lines for error reporting
[ \t\r]         ; // ignore spaces, tabs and the microsoft line feed (\r)

"//".*         ;
"int"           return T_INT;
"double"        return T_DOUBLE;
"string"        return T_STRING;
"triangle"      return T_TRIANGLE;
"pixmap"        return T_PIXMAP;
"circle"        return T_CIRCLE;
"rectangle"     return T_RECTANGLE;
"textbox"       return T_TEXTBOX;
"forward"       return emit_with_line_number(T_FORWARD);
"initialization" return T_INITIALIZATION;
"true"          return T_TRUE;
"false"         return T_FALSE;
"on"            return T_ON;
"space"         return T_SPACE;
"leftarrow"     return T_LEFTARROW;
"rightarrow"    return T_RIGHTARROW;
"uparrow"       return T_UPARROW;
"downarrow"     return T_DOWNARROW;
"leftmouse"     return T_LEFTMOUSE_DOWN;
"middlemouse"   return T_MIDDLEMOUSE_DOWN;
"rightmouse"    return T_RIGHTMOUSE_DOWN;
"leftmouse_up"   return T_LEFTMOUSE_UP;
"middlemouse_up" return T_MIDDLEMOUSE_UP;
"rightmouse_up" return T_RIGHTMOUSE_UP;
"mouse_move"    return T_MOUSE_MOVE;
"mouse_drag"    return T_MOUSE_DRAG;

"f1"            return T_F1;
"akey"          return T_AKEY;
"skey"          return T_SKEY;
"dkey"          return T_DKEY;
"fkey"          return T_FKEY;
"hkey"          return T_HKEY;
"jkey"          return T_JKEY;
"kkey"          return T_KKEY;
"lkey"          return T_LKEY;
"wkey"          return T_WKEY;

"touches"       return T_TOUCHES;
"near"          return T_NEAR;

"animation"     return T_ANIMATION;

"if"            return T_IF;
"for"           return T_FOR;
"else"          return T_ELSE;

"exit"          return emit_with_line_number(T_EXIT);
"print"         return emit_with_line_number(T_PRINT);
","             return T_COMMA;
"="             return T_ASSIGN;
";"             return T_SEMIC;
"\""[^\"]*"\""  return emit_string_without_quotes(T_STRING_CONSTANT);
"("             return T_LPAREN;
")"             return T_RPAREN;
"{"             return emit_with_line_number(T_LBRACE);
"}"             return T_RBRACE;
"["             return T_LBRACKET;
"]"             return T_RBRACKET;
"\."            return T_PERIOD;

"+="            return T_PLUS_ASSIGN;
"-="            return T_MINUS_ASSIGN;
"++"            return T_PLUS_PLUS;
"--"            return T_MINUS_MINUS;

"*"             return T_ASTERISK;
"/"             return T_DIVIDE;
"%"             return T_MOD;
"+"             return T_PLUS;
"-"             return T_MINUS;
"sin"           return T_SIN;
"cos"           return T_COS;
"tan"           return T_TAN;
"asin"           return T_ASIN;
"acos"          return T_ACOS;
"atan"          return T_ATAN;
"sqrt"          return T_SQRT;
"floor"         return T_FLOOR;
"abs"           return T_ABS;
"random"        return T_RANDOM;

"<"             return T_LESS;
">"             return T_GREATER;
"<="            return T_LESS_EQUAL;
">="            return T_GREATER_EQUAL;
"=="            return T_EQUAL;
"!="            return T_NOT_EQUAL;

"&&"            return T_AND;
"||"            return T_OR;
"!"             return T_NOT;

[0-9]+[\.][0-9]+     return emit_double(T_DOUBLE_CONSTANT);
[\.][0-9]+           return emit_double(T_DOUBLE_CONSTANT);
[0-9]+[\.]           return emit_double(T_DOUBLE_CONSTANT);
[0-9]+               return emit_int(T_INT_CONSTANT);


[a-zA-Z_0-9]+       return emit_string(T_ID);
.                   return emit_error(T_ERROR);
