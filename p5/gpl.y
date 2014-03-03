%{  // bison syntax to indicate the start of the header
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
%} 

%union {
 int                  union_int;
 std::string         *union_string;  // MUST be a pointer to a string (this sucks!)
 double               union_double;
 Gpl_type             union_gpl_type;
 Expression          *union_expression_type;
 Variable            *union_variable_type;
 Operator_type        union_operator_type;
}

// each token in the language is defined here

%token T_INT
%token T_DOUBLE
%token T_STRING
%token T_TRIANGLE
%token T_PIXMAP
%token T_CIRCLE
%token T_RECTANGLE
%token T_TEXTBOX
%token T_FORWARD
%token T_INITIALIZATION

%token T_TRUE
%token T_FALSE

%token T_ON
%token T_SPACE
%token T_LEFTARROW
%token T_RIGHTARROW
%token T_UPARROW
%token T_DOWNARROW
%token T_LEFTMOUSE_DOWN
%token T_MIDDLEMOUSE_DOWN
%token T_RIGHTMOUSE_DOWN
%token T_LEFTMOUSE_UP
%token T_MIDDLEMOUSE_UP
%token T_RIGHTMOUSE_UP
%token T_MOUSE_MOVE
%token T_MOUSE_DRAG

%token T_F1
%token T_AKEY
%token T_SKEY
%token T_DKEY
%token T_FKEY
%token T_HKEY
%token T_JKEY
%token T_KKEY
%token T_LKEY
%token T_WKEY

%token T_TOUCHES
%token T_NEAR

%token T_ANIMATION

%token T_IF
%token T_FOR
%token T_ELSE

%token T_EXIT
%token T_PRINT

%token T_LPAREN
%token T_RPAREN
%token T_LBRACE
%token T_RBRACE
%token T_LBRACKET
%token T_RBRACKET
%token T_SEMIC
%token T_COMMA
%token T_PERIOD

%token T_ASSIGN
%token T_PLUS_ASSIGN
%token T_MINUS_ASSIGN
%token T_PLUS_PLUS
%token T_MINUS_MINUS

%token T_ASTERISK
%token T_DIVIDE
%token T_MOD
%token T_PLUS
%token T_MINUS
%token T_SIN
%token T_COS
%token T_TAN
%token T_ASIN
%token T_ACOS
%token T_ATAN
%token T_SQRT
%token T_FLOOR
%token T_ABS
%token T_RANDOM

%token T_LESS
%token T_GREATER
%token T_LESS_EQUAL
%token T_GREATER_EQUAL
%token T_EQUAL
%token T_NOT_EQUAL

%token T_AND
%token T_OR
%token T_NOT

// if a token has a type associated with it, put that type (as named in the
// union) inside of <> after the %token

%type <union_gpl_type> simple_type
%type <union_expression_type> primary_expression
%type <union_expression_type> expression
%type <union_expression_type> optional_initializer
%type <union_variable_type> variable
%type <union_operator_type> math_operator

%token <union_int> T_INT_CONSTANT // this token has a int value associated w/it
%token <union_string> T_ID // this token has a string value associated w/it
%token <union_string> T_ERROR // this token has a string value associated w/it
%token <union_double> T_DOUBLE_CONSTANT
%token <union_string> T_STRING_CONSTANT

%nonassoc IF_NO_ELSE
%nonassoc IF_ELSE
%nonassoc T_ELSE
//%nonassoc UNARY_OPS

%left T_OR 
%left T_AND 
%left T_EQUAL T_NOT_EQUAL
%left T_LESS T_GREATER T_LESS_EQUAL T_GREATER_EQUAL
%left T_PLUS T_MINUS
%left T_ASTERISK T_DIVIDE T_MOD
%left T_NOT

%% // indicates the start of the rules
//---------------------------------------------------------------------
program:
    declaration_list block_list
    ;

//---------------------------------------------------------------------
declaration_list:
    declaration_list declaration
    | empty
    ;

//---------------------------------------------------------------------
declaration:
    variable_declaration T_SEMIC
    | object_declaration T_SEMIC
    | forward_declaration T_SEMIC
    ;

