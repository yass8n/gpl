#ifndef EXPRESSION_H_
#define EXPRESSION_H_
# include "gpl_type.h"
# include <assert.h>
# include <string>

using namespace std;
class Variable;
class Animation_block;
class Expression {
  public:
    Expression();
    Expression(Operator_type, Expression*, Expression*);
    Expression(Operator_type, Expression*);
    Expression(Variable *var);
    Expression(Gpl_type gpl, int x);
    Expression(Gpl_type gpl, double x);
    Expression(Gpl_type gpl, string x);
    int eval_int();
    Animation_block* eval_animation_block();
    double eval_double();
    string get_var_name();
    bool exp_var_included();
    string get_string_type();
    string eval_string();
    Gpl_type get_type(); 
    int evaluate_type();
    void gpl_reference_set(Gpl_type & gpl, int x);
    void set_type_using_number( int type);
  private:
    string m_string_type;
    Operator_type m_op_type;
    int m_int;
    double  m_double;
    string m_string;
    Variable *m_var;
    Gpl_type m_gpl_type;
    Expression* m_right;
    Expression* m_left;

};
#endif
