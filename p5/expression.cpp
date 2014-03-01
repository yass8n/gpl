# include "expression.h"
Expression::Expression(Gpl_type type, int x)
{
  assert(type == 1);
  m_gpl_type=type;
  m_int = x;
  m_var = NULL;
  m_right = NULL;
  m_left= NULL;
  m_string_type = "T_INT_CONSTANT";
}
Expression::Expression(Variable *var)
{
  assert(var != NULL);
  m_left = NULL;
  m_right= NULL;
  m_var = var;
  m_string_type = "variable";
  cout << " created an expression Node of type variable  -> " << var->get_name()<< endl;
}
Expression::Expression(Operator_type op, Expression* left, Expression* right)
{
  m_op_type = op;
  m_left = left;
  m_right = right;
  m_string_type = "binary_op";
  int type = evaluate_type();
  set_type_using_number(type);
  if (type == 1)
  cout << "yess maaaam the type is 1" << endl;
}
int Expression::evaluate_type()
{
  Gpl_type left_type;
  Gpl_type right_type;
  if (m_left != NULL && m_right != NULL)
  {
      left_type =  m_left->get_type();
      right_type = m_right->get_type();
  }
  if (m_left != NULL && m_right == NULL)
  {
    left_type = m_left->get_type();
  }
  if (m_left == NULL && m_right != NULL)
    cout << "Error in expression evaluataion" << endl;
  if (left_type == 1 && right_type == 1)
    return 1;
  if ((left_type == 1 && right_type == 2) || (left_type == 2 && right_type == 1))
    return 2;
  if (left_type == 2 && right_type == 2)
    return 2;
  if ((left_type == 4 || right_type == 4))
      return 4;
}
Expression::Expression()
{
}
Gpl_type Expression::get_type()
{
    return m_gpl_type;
}
void Expression::set_type(Gpl_type type)
{
  m_gpl_type = type;
}
void Expression::set_type_using_number(int type)
{
  if (type == 1)
    m_gpl_type =INT;
  if (type == 2)
    m_gpl_type = DOUBLE;
  if (type == 4)
    m_gpl_type = STRING;
}
int Expression::eval_int()
{
  assert(m_gpl_type == 1);
  if (m_string_type == "T_INT_CONSTANT")
    return m_int;
  if (m_var != NULL)
    return m_var->get_int_value();
  if (m_op_type == MULTIPLY && m_gpl_type == INT )
  {
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() * m_right->eval_int();
  }
}
