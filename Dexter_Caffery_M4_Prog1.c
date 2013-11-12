/*****************************************************
* filename: Dexter_Caffery_M4_Prog1.c
* Exercise: Module 4, Exercise 1
* Name: Dexter Caffery
* Date Created: November 3, 2013
*
* Description: This program echos a number input by a user
*              after some text and an equal sign.
******************************************************/

#include <stdio.h>

int main(void)
{
    char chr;
    int num;

    printf("Enter some text, equal sign and an integer:\n");
    while ((chr = getchar()) != '=')  //This loop only needs to move forward until it is at the '=' character
    {
        continue;
    }
    scanf("%d", &num);  //scanf will read the rest of the line after the '=' and set to num
    printf("The integer you entered is: %d\n", num);  //Echo back to user

    return 0;
}
