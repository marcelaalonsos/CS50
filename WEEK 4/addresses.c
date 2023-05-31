#include <stdio.h>
#include "cs50.h"

// int main(void)
// {
//   int n = 50;
//   int *p = &n;
//   printf("%p\n", *p);
// }

//prints the memory location of each character in the string s
// int main(void)
// {
//   string s = "HI!";
//   printf("%p\n", s);
//   printf("%p\n", &s[0]);
//   printf("%p\n", &s[1]);
//   printf("%p\n", &s[2]);
//   printf("%p\n", &s[3]);
// }

//prints the string that starts at the location of s
int main(void)
{
  char *s = "HI!"; //string is actually char * s it is a pointer pointing to an array of characters
  printf("%s\n", s);
  printf("%s\n", s + 1); //will print the substrings after s + 1
}
