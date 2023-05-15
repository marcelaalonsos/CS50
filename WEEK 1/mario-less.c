#include <stdio.h>
#include "cs50.h"

int main(void)
{
    //ask user to input pyramid height
    //number should be between 1 and 8 inclusive
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //for each row, increase hashtag
    for (int row = 0; row < height; row++)
    {
        //add space per row, num of spaces is height minus the row minus 1
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        //if column is less or equal to row, print another #
        for (int col = 0; col <= row; col++)
        {
            printf("#");
        }
        //prints new line
        printf("\n");
    }
}
