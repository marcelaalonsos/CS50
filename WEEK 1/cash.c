/*
Implementation details

In cash.c, we’ve implemented most (but not all!) of a program that prompts the user for the number of cents that a customer is owed and then prints the smallest number of coins with which that change can be made. Indeed, main is already implemented for you. But notice how main calls several functions that aren’t yet implemented! One of those functions, get_cents, takes no arguments (as indicated by void) and returns an int. The rest of the functions all take one argument, an int, and also return an int. All of them currently return 0 so that the code will compile. But you’ll want to replace every TODO and return 0; with your own code. Specifically, complete the implementation of those functions as follows:

- Implement get_cents in such a way that the function prompts the user for a number of cents using get_int and then returns that number as an int. If the user inputs a negative int, your code should prompt the user again. (But you don’t need to worry about the user inputting, e.g., a string, as get_int will take care of that for you.) Odds are you’ll find a do while loop of help, as in mario.c!
- Implement calculate_quarters in such a way that the function calculates (and returns as an int) how many quarters a customer should be given if they’re owed some number of cents. For instance, if cents is 25, then calculate_quarters should return 1. If cents is 26 or 49 (or anything in between, then calculate_quarters should also return 1. If cents is 50 or 74 (or anything in between), then calculate_quarters should return 2. And so forth.
- Implement calculate_dimes in such a way that the function calculates the same for dimes.
- Implement calculate_nickels in such a way that the function calculates the same for nickels.
- Implement calculate_pennies in such a way that the function calculates the same for pennies.

Note that, unlike functions that only have side effects, functions that return a value should do so explicitly with return! Take care not to modify the distribution code itself, only replace the given TODOs and the subsequent return value! Note too that, recalling the idea of abstraction, each of your calculate functions should accept any value of cents , not just those values that the greedy algorithm might suggest. If cents is 85, for example, calculate_dimes should return 8.
*/

#include <stdio.h>
#include "cs50.h"

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    //prompt user to input change
    //value must be greater than 0
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    //initialize quarter with 0
    int quarters = 0;
    //while cents is greater or equal to 25
    while (cents >= 25)
    {
        //reduce cents by 25
        cents -= 25;
        //increase quarters by 1
        quarters++;
    }
    //return quarters
    return quarters;
}

int calculate_dimes(int cents)
{
    //initialize dimes with 0
    int dimes = 0;
    //while cents is greater or equal to 10
    while (cents >= 10)
    {
        //reduce cents by 10
        cents -= 10;
        //increase dimes by 1
        dimes++;
    }
    //return dimes
    return dimes;
}

int calculate_nickels(int cents)
{
    //initialize nickels with 0
    int nickels = 0;
    //while cents is greater or equal to 5
    while (cents >= 5)
    {
        //reduce cents by 5
        cents -= 5;
        //increase nickels by 1
        nickels++;
    }
    //return nickels
    return nickels;
}

int calculate_pennies(int cents)
{
    //initialize pennies with 0
    int pennies = 0;
    //while cents is greater or equal to 1
    while (cents >= 1)
    {
        //reduce cents by 1
        cents -= 1;
        //increase pennies by 1
        pennies++;
    }
    //return pennies
    return pennies;
}
