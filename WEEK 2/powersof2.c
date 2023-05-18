/*
- create a program that prompts the user for a size, n
- dynamically create an array of that size, where each element is 2 times the previous one
- start the array at 1
- print the array, integer by integer
*/

#include <stdio.h>
#include "cs50.h"

int main(void)
{
  //prompt user to provide array size
  int length;
  do
  {
    length = get_int("Provide size of array: ");
  } while (length < 1);

  //initiliaze array
  int twice[length];
  //set first value of array to 1
  twice[0] = 1;
  //print the first value
  printf("%i\n", twice[0]);
  //loop through the array
  for (int i = 1; i < length; i++)
  {
    //make current element twice as the previous
    twice[i] = 2 * twice[i - 1];
    //print out the element
    printf("%i\n", twice[i]);
  }
}
