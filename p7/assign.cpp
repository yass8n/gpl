# include "assign.h"
# include "error.h"
Assign::Assign(Variable * v, Expression * e, string action)
{
  m_var = v;
  m_exp = e;
  m_action = action;
}

void Assign::execute()
{
  string name_of_var = m_var->get_name_for_assign_statement();
  Symbol_table *sym_table = Symbol_table::instance();
  stringstream name;
  name << name_of_var;
  if (m_var->get_string_type()=="array")
  {
    int x = m_var->get_index_value();
    string n = m_var->get_name();
    stringstream id;
    id<< n <<  '[' << x << ']';
    stringstream index;
    index << x ;
    if (!sym_table->lookup(id.str()))
    {
      Error::error(Error::ARRAY_INDEX_OUT_OF_BOUNDS, n,index.str());
      name.str("");
      name << n << '[' << 0 << ']';
    }
  }
  if (m_var->get_string_type()=="member with variable index")
  {
    int x = m_var->get_index_value();
    string n = m_var->get_name_without_brackets();
    stringstream id;
    id<< n <<  '[' << x << ']';
    stringstream index;
    index << x ;
    if (!sym_table->lookup(id.str()))
    {
      Error::error(Error::ARRAY_INDEX_OUT_OF_BOUNDS, n ,index.str());
      name.str("");
      name << n << '[' << 0 << ']';
    }
  }
  Symbol * s = sym_table->get(name.str());
  Gpl_type type = s->get_type();


  if (m_var->get_string_type()!="member"  && m_var->get_string_type()!="member with variable index")
  {
    if (m_action == "=")
      set_equal(s, name.str(), type, m_exp);
    if (m_action == "+=")
      set_plus(s, name.str(), type, m_exp);
    if (m_action == "-=")
      set_minus(s, name.str(), type, m_exp);
  }
  else
  {
    assert(s);
    Game_object *temp_object = s->get_game_object();
    Gpl_type type;
    temp_object->get_member_variable_type(m_var->get_param_id(), type);
    if (m_action == "=")
      set_equal_object(s, name.str(), type, m_exp, temp_object);
    if (m_action == "+=")
      set_plus_object(s, name.str(), type, m_exp, temp_object);
    if (m_action == "-=")
      set_minus_object(s, name.str(), type, m_exp, temp_object);
  }
}
void Assign::set_equal_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object * temp_object)
{
    if (type == INT)
    {
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_int());
    }
    if (type == DOUBLE)
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_double());
    if (type == STRING)
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_string());
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_animation_block());
}
void Assign::set_plus_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object *temp_object)
{
    if (type == INT)
    {
      int param;
      temp_object->get_member_variable(m_var->get_param_id(), param);
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_int()+param);
    }
    if (type == DOUBLE)
    {
      double param;
      temp_object->get_member_variable(m_var->get_param_id(), param);
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_double()+param);
    }
    if (type == STRING)
    {
      string param;
      temp_object->get_member_variable(m_var->get_param_id(), param);
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_string()+param);
    }
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_animation_block());
}
void Assign::set_minus_object(Symbol *s, string name, Gpl_type type, Expression * e, Game_object * temp_object)
{
    if (type == INT)
    {
      int param;
      temp_object->get_member_variable(m_var->get_param_id(), param);
      temp_object->set_member_variable(m_var->get_param_id(), param - e->eval_int());
    }
    if (type == DOUBLE)
    {
      double param;
      temp_object->get_member_variable(m_var->get_param_id(), param);
      temp_object->set_member_variable(m_var->get_param_id(), param - e->eval_double());
    }
    if (type == STRING)
    {
      cout << "cant do this" << endl;
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_string()+s->get_string());
    }
    if (type == ANIMATION_BLOCK)
      temp_object->set_member_variable(m_var->get_param_id(), e->eval_animation_block());
}

void Assign::set_plus(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == INT)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "INT", e->eval_int() + s->get_int(), 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT", e->eval_double() + s->get_int(), 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "DOUBLE", 0, e->eval_int() + s->get_double(), "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0, e->eval_double() + s->get_double(), "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 4)
  {
    if (e->get_type() == INT)
    {
      stringstream value;
      value << s->get_string();
      value << e->eval_int();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (e->get_type() == 2)
    {
      stringstream value;
      value << s->get_string();
      value << e->eval_double();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (type == 4)
    {
      s->set(name, "STRING", 0, 0,s->get_string()+ e->eval_string());
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
  {
    cout << "The type of the variable was not int, double, or string" << endl;
    cout << "from plus" << endl;
  }
}
void Assign::set_minus(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == INT)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "INT", s->get_int()- e->eval_int() , 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT" ,  s->get_int()-e->eval_double() , 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "DOUBLE", 0,  s->get_double()- e->eval_int() , "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0,  s->get_double()- e->eval_double() , "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
    cout << "The type of the variable was not int or double" << endl;
}


void Assign::set_equal(Symbol * s, string name, Gpl_type type, Expression * e)
{
  if (type == INT)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "INT", e->eval_int(), 0, "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "INT", e->eval_double(), 0, "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 2)
  {
    if (e->get_type() == INT)
    {
      s->set(name, "DOUBLE", 0, e->eval_int(), "");
    }
    else if (e->get_type() == 2)
    {
      s->set(name, "DOUBLE", 0, e->eval_double(), "");
    }
    else
      cout << "error in assignment" << endl;
  }
  else if (type == 4)
  {
    if (e->get_type() == INT)
    {
      stringstream value;
      value << e->eval_int();
      s->set(name, "STRING", 0, 0, value.str());
    }
    else if (e->get_type() == 2)
    {
      stringstream value;
      value << e->eval_double();
      s->set(name, "STRING", 0, 0,value.str());
    }
    else if (type == 4)
    {
      s->set(name, "STRING", 0, 0,e->eval_string());
    }
    else
      cout << "error in assignment" << endl;
  }
  else 
  {
    cout << "The type of the variable was not int, double, or string" << endl;
    cout << "from equal" << endl;
  }
}

