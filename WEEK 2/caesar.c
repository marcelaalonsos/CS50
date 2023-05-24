/*
Implement your program in a file called caesar.c in a directory called caesar.
Your program must accept a single command-line argument, a non-negative integer. Let’s call it
 for the sake of discussion.
If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
If any of the characters of the command-line argument is not a decimal digit, your program should print the message Usage: ./caesar key and return from main a value of 1.
Do not assume that
 will be less than or equal to 26. Your program should work for all non-negative integral values of
 less than
. In other words, you don’t need to worry if your program eventually breaks if the user chooses a value for
 that’s too big or almost too big to fit in an int. (Recall that an int can overflow.) But, even if
 is greater than
, alphabetical characters in your program’s input should remain alphabetical characters in your program’s output. For instance, if
 is
, A should not become \ even though \ is
 positions away from A in ASCII, per asciitable.com; A should become B, since B is
 positions away from A, provided you wrap around from Z to A.
Your program must output plaintext: (with two spaces but without a newline) and then prompt the user for a string of plaintext (using get_string).
Your program must output ciphertext: (with one space but without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext “rotated” by k positions; non-alphabetical characters should be outputted unchanged.
Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters, though rotated, must remain lowercase letters.
After outputting ciphertext, you should print a newline. Your program should then exit by returning 0 from main.
*/

#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    //make sure user inputs the right command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //check if input is a digit
    if(only_digits(argv[1]))
    {
        //convert argv[1] into an int
        int key = atoi(argv[1]);
        //prompt user for plaintext
        string text = get_string("plaintext: ");
        printf("ciphertext: ");
        int len = strlen(text);
        //loop through the plaintext
        for (int i = 0; i < len; i++)
        {
            char c = text[i];
            char result = rotate(c, key);
            printf("%c", result);
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
}

//checks if argv[1] contains a number 0 to 9
bool only_digits(string s)
{
    int length = strlen(s);
    //loop through the string
    for (int i = 0; i < length; i++)
    {
        char c = s[i];
        //check is c is a digit
        if(isdigit(c))
        {
            return true;
        }
    }
    return false;
}

char rotate(char c, int n)
{
    char shifted = c;
    if(isupper(c))
    {
        shifted = (c - 65 + n) % 26 + 65;
    }
    else if(islower(c))
    {
        shifted = (c - 97 + n) % 26 + 97;
    }
    return shifted;
}

