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
Expression::Expression(Gpl_type type, double x)
{
  assert(type == 2);
  m_gpl_type=type;
  m_double = x;
  m_var = NULL;
  m_right = NULL;
  m_left= NULL;
  m_string_type = "T_DOUBLE_CONSTANT";
}
Expression::Expression(Gpl_type type, string x)
{
  assert(type == 4);
  m_gpl_type=type;
  m_string= x;
  m_var = NULL;
  m_right = NULL;
  m_left= NULL;
  m_string_type = "T_STRING_CONSTANT";
}
Expression::Expression(Variable *var)
{
  assert(var != NULL);
  m_left = NULL;
  m_right= NULL;
  m_var = var;
  m_string_type = "variable";
  int type = evaluate_type();
  set_type_using_number(type);
  cout << " TYPE is " << type << endl;
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
void Expression::gpl_reference_set(Gpl_type &gpl, int x)
{
  if (x == 1)
    gpl = INT;
  if (x == 2)
    gpl = DOUBLE;
  if (x==4)
    gpl = STRING;
}
int Expression::evaluate_type()
{
  Gpl_type left_type;
  Gpl_type right_type;
  if (m_left != NULL && m_right != NULL)
  {
      int l= m_left->evaluate_type();
      int r= m_right->evaluate_type();
      gpl_reference_set(left_type, l);
      gpl_reference_set(right_type, r);
  }
  if (m_left != NULL && m_right == NULL)
  {
    int l = m_left->evaluate_type();
    gpl_reference_set(left_type, l);
  }
  if (m_left == NULL && m_right != NULL)
    cout << "Error in expression evaluataion" << endl;
  if (m_left == NULL && m_right == NULL && m_string_type == "variable")
  {
    cout << " its a variable " << endl;
    return m_var->get_type();
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "T_INT_CONSTANT")
  {
    cout << " its a t_int_constant " << endl;
    return get_type();
  }
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
  {
    cout << " returning m_int value ->" << m_int << endl;
    return m_int;
  }
  if (m_var != NULL)
  {
    cout << "returning variable value -> " << m_var->get_int_value() << endl;
    return m_var->get_int_value();
  }
  if (m_op_type == MULTIPLY && m_gpl_type == INT )
  {
    assert( m_left != NULL && m_right != NULL);
    cout << " calling return right and left " << endl;
    return m_left->eval_int() * m_right->eval_int();
  }
}
double Expression::eval_double()
{
  assert(m_gpl_type == 2);
  if (m_string_type == "T_DOUBLE_CONSTANT")
    return m_double;
  if (m_var != NULL)
  {
    cout << "returning variable value -> " << m_var->get_double_value() << endl;
    return m_var->get_double_value();
  }
}
string Expression::eval_string()
{
  assert(m_gpl_type == 4);
  if (m_string_type == "T_STRING_CONSTANT")
    return m_string;
  if (m_var != NULL)
  {
    cout << "returning variable value -> " << m_var->get_string_value() << endl;
    return m_var->get_string_value();
  }
}
