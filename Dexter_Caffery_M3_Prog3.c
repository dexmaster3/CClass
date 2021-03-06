/*****************************************************
* filename: Dexter_Caffery_M3_Prog3.c
* Exercise: Module 3, Exercise 3
* Name: Dexter Caffery
* Date Created: October 31, 2013
*
* Description: This program determines if the user defined number is prime
*
* This actually took me a long time, because I didn't realize that anytime you use return
* anywhere in the main function, it exits it. Finally I realized i needed a break instead.
******************************************************/

#include <stdio.h>

int main(void)
{
//Need three variables, only dealing with whole numbers here
    unsigned long testnum, num;
    unsigned long noprime = 0;

//User promt and set to num variable
    printf("Enter an integer to be tested if it is prime (q is quit): ");
    while (scanf("%lu", &num))
    {
//Our test number starts at 2 because everything is divisible by one
        for (testnum = 2; testnum < num; ++testnum)
        {
            if (num % testnum == 0 && testnum != num) //When modulo returns zero that means it is currently divisible by the testnumber
            {                                         //We need to make sure the testnum is not equal to the entered number,because then it will return zero
                noprime = testnum;                    //We set testnum equal to another variable to print to the user (once it is divisible)
                break;
            }
        }
        if (noprime > 0)      //If noprime has been set to another number, we will show the user (this is the first possible divisor)
            printf("The number is not prime because it is divisible by %lu\n", noprime);
        else                  //Otherwise it means we iterated through every possible divisor up to the users number, and it was not divisible
            printf("The number is a prime.\n");
            noprime = 0;       //Reset noprime after use
        printf("Enter another integer to test (q is quit): ");
    }
    printf("Goodbye!\n");

    return 0;
}
