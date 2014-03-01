#ifndef SYMBOL_H
#define SYMBOL_H
# include <iostream>
using namespace std;
# include <string>
# include "gpl_type.h"
# include <vector>
class Symbol{
  private:
    Gpl_type m_type;
    bool m_taken;
    vector <string> id_vect;
    int m_int;
    double m_double;
    string m_string;
    string m_name;
  public: 
    void set (string name,string type, int int_val, double double_val, string string_val);
    Symbol();
    Gpl_type get_type();
    string return_name();
    int return_int();
    double return_double();
    void print(ostream &os);
    string return_type();
};

#endif
