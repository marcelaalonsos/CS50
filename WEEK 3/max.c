#include <stdio.h>
#include "cs50.h"

int max(int array[], int n);

int main(void)
{
  //create variable n
  int n;
  //prompt user to provide number
  do
  {
    n = get_int("Number of elements: ");
  }
  while (n < 1);

  //initialize array of size n
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    arr[i] = get_int("Element %i: ", i);
  }
  printf("The max value is %i.\n", max(arr, n));
}

int max(int array[], int n)
{
  int max = array[0];
  for (int i = 0; i < n; i++)
  {
    if (array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}
