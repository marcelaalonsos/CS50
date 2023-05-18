/*
Your function will iterate through the password that’s supplied to it as an argument. Since you have to find at least one lower case letter, one upper case letter, one number and one symbol, you may want to create a boolean variable for each and set each to false before you iterate through the string. If you then find a number, for instance you can set that boolean to true. If all booleans are true at the end of the function, it means all criteria are met, and you would return true.

-check that a password has at least one lowercase letter, uppercase letter, number and symbol
*/

#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
  //prompt user to enter password
  string password = get_string("Enter your password: ");
  //check if password is valid
  //if true
  if (valid(password))
  {
    printf("Your password is valid!\n");
  }
  else
  {
    printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
  }
}

bool valid(string password)
{
  //initialize bool variables for the specifications we are checking for and set them to false
    bool lower = false;
    bool upper = false;
    bool number = false;
    bool symbol = false;
    int length = strlen(password);
    //loop through the string
    for (int i = 0; i < length; i++)
    {
      //check if i islower
        if (islower(password[i]))
        {
            lower = true;
        }
        //check if i isupper
        if (isupper(password[i]))
        {
            upper = true;
        }
        //check if i isdigit
        if (isdigit(password[i]))
        {
            number = true;
        }
        //check if i is not isalnum
        if (!isalnum(password[i]))
        {
            symbol = true;
        }
    }
    //if all the bools we established are true, return true
    if (lower == true && upper == true && number == true && symbol == true)
    {
        return true;
    }
    //otherwise return false
    return false;
}
