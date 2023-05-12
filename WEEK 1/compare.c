#include <stdio.h>
#include "cs50.h"

int main(void)
{
  int x = get_int("Provide a value for x ");
  int y = get_int("Provide a value for y ");

  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    printf("x is greater than y\n");
  }
  else //if (x == y) equality is represented with ==
  {
    printf("x is equal to y\n");
  }
}
