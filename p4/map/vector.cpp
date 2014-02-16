// very simple example of how to use the stl vector template

#include <iostream>
#include <vector>
using namespace std;

// operator++ and operator* overloaded for class iterator
void print(vector<int> *v)
{
  cout << "printing vector using [] operator:" << endl;
  for (int i = 0; i < v->size(); i++)
    cout << *v[i] << endl;

  cout << "printing vector using iterators:" << endl;
  for (vector<int>::iterator iter = v->begin(); iter != v->end(); iter++)	
    cout << *iter << endl; 
}

int main()
{
  vector<int> *values;

  values = new vector<int>();

  for (int i = 0; i < 5; i++)
    values->push_back(i);

  print(values);
}
