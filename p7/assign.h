# ifndef ASSIGN_H_
# define ASSIGN_H_
# include "statement.h"
# include "symbol.h"
# include "symbol_table.h"
# include "variable.h"
# include <sstream>
# include "game_object.h"
# include "gpl_type.h"
class Assign : public Statement
{
  public:
    void execute();
    Assign(Variable * v, Expression * e, string action);
    ~Assign(){};
  private:
    Expression * m_exp;
    string m_action;
    Variable * m_var;
    void set_equal(Symbol *, string, Gpl_type, Expression *);
    void set_plus(Symbol *, string, Gpl_type, Expression *);
    void set_minus(Symbol *, string, Gpl_type, Expression *);
};
#endif
