# include "variable.h"
Variable::Variable(string id)
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(!sym_table->lookup(id));
  m_id = id;
  if (!sym_table->lookup(id))//its in the table
  { 
    cout << "its in the table " << endl;
    m_sym = sym_table->get(id);
  }
  else
  {
    cout << "not in table" << endl;
    m_sym = NULL;
  }
}
int Variable::get_int_value()
{
  assert(m_sym != NULL);
  assert(m_sym->get_type() == "INT");
  return m_sym->return_int();
}
