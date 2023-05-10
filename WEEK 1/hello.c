#include <stdio.h> //imports library - header file
#include <cs50.h> //library from harvard

// int main(void)
// {
//     printf("hello, world\n"); // never forget semicolon! & \n creates a new line (escape sequence) - a string of text must stay on the same line
// }

int main(void)
{
    string answer = get_string("What's your name? "); //get_string is a built-in function used to get a string input from a user
    printf("hello, %s\n", answer); //%s tells the printf that it should hold a variable, which is written inside the () separated by a comma
}
