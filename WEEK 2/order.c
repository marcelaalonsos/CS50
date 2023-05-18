/*
check if a lowercase string's characters are in alphabetical order
- if yes print yes
- if no print no
*/

#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
  //get input string
  string word = get_string("Provide a word: ");
  //get length of word
  int length = strlen(word);
  //loop through string
  for (int i = 0; i < length -1; i++)
  {
    //check if not alphabetical
    if (word[i] > word[i + 1])
    {
      printf("Not in alphabetical order\n");
      return 0; //exits the program
    }
  }
   printf("In alphabetical order\n");
}
