/*
write a function to replace vowels with numbers
get practice with strings
get practice with command line
get practice with switch

Implement your program in a file called no-vowels.c in a directory called no-vowels.
Your program must accept a single command-line argument, which will be the word that you want to convert.
If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
Your program must contain a function called replace which takes a string input and returns a string output.
This function will change the following vowels to numbers: a becomes 6, e becomes 3, i becomes 1, o becomes 0 and u does not change.
The input parameter for the replace function will be argv[1] and the return value is the converted word.
The main function will then print the converted word, followed by \n.
You may want to try using the switch statement in your replace function.
*/

#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace(string input);

int main(int argc, string argv[])
{
    //check if user provided the right cli arguments
    if (argc != 2)
    {
        printf("Wrong command line arguments\n");
        //return 1 to exit out of the program
        return 1;
    }
    //parse the array value to a string
    string word = argv[1];
    //call function on word
    string result = replace(word);
    //print the result
    printf("%s\n", result);
}

string replace(string input)
{
    //initialize a variable for the result, it has the length of the input
    string output = input;

    int length = strlen(input);
    //iterate through the input
    for (int i = 0; i < length; i++)
    {
        //convert chars to lowercase
        char c = tolower(input[i]);
        //use a switch statements to replace the specific letters case by case
        switch (c)
        {
            case 'a':
            output[i] = '6';
            break;

            case 'e':
            output[i] = '3';
            break;

            case 'i':
            output[i] = '1';
            break;

            case 'o':
            output[i] = '0';
            break;

            default:
            output[i] = input[i];
            break;
        }
    }
    //return the output modified string
    return output;
}
