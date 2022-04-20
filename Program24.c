#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;

  //x += 5;
  //x -= 3;
  //x *= 3;
  //x /= 3;
  //x %= 3;
  //x &= 3;
  //x |= 3;
  //x ^= 3;
  //x >>= 3;
  //x <<= 3;

  //printf("%d\n", x + y);
  //printf("%d\n", x - y);
  //printf("%d\n", x * y);
  //printf("%d\n", x / y);
  //printf("%d\n", x % y);
  //printf("%d\n", ++x);
  //printf("%d\n", --y);

  //printf("%d", x);

  //printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
  //printf("%d", x == y); // returns 0 (false) because 5 is not equal to 3
  //printf("%d", x != y); // returns 1 (true) because 5 is not equal to 3
  //printf("%d", x < y); // returns 0 (false) because 5 is not less than 3

  //Returns 1 (true) because five is greater than, or equal, to 3
  //printf("%d", x >= y);

  // Returns 0 (false) because 5 is neither less than or equal to 3
  //printf("%d", x <= y);

  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  //printf("%d", x > 3 && x < 10);
  
  // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  //printf("%d", x > 3 || x < 4);

  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x > 3 && x < 10));




  
  return 0;
}