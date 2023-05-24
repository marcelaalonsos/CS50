#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
  //an array of strings
  string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  //search for string
  string s = get_string("String: ");
  for (int i = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
