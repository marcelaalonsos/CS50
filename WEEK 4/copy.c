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
// int main(void)
// {
//   //get string
//   char *s = get_string("s: ");

//   //allocate memory for another string
//   char *t = malloc(strlen(s) + 1);

//   //copy string into memory, including \0
//   for (int i = 0; i < strlen(s); i++)
//   {
//     t[i] = s[i];
//   }

//   //capitalize copy
//   t[0] = toupper(t[0]);

//   //print strings
//   printf("s: %s\n", s);
//   printf("t: %s\n", t);
// }

//more efficient way to write it, placing n = strlen(s) left of the conditional
// int main(void)
// {
//   //get string
//   char *s = get_string("s: ");

//   //allocate memory for another string
//   char *t = malloc(strlen(s) + 1);

//   //copy string into memory, including \0
//   for (int i = 0, n = strlen(s); i <= n; i++)
//   {
//     t[i] = s[i];
//   }

//   //capitalize copy
//   t[0] = toupper(t[0]);

//   //print strings
//   printf("s: %s\n", s);
//   printf("t: %s\n", t);
// }

//built-in function to copy strings in C - strcopy
// int main(void)
// {
//   //get string
//   char *s = get_string("s: ");

//   //allocate memory for another string
//   char *t = malloc(strlen(s) + 1);

//   //copy string into memory
//   strcpy(t, s);

//   //capitalize copy
//   t[0] = toupper(t[0]);

//   //print strings
//   printf("s: %s\n", s);
//   printf("t: %s\n", t);
// }

//check for NULL condition
int main(void)
{
  //get string
  char *s = get_string("s: ");
  if (s == NULL)
  {
    return 1;
  }

  //allocate memory for another string
  char *t = malloc(strlen(s) + 1);
  if (t == NULL)
  {
    return 1;
  }

  //copy string into memory
  strcpy(t, s);

  //capitalize copy
  if (strlen(t) > 0)
  {
    t[0] = toupper(t[0]);
  }

  //print strings
  printf("s: %s\n", s);
  printf("t: %s\n", t);

  //free memory
  free(t);
  return 0;
}
