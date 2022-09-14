#include <iostream>
using namespace std;

int main()
{

  // string& badRef;

  string greeting = "Hi!";
  string& ref = greeting;

  cout << greeting << "\t" << ref << endl;

  string name = "William";
  ref = name;

  cout << name << "\t" << ref << "\t" << greeting << endl;
  cout << &name << "\t" << &greeting << "\t" << &ref << endl;

  ref.append("!!!");

  cout << greeting << endl;
  return 0;
}