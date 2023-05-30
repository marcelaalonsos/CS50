#include <stdio.h>
#include "cs50.h"

int main(void)
{
  //get two strings
  char *s = get_string("s: ");
  char *t = get_string("t: ");

  //compare strings' addresses
  // if (s == t)
  // {
  //   printf("Same\n");
  // }
  // else
  // {
  //   printf("Different\n");
  // }

  //print strings
  printf("%s\n", s);
  printf("%s\n", t);

  //print strings' addresses
  printf("%p\n", s);
  printf("%p\n", t);
}
