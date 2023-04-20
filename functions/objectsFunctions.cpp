#include <iostream>

using namespace std;

class Student {
  public:
  string name;
  string major;
  double gpa;
  
  Student(string aName, string aMajor, double aGpa){
    name = aName;
    major = aMajor;
    gpa = aGpa;
  }

  bool hasHonors(){
    if(gpa >= 3.5){
      return true;
    }
    return false;
  }
};

int main() {

  Student student1("Graziela", "Business", 7.5);
  Student student2("William", "Developer", 3.0);

  cout << student1.hasHonors();
  return 0;
}