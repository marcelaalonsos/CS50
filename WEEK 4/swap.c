#include <stdio.h>

//this code won't work because the void function does not know where to find a or b
// void swap(int a, int b);

// int main(void)
// {
//   int x = 1;
//   int y = 2;

//   printf("x is %i, y is %i\n", x, y);
//   swap(x, y);
//   printf("x is %i, y is %i\n", x, y);
// }

// void swap(int a, int b)
// {
//   int tmp = a;
//   a = b;
//   b = tmp;
// }

//modified
void swap(int *a, int *b);

int main(void)
{
  int x = 1;
  int y = 2;

  printf("x is %i, y is %i\n", x, y);
  swap(&x, &y);
  printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

