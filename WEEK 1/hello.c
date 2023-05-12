#include <stdio.h>
#include "cs50.h"

int main(void)
{
  string first = get_string("What's your first name? ");
  string last = get_string("What's your last name? ");
  printf("Hello, %s %s!\n", first, last);
  /*
  1. NEVER FORGET ; after each line of code, you will get errors!
  2. \n creates a new line after the line of code runs (escape sequence)
  3. a string of text must stay on the same line
  4. get_string is a built-in function used to get a string input from a user
  5. %s tells the printf that it should expect a variable, which is written inside the () separated by a comma
  6. you can add as many variables in the printf with as many %s
  7. variables will be printed in a left-right order
  8. printf will identify where you add an exclamation point and make sure it prints it on the right variable
  9. % is a special character treated within printf, so in order to print it as such you have to add %% - example printf("Give it 100%%") --> Give it 100%
  */
}
