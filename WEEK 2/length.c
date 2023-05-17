#include <stdio.h>
#include "cs50.h"
#include <string.h> //library with string methods

// int main(void)
// {
//   //prompt the user's name
//   string name = get_string("Name: ");

//   //count number of characters up until '\0' (aka NUL)
//   int n = 0;
//   while (name[n] != '\0')
//   {
//     n++;
//   }
//   printf("%i\n", n);
// }

//using the string.h library
int main(void)
{
  //prompt for user's name
  string name = get_string("Name: ");
  //save the length of the string in a variable
  int length = strlen(name); //strlen is a method that calculates the length of a string passed to it
  //print the length
  printf("%i\n", length);
}
