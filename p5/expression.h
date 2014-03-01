#ifndef EXPRESSION_H_
#define EXPRESSION_H_
# include "variable.h"
# include "Gpl_type.h"
# include <assert.h>


class Expression {
  public:
     Expression();
//    Expression(Variable *var);
    Expression(Gpl_type gpl, int x);
    int eval_int();
    Gpl_type get_type();
  private:
    string m_type;
    int m_int;
    Variable *m_var;
    Gpl_type m_gpl;

};
#endif
