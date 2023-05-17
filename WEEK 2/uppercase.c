#include <stdio.h>
#include <string.h>
#include "cs50.h"
#include <ctype.h>

//cluncky way to make strings to upper case
// int main(void)
// {
//   string s = get_string("Before: ");
//   printf("After: ");

//   for (int i = 0, n = strlen(s); i < n; i++)
//   {
//     if (s[i] >= 'a' && s[i] <= 'z')
//     {
//       printf("%c", s[i] - 32);
//     }
//     else
//     {
//       printf("%c", s[i]);
//     }
//   }
//   printf("\n");
// }

//using the ctype methods
// int main(void)
// {
//   //prompt user to type string
//   string s = get_string("Before: ");
//   //print uppercase result
//   printf("After: ");

//   for (int i = 0, n = strlen(s); i < n; i++)
//   {
//     //islower method checks for lowercase chars
//     if (islower(s[i]))
//     {
//       //toupper methods converts chars into uppercase
//       printf("%c", toupper(s[i]));
//     }
//     else
//     {
//       printf("%c", s[i]);
//     }
//   }
//   printf("\n");
// }

//toupper already knows that whatever is passed to that method is already an uppercase, so we can remove the if else statement
int main(void)
{
  //prompt user to type string
  string s = get_string("Before: ");
  //print uppercase result
  printf("After: ");

  for (int i = 0, n = strlen(s); i < n; i++)
  {
    //toupper methods converts chars into uppercase
    printf("%c", toupper(s[i]));
  }
  printf("\n");
}
