#ifndef SYMBOL_H
#define SYMBOL_H
# include <iostream>
using namespace std;
# include <string>
# include "gpl_type.h"
class Symbol{
  private:
    Gpl_type m_type;
    string m_name;
    int m_int;
    double m_double;
    string m_string;
  public: 
    void set (string name,string type, int int_val, double double_val, string string_val);
    Symbol();
    Gpl_type return_type();
    string return_name();
    int return_int();
    double return_double();
    void print(ostream &os);
};

#endif
