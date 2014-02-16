# include "symbol.h"
  
void Symbol::set(string type, string name, string value)
{
  symbol_type = type;
  symbol_name = name;
  symbol_value = value;
}
Symbol::Symbol()
{
  symbol_type = "NULL";
  symbol_name= "NULL";
  symbol_value= "NULL";
}
string Symbol::return_type()
{
  return symbol_type;
}
string Symbol::return_name()
{
  return symbol_name;
}
string Symbol::return_value()
{
  return symbol_value;
}
void Symbol::print(ostream &os)
{
  os << symbol_type << " " << symbol_name << " " << symbol_type;
}
