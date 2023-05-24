#include <stdio.h>
#include "cs50.h"

int main(void)
{
  // an array of integer
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};

  //search for number
  int n = get_int("Number: ");
  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == n)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
