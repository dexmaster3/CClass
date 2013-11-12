/*****************************************************
* filename: Dexter_Caffery_M5_Prog1.c
* Exercise: Module 5, Exercise 1
* Name: Dexter Caffery
* Date Created: November 6, 2013
*
* Description: This program creates an array based on the defined size
*              and prints the first 5 even numbers from the top in decending order
******************************************************/

#include <stdio.h>
#define ASIZE 100   //This number can be changed to anything and the program will work
int main(void)
{
    int count, firstfive, array1[ASIZE];

    for (count = 0; count < ASIZE; count++)  //Generating array based on ASIZE definition
    {
        array1[count] = count + 1;
    }

    printf("Top 5 even numbers are: ");

    for (count = ASIZE - 1, firstfive = 0; count >= 0; count--) //Goes through each array item in decending order
    {
        if (array1[count] % 2 == 0)     //If it is even, it prints the current item it is on
        {
            printf("%d ", array1[count]);
            firstfive++;                //It also adds to the firstfive counting variable when a number is even
        }
        if (firstfive == 5)             //Once it has found 5 even variables, and printed them, it exits
            break;
    }
    printf("\n");
    return 0;
}
