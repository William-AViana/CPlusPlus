#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;

    Book() {
      title = "No title";
      author = "No title";
      pages = 0;
    };

    Book(string aTitle, string aAuthor, int aPages) {
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    }
};

int main() {
  
  Book book1("Harry Poter", "JK Rowling", 500);
  Book book2("The power", "Rhonda Byrne", 350);
  Book book3;

  cout << book3.title << endl;
  return 0;
}