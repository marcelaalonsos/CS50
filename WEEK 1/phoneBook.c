/*
Create a program that prompts a user for:
a name
an age
a phone number

print the values back to the user as confirmation
*/

#include <stdio.h>
#include "cs50.h"

int main(void)
{
  string name = get_string("What's your Name? ");
  int age = get_int("What's your age? ");
  long phone = get_long("What's yout phone number? ");

  printf("Is this the correct contact? name: %s age: %i phone number: %li\n" , name, age, phone);

}
