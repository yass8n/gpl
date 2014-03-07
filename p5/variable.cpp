# include "expression.h"
# include <sstream>
# include "variable.h"
# include "error.h"
Variable::Variable()
{
  m_included = true;
}
Variable::Variable(string id)
{
  m_included = true;
  Symbol_table *sym_table = Symbol_table::instance();
  m_id = id;
  m_string_type = "simple";
  if (!sym_table->lookup(id))//its in the table
  { 
    m_sym = sym_table->get(id);
  }
  else
  {
    Error::error(Error::UNDECLARED_VARIABLE, id);
    m_included = false;
    m_sym = NULL;
  }
}
Variable::Variable(string id, Expression *exp)
{
  m_included = true;
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  m_exp = exp;
  int x =m_exp -> eval_int();
  m_string_type = "array";
  stringstream name;
  name << id << '[' << x << ']';
  m_sym = sym_table->get(name.str());
}
string Variable::eval_string()
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(m_exp->get_type() == 1);
  int temp = m_exp->eval_int();
  stringstream id;
  id << m_id<< '[' << temp <<']';
  m_sym = sym_table->get(id.str());
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "STRING");
  return m_sym->return_string();
}
string Variable::get_name()
{
  return m_id;
}
bool Variable::included()
{
  return m_included;
}
double Variable::eval_double()
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(m_exp->get_type() == 1);
  int temp = m_exp->eval_int();
  stringstream id;
  id << m_id<< '[' << temp <<']';
  m_sym = sym_table->get(id.str());
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "DOUBLE");
  return m_sym->return_double();
}
int Variable::eval_int()
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(m_exp->get_type() == 1);
  int temp =  m_exp->eval_int();
  stringstream id;
  id << m_id<< '[' << temp <<']';
  m_sym = sym_table->get(id.str());
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "INT");
  return m_sym->return_int();
}

string Variable::get_string_value()
{
  if (m_sym == NULL)
    return "";
  return m_sym->return_string();
}
double Variable::get_double_value()
{
  if (m_sym == NULL)
    return 0;
  return m_sym->return_double();
}
int Variable::get_int_value()
{
  if (m_sym == NULL)
    return 0;
  return m_sym->return_int();
}
Gpl_type Variable::get_type()
{
  if (m_included == true)
  {
    return m_sym->get_type();
  }
  else
  {
    return INT;
  }
}
