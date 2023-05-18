/*
Implementation details
The main function prompts the user for the number of weeks a user has been taking CS50, then creates an array with as many elements. Notice that, after retrieving some data, the program prompts the user to type in either “T” or “A”—”T” should (but doesn’t yet!) print the total number of hours the user entered, while “A” should (but doesn’t yet!) print the average hours the user entered. Notice that the do while loop uses toupper to capitalize the letter that’s input before it is saved in the variable output. Then, the printf function calls calc_hours. Note the syntax involved when passing an array to a function.

To complete calc_hours, first total up the hours saved in the array into a new variable. Then, depending on the value of output, return either this sum, or the average number of hours.
*/

#include <stdio.h>
#include <ctype.h>
#include "cs50.h"

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
  //prompt the user to provide a number of weeks
  int weeks = get_int("Number of weeks taking CS50: ");

  //initialize array hours starting with weeks
  int hours[weeks];

  //prompt user to input hours per week using a for loop
  for (int i = 0; i < weeks; i++)
  {
    //for every week, insert hours
    hours[i] = get_int("Week %i HW Hours: ", i);
  }

  //initialize char prompt
  char output;
  do
  {
    //ask user to provide answer
    output = toupper(get_char("Enter T for Total hours, A for average hours per week: "));
  } while (output != 'T' && output != 'A');

  //prints the result
  printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

float calc_hours(int hours[], int weeks, char output)
{
  int sum = 0;
  for (int i = 0; i < weeks; i++) {
    sum += hours[i];
  } if (output == 'T') {
      return (float) sum;
    }
  return (float) sum / weeks;
}
