#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;
    void information();

    Book() {
      title = "No title";
      author = "No title";
      pages = 0;
    };

    Book(string aTitle, string aAuthor, int aPages) {
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    };
};

void Book::information() {
    cout << this->title <<endl;
    cout << this->author <<endl;
    cout << this->pages << endl;
}

int main() {
  
  Book book1("Harry Poter", "JK Rowling", 500);
  Book book2("The power", "Rhonda Byrne", 350);
  Book book3;
  Book book4("Test", "Athor test", 200);

  book1.information();
  return 0;
<<<<<<< HEAD
}
=======
};
>>>>>>> 1aaf5d5 (add a method for return informations books)
