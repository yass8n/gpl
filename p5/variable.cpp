# include "expression.h"
# include <sstream>
# include "variable.h"
Variable::Variable(string id)
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  m_string_type = "simple";
  if (!sym_table->lookup(id))//its in the table
  { 
    m_sym = sym_table->get(id);
  }
  else
  {
    cout << "ERROR: .. variable ...it wasnt in the table" << endl;
    m_sym = NULL;
  }
}
Variable::Variable(string id, Expression *exp)
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  cout << "name is " << id << endl;
  m_exp = exp;
  m_string_type = "array";
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
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "STRING");
  return m_sym->return_string();
}
double Variable::get_double_value()
{
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "DOUBLE");
  return m_sym->return_double();
}
int Variable::get_int_value()
{
  assert(m_sym != NULL);
  assert(m_sym->return_type() == "INT");
  return m_sym->return_int();
}
Gpl_type Variable::get_type()
{
  return m_sym->get_type();
}
