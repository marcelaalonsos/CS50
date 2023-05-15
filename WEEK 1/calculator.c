#include <stdio.h>
#include "cs50.h"

// int main(void)
// {
//   //prompt user for x
//   int x = get_int("x: ");

//   //prompt user for y
//   int y = get_int("y: ");

//   //perform addition
//   printf("%i\n", x + y); //the %i prints integers
// }

//using long data type
// int main(void)
// {
//   //prompt user for x
//   long x = get_long("x: ");

//   //prompt user for y
//   long y = get_long("y: ");

//   //perform addition
//   printf("%li\n", x + y); //the %li prints long values
// }

//dividing ints and storing them in float variable
// int main(void)
// {
//   //prompt user for x
//   long x = get_long("x: ");

//   //prompt user for y
//   long y = get_long("y: ");

//   float z = (float) x / (float) y; //type casting x and y as floats - converting them to another data type
//   //perform addition
//   printf("%f\n", z); //the %f prints floats
// }

//dividing ints and storing them as doubles for more precision
int main(void)
{
  //prompt user for x
  long x = get_long("x: ");

  //prompt user for y
  long y = get_long("y: ");

  double z = (double) x / (double) y; //type casting x and y as doubles - converting them to another data type
  //perform addition
  printf("%f\n", z); //the %f prints floats
}
