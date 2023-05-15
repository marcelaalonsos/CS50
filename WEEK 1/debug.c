// Become familiar wih C syntax
// Learn to debug buggy code

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");
    string location = get_string("Where do you live? ");

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);
}

//errors identified:
/*
1. variables name and location are not properly declared with the right data type
2. semicolons are missing from all statements
3. the print function should be printf not just print
4. the placeholder should be %s for string instead of %i for integer
5. missing \n to create a new line
*/
