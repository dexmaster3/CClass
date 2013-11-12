/*****************************************************
* filename: Dexter_Caffery_M3_Prog4.c
* Exercise: Module 3, Exercise 4
* Name: Dexter Caffery
* Date Created: October 31, 2013
*
* Description: This program lets the user input as much text
*              on as many lines as they like, until it reaches a # sign
*              then it counts the newline chars, space, and other chars
******************************************************/

#include <stdio.h>

int main(void)
{
//Initiate variables, the counters are set to zero to create a running total
    char chr;
    int newline = 0;
    int spacechar = 0;
    int otherchar = 0;
    int totalchar = 0;

//Continually enter text and symbols until the # sign is encountered
    printf("Enter your text to be counted (terminate at '#' sign):\n");
    while ((chr = getchar()) != '#')
    {
        if (chr == '\n')
            newline += 1;
        else if (chr == ' ')
            spacechar += 1;
        else
            otherchar += 1;
        totalchar += 1;
    }

//Table of input characters
    printf("Characters:  Newline    Spaces    OtherChars    TotalChars\n");
    printf("%17d%11d%12d%14d\n", newline, spacechar, otherchar, totalchar);

    return 0;
}
