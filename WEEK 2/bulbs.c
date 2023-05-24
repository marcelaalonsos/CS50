/*
Light bulbs can only be on or off. In other words, light bulbs represent two possible states; either the bulb is on, or the bulb is off, just as binary numbers are either 1 or 0. We’ll have to find a way to encode text as a sequence of binary numbers.

Let’s write a program called bulbs that takes a message and converts it to a set of bulbs that we could show to an unsuspecting audience. We’ll do it in two steps:

The first step consists of turning the text into decimal numbers. Let’s say we want to encode the message HI!. Luckily, we already have a convention in place for how to do this, ASCII. Notice that H is represented by the decimal number 72, I is represented by 73, and ! is represented by 33.
The next step involves taking our decimal numbers (like 72, 73, and 33) and converting them into equivalent binary numbers, which only use 0s and 1s. For the sake of having a consistent number of bits in each of our binary numbers, assume that each decimal is represented with 8 bits. 72 is 01001000, 73 is 01001001, and 33 is 00100001.
Lastly, we’ll interpret these binary numbers as instructions for the light bulbs on stage; 0 is off, 1 is on. (You’ll find that bulbs.c includes a print_bulb function that’s been implemented for you, which takes in a 0 or 1 and outputs emoji representing light bulbs.)

Specification
- Implement your program in a file called bulbs.c.
- Your program must first ask the user for a message using get_string.
- Your program must then convert the given string into a series of 8-bit binary numbers, one for each character of the string.
- You can use the provided print_bulb function to print a series of 0s and 1s as a series of yellow and black emoji, which represent on and off light bulbs.
- Each “byte” of 8 symbols should be printed on its own line when outputted; there should be a \n after the last “byte” of 8 symbols as well.
*/

#include <stdio.h>
#include <string.h>
#include "cs50.h"

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    //prompt user to type a message
    string message = get_string("Message: ");
    //length of string
    int length = strlen(message);
    //loop through string
    for (int i = 0; i < length; i++)
    {
        //save each character in a variable
        char c = message[i];
        //initialize an array of the binary bits with length BITS IN BYTE
        int bits[BITS_IN_BYTE];
        //set variables to convert c into binary
        //result of dividing c / 2
        int quotient = c;
        //the remainder at the end will be zero, but start off unassigned
        int remainder;

        //loop through to get values per c
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            //remainder is the quotient divided by 2
            remainder = quotient % 2;
            //add remainder to array
            bits[j] = remainder;
            //update value of quotient
            quotient /= 2;
        }
        //reverse for loop to get the bits in the right order
        for (int k = BITS_IN_BYTE -1; k >= 0; k--)
        {
            print_bulb(bits[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
