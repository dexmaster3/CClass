/*****************************************************
* filename: Dexter_Caffery_M1_Prog2.c
* Exercise: Module 1, Exercise 2
* Name: Dexter Caffery
* Date Created: October 1, 2013
*
* Description: This program declares an integer variable
*              named number and calculates various opperations
******************************************************/

// Note: you wrote to put calculations in a separate statement than printf, so I had to write variables for all operators.

#include <stdio.h>
int main(void)
{
// Initialize all variables
    int number;
    int numbermult;
    int numberdiv;
    int numberplus;
    int numbermin;
    int numbersq;
    int numbermod;

// Set our primary number variable
    number = 10;
// Complete Calculations for each operator
    numbermult = number * 2;
    numberdiv = number / 2;
    numberplus = number + 2;
    numbermin = number - 2;
    numbersq = number * number;
    numbermod = number % 2;

// Print out to user, each operation on separate lines
    printf("a. Number times 2 = %d\n", numbermult);
    printf("b. Number divided by 2 = %d\n", numberdiv);
    printf("c. Number plus 2 = %d\n", numberplus);
    printf("d. Number minus 2 = %d\n", numbermin);
    printf("e. Number squared = %d\n", numbersq);
    printf("f. Number modulus (remainder) by 2 = %d\n", numbermod); /* Not sure if you wanted modulus, you
                                                                       wrote the % operator on the assignments */
    return 0;
}
