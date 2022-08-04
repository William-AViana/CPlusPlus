#include <cstdio>

int main() {
  // type identifier = value;
  double price = 80.99;

  // type identifier
  double tax = 0.08;

  double finalPrice = price * (1 + tax);

  printf("The final price is %.2f.\n", finalPrice);
  return 0;
}