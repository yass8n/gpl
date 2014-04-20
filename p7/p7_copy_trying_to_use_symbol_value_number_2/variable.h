#ifndef VARIABLE_H_
#define VARIABLE_H_
# include <iostream>
using namespace std;
# include "symbol.h"
# include "symbol_table.h"
# include <assert.h>
# include "gpl_type.h"
class Animation_block;
class Expression;
class Variable{
  public:
    Variable(string id);
    Variable(string id, int x);
    Variable();
    Variable(string id, Expression *exp);
    Variable(string id1, string param);
    Variable(string id1, string param, string name_of_index);
    string get_name_for_assign_statement();
    string return_string_type();
    int get_int_value();
    Animation_block* return_animation_block();
    double get_double_value();
    string get_string_value();
    string get_name();
    Gpl_type get_type();
    bool included();
    void set_assignment_value(string action, Expression * exp);
    string m_id;
    int eval_int();
    string eval_string();
    double eval_double();
    string return_param_id();
    Symbol * return_symbol();
    Expression* get_expression();
  private:
    string m_string_type;
    void set_equal(Symbol * s, string name, Gpl_type type, Expression * e);
    void set_m_id(string id1, string name_of_index);
    int m_member_variable_int;
    double m_member_variable_double;
    string m_param_id;
    string m_member_variable_string;
    Animation_block*  m_member_variable_animation_block;
    void set_member_variable_of_this_variable(string id3);
    bool m_included;
    Symbol *m_sym;
    Expression *m_exp;
    Gpl_type m_type;
    string m_name_of_index;
    string m_id1;
    bool m_game_object_member_set;
};
#endif
