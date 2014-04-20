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
// bison syntax to indicate the end of the header
%} 

%union {
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
%type <union_expression_type> parameter_list_or_empty
%type <union_expression_type> parameter_list
%type <union_symbol_type> animation_parameter
%type <union_variable_type> variable
%type <union_operator_type> math_operator
%type <union_statement_type> print_statement
%type <union_statement_type> for_statement
%type <union_statement_type> assign_statement
%type <union_statement_type> if_statement
%type <union_statementblock_type> end_of_statement_block
%type <union_statementblock_type> if_block
%type <union_statementblock_type> statement_block
%type <union_int> keystroke
%type <union_int> object_type

%type <union_int> T_PRINT
%type <union_int> T_EXIT
%type <union_int> T_LBRACE
%type <union_int> T_FORWARD

%token <union_int> T_INT_CONSTANT // this token has a int value associated w/it
%token <union_string> T_ID // this token has a string value associated w/it
%token <union_string> T_ERROR // this token has a string value associated w/it
%token <union_double> T_DOUBLE_CONSTANT
%token <union_string> T_STRING_CONSTANT

%nonassoc IF_NO_ELSE
%nonassoc IF_ELSE
%nonassoc T_ELSE

%left T_OR 
%left T_AND 
%left T_EQUAL T_NOT_EQUAL
%left T_LESS T_GREATER T_LESS_EQUAL T_GREATER_EQUAL
%left T_PLUS T_MINUS
%left T_ASTERISK T_DIVIDE T_MOD
%left T_NOT

%nonassoc UNARY_OPS

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
//sym_table is a singleton so we always get the same symbol table
 string id = *$2;
     if (!sym_table->lookup(id))//if the variable is not on the sym_table, then insert it
     {
          if ($3 != NULL)
          {
string ts;
double td;
int ti;
          int type = $3->get_type();
           if (type == INT)
              ti = $3->eval_int();
           if (type == DOUBLE)
              td = $3->eval_double();
           if (type == STRING)
              ts = $3->eval_string();

          if ($1 == INT)//put into symbol table
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
           if ($1 == DOUBLE)//put into symbol table
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
           if ($1 == STRING)//put into symbol table
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

           if ($1 == INT)
           {
             Symbol *sym = new Symbol();
             (*sym).set(id, "INT", 0, 0, "");
             sym_table->set_sym(id, *sym);
           }
           if ($1 == DOUBLE)
           {
             Symbol *sym = new Symbol();
             (*sym).set(id, "DOUBLE", 0, 0, "");
             sym_table->set_sym(id, *sym);
           }
           if ($1 == STRING)
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
    | 
simple_type  T_ID  T_LBRACKET expression T_RBRACKET

{
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *$2;
     if (!sym_table->lookup(id))
      {
         if ($4->get_type()== STRING)
           { 
            string array_size = $4->eval_string();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id, num.str()); 
           }
        if ($4->get_type()== STRING)
          { 
            double array_size = $4->eval_double();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
          }
        else if (!sym_table->lookup(id) )
          {
           if( $4->get_type()== INT)
              {
              int array_size = $4->eval_int();
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
          if ($1 == INT)
             {
              int initial_value =  0;
              (*sym).set(name.str(), "INT", initial_value, 0, "");
             }
         if ($1 == DOUBLE)
             {
              double initial_value =  0.0;
              (*sym).set(name.str(), "DOUBLE", initial_value, 0, "");
             }
         if ($1 == STRING)
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
    object_type T_ID 
{
name_of_object = *$2;
if ($1 == T_TRIANGLE)
cur_object = new Triangle();
if ($1 == T_PIXMAP)
cur_object = new Pixmap();
if ($1 == T_CIRCLE)
cur_object = new Circle();
if ($1 == T_RECTANGLE)
cur_object = new Rectangle();
if ($1 == T_TEXTBOX)
cur_object = new Textbox();
          Symbol_table *sym_table = Symbol_table::instance();
	  Symbol * sym = new Symbol();
          (*sym).set_game_object(name_of_object, cur_object);
          sym_table->set_sym(name_of_object, *sym);
}
 T_LPAREN parameter_list_or_empty T_RPAREN
{
}
    | object_type T_ID T_LBRACKET expression T_RBRACKET
{
 Symbol_table *sym_table = Symbol_table::instance();
 string id = *$2;
     if (!sym_table->lookup(id))
      {
         if ($4->get_type()== STRING)
           { 
            string array_size = $4->eval_string();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id, num.str()); 
           }
        if ($4->get_type()== STRING)
          { 
            double array_size = $4->eval_double();
            stringstream num;
            num << array_size;
            Error::error(Error::INVALID_ARRAY_SIZE, id,num.str()); 
          }
        else if (!sym_table->lookup(id) )
          {
           if( $4->get_type()== INT)
              {
              int array_size = $4->eval_int();
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
          if ($1 == T_TRIANGLE)
             {
              cur_object = new Triangle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ($1 == T_PIXMAP)
             {
              cur_object = new Pixmap();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ($1 == T_CIRCLE)
             {
              cur_object = new Circle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ($1 == T_RECTANGLE)
             {
              cur_object = new Rectangle();
              (*sym).set_game_object(name.str(), cur_object);
             }
         if ($1 == T_TEXTBOX)
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
    ;

//---------------------------------------------------------------------
object_type:
    T_TRIANGLE
{
 $$ = T_TRIANGLE;
}
    | T_PIXMAP
{
 $$ = T_PIXMAP;
}
    | T_CIRCLE
{
 $$ = T_CIRCLE;
}
    | T_RECTANGLE
{
 $$ = T_RECTANGLE;
}
    | T_TEXTBOX
{
 $$ = T_TEXTBOX;
}
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
{  
string param = *$1;
Gpl_type gpl_type;
Symbol_table *sym_table = Symbol_table::instance();
Status status = cur_object->get_member_variable_type(param, gpl_type);
if (status == MEMBER_NOT_DECLARED)
         Error::error(Error::UNKNOWN_CONSTRUCTOR_PARAMETER, cur_object->type(), param);
if (status == MEMBER_NOT_OF_GIVEN_TYPE)
        cout << "member not of given type" << endl;

int type = $3->get_type();
    if (gpl_type == INT)
       {
          if(type != INT)
            {
               Error::error(Error::INCORRECT_CONSTRUCTOR_PARAMETER_TYPE, name_of_object, param);
            }
          else 
             cur_object->set_member_variable(param, $3->eval_int());
       }
    else if (gpl_type == DOUBLE)
       {
          if(type != INT && type != DOUBLE)
             { cout << "error2" << endl; }
          else if (type == INT)
             {
              double d = ((double) $3->eval_int()); 
             cur_object->set_member_variable(param, d); 
             }
           else if (type == DOUBLE)
             {
              cur_object->set_member_variable(*$1, $3->eval_double());
             }
        }
    else if (gpl_type == STRING)
       {
          if(type != INT && type != DOUBLE && type != STRING)
             { cout << "error3" << endl; }
          else if (type == INT)
             {
               int name= $3->eval_int();
               stringstream parameter;
               parameter<< name;
               cur_object->set_member_variable(param, parameter.str());
             }
           else if (type == DOUBLE)
             {
               double name= $3->eval_double();
               stringstream parameter;
               parameter<< name;
               cur_object->set_member_variable(param, parameter.str());
             }
           else if (type == STRING)
             {
               cur_object->set_member_variable(param,$3->eval_string()); 
             }
         }
     else if(param  == "animation_block") 
         {
             if (gpl_type!= ANIMATION_BLOCK)
                 cout << "error4" << endl;
            Symbol_table *sym_table = Symbol_table::instance();
             Symbol *s = sym_table->get($3->get_var_name());
            if (s->get_animation_block()->get_parameter_symbol()->get_game_object()->type() != cur_object->type())
               {
                Error::error(Error::TYPE_MISMATCH_BETWEEN_ANIMATION_BLOCK_AND_OBJECT, name_of_object,s->get_name() );
               }    
            else
               cur_object->set_member_variable(param, $3->eval_animation_block());
         }
     else  if (type == GAME_OBJECT)
         {
            Symbol_table *sym_table = Symbol_table::instance();
            Symbol *sym = new Symbol();
            sym->set_game_object(param, cur_object);
            sym_table->set_sym(param, *sym);
         }
}
    ;

//---------------------------------------------------------------------
forward_declaration:
    T_FORWARD T_ANIMATION T_ID T_LPAREN animation_parameter T_RPAREN
{

     Symbol_table *sym_table = Symbol_table::instance();
      string id = *$3;
     if (!sym_table->lookup(id))//if the variable is not on the sym_table, then insert it
     {
        if ($5 != NULL)
        {
                              Symbol *temp1 = $5;
                              if (!sym_table->lookup(temp1->get_name()))//if the variable is not on the sym_table, then insert it
                                 {
                                    Animation_block *block = new Animation_block($1,$5,*$3);
                                    Symbol_table *sym_table = Symbol_table::instance();
                                    Symbol *sym = new Symbol();
                                    sym_table->set_sym(temp1->get_name(), *temp1);
                                    sym->set_animation_block(id, block);
                                    sym_table->set_sym(*$3, *sym);
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
{   
Game_object * cur_ob;
if ($1 == T_TRIANGLE)
cur_ob = new Triangle();
if ($1 == T_PIXMAP)
cur_ob = new Pixmap();
if ($1 == T_CIRCLE)
cur_ob = new Circle();
if ($1 == T_RECTANGLE)
cur_ob = new Rectangle();
if ($1 == T_TEXTBOX)
cur_ob = new Textbox();
	  Symbol * sym = new Symbol();
          sym->set_game_object(*$2, cur_ob);
$$ = sym;
}
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
    {
      Event_manager *e_man = Event_manager::instance();
      e_man->insert($3, $2);
    }
      
    ;

//---------------------------------------------------------------------
keystroke:
    T_SPACE
{
$$ = 0;
}
    | T_UPARROW
{
$$ = 3;
}
    | T_DOWNARROW
{
$$ = 4;
}
    | T_LEFTARROW
{
$$ = 1;
}
    | T_RIGHTARROW
{
$$ = 2;
}
    | T_LEFTMOUSE_DOWN
{
$$ = 5;
}
    | T_MIDDLEMOUSE_DOWN
{
$$ = 6;
}
    | T_RIGHTMOUSE_DOWN
{
$$ = 7;
}
    | T_LEFTMOUSE_UP
{
$$ =8;
}
    | T_MIDDLEMOUSE_UP
{
$$ =9;
}
    | T_RIGHTMOUSE_UP
{
$$ = 10;
}
    | T_MOUSE_MOVE
{
$$ = 11;
}
    | T_MOUSE_DRAG
{
$$ = 12;
}
    | T_AKEY 
{
$$ = 14;
}
    | T_SKEY 
{
$$ = 15;
}
    | T_DKEY 
{
$$ = 16;
}
    | T_FKEY 
{
$$ = 17;
}
    | T_HKEY 
{
$$ = 18;
}
    | T_JKEY 
{
$$ = 19;
}
    | T_KKEY 
{
$$ = 20;
}
    | T_LKEY 
{
$$ = 21;
}
    | T_WKEY 
{
$$ = 22;
}
    | T_F1
{
$$ = 13;
}
    ;

//---------------------------------------------------------------------
if_block:
    statement_block_creator statement end_of_statement_block
{
  $$ = $3;
}
    | statement_block
{
  $$ = $1;
}
    ;

//---------------------------------------------------------------------
statement_block:
    T_LBRACE statement_block_creator statement_list T_RBRACE end_of_statement_block
    {
       $$ = $5;
    }
    ;
 

//---------------------------------------------------------------------
statement_block_creator:
    // this goes to nothing so that you can put an action here in p7
     {
       statement_stack.push(new Statement_block(0));
     }
    ;

//---------------------------------------------------------------------
end_of_statement_block:
	
    // this goes to nothing so that you can put an action here in p7
     {
      Statement_block *s = statement_stack.top();
      statement_stack.pop();
      $$ = s;
     }
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
{
    if($3->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_IF_STMT_EXPRESSION);
    If * if_statement = new If($3, $5, NULL);
    statement_stack.top()->insert(if_statement);
}
   
    | T_IF T_LPAREN expression T_RPAREN if_block T_ELSE if_block %prec IF_ELSE
{
    if($3->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_IF_STMT_EXPRESSION);
    If * else_statement = new If($3,$5, $7);
    statement_stack.top()->insert(else_statement);
}
    ;

//---------------------------------------------------------------------
for_statement:
    T_FOR T_LPAREN statement_block_creator assign_statement end_of_statement_block T_SEMIC expression T_SEMIC statement_block_creator assign_statement end_of_statement_block T_RPAREN statement_block
{
   if ($7->get_type()!=INT)
      Error::error(Error::INVALID_TYPE_FOR_FOR_STMT_EXPRESSION);

   For * for_statement = new For($5, $7, $11, $13);
   statement_stack.top()->insert(for_statement);
}

    ;

//---------------------------------------------------------------------
print_statement:
    T_PRINT T_LPAREN expression T_RPAREN
    {
      if($3->get_type()!= INT && 
         $3->get_type()!= DOUBLE && 
         $3->get_type()!= STRING)
         Error::error(Error::INVALID_TYPE_FOR_PRINT_STMT_EXPRESSION);
      Statement *print_statement = new Print($1, $3);
      statement_stack.top()->insert(print_statement);
      
    }
        
    ;

//---------------------------------------------------------------------
exit_statement:
    T_EXIT T_LPAREN expression T_RPAREN
{
    if($3->get_type()!=INT)
     {
      string type;
      if ($3->get_type()==DOUBLE)
         type = "double";
      if ($3->get_type()==STRING)
         type = "string";
      Error::error(Error::EXIT_STATUS_MUST_BE_AN_INTEGER,type );
     }
    Exit * exit_statement = new Exit($1,$3);
    statement_stack.top()->insert(exit_statement);
}
    ;

//---------------------------------------------------------------------
assign_statement:
    variable T_ASSIGN expression
    {
      Gpl_type type_of_variable = $1->get_type();
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
      Gpl_type type_of_expression = $3->get_type();
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
               Error::error(Error::INVALID_LHS_OF_ASSIGNMENT,$1->get_name(), type_v ); 
          }
      Statement * assign_statement = new Assign($1, $3, "=");
      statement_stack.top()->insert(assign_statement);
    }
    | variable T_PLUS_ASSIGN expression
    {
      Gpl_type type_of_variable = $1->get_type();
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
      Gpl_type type_of_expression = $3->get_type();
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
               Error::error(Error::INVALID_LHS_OF_PLUS_ASSIGNMENT,$1->get_name(), type_v ); 

      Statement * assign_statement = new Assign($1, $3, "+=");
      statement_stack.top()->insert(assign_statement);
    }
    | variable T_MINUS_ASSIGN expression
    {
      Gpl_type type_of_variable = $1->get_type();
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
      Gpl_type type_of_expression = $3->get_type();
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
               Error::error(Error::INVALID_LHS_OF_MINUS_ASSIGNMENT,$1->get_name(), type_v ); 
          }
      Statement * assign_statement = new Assign($1, $3, "-=");
      statement_stack.top()->insert(assign_statement);
    }
    ;

//---------------------------------------------------------------------
variable:
    T_ID
    {
      $$ = new Variable(*$1);
    }
    | T_ID T_LBRACKET expression T_RBRACKET
{
 Symbol_table *sym_table = Symbol_table::instance();
      if ($3->get_type() == STRING)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *$1, "A string expression"); 
         Expression *error_exp = new Expression(INT, 0);
         $$ = new Variable(*$1, error_exp);

      }
      if ($3->get_type() == DOUBLE)
      {
         Error::error(Error::ARRAY_INDEX_MUST_BE_AN_INTEGER, *$1, "A double expression"); 
         Expression *error_exp = new Expression(INT, 0);
         $$ = new Variable(*$1, error_exp);
      }
   if ($3->get_type() == INT)
    {
      int index= $3->eval_int();
      stringstream name;
      name << *$1 << '[' << 0 << ']';
      if(sym_table->lookup(name.str())) 
      {
         name.str("");
         name << *$1 << '[' << index << ']';
         if(!sym_table->lookup(name.str()))
         { 
         stringstream num;
         num << index;
         Error::error(Error::ARRAY_INDEX_OUT_OF_BOUNDS, *$1, num.str()); 
         Expression *error_exp = new Expression(INT, 0);
         $$ = new Variable(*$1, error_exp);
         }
         else 
          {
           $$ = new Variable(*$1, $3);
          }
      }
      else if(sym_table->lookup(*$1))
        //its in the symbol table but its stored without the brackets...its not an array
        //so return an "error" variable
      {
	 Error::error(Error::VARIABLE_NOT_AN_ARRAY, *$1);
         $$ = new Variable(*$1, 0);
      }
      else 
         cout << "gpl.y:its not in the symbol table" << endl;
   }
}
        
    | T_ID T_PERIOD T_ID
{
         string param = *$3;
         Gpl_type gpl_type;
         Symbol_table *sym_table = Symbol_table::instance();
         if(sym_table->lookup(*$1))
           {
             Symbol *temp = sym_table->get(*$1); 
               if (temp->get_type() != GAME_OBJECT)
                  {
                    Error::error(Error::LHS_OF_PERIOD_MUST_BE_OBJECT, *$1);
                    $$ = new Variable(*$1, 0);
                  }
               if (temp->get_type() == GAME_OBJECT)
                  {
                         Status status = temp->get_game_object()->get_member_variable_type(param,gpl_type);
                         if (status == MEMBER_NOT_DECLARED)
                            {
                               Error::error(Error::UNDECLARED_MEMBER, *$1, param);
                               $$ = new Variable(*$1, 0);
                             }
                         else if (status == MEMBER_NOT_OF_GIVEN_TYPE)
                              cout << "member not of given type" << endl;
                         else if (status == OK)
                               $$ = new Variable(*$1, *$3);
                  } 
            }
         else 
           {
            Error::error(Error::UNDECLARED_VARIABLE, *$1);
            $$ = new Variable(*$1, 0);
           }
}
    | T_ID T_LBRACKET expression T_RBRACKET T_PERIOD T_ID
{
           if( $3->get_type()== INT)
              {
                   int index = $3->eval_int();
                   if (index < 0)
                   {
                     stringstream num;
                     num << index;
                     Error::error(Error::INVALID_ARRAY_SIZE, *$1,num.str()); 
                    //this error is the declaration error...change it
                   }
                        ostringstream name;
                        name << *$1  << '[' << index << ']';
                        string param = *$6;
                        Gpl_type gpl_type;
                        Symbol_table *sym_table = Symbol_table::instance();
                        string name_of_index;
                        bool index_is_symbol = false;
                        if ($3->the_type_of_exp() == "variable")
                         {
                           index_is_symbol = true;
                           name_of_index = $3->get_var_name();
                         }
                       if(sym_table->lookup(name.str()))
                         {
                           Symbol *temp = sym_table->get(name.str()); 
                           if (temp->get_type() != GAME_OBJECT)
                            {
                              Error::error(Error::LHS_OF_PERIOD_MUST_BE_OBJECT, *$1);
                              $$ = new Variable(*$1, 0);
                              }
                           if (temp->get_type() == GAME_OBJECT)
                               {
                                   Status status = temp->get_game_object()->get_member_variable_type(param,gpl_type);
                                   if (status == MEMBER_NOT_DECLARED)
                                    {
                                      Error::error(Error::UNDECLARED_MEMBER, *$1, param);
                                      $$ = new Variable(*$1,0);
                                    }
                                   else if (status == MEMBER_NOT_OF_GIVEN_TYPE)
                                      cout << "member not of given type" << endl;
                                   else if (status == OK)
                                     {
                                        if (index_is_symbol)
                                           {
                                              $$ = new Variable(*$1, *$6, name_of_index);
                                           }
                                        else
                                           {
                                              $$ = new Variable(name.str(), *$6);
                                           }
                                     }
                               } 
                         }
                       else 
                         {
                           Error::error(Error::UNDECLARED_VARIABLE, *$1);
                           $$ = new Variable(*$1, *$6);
                         }
              }
}
    ;

//---------------------------------------------------------------------
expression:
    primary_expression
{
    $$ = $1;
}
    | expression T_OR expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
          {
            int type1 = $1->get_type();
            int type3 = $3->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "||"); 
                 $$ = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "||"); 
                  $$ = new Expression(INT,0); 
                }
             else
                 $$ = new Expression(OR, $1, $3);
           }
}
    | expression T_AND expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
          {
            int type1 = $1->get_type();
            int type3 = $3->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "&&"); 
                 $$ = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "&&"); 
                  $$ = new Expression(INT,0); 
                }
             else
                  $$ = new Expression(AND, $1, $3);
           }
}
    | expression T_LESS_EQUAL expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(LESS_THAN_EQUAL, $1, $3);
       }
}
    | expression T_GREATER_EQUAL  expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(GREATER_THAN_EQUAL, $1, $3);
       }
}
    | expression T_LESS expression 
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(LESS_THAN, $1, $3);
       }
}
    | expression T_GREATER  expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(GREATER_THAN, $1, $3);
       }
}
    | expression T_EQUAL expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(EQUAL, $1, $3);
       }
}
    | expression T_NOT_EQUAL expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
       {
           $$ = new Expression(NOT_EQUAL, $1, $3);
       }
}
    | expression T_PLUS expression 
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
          {
              $$ = new Expression(PLUS, $1, $3);
          }
}
    | expression T_MINUS expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
          {
        int type1 = $1->get_type();
        int type3 = $3->get_type();
      if (type1 == STRING)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "-"); 
            $$ = new Expression(INT,0); 
          } 
      else if (type3 == STRING)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "-"); 
            $$ = new Expression(INT,0); 
          }
      else
              $$ = new Expression(MINUS, $1, $3);
          }

}
    | expression T_ASTERISK expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
          {
            int type1 = $1->get_type();
            int type3 = $3->get_type();
             if (type1 == STRING)
               {
                 Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "*"); 
                 $$ = new Expression(INT,0); 
               } 
             else if (type3 == STRING)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "*"); 
                  $$ = new Expression(INT,0); 
                }
             else
                  $$ = new Expression(MULTIPLY, $1, $3);
           }
}
    | expression T_DIVIDE expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
         {
        int type1 = $1->get_type();
        int type3 = $3->get_type();
      if (type1 == STRING)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "/"); 
            $$ = new Expression(INT,0); 
          } 
      else if (type3 == STRING)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "/"); 
            $$ = new Expression(INT,0); 
          }
      else
              $$ = new Expression(DIVIDE, $1, $3);
          }
}
    | expression T_MOD expression
{
      if ($1->the_type_of_exp() == "variable" && !$1->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
         {
        int type1 = $1->get_type();
        int type3 = $3->get_type();
      if (type1 == STRING)
          {
         Error::error(Error::INVALID_LEFT_OPERAND_TYPE, "mod"); 
            $$ = new Expression(INT,0); 
          } 
      else if (type3 == STRING)
          {
         Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "mod"); 
            $$ = new Expression(INT,0); 
          }
      else
              $$ = new Expression(MOD, $1, $3);
          }
}

    | T_MINUS  expression %prec UNARY_OPS
{
      if ($2->the_type_of_exp() == "variable" && !$2->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
         {
       int type = $2->get_type();
       if (type == STRING)
       {
           $$ = new Expression(INT, 0); 
       }
       else
       {
           $$ = new Expression(UNARY_MINUS, $2);
       }
         }
}
    | T_NOT  expression %prec UNARY_OPS
{
      if ($2->the_type_of_exp() == "variable" && !$2->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
         {
     int type = $2->get_type();
     if (type == STRING)
       {
          $$ = new Expression(INT,0); 
       }
     else
            {
              $$ = new Expression(NOT, $2);
            }
         }
}
       | math_operator T_LPAREN expression T_RPAREN
{
      if ($3->the_type_of_exp() == "variable" && !$3->exp_var_included())
          {
               $$ = new Expression(INT,0); 
          }
      else
         {
       if ($1 == SIN)
        {
           int type = $3->get_type();
           if (type == STRING)
            { 
               $$ = new Expression(INT, 0);
            }
       else 
            { 
            $$ = new Expression(SIN, $3);
            }
        }
       if ($1 == COS)
        {
            int type = $3->get_type();
             if (type == STRING)
               { 
                $$ = new Expression(INT, 0);
               }
             else 
            { 
                $$ = new Expression(COS, $3);
               }
        }
       if ($1 == TAN)
       {
           int type = $3->get_type();
           if (type == STRING)
           { 
            $$ = new Expression(INT,0);
           }
           else 
           { 
             $$ = new Expression(TAN, $3);
           }
       }
       if ($1 == ASIN)
       {
           int type = $3->get_type();
           if (type == STRING)
            { 
              $$ = new Expression(INT, 0);
            }
           else 
            { 
              $$ = new Expression(ASIN, $3);
            }
        }
       if ($1 == ACOS)
         {
           int type = $3->get_type();
           if (type == STRING)
            { 
              $$ = new Expression(INT,0);
            }
            else 
            { 
              $$ = new Expression(ACOS, $3);
            }
         }
       if ($1 == ATAN)
         {
            int type = $3->get_type();
            if (type == STRING)
            { 
              $$ = new Expression(INT,0);
            }
           else 
            { 
              $$ = new Expression(ATAN, $3);
            }
          }
       if ($1 == SQRT)
         {
          int type = $3->get_type();
          if (type == STRING)
          { 
             Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "sqrt"); 
            $$ = new Expression(INT,0);
          }
          else 
          { 
            int type = $3->get_type();
            if (type == INT)
            {
                if ($3->eval_int() < 0)
                 {
                  $$ = new Expression(INT,0);
                 }
                else
                {
                  $$ = new Expression(SQRT, $3);
                }
           }
           if (type == DOUBLE)
           {
              if ($3->eval_double() < 0)
                {
                  Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "sqrt"); 
                  $$ = new Expression(INT,0);
                }
              else
                   $$ = new Expression(SQRT, $3);
                 }
              }
         }
         if ($1 == FLOOR)
         {
           int type = $3->get_type();
           if (type == STRING)
            { 
                Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "floor"); 
                $$ = new Expression(INT,0);
            }
           else 
            { 
             $$ = new Expression(FLOOR, $3);
            }
         }
         if ($1 == ABS)
         {
            int type = $3->get_type();
            if (type == STRING)
             { 
             Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "abs"); 
                $$ = new Expression(INT,0);
             }
            else 
             { 
               $$ = new Expression(ABS, $3);
             }
         }
          if ($1 == RANDOM)
             {
                int type = $3->get_type();
                if (type == STRING)
                 { 
                    Error::error(Error::INVALID_RIGHT_OPERAND_TYPE, "random"); 
                    $$ = new Expression(INT,0);
                 }
                else 
                 { 
                    $$ = new Expression(RANDOM, $3);
                 }
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
