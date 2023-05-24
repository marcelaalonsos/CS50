#include <stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
  //get height of pyramid
  int height = get_int("Height: ");

  //draw pyramid
  draw(height);
}

//this is an infinite loop because i will always be less than n
// void draw(int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("#");
//   }
//   printf("\n");
//   draw(n + 1);
// }

//implementation with base case
void draw(int n)
{
  //it nothing to draw
  if (n <= 0)
  {
    return;
  }

  //draw pyramid of height n-1
  draw(n-1);

  //draw one more row width n
  for (int i = 0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");
}
