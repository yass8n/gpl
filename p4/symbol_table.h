#ifndef    SYMBOL_TABLE_H
#define    SYMBOL_TABLE_H
# include <iostream>
using namespace std;
# include <fstream>
# include "symbol.h"

class Symbol_table {
  public:
    static Symbol_table *instance();
    void print(ostream &os);
  private:
    Symbol_table(){};
    static Symbol_table *m_instance;
    Symbol *symbols;
    void lookup(string name);
    Symbol_table(const Symbol_table &);
    const Symbol_table &operator=(const Symbol_table &);
  
};
#endif
