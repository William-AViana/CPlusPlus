#include <iostream>
using namespace std;

int main() {
  double finalGrade;
  cout << "Enter the final grade: ";
  cin >> finalGrade;

  bool goodBehavior;
  cout << "Is he/she well-behavior? ";
  cin >> goodBehavior;

  bool goodStudent = finalGrade >= 9 && goodBehavior;
  bool avarageStudent = finalGrade >= 8 ^ goodBehavior;
  bool badStudent = finalGrade <=3 && !goodBehavior;
  bool loanCanceled = finalGrade <=3 || !goodStudent;

  cout << "Good Student? " << goodStudent << endl;
  cout << "Avarege student? " << avarageStudent << endl;
  cout << "Bad student? " << badStudent << endl;
  cout << "Will the loan be cancelled? " << loanCanceled << endl;
  
  return 0;
}