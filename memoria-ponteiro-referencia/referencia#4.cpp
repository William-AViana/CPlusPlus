#include <iostream>

using namespace std;

int main() {

  int age = 32;
  int *pAge = &age;
  double gpa = 3.5;
  double *pGpa = &gpa;
  string name = "William";
  string *pName = &name;

  cout << age << &pAge << endl;

  return 0;
}