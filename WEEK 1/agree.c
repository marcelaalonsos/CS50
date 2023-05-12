#include <stdio.h>
#include "cs50.h"

int main(void)
{
  //prompt user to agree
  char c = get_char("Do you agree? ");

  //check whether they agree
  if (c == 'Y' || c == 'y') //use single quotes for char
  {
    printf("Agreed.\n"); //use double quotes for strings
  }
  else if (c == 'N' || c == 'n')
  {
    printf("Not agreed.\n");
  }
}
