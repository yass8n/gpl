#ifndef VARIABLE_H_
#define VARIABLE_H_
# include <iostream>
using namespace std;
# include "symbol.h"
# include "symbol_table.h"

class Variable{
  public:
    Variable(string id);
    int get_int_value();
  private:
    Symbol *sym;
};
#ifndef
