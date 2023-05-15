/*
Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

Implementation details
Complete the implementation of population.c, such that it calculates the number of years required for the population to grow from the start size to the end size.

- Your program should first prompt the user for a starting population size.
  - If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater  than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
- Your program should then prompt the user for an ending population size.
  - If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
- Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
- Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.
*/

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // TODO: Prompt for start size
    int start;

    do
    {
        start = get_int("Enter starting llama population: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int target;

    do
    {
        target = get_int("Target population: ");
    }
    while (target < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start < target)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
