#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//   int *x = malloc(3 * sizeof(int));
//   x[0] = 72;
//   x[1] = 73;
//   x[2] = 33;
// }

//make sure to free space after the code block
int main(void)
{
  int *x = malloc(3 * sizeof(int));
  x[0] = 72;
  x[1] = 73;
  x[2] = 33;
  free(x);
}
