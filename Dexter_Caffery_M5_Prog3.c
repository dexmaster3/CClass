/*****************************************************
* filename: Dexter_Caffery_M5_Prog3.c
* Exercise: Module 5, Exercise 3
* Name: Dexter Caffery
* Date Created: November 6, 2013
*
* Description: This program has a user enter ten integers,
*              then sorts them in acending order.
******************************************************/

#include <stdio.h>
#define SIZE 10             //Amount of integers we want can be changed easily here

void sort(int * arr);
int main(void)
{
    int vals[SIZE], num;

    printf("Input ten numbers\n");
    for (num = 0; num < SIZE; num++)
    {
        printf("Number %2d :  ", num + 1);      //This portion promts thet user and saves the integers to the array in order
        scanf("%d", &vals[num]);
    }
    printf("Your unsorted values are: ");
    for (num = 0; num < SIZE; num++)
    {
        printf("%d ", vals[num]);               //This is just to diplay the unsorted values (verifying the entry)
    }
    printf("\nWe will now sort them...\n");

    sort(vals);                                 //Call our sort function

    printf("Your SORTED values are: ");
    for (num = 0; num < SIZE; num++)
    {
        printf("%d ", vals[num]);               //Output the same array, but after the sort function was called
    }
    printf("\n");

    return 0;
}
void sort(int * arr)
{
    int num, test, change;

    for (num = 1; num <= (SIZE - 1); num++)    //This is just to make the inner loops run for as many integers need to be moved up
    {
        for (test = 0; test <= (SIZE - 2); test++) //This loop will make our if statement run as many times as it needs to push a
        {                                          //single integer up to the top of the array
            if (arr[test] > arr[test + 1])
            {
                change = arr[test];                //If the number is larger than the next in line, it switches places forward.
                arr[test] = arr[test + 1];         //This will run until the largest number is at the top, then it will exit to our
                arr[test + 1] = change;            //top level loop, which will do this for the next largest number
            }
        }
    }
}
