# include "variable.h"
Variable::Variable(string id)
{
  assert(!sym_table->lookup(id));
  Symbol_table *sym_table = Symbol_table::instance();
  if (!sym_table->lookup(id))//its in the table
  { 
    sym = sym_table->get(id);
  }
  else
  {
    cout << "not in table" << endl;
    sym = NULL;
  }
}
Variable::int Variable::get_int_value()
{
  assert(sym != NULL);
  assert(sym->m_type == 1);
  return sym->return_int();
}