//---------------------------------------------------------------------
variable_declaration:
    simple_type  T_ID  optional_initializer
{
Expression *error_exp = new Expression();
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *$2;
     if (sym_table->lookup(id))
     {
          if ($3 != NULL)
          {
string ts;
double td;
int ti;
          int type = $3->get_type();
           if (type == 1)
              ti = $3->eval_int();
           if (type == 2)
              td = $3->eval_double();
           if (type == 4)
              ts = $3->eval_string();
             

          if ($1 == INT)//put into symbol table
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
           if ($1 == DOUBLE)//put into symbol table
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
           if ($1 == STRING)//put into symbol table
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

           if ($1 == INT)
           {
           Symbol *sym = new Symbol();
           (*sym).set(id, "INT", 0, 0, "");
           sym_table->set(id, *sym);
           }
           if ($1 == DOUBLE)
           {
           Symbol *sym = new Symbol();
           (*sym).set(id, "DOUBLE", 0, 0, "");
           sym_table->set(id, *sym);
           }
           if ($1 == STRING)
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
    | 
simple_type  T_ID  T_LBRACKET expression T_RBRACKET

{
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *$2;

     if (sym_table->lookup(id))
     {
       assert($4->get_type()==1);
       int array_size = $4->eval_int();
       for (int i = 0; i < array_size; i++)
       {
        ostringstream name;
        name << id  << '[' << i << ']';
        Symbol * sym = new Symbol();
        if ($1 == INT)
            {
              int initial_value =  0;
              (*sym).set(name.str(), "INT", initial_value, 0, "");
            }
         if ($1 == DOUBLE)
            {
              double initial_value =  0.0;
              (*sym).set(name.str(), "INT", initial_value, 0, "");
            }
         if ($1 == STRING)
            {
              string initial_value = "";
              (*sym).set(name.str(), "STRING", 0, 0,initial_value); 
            }
        sym_table->set(name.str(), *sym);
        }
      sym_table->insert_in_vector(id);
     }
     else {
      Error::error(Error::PREVIOUSLY_DECLARED_VARIABLE, id); 
     }
}
    ;

//---------------------------------------------------------------------
simple_type:
    T_INT
    {
     $$ = INT;
    }
    | 
T_DOUBLE
    {
     $$ = DOUBLE;
    }
    | 
T_STRING
    {
     $$ = STRING;
    }
    ;

//---------------------------------------------------------------------
optional_initializer:
    T_ASSIGN expression
{
    $$ = $2;
}
    | empty
{
   $$ = NULL;
}
    ;

//---------------------------------------------------------------------
object_declaration:
    object_type T_ID T_LPAREN parameter_list_or_empty T_RPAREN
    | object_type T_ID T_LBRACKET expression T_RBRACKET
    ;

//---------------------------------------------------------------------
object_type:
    T_TRIANGLE
    | T_PIXMAP
    | T_CIRCLE
    | T_RECTANGLE
    | T_TEXTBOX
    ;

//---------------------------------------------------------------------
parameter_list_or_empty :
    parameter_list
    | empty
    ;

//---------------------------------------------------------------------
parameter_list :
    parameter_list T_COMMA parameter
    | parameter
    ;

//---------------------------------------------------------------------
parameter:
    T_ID T_ASSIGN expression
    ;

//---------------------------------------------------------------------
forward_declaration:
    T_FORWARD T_ANIMATION T_ID T_LPAREN animation_parameter T_RPAREN
    ;

//---------------------------------------------------------------------
block_list:
    block_list block
    | empty
    ;

//---------------------------------------------------------------------
block:
    initialization_block
    | animation_block
    | on_block
    ;

//---------------------------------------------------------------------
initialization_block:
    T_INITIALIZATION statement_block
    ;

//---------------------------------------------------------------------
animation_block:
    T_ANIMATION T_ID T_LPAREN check_animation_parameter T_RPAREN T_LBRACE { } statement_list T_RBRACE end_of_statement_block
    ;

//---------------------------------------------------------------------
animation_parameter:
    object_type T_ID
    ;

//---------------------------------------------------------------------
check_animation_parameter:
    T_TRIANGLE T_ID
    | T_PIXMAP T_ID
    | T_CIRCLE T_ID
    | T_RECTANGLE T_ID
    | T_TEXTBOX T_ID
    ;

//---------------------------------------------------------------------
on_block:
    T_ON keystroke statement_block
    ;

//---------------------------------------------------------------------
keystroke:
    T_SPACE
    | T_UPARROW
    | T_DOWNARROW
    | T_LEFTARROW
    | T_RIGHTARROW
    | T_LEFTMOUSE_DOWN
    | T_MIDDLEMOUSE_DOWN
    | T_RIGHTMOUSE_DOWN
    | T_LEFTMOUSE_UP
    | T_MIDDLEMOUSE_UP
    | T_RIGHTMOUSE_UP
    | T_MOUSE_MOVE
    | T_MOUSE_DRAG
    | T_AKEY 
    | T_SKEY 
    | T_DKEY 
    | T_FKEY 
    | T_HKEY 
    | T_JKEY 
    | T_KKEY 
    | T_LKEY 
    | T_WKEY 
    | T_F1
    ;

//---------------------------------------------------------------------
if_block:
    statement_block_creator statement end_of_statement_block
    | statement_block
    ;

//---------------------------------------------------------------------
statement_block:
    T_LBRACE statement_block_creator statement_list T_RBRACE end_of_statement_block
    ;

//---------------------------------------------------------------------
statement_block_creator:
    // this goes to nothing so that you can put an action here in p7
    ;

//---------------------------------------------------------------------
end_of_statement_block:
    // this goes to nothing so that you can put an action here in p7
    ;

//---------------------------------------------------------------------
statement_list:
    statement_list statement
    | empty
    ;

//---------------------------------------------------------------------
statement:
    if_statement
    | for_statement
    | assign_statement T_SEMIC
    | print_statement T_SEMIC
    | exit_statement T_SEMIC
    ;

//---------------------------------------------------------------------
if_statement:
    T_IF T_LPAREN expression T_RPAREN if_block %prec IF_NO_ELSE
    | T_IF T_LPAREN expression T_RPAREN if_block T_ELSE if_block %prec IF_ELSE
    ;

//---------------------------------------------------------------------
for_statement:
    T_FOR T_LPAREN statement_block_creator assign_statement end_of_statement_block T_SEMIC expression T_SEMIC statement_block_creator assign_statement end_of_statement_block T_RPAREN statement_block
    ;

//---------------------------------------------------------------------
print_statement:
    T_PRINT T_LPAREN expression T_RPAREN
    ;

//---------------------------------------------------------------------
exit_statement:
    T_EXIT T_LPAREN expression T_RPAREN
    ;

//---------------------------------------------------------------------
assign_statement:
    variable T_ASSIGN expression
    | variable T_PLUS_ASSIGN expression
    | variable T_MINUS_ASSIGN expression
    ;

//---------------------------------------------------------------------
variable:
    T_ID
{
      $$ = new Variable(*$1);
}
    | T_ID T_LBRACKET expression T_RBRACKET
{
      assert($3->get_type() == 1);
      $$ = new Variable(*$1, $3);
}
    | T_ID T_PERIOD T_ID
    | T_ID T_LBRACKET expression T_RBRACKET T_PERIOD T_ID
    ;

//---------------------------------------------------------------------
expression:
    primary_expression
{
    $$ = $1;
}
    | expression T_OR expression
{
       {
           $$ = new Expression(OR, $1, $3);
       }
}
    | expression T_AND expression
{
       {
           $$ = new Expression(AND, $1, $3);
       }
}
    | expression T_LESS_EQUAL expression
{
       {
           $$ = new Expression(LESS_THAN_EQUAL, $1, $3);
       }
}
    | expression T_GREATER_EQUAL  expression
{
       {
           $$ = new Expression(GREATER_THAN_EQUAL, $1, $3);
       }
}
    | expression T_LESS expression 
{
       {
           $$ = new Expression(LESS_THAN, $1, $3);
       }
}
    | expression T_GREATER  expression
{
       {
           $$ = new Expression(GREATER_THAN, $1, $3);
       }
}
    | expression T_EQUAL expression
{
       {
           $$ = new Expression(EQUAL, $1, $3);
       }
}
    | expression T_NOT_EQUAL expression
{
       {
           $$ = new Expression(NOT_EQUAL, $1, $3);
       }
}
    | expression T_PLUS expression 
{
          {
              $$ = new Expression(PLUS, $1, $3);
          }
}
    | expression T_MINUS expression
{
        int type1 = $1->get_type();
        int type3 = $3->get_type();
      if (type1 == 4 || type3 == 4)
          {
            $$ = new Expression(0); 
          }
      else
          {
              $$ = new Expression(MINUS, $1, $3);
          }
}
    | expression T_ASTERISK expression
{
      int type1 = $1->get_type();
      int type3 = $3->get_type();
    if (type1 == 4 || type3 == 4)
      {
         $$ = new Expression(0); 
      }
    else
         $$ = new Expression(MULTIPLY, $1, $3);
}
    | expression T_DIVIDE expression
{
      int type1 = $1->get_type();
      int type3 = $3->get_type();
    if (type1 == 4 || type3 == 4)
       {
           $$ = new Expression(0); 
       }
       else
       {
           $$ = new Expression(DIVIDE, $1, $3);
       }
}
    | expression T_MOD expression
{
      int type1 = $1->get_type();
      int type3 = $3->get_type();
    if (type1 == 4 || type3 == 4)
       {
           $$ = new Expression(0); 
       }
       else
       {
           $$ = new Expression(MOD, $1, $3);
       }
}

    | T_MINUS  expression //%prec UNARY_OPS
{
       int type = $2->get_type();
       if (type == 4)
       {
           $$ = new Expression(0); 
       }
       else
       {
           $$ = new Expression(UNARY_MINUS, $2);
       }
}
    | T_NOT  expression //%prec UNARY_OPS
{
     int type = $2->get_type();
     if (type == 4)
       {
          $$ = new Expression(0); 
       }
     else
          $$ = new Expression(NOT, $2);
}
       | math_operator T_LPAREN expression T_RPAREN
{
       if ($1 == SIN)
        {
           int type = $3->get_type();
           if (type == 4)
            { 
               $$ = new Expression(0);
            }
       else 
            { 
            $$ = new Expression(SIN, $3);
            }
        }
       if ($1 == COS)
        {
            int type = $3->get_type();
             if (type == 4)
               { 
                $$ = new Expression(0);
               }
             else 
            { 
                $$ = new Expression(COS, $3);
               }
        }
       if ($1 == TAN)
       {
           int type = $3->get_type();
           if (type == 4)
           { 
            $$ = new Expression(0);
           }
           else 
           { 
             $$ = new Expression(TAN, $3);
           }
       }
       if ($1 == ASIN)
       {
           int type = $3->get_type();
           if (type == 4)
            { 
              $$ = new Expression(0);
            }
           else 
            { 
              $$ = new Expression(ASIN, $3);
            }
        }
       if ($1 == ACOS)
         {
           int type = $3->get_type();
           if (type == 4)
            { 
              $$ = new Expression(0);
            }
            else 
            { 
              $$ = new Expression(ACOS, $3);
            }
         }
       if ($1 == ATAN)
         {
            int type = $3->get_type();
            if (type == 4)
            { 
              $$ = new Expression(0);
            }
           else 
            { 
              $$ = new Expression(ATAN, $3);
            }
          }
       if ($1 == SQRT)
         {
          int type = $3->get_type();
          if (type == 4)
          { 
            $$ = new Expression(0);
          }
          else 
          { 
            int type = $3->get_type();
            if (type == 1)
            {
                if ($3->eval_int() < 0)
                 {
                  $$ = new Expression(0);
                 }
                else
                {
                  $$ = new Expression(SQRT, $3);
                }
           }
           if (type == 2)
           {
              if ($3->eval_double() < 0)
                {
                  $$ = new Expression(0);
                }
              else
                   $$ = new Expression(SQRT, $3);
                 }
              }
         }
         if ($1 == FLOOR)
         {
           int type = $3->get_type();
           if (type == 4)
            { 
                $$ = new Expression(0);
            }
           else 
            { 
             $$ = new Expression(FLOOR, $3);
            }
         }
         if ($1 == ABS)
         {
            int type = $3->get_type();
            if (type == 4)
             { 
                $$ = new Expression(0);
             }
            else 
             { 
               $$ = new Expression(ABS, $3);
             }
         }
          if ($1 == RANDOM)
             {
                int type = $3->get_type();
                if (type == 4)
                 { 
                    $$ = new Expression(0);
                 }
                else 
                 { 
                    $$ = new Expression(RANDOM, $3);
                 }
             }
}
    //| variable geometric_operator variable
    ;

//---------------------------------------------------------------------
primary_expression:
    T_LPAREN  expression T_RPAREN
{
    $$ = $2;
}
    | variable
{
    $$ = new Expression($1);
}
    | T_INT_CONSTANT
{
    $$ = new Expression(INT, $1);
}
    | T_TRUE
{
    $$ = new Expression(INT, 1);
}
    | T_FALSE
{
    $$ = new Expression(INT, 0);
}
    | T_DOUBLE_CONSTANT
{
    $$ = new Expression(DOUBLE, $1);
}
    | T_STRING_CONSTANT
{
    $$ = new Expression(STRING, *$1);
}

    ;

//---------------------------------------------------------------------
geometric_operator:
    T_TOUCHES
    | T_NEAR
    ;

//---------------------------------------------------------------------
math_operator:
    T_SIN
{
   $$ = SIN;
}
    | T_COS
{  
    $$ = COS;
}
    | T_TAN
{ 
    $$ = TAN;
}
    | T_ASIN
{ 
    $$ = ASIN;
}
    | T_ACOS
{
    $$ = ACOS;
}
    | T_ATAN
{
    $$ = ATAN;
}
    | T_SQRT
{
    $$ = SQRT;
}
    | T_ABS
{
     $$ = ABS;
}
    | T_FLOOR
{
     $$ = FLOOR;
}
    | T_RANDOM
{
    $$ = RANDOM;
}
    ;

//---------------------------------------------------------------------
empty:
    // empty goes to nothing so that you can use empty in productions
    // when you want a production to go to nothing
    ;
