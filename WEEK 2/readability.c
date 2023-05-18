/*
coleman-liau index
index = 0.0588 * L - 0.296 * S - 15.8
L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text

Your program must prompt the user for a string of text using get_string.
Your program should count the number of letters, words, and sentences in the text. You may assume that a letter is any lowercase character from a to z or any uppercase character from A to Z, any sequence of characters separated by spaces should count as a word, and that any occurrence of a period, exclamation point, or question mark indicates the end of a sentence.
Your program should print as output "Grade X" where X is the grade level computed by the Coleman-Liau formula, rounded to the nearest integer.
If the resulting index number is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output "Grade 16+" instead of giving the exact index number. If the index number is less than 1, your program should output "Before Grade 1".
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //prompt user to input a text
    string text = get_string("Text: ");
    float L = (count_letters(text) / (float) count_words(text)) * 100;
    float S = (count_sentences(text) / (float) count_words(text)) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    //initialize letter count with zero
    int letterCount = 0;
    int length = strlen(text);
    //loop throught the string
    for (int i = 0; i < length; i++)
    {
        //save each char in a variable
        char c = text[i];
        //check if c is an alphabetical value
        if (isalpha(c))
        {
            //if so add 1 to count
            letterCount++;
        }
    }
    return letterCount;
}

int count_words(string text)
{
    //count starts at 1 because we will have at minimum one word
    int wordCount = 1;
    int length = strlen(text);
    //loop through the string
    for (int i = 0; i < length; i++)
    {
        //words are separated by spaces, so if it finds spaces
        char c = text[i];
        if (c == ' ')
        {
            //increase count by 1
            wordCount++;
        }
    }
    return wordCount;
}

int count_sentences(string text)
{
    //count starts at 0
    int sentenceCount = 0;
    int length = strlen(text);
    //loop through the string
    for (int i = 0; i < length; i++)
    {
        //if char is . or ! or ?
        char c = text[i];
        if (c == '.' || c == '!' || c == '?')
        {
            sentenceCount++;
        }
    }
    return sentenceCount;
}
