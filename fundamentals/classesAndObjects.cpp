#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;
};

int main() {
  
  Book book1;
  book1.title = "Harry Poter";
  book1.author = "JK Rowling";
  book1.pages = 400;

  cout << book1.author << endl;

  return 0;
}