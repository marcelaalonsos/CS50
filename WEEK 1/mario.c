#include <stdio.h>
#include "cs50.h"

//printing 4 blocks with ? horizontally
// int main(void)
// {
//   for (int i = 0; i < 4; i++)
//   {
//     printf("?");
//   }
//   printf("\n");
// }

//printing 3 blocks vertically
// int main(void)
// {
//   for (int i = 0; i < 3; i++)
//   {
//     printf("#\n");
//   }
// }

//printing a 3x3 group of blocks
// int main(void)
// {
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j < 3; j++)
//     {
//       printf("#");//the nested loop prints the row
//     }
//     printf("\n");//the outer loop creates the column
//   }
// }

//constant size
// int main(void)
// {
//   const int n = 3;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       printf("#");
//     }
//     printf("\n");
//   }
// }

//ask the user for the size of the grid
// int main(void)
// {
//   int n; //create the variable without an initial value
//   do
//   {
//     n = get_int("Size: ");// assign n the return value of the user's input
//   }
//   while (n < 1); //checks if user input is at least not less than 1

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       printf("#");
//     }
//     printf("\n");
//   }
// }

//abstraction
int get_size(void);
void print_grid(int size);

int main(void)
{
  //get size of grid
  int n = get_size();

  //print grid of bricks
  print_grid(n);
}

int get_size(void) //output format, name of the function, and arguments if any - write void if it takes no arguments
{
  int n;
  do
  {
    n = get_int("Size: ");
  }
  while (n < 1);
  return n;
}

void print_grid(int size) //void because it has no return value, but it takes an argument of data type int called size
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
