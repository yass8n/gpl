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
    bool get(string name, int &value);
    bool get(string name, double &value);
    bool get(string name, string &value);
    bool get_type(string name, Gpl_type &type);
    bool set(string name, int value); // used for mouse_x, mouse_y
    static Symbol_table *instance();
    void print(ostream &os);
    void set_sym(string, Symbol&);
    Symbol* find(string name);
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
