#ifndef SYMBOL_H
#define SYMBOL_H
# include <iostream>
using namespace std;
# include <string>
# include "gpl_type.h"
# include <vector>
class Game_object;
class Animation_block;
class Symbol{
  private:
    Gpl_type m_type;
    vector <string> id_vect;
    int m_int;
    double m_double;
    string m_string;
    string m_name;
    Game_object *m_game_object;
    Animation_block *m_animation_block;
    int m_assign_i;
    double m_assign_d;
    string m_assign_s;
    bool new_int_set;
    bool new_double_set;
    bool new_string_set;
  public:  
    bool int_set();
    bool double_set();
    bool string_set();
    void new_assign_value(double d);
    void new_assign_value(string s);
    void new_assign_value(int i);
    int return_assign_value_int();
    double return_assign_value_double();
    string return_assign_value_string();
    void set_member_variable(string param, int value);
    void set_animation_block(string name, Animation_block *block);
    Animation_block * return_animation_block();
    void set (string name,string type, int int_val, double double_val, string string_val);
    void set_game_object(string name, Game_object *game_object);
    Symbol();
    Gpl_type get_type();
    Game_object * return_game_object();
    string return_name();
    int return_int();
    string return_string();
    double return_double();
    void print(ostream &os);
    void get_member_variable_type(string id3, Gpl_type &);
    void get_member_variable(string id3, int &);
    void get_member_variable(string id3, double &);
    void get_member_variable(string id3, string &);
    void get_member_variable(string id3, Animation_block *&);
    string return_type();
};

#endif
