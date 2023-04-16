#include <iostream>

using namespace std;

int main() {
  string phrase = "Coffee Academy";
  cout << phrase.find("Academy", 0) << endl;

  string phrasesub = phrase.substr(8, 4);
  cout << phrasesub << endl;
   
  return 0;
}