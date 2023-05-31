#include <stdio.h>
#include "cs50.h"

int main(void)
{
  int a = 28;
  int b = 50;
  int *c = &a; //is a pointer called c that points to address of a

  *c = 14; //go to location of a and change value to 14
   c = &b; //c is the address of b
  *c = 25; //is not the value of b

  //print results
  printf("a has the value of %i, located at %p\n", a, &a);
  printf("b has the value of %i, located at %p\n", b, &b);
  printf("c has the value of %i, located at %p\n", c, &c);
}
