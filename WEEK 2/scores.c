#include <stdio.h>
#include "cs50.h"

//using a loop to feed in values of scores
// int main (void)
// {
//   //get scores
//   int scores[3];
//   for (int i = 0; i < 3; i++)
//   {
//     scores[i] = get_int("Score: ");
//   }
//   //print average
//   printf("Average: %f\n", (scores[0] + scores[1] + scores[3]) / 3.0); //at least one of the values in the right has to be a float in order for %f to work and compile
// }

//abstraction

//create constant
const int N = 3;

//function to get average
float average(int length, int array[]);

int main(void)
{
  //get scores
  int scores[N];
  for (int i = 0; i < N; i++)
  {
    scores[i] = get_int("Score: ");
  }

  //print average
  printf("Average: %f\n", average(N, scores));
}

//get average function
float average(int length, int array[])
{
  //calculate average
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum +=array[i];
  }
  return sum / (float) length;
}
