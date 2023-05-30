#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(void)
// {
//   //get string
//   string s = get_string("s: ");

//   //copy the string's address
//   string t = s;

//   //capitalize first letter in string
//   if (strlen(t) > 0)
//   {
//       t[0] = toupper(t[0]);
//   }

//   //print the string twice
//   printf("s: %s\n", s);
//   printf("t: %s\n", t);
// }

//to actually make a copy
int main(void)
{
  //get string
  char *s = get_string("s: ");

  //allocate memory for another string
  char *t = malloc(strlen(s) + 1);

  //copy string into memory, including \0
  for (int i = 0; i < strlen(s); i++)
  {
    t[i] = s[i];
  }

  //capitalize copy
  t[0] = toupper(t[0]);

  //print strings
  printf("s: %s\n", s);
  printf("t: %s\n", t);
}
