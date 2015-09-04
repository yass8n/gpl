// very simple example of how to use the stl map template

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string, int> m;

  // m[key] = value;
  m["Sally"] = 42;
  m["Max"] = 86;
  m["Betty"] = 86;

  map<string, int>::iterator iter;

  // example of how to iterate through all elements of a map
  cout << "iterating through map printing all elements" << endl
       << "  **cannot count on the order in the map" << endl;
  for (iter = m.begin(); iter != m.end(); iter++)
    cout << iter->first << "," << iter->second << endl;

  // example of how to find something in a map
  cout << "Searching in the map for specific keys" << endl;
  iter = m.find("Tom");
  if (iter == m.end())
    cout << "Tom not in map" << endl;
  else cout << "Tom is in map" << endl;

  iter = m.find("Sally");
  if (iter == m.end())
    cout << "Sally not in map" << endl;
  else cout << "Sally is in map" << endl;
}
