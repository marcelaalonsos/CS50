/*
write your own recursive function called factorial
it should take an int and return the factorial of the number as a parameter
*/

#include <stdio.h>
#include "cs50.h"

int factorial(int n);

int main(void)
{
  //prompt user for a number
  int n = get_int("Enter number: ");
  int result = factorial(n);
  printf("%i\n", result);
}

int factorial(int n)
{
  //base case
  if (n == 1)
  {
    return 1;
  }

  return n * factorial(n - 1);
}
