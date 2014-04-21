# include "expression.h"
# include <sstream>
# include "animation_block.h"
# include "variable.h"
# include "error.h"
Variable::Variable()
{
  m_game_object_member_set = false;
  m_included = true;
}
Variable::Variable(string id)
{
  m_game_object_member_set = false;
  m_included = true;
  Symbol_table *sym_table = Symbol_table::instance();
  m_id = id;
  m_string_type = "simple";
  m_exp = NULL;
  if (sym_table->lookup(id))//its in the table
  { 
    m_sym = sym_table->get(id);
  }
  else
  {
    Error::error(Error::UNDECLARED_VARIABLE, id);
    m_included = false;
    m_sym = NULL;
  }
}
Variable::Variable(string id, int x)
{
  m_game_object_member_set = false;
  m_id = id;
  m_string_type = "error";
  m_included = false;
  m_sym = NULL;
  m_exp = NULL;
}
Variable::Variable(string id, Expression *exp)
{
  m_game_object_member_set = false;
  m_included = true;
  Symbol_table *sym_table = Symbol_table::instance();
  assert(sym_table->lookup(id));
  m_id = id;
  m_exp = exp;
  int x =m_exp -> eval_int();
  m_string_type = "array";
  stringstream name;
  name << id << '[' << 0 << ']';
  //name << id << '[' << x << ']';
//  m_sym = sym_table->get(name.str());
  m_sym = sym_table->get(name.str());
}
Variable::Variable(string id1, string param, string name_of_index)
{
  m_included = true;
  m_exp = NULL;
  Symbol_table *sym_table = Symbol_table::instance();
  set_m_id(id1,name_of_index);
  assert(sym_table->lookup(m_id));
  m_param_id = param;
  m_id1 = id1;
  m_name_of_index = name_of_index;
  m_string_type = "member with variable index";
  m_sym = sym_table->get(m_id);
  m_sym->get_member_variable_type(param, m_type);
  //m_type is used in the set_member_var function
  set_member_variable_of_this_variable(param);
}
Variable::Variable(string id1, string param)
{
  m_included = true;
  m_exp = NULL;
  Symbol_table *sym_table = Symbol_table::instance();
  assert(sym_table->lookup(id1));
  m_id = id1;
  m_param_id = param;
  m_string_type = "member";
  m_sym = sym_table->get(id1);
  m_sym->get_member_variable_type(param, m_type);
  //m_type is used in the set_member_var function
  set_member_variable_of_this_variable(param);
}
void Variable::set_member_variable_of_this_variable(string param)
  {
    m_game_object_member_set = true;
    if (m_type == INT)
    {
      m_sym->get_member_variable(param, m_member_variable_int);
    }
    if (m_type == DOUBLE)
    {
      m_sym->get_member_variable(param, m_member_variable_double);
    }
    if (m_type == STRING)
    {
      m_sym->get_member_variable(param, m_member_variable_string);
    }
    if (m_type == ANIMATION_BLOCK)
    {
      m_sym->get_member_variable(param, m_member_variable_animation_block);
    }
  }
  void Variable::set_m_id(string id1, string name_of_index)
  {
    Symbol_table *sym_table = Symbol_table::instance();
    Symbol *s = sym_table->get(name_of_index);
    stringstream id;
    id<< id1 << '[' << s->get_int() <<']';
    m_id = id.str();
  }
  string Variable::eval_string()
  {
    Symbol_table *sym_table = Symbol_table::instance();
    assert(m_exp->get_type() == INT);
    int temp = m_exp->eval_int();
    stringstream id;
    id << m_id<< '[' << temp <<']';
    m_sym = sym_table->get(id.str());
    assert(m_sym != NULL);
    assert(m_sym->get_type() == STRING);
    return m_sym->get_string();
}
string Variable::get_name()
{
  return m_id;
}
string Variable::get_param_id()
{
  return m_param_id;
}
string Variable::get_string_type()
{
  return m_string_type;
}
string Variable::get_name_for_assign_statement()
{
  //returns the name with the brackets
  if (m_string_type == "member with variable index")
  {
    Symbol_table *sym_table = Symbol_table::instance();
    Symbol *s = sym_table->get(m_name_of_index);
    stringstream id;
    id<< m_id1 << '[' << s->get_int() <<']';
    return id.str();
  }
  if (m_string_type == "array")    
  {
    assert(m_exp->get_type() == INT);
    int temp = m_exp->eval_int();
    stringstream id;
    id << m_id<< '[' << temp <<']';
    return id.str();
  }
  else
    return m_id;
}
Symbol * Variable::get_symbol()
{
  return m_sym;
}
Animation_block * Variable::get_animation_block()
{
  return m_sym->get_animation_block();
}
bool Variable::included()
{
  return m_included;
}
double Variable::eval_double()
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(m_exp->get_type() == INT);
  int temp = m_exp->eval_int();
  stringstream id;
  id << m_id<< '[' << temp <<']';
  m_sym = sym_table->get(id.str());
  assert(m_sym != NULL);
  assert(m_sym->get_type() == DOUBLE);
  return m_sym->get_double();
}
int Variable::eval_int()
{
  Symbol_table *sym_table = Symbol_table::instance();
  assert(m_exp->get_type() == INT);
  int temp =  m_exp->eval_int();
  stringstream id;
  id << m_id<< '[' << temp <<']';
  m_sym = sym_table->get(id.str());
  assert(m_sym != NULL);
  assert(m_sym->get_type() == INT);
  return m_sym->get_int();
}


