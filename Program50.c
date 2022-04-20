#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

/* When a parameter is passed to the function, it is called an argument. 
So, from the example above: name is a parameter, while Liam, Jenny and Anja 
are arguments.*/