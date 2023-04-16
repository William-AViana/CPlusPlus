#include <iostream>

using namespace std;

int main() {
  string color, plural, celebrity; 

  cout << "Enter a color: ";
  getline(cin, color);
  cout << "Enter a plural noum: ";
  getline(cin, plural);
  cout << "Enter a celebration: ";
  getline(cin, celebrity);

  cout << "Roses are " << color << endl;
  cout << plural << " are blue" << endl;
  cout << "I love " << celebrity << endl;
}