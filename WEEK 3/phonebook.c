#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
  //array of strings
  string names[] = {"Carter", "David"};
  string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

  //search for a name
  string name = get_string("Name: ");
  for (int i = 0; i < 2; i++)
  {
    if (strcmp(names[i], name) == 0)
    {
      printf("Found %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
