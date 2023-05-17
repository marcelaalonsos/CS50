#include <stdio.h>
#include "cs50.h"

// int main(void)
// {
//   string name = get_string("What's your name: ");
//   printf("hello, %s\n", name);
// }

//make program take variables on the command line
int main(int argc, string argv[]) //argc = argument count
{
  if (argc == 2)
  {
    printf("hello, %s\n", argv[1]); //if you run the program with a string, it will print hello + string
  }
  else
  {
    printf("hello, world\n");
  }
}
