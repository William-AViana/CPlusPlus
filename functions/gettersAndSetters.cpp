#include <iostream>

using namespace std;

class Movie {
  private:
    string rating; // G PG PG-13 R NR

  public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating){
      title = aTitle;
      director = aDirector;
      setRating(aRating);
    };

    void setRating(string aRating){
      if(aRating == "G" || aRating == "PG" || aRating == "PG-13" ||
         aRating == "R" || aRating == "NR"){
          rating = aRating;
         } else {
          rating = "NR";
         }
    };
    string getRating(){
      return rating;
    }
};

int main(){
  
  Movie movie1("O poder", "Rhonda Byrne", "test");

  cout << movie1.getRating() << endl;

  return 0;
};