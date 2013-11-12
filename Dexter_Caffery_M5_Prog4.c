/*****************************************************
* filename: Dexter_Caffery_M5_Prog4.c
* Exercise: Module 5, Exercise 4
* Name: Dexter Caffery
* Date Created: November 7, 2013
*
* Description: This program finds the largest integer in a
*              user defined array. It is largely based on my last program.
******************************************************/

#include <stdio.h>
#define SIZE 10

int large(int arr[]);
int main(void)
{
    int vals[SIZE], num;

    printf("Input ten numbers\n");
    for (num = 0; num < SIZE; num++)
    {
        printf("Number %2d :  ", num + 1);  //Loop to get input for numbers into the array
        scanf("%d", &vals[num]);
    }
    printf("Your entered values are: ");
    for (num = 0; num < SIZE; num++)        //Confirmation display, verifying the input numbers
    {
        printf("%d ", vals[num]);
    }
    printf("\nYour largest value in the array was: %d\n", (large(vals)));  //Call function and print return result

    return 0;
}
int large(int arr[])
{
    int num, test, change;

    for (num = 1; num <= (SIZE - 1); num++)
    {
        for (test = 0; test <= (SIZE - 2); test++)   //This is identical to my sorting function in the previous program
        {                                            //the difference is, this returns the last integer in the array
            if (arr[test] > arr[test + 1])           //which will be the largest
            {
                change = arr[test];
                arr[test] = arr[test + 1];
                arr[test + 1] = change;
            }
        }
    }
    return arr[SIZE - 1];
}
