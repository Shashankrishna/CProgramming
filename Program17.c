#include <stdio.h>

int main() {
  int myNum = 5;  // integer
  float myFloatNum = 5.99;  // Floating point number
  double myDoubleNum = 19.99;  // Double (floating point number)
  char myLetter = 'S'; // Character
  char greetings[] = "Hello World!";

  printf("%d\n", myNum);
  printf("%i\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%lf\n", myDoubleNum);
  printf("%c\n", myLetter);
  printf("%s\n", greetings);
  return 0;
}