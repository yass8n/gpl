#ifndef SYMBOL_H
#define SYMBOL_H
# include <iostream>
using namespace std;
# include <string>
# include <map>
class Symbol{
  private:
    map<string, string> s_map;
    string symbol_type;
    string symbol_name;
    string symbol_value;
  public: 
    void set (string type, string name, string value);
    Symbol();
    string return_type();
    string return_name();
    string return_value();
    void print(ostream &os);
};

#endif
