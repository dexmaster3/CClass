/*****************************************************
* filename: Dexter_Caffery_M3_Prog5.c
* Exercise: Module 3, Exercise 5
* Name: Dexter Caffery
* Date Created: November 1, 2013
*
* Description: This program encrypts a user provided sentence,
*              the top seceret formula replaces vowels with Z
******************************************************/

#include <stdio.h>

int main(void)
{
//Current character being read variable
    char readchar;

    printf("Enter a sentence to be encrypted (ending with a period):\n");

//Continually run until reaching a '.' character    
    while ((readchar = getchar()) != '.')
    {
        if (readchar == 'a' ||
            readchar == 'e' ||
            readchar == 'i' ||   /* lower case letters and replacement */
            readchar == 'o' ||
            readchar == 'u')
            putchar('z');
        else if(readchar == 'A' ||
                readchar == 'E' ||
                readchar == 'I' ||   /* upper case letters and replacement */
                readchar == 'O' ||
                readchar == 'U')
            putchar('Z');
        else if (readchar == ' ')
            putchar('\0');          /* delete spaces using null char */
        else
            putchar(readchar);      /* if not one of the specified items - write the current char unchanged */
    }
    printf("\n");

    return 0;
}
