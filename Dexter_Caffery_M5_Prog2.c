/*****************************************************
* filename: Dexter_Caffery_M5_Prog2.c
* Exercise: Module 5, Exercise 2
* Name: Dexter Caffery
* Date Created: November 6, 2013
*
* Description: This program gets a certain amount of integer inputs
*              from the user and then returns the values and their squares
******************************************************/

#include <stdio.h>
#define ASIZE 5   //This number can be changed to as many number as you want the user to input
int main(void)
{
    int num;
    int vals[ASIZE][2]; //Multidimentional array of any number of inputs by two items each

    printf("--Enter %d items--\n", ASIZE);
    for (num = 0; num < ASIZE; num++)           //Prompting for the inputs, and putting in the array
    {
        printf("Integer #%d =  ", num + 1);
        scanf("%d", &vals[num][0]);
    }
    for (num = 0; num < ASIZE; num++)           //Getting the squares and putting them in our array
    {
        vals[num][1] = vals[num][0] * vals[num][0];
    }
    printf("Value   Squared\n");
    for (num = 0; num < ASIZE; num++)           //Printing out results to the user
    {
        printf("%4d %7d\n", vals[num][0], vals[num][1]);
    }
    return 0;
}
