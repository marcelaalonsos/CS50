/*
create your own get_candidate function that prompts the user to input attributes for a candidate
you may rely on get_string, get_float, etc
your function should return a candidate
*/


#include <stdio.h>
#include <string.h>
#include "cs50.h"

//declare the struct
typedef struct
{
  string name;
  int votes;
}

candidate;

candidate get_candidate(string prompt);

int main(void)
{
  candidate candidates[3];
  for (int i = 0; i < 3; i++)
  {
    candidates[i] = get_candidate("Enter a candidate: ");
  }
  printf("%s\n", candidates[0].name);
}

candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);
  candidate c;
  c.name = get_string("Enter a name: ");
  c.votes = get_int("Enter number of votes: ");

  return c;
}
