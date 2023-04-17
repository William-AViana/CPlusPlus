#include <iostream>

using namespace std;

// Function signature
void sayHi(string name, int age); 

int main() {

  sayHi("William", 32);

  return 0;
}

void sayHi(string name, int age) {
  cout << "Hello " << name << "!" << endl;
  cout << "You are " << age << endl;
}