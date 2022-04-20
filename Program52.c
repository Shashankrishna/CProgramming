#include <stdio.h>

// Function Declaration
int myFunction(int x, int y) {
  //return 5 + x;
  return x + y;
}

// Main Function Definition
int main() {
  printf("Result is: %d", myFunction(5, 3));

  int result = myFunction(5, 3);
  printf("Result is = %d", result);

  return 0;
}