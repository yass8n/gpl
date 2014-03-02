# include "expression.h"
#include <stdlib.h>
# include <math.h>
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
}

Expression::Expression(Operator_type op, Expression* left)
{
  m_op_type = op;
  m_left = left;
  m_right = NULL;
  m_string_type = "unary_op";
  int type = evaluate_type();
  set_type_using_number(type);
}

Expression::Expression(Operator_type op, Expression* left, Expression* right)
{
  m_op_type = op;
  m_left = left;
  m_right = right;
  m_string_type = "binary_op";
  int type = evaluate_type();
  set_type_using_number(type);
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
    if ( m_op_type == EQUAL ||
        m_op_type == NOT_EQUAL || m_op_type == AND ||
        m_op_type == OR || m_op_type == LESS_THAN ||
        m_op_type == LESS_THAN_EQUAL ||m_op_type == GREATER_THAN ||
        m_op_type == GREATER_THAN_EQUAL || m_op_type == MOD)
    {
      l =1;
      r = 1;
    }
    gpl_reference_set(left_type, l);
    gpl_reference_set(right_type, r);
  }
  else if (m_left != NULL && m_right == NULL)
  {
    //this is a binary operator
    int l = m_left->evaluate_type();
    if (m_string_type=="unary_op")
      l = 2;
    if ( m_op_type == RANDOM ||
        m_op_type == NOT || m_op_type == UNARY_MINUS)
      l = 1;

    gpl_reference_set(left_type, l);
    gpl_reference_set(right_type, l);
  }
  if (m_left == NULL && m_right != NULL)
  {
  }
  if (m_left == NULL && m_right == NULL && m_string_type == "variable")
  {
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
  cout << "at top of int eval" << endl;
  assert(m_gpl_type == 1);
  if (m_string_type == "T_INT_CONSTANT")
  {
    cout << "returning T_INT_CONSTANT " << m_int << endl;
    return m_int;
  }
  if (m_var != NULL)
  {
    return m_var->get_int_value();
  }
  if (m_op_type == FLOOR)
  {
    double d =0;
    bool dub = false;
    int i = 0;
    bool in = false;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==2)
    {
      d = m_left->eval_double();
      dub = true;
    }
    else
    {
      i = m_left->eval_int();
      in = true;
    }
    return (dub == true)? (int)floor(d) :  (int)floor(i);
  }
  if (m_op_type == RANDOM)
  {
    int i = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==2)
    {
      i = (int)m_left->eval_double();
    }
    else
    {
      assert(m_left->evaluate_type() == 1);
      i = m_left->eval_int();
    }
    return (rand() % i);
  }
  if (m_op_type == UNARY_MINUS)
  {
    cout << "here at unary minus" << endl;
    int i = 0;
    double d = 0;
    string s = "";
    assert (m_right == NULL);
    if (m_left->evaluate_type()==2)
    {
      d = (int)m_left->eval_double();
      return -d;
    }
    if (m_left->evaluate_type()==1)
    {
      i = m_left->eval_int();
      return -i;
    }
    if (m_left->evaluate_type()==4)
    {
      cout << "expression.cpp...cant UNARY MINUS on string" << endl;
    }
  }
  if (m_op_type == OR)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      cout << "ERROR...CANT || strings" << endl;
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      cout << "ERROR...CANT || strings" << endl;
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl || dr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il || ir) ? 1 : 0;
  }
  if (m_op_type == AND)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      cout << "ERROR...cant && strings" << endl;
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      cout << "ERROR...cant && strings" << endl;
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl && dr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il && ir) ? 1 : 0;
  }
  if (m_op_type == GREATER_THAN_EQUAL)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl >= dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl >= sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il >= ir) ? 1 : 0;
  }
  if (m_op_type == LESS_THAN_EQUAL)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl <= dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl <= sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il <= ir) ? 1 : 0;
  }
  if (m_op_type == LESS_THAN)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl < dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl < sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il < ir) ? 1 : 0;
  }
  if (m_op_type == GREATER_THAN)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl > dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl > sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il > ir) ? 1 : 0;
  }
  if (m_op_type == EQUAL)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "ir")
      return (dl == ir) ? 1 : 0;
    if (finderl == "dl" && finderr == "sr")
      return 0;
    if (finderl == "il" && finderr == "dr")
      return (il == dr) ? 1 : 0;
    if (finderl == "il" && finderr == "sr")
      return  0;
    if (finderl == "sl" && finderr == "dr")
      return 0;
    if (finderl == "sl" && finderr == "ir")
      return  0;
    if (finderl == "dl" && finderr == "dr")
      return (dl == dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl == sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il == ir) ? 1 : 0;
  }
  if (m_op_type == NOT_EQUAL)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "dr")
      return (dl != dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl != sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il != ir) ? 1 : 0;
  }
  if (m_op_type == NOT)
  {
    cout << "here at NOT " << endl;
    int i = 0;
    double d = 0;
    string s = "";
    assert (m_right == NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      d = m_left->eval_double();
      return (d == 0.0 ) ? 1 : 0;
    }
    if (m_left->evaluate_type()==4)
    {
      cout << "expression.cpp...cant NOT on string" << endl;

    }
    if (m_left->evaluate_type()==1)
    {
      i = m_left->eval_int();
      return (i == 0 ) ? 1 : 0;
    }
  }
  if (m_op_type == SIN)
  {
    int l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==2)
    {
      l = (int)m_left->eval_double();
    }
    else
    { 
      assert (m_left->evaluate_type() == 1);
      l = m_left->eval_int();
    }
    return sin(l); 
  }
  if (m_op_type == DIVIDE && m_gpl_type == INT )
  {
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() / m_right->eval_int();
  }
  if (m_op_type == MOD && m_gpl_type == INT )
  {
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() % m_right->eval_int();
  }
  if (m_op_type == MULTIPLY && m_gpl_type == INT )
  {
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() * m_right->eval_int();
  }
  if (m_op_type == MINUS && m_gpl_type == INT)
  {
    assert( m_left != NULL && m_right != NULL);
    return m_left->eval_int() - m_right->eval_int();
  }
  if (m_op_type == PLUS && m_gpl_type == INT)
  {
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
    return m_var->get_double_value();
  }
  if (m_op_type == SIN)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    { 
      assert (m_left->evaluate_type() == 2);
      l = m_left->eval_double();
    }
    l = l*(M_PI/180);
    return sin(l); 
  }
  if (m_op_type == EQUAL)
  {
    int ir = 0;//int right
    int il = 0;//int left
    double dr = 0;//double right
    double dl = 0;//double left
    string sr = "";//string right
    string sl = "";//string left
    string finderl;
    string finderr;
    assert (m_right != NULL && m_left != NULL);
    if (m_left->evaluate_type()==2)
    {
      dl= m_left->eval_double();
      finderl = "dl";
    }
    if (m_left->evaluate_type()==4)
    {
      sl= m_left->eval_string();
      finderl = "sl";
    }
    if (m_left->evaluate_type()==1)
    {
      il= m_left->eval_int();
      finderl = "il";
    }
    if (m_right->evaluate_type()==2)
    {
      dr= m_right->eval_double();
      finderr = "dr";
    }
    if (m_right->evaluate_type()==4)
    {
      sr= m_right->eval_string();
      finderr = "sr";
    }
    if (m_right->evaluate_type()==1)
    {
      ir= m_right->eval_int();
      finderr = "ir";
    }
    if (finderl == "dl" && finderr == "ir")
      return (dl == ir) ? 1 : 0;
    if (finderl == "dl" && finderr == "sr")
      return 0;
    if (finderl == "il" && finderr == "dr")
      return (il == dr) ? 1 : 0;
    if (finderl == "il" && finderr == "sr")
      return  0;
    if (finderl == "sl" && finderr == "dr")
      return 0;
    if (finderl == "sl" && finderr == "ir")
      return  0;
    if (finderl == "dl" && finderr == "dr")
      return (dl == dr) ? 1 : 0;
    if (finderl == "sl" && finderr == "sr")
      return (sl == sr) ? 1 : 0;
    if (finderl == "il" && finderr == "ir")
      return (il == ir) ? 1 : 0;
  }
  if (m_op_type == FLOOR)
  {
    double d =0;
    bool dub = false;
    int i = 0;
    bool in = false;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==2)
    {
      d = m_left->eval_double();
      dub = true;
    }
    else
    {
      i = m_left->eval_int();
      in = true;
    }
    return (dub == true)? (double)floor(d) :  (double)floor(i);
  }
  if (m_op_type == COS)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert (m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    l = l*(M_PI/180);
    return cos(l);
  }
  if (m_op_type == TAN)
  {
    double l = 0.0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    l = l*(M_PI/180);
    return tan(l);
  }
  if (m_op_type == ASIN)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    return asin(l) * (180/M_PI);
  }
  if (m_op_type == ACOS)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    return acos(l)*(180/M_PI);
  }
  if (m_op_type == ATAN)
  {
    double l = 0.0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    return atan(l)*(180/M_PI);
  }
  if (m_op_type == SQRT)
  {
    double l = 0.0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    return sqrt(l);
  }
  if (m_op_type == ABS)
  {
    double l = 0.0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    {
      assert(m_left->evaluate_type()==2);
      l = m_left->eval_double();
    }
    return fabs(l);
  }
  if (m_op_type == DIVIDE)
  {
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      return m_left->eval_int() / m_right->eval_double();
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() / m_right->eval_int();
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() / m_right->eval_int();
    }
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
    {
      return m_left->eval_double() / m_right->eval_double();
    }
  }
  if (m_op_type == MULTIPLY)
  {
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      return m_left->eval_int() * m_right->eval_double();
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() * m_right->eval_int();
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() * m_right->eval_int();
    }
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
    {
      return m_left->eval_double() * m_right->eval_double();
    }
  }
  if (m_op_type == PLUS)
  {
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      return m_left->eval_int() + m_right->eval_double();
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() + m_right->eval_int();
    }
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
    {
      return m_left->eval_double() + m_right->eval_double();
    }
  }
  if (m_op_type == MINUS)
  {
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      return m_left->eval_int() - m_right->eval_double();
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      return m_left->eval_double() - m_right->eval_int();
    }
    if (m_left->evaluate_type() ==2 && m_right->evaluate_type()==2)
    {
      return m_left->eval_double() - m_right->eval_double();
    }
  }
}
string Expression::eval_string()
{
  stringstream ls;
  stringstream rs;
  assert(m_gpl_type == 4);
  if (m_string_type == "T_STRING_CONSTANT")
  {
    return m_string;
  }
  if (m_var != NULL)
  {
    return m_var->get_string_value();
  }
  if (m_op_type == SIN)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    { 
      assert (m_left->evaluate_type() == 2);
      l = m_left->eval_double();
    }
    l = l*(M_PI/180);
    ls <<  sin(l); 
    string strl = ls.str();
    return strl;
  }
  if (m_op_type == NOT)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    { 
      if (m_left->evaluate_type() == 2)
      {
        l = m_left->eval_double();
      }
    }
    ls << !l;
    string strl = ls.str();
    return strl;
  }
  if (m_op_type == UNARY_MINUS)
  {
    double l = 0;
    assert(m_right == NULL);
    if (m_left->evaluate_type()==1)
    {
      l = (double)m_left->eval_int();
    }
    else
    { 
      if (m_left->evaluate_type() == 2)
      {
        l = m_left->eval_double();
      }
    }
    if (l != 0)
    {
      l = -l;
    }
    ls << l;
    string strl = ls.str();
    return strl;
  }
  if (m_op_type == PLUS)
  {
    assert( m_left != NULL && m_right != NULL);
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 1)
    {
      rs << m_right->eval_int();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 4)
    {
      ls << m_left->eval_int();
      string str = ls.str();
      return str + m_right->eval_string();
    }
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 1)
    {
      rs << m_right->eval_int();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 4)
    {
      ls << m_left->eval_double();
      string str = ls.str();
      return str + m_right->eval_string();
    }
    if (m_left->evaluate_type()==4 && m_right->evaluate_type() == 2)
    {
      rs << m_right->eval_double();
      string str = rs.str();
      return m_left->eval_string() + str;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 1)
    {
      ls << m_left->eval_double();
      rs << m_right->eval_int();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 2)
    {
      ls << m_left->eval_int();
      rs << m_right->eval_double();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==1 && m_right->evaluate_type() == 1)
    {
      ls << m_left->eval_int();
      rs << m_right->eval_int();
      string strl = ls.str();
      string strr = rs.str();
      return strl + strr;
    }
    if (m_left->evaluate_type()==2 && m_right->evaluate_type() == 2)
    {
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
}