string Variable::get_string_value()
{
  Symbol_table *sym_table = Symbol_table::instance();
  if (m_game_object_member_set == true)
  {
    /*
       if ( m_string_type== "member with variable index")
       {
       set_m_id(m_id1, m_name_of_index);
       Symbol *s = sym_table->get(m_id);
       m_sym = s;
       }
       */
    set_member_variable_of_this_variable(get_param_id());
    //calling again because when the "on print" is called,
    //it calls eval string on this variable and we need it to update again...
    //if the expression class got the value from the symbol table, there would 
    //be no problem...but it does not do that
    return m_member_variable_string;
  }
  if (m_sym == NULL)
    return "";
  if (m_string_type == "array")
  {
    stringstream name;
    assert(m_exp->get_type() == INT);
    int x = m_exp->eval_int();
    name << m_id << '[' << x << ']';
    m_sym = sym_table->get(name.str());
  }
  return m_sym->get_string();
}
double Variable::get_double_value()
{
  Symbol_table *sym_table = Symbol_table::instance();
  if (m_game_object_member_set ==true)
  {
    /*
       if ( m_string_type== "member with variable index")
       {
       set_m_id(m_id1, m_name_of_index);
       Symbol *s = sym_table->get(m_id);
       m_sym = s;
       }
       */
    set_member_variable_of_this_variable(get_param_id());
    //calling again because when the "on print" is called,
    //it calls eval double on this variable and we need it to update again...
    //if the expression class got the value from the symbol table, there would 
    //be no problem...but it does not do that
    return m_member_variable_double;
  }
  if (m_sym == NULL)
    return 0;
  if (m_string_type == "array")
  {
    stringstream name;
    assert(m_exp->get_type() == INT);
    int x = m_exp->eval_int();
    name << m_id << '[' << x << ']';
    m_sym = sym_table->get(name.str());
  }
  return m_sym->get_double();
}
int Variable::get_int_value()
{
  Symbol_table *sym_table = Symbol_table::instance();
  if (m_game_object_member_set ==true)
  {
    if ( m_string_type== "member with variable index")
    {
      set_m_id(m_id1, m_name_of_index);
      Symbol *s = sym_table->get(m_id);
      m_sym = s;
    }
    set_member_variable_of_this_variable(get_param_id());
    //calling again because when the "on print" is called,
    //it calls eval int on this variable and we need it to update again...
    //if the expression class got the value from the symbol table, there would 
    //be no problem...but it does not do that
    return m_member_variable_int;
  }
  if (m_sym == NULL)
    return 0;
  if (m_string_type == "array")
  {
    stringstream name;
    assert(m_exp->get_type() == INT);
    int x = m_exp->eval_int();
    name << m_id << '[' << x << ']';
    m_sym = sym_table->get(name.str());
  }
  if (m_string_type == "simple")
    m_sym = sym_table->get(m_id);
  return m_sym->get_int();
}
Gpl_type Variable::get_type()
{
  if (m_included == true && m_game_object_member_set == false)
  {
    return m_sym->get_type();
  }
  else if (m_included == true && m_game_object_member_set == true)
  {
    return m_type;
  }
  else
  {
    return INT;
  }
}
Expression * Variable::get_expression()
{
  return m_exp;
}
