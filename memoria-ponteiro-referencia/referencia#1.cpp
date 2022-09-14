#include <iostream>
using namespace std;

int main(){
  int a = 10; // 32 bits = 4 bytes
  
  cout << a << "\t" << &a << endl;

  string name = "Williams";
  cout << name << "\t" << &name << endl;

  return 0;
}