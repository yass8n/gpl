# ifndef STATEMENT_H_
# define STATEMENT_H_
# include <iostream>
# include <string>
# include "expression.h"
class Game_object;
class Statement_block;
using namespace std;
class Statement{
  public: 
    Statement(){};
   ~Statement(){};
    virtual void execute() = 0;
};
#endif
