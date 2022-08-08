#include <iostream>
using namespace std;

int main() {
  string title = "Mr. ";
  string name = "John";
  string end(10, '!');

  cout << name.size() << endl;
  cout << name.back() << endl;
  cout << name[2] << endl;

  // string conatenation
  cout << title + name << endl;

  name += " Doe"; // name = name + " Doe";
  name.append(end);
  cout << name << endl;

  cout << title.append(name) << endl;
  cout << title << endl;

  return 0;

}