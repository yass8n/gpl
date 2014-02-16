#ifndef    SYMBOL_TABLE_H
#define    SYMBOL_TABLE_H
# include <iostream>
using namespace std;
# include <fstream>
# include "symbol.h"
# include <map>

class Symbol_table {
  public:
    static Symbol_table *instance();
    void print(ostream &os);
    void set(string, Symbol);
    void lookup(string name);
  private:
    map <string, Symbol*> m_map;
    Symbol_table(){};
    static Symbol_table *m_instance;
    Symbol *symbols;
    string m_name;
    Symbol_table(const Symbol_table &);
    const Symbol_table &operator=(const Symbol_table &);
  
};
#endif
