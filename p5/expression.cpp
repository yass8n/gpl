# include "expression.h"
# include <sstream>
Expression::Expression(Gpl_type type, int x)
{
  assert(type == 1);
  m_gpl_type=type;
  m_int = x;
  m_var = NULL;
  m_right = NULL;
  m_left= NULL;
  int gpl_type = evaluate_type();
  set_type_using_number(gpl_type);
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
  int gpl_type = evaluate_type();
  set_type_using_number(gpl_type);
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
  int gpl_type = evaluate_type();
  set_type_using_number(gpl_type);
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
  {
    cout << "Error in expression evaluataion" << endl;
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "variable")
  {
    cout << " its a variable -> " << m_var->m_id  << endl;
    return m_var->get_type();
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "T_INT_CONSTANT")
  {
    assert (get_type() == 1);
      return 1;
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "T_DOUBLE_CONSTANT")
  {
    assert (get_type() == 2);
      return 2;
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "T_STRING_CONSTANT")
  {
    assert (get_type() == 4);
      return 4;
  }
  if (left_type == 1 && right_type == 1)
    return 1;
  if ((left_type == 1 && right_type == 2) || (left_type == 2 && right_type == 1))
    return 2;
  if (left_type == 2 && right_type == 2)
    return 2;
  if ((left_type == 1 || right_type == 4))
      return 4;
  if ((left_type == 4 || right_type == 1))
      return 4;
  if ((left_type == 2 || right_type == 4))
      return 4;
  if ((left_type == 4 || right_type == 2))
      return 4;
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
    cout << " here with the int multpily " << endl;
    assert( m_left != NULL && m_right != NULL);
    cout << " calling return right and left " << endl;
    return m_left->eval_int() * m_right->eval_int();
  }
  if (m_op_type == PLUS && m_gpl_type == INT)
  {
    cout << " here with the int plus" << endl;
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() + m_right->eval_int();
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
  if (m_op_type == MULTIPLY)
  {
    cout << " here with the double multpily " << endl;
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
      return (double)m_left->eval_int() * m_right->eval_double();
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
      return m_left->eval_double() * (double)m_right->eval_int();
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
      return m_left->eval_double() * m_right->eval_double();
  }
  if (m_op_type == PLUS)
  {
    cout << " here with the double plus " << endl;
    cout << m_left->evaluate_type() << "  " << m_right->evaluate_type() << endl;
    cout << " here with the double plus " << endl;
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      cout << "paired the int and double   .. " << (double)m_left->eval_int() << " and " << m_right->eval_double() << endl;
      return (double)m_left->eval_int() + m_right->eval_double();
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      cout << "paired the double and int   .. " << m_right->eval_double() <<  " and " << (double)m_left->eval_int() << endl;
      return m_left->eval_double() + (double)m_right->eval_int();
    }
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
    {
    cout << " both DOUBLE..." << endl;
      return m_left->eval_double() + m_right->eval_double();
    }
    cout << " NONE paired " << endl;
  }
}
string Expression::eval_string()
{
  stringstream ls;
  stringstream rs;
  assert(m_gpl_type == 4);
  if (m_string_type == "T_STRING_CONSTANT")
  {
    cout << " returning "<< m_string << " from string_eval() " << endl;
    return m_string;
  }
  if (m_var != NULL)
  {
    cout << "returning variable value -> " << m_var->get_string_value() << endl;
    return m_var->get_string_value();
  }
  if (m_op_type == PLUS)
  {
    cout << " in the PLUS of the string EVAL " << endl;
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 1)
    {
      cout << "here 9" << endl;
      rs << m_right->eval_int();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 4)
    {
      cout << "here 8" << endl;
      ls << m_left->eval_int();
      string str = ls.str();
      return str + m_right->eval_string();
    }
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 1)
    {
      cout << "here 7" << endl;
      rs << m_right->eval_int();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 4)
    {
      cout << "here 6" << endl;
      ls << m_left->eval_double();
      string str = ls.str();
      return str + m_right->eval_string();
    }
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 2)
    {
      cout << "here 5" << endl;
      rs << m_right->eval_double();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      cout << "here 4" << endl;
      ls << m_left->eval_double();
      rs << m_right->eval_int();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      cout << "here 3" << endl;
      ls << m_left->eval_int();
      rs << m_right->eval_double();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 1)
    {
      cout << "here 2" << endl;
      ls << m_left->eval_int();
      rs << m_right->eval_int();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 2)
    {
      cout << "here 1" << endl;
      ls << m_left->eval_double();
      rs << m_right->eval_double();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }

    if (m_left->evaluate_type() ==4 && m_right->evaluate_type() == 4)
    {
      return m_left->eval_string() + m_right->eval_string();
    }
  }
  if (m_op_type == MULTIPLY)
  {
    cout << " error...cant multiply strings " << endl;
  }
}
