#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  // multiple execution
  myFunction(); // call the function
  myFunction(); // call the function
  myFunction(); // call the function
  return 0;
}