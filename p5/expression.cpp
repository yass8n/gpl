# include "expression.h"
Expression::Expression(Gpl_type gpl, int x)
{
  assert(gpl == 1);
  m_gpl=gpl;
  m_int = x;
  m_var = NULL;
  m_type = "T_INT_CONSTANT";
  cout << x << " matched an int   " << gpl << endl;
}
Expression::Expression(Variable *var)
{
  cout << " matched a variable " << var->get_name()<< endl;
  assert(var != NULL);
  m_var = var;
  m_type = "variable";
}

Expression::Expression()
{
}
Gpl_type Expression::get_type()
{
  return m_gpl;
}
int Expression::eval_int()
{
  assert(m_gpl == 1);
  if (m_type == "T_INT_CONSTANT")
    return m_int;
  if (m_var != NULL)
    return m_var->get_int_value();
}
