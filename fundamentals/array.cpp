#include <iostream>

using namespace std;

int main(){
  int luckNums[] = {4, 8, 15, 16, 23, 42}; // no defined length
  luckNums[0] = 5;

  cout << luckNums[0] << endl;
  
  int luckNumsAgain[20] = {1, 2, 3, 4,5}; // defined length
  luckNumsAgain[10] = 100;
  cout << luckNumsAgain[10];

  return 0;
}