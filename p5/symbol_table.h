#ifndef    SYMBOL_TABLE_H
#define    SYMBOL_TABLE_H
# include <iostream>
using namespace std;
# include <fstream>
# include "symbol.h"
# include <map>
# include <vector>

class Symbol_table {
  public:
    static Symbol_table *instance();
    void print(ostream &os);
    void set(string, Symbol&);
    bool lookup(string id);
    void insert_in_vector(string id);
    Symbol* get(string id);
  private:
    map <string, Symbol*> m_map;
    vector <string> id_vect;
    Symbol_table(){};
    static Symbol_table *m_instance;
    Symbol *symbols;
    string m_id;
    Symbol_table(const Symbol_table &);
    const Symbol_table &operator=(const Symbol_table &);
  
};
#endif
