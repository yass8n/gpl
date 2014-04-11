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
    Variable(string id1, string id3);
    int get_int_value();
    Animation_block* return_animation_block();
    double get_double_value();
    string get_string_value();
    string get_name();
    Gpl_type get_type();
    bool included();
    string m_id;
    int eval_int();
    string eval_string();
    double eval_double();
  private:
    string m_string_type;
    int m_member_variable_int;
    double m_member_variable_double;
    string m_member_variable_string;
    Animation_block*  m_member_variable_animation_block;
    void set_member_variable_of_this_variable(string id3);
    bool m_included;
    Symbol *m_sym;
    Expression *m_exp;
    Gpl_type m_type;
    bool m_game_object_member_set;
};
#endif
