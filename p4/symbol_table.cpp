# include "symbol_table.h"
# include "symbol.h"
using namespace std;

Symbol_table *Symbol_table::m_instance = NULL;

Symbol_table *Symbol_table::instance()
{
  if (m_instance == NULL)
  {
    m_instance = new Symbol_table();
  }
 
  return m_instance;
}

void Symbol_table::print(ostream &os)
{
  symbols->print(os);
}
