/*****************************************************
* filename: Dexter_Caffery_M4_Prog4.c
* Exercise: Module 4, Exercise 4
* Name: Dexter Caffery
* Date Created: November 5, 2013
*
* Description: This program promts the user for two numbers
*              either negative or positive, and returns how many
*              negative numbers they entered.
******************************************************/

#include <stdio.h>

int negative_count(signed long x, signed long y); //Declare negative counting function
int main(void)
{
    signed long num1, num2; //Two signed variables the user will input

    printf("Enter two integers of data type \"long\": ");
    scanf("%ld %ld", &num1, &num2);
    printf("Number of negative numbers entered: %d\n", (negative_count(num1, num2))); //This function returns 0, 1 or 2

    return 0;
}
int negative_count(signed long x, signed long y) //Only takes two args
{
    int numneg = 0;

    if (x < 0) {
        numneg += 1; //For each number below zero, 1 is added to the count
    }
    if (y < 0) {
        numneg += 1;
    }
    return numneg; //Function returns the amount in the count
}
