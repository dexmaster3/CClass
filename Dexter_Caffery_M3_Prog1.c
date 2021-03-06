/*****************************************************
* filename: Dexter_Caffery_M3_Prog1.c
* Exercise: Module 3, Exercise 1
* Name: Dexter Caffery
* Date Created: October 31, 2013
*
* Description: This program prints out '&' symbols on each line,
               with each row containing another '&' symbol
******************************************************/

#include <stdio.h>

int main(void)
{
//Only two variables needed, one for the rows, and another for the columns (each & symbol on the line)
    int col, row;
//Row starts at 1 so the first line is not blank

    for (row = 1; row <= 6; row++)           /* Braces '{}' are not needed on the second for statement */
    {                                        /* because it only contains one statement after it        */
        for (col = 0; col < row; col++)
            printf("&");
        printf("\n");
    }
//Newline print function is only used when and '&' has been printed for the number row the program is on

    return 0;
}
