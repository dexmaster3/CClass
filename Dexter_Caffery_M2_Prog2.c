/*****************************************************
* filename: Dexter_Caffery_M2_Prog2.c
* Exercise: Module 2, Exercise 2
* Name: Dexter Caffery
* Date Created: October 29, 2013
*
* Description: This program gets user input for trip variables
*              and calculates/outputs the estimated time.
******************************************************/

#include <stdio.h>
int main(void)
{
//Initialize variables, using float for precision of output

    float miles;
    float speed;
    float hours;
    char name[15];

//Ask for input for each variable, and then set with scanf()
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your trip speed (mph): ");
    scanf("%f", &speed);
    printf("Enter your trip distance (miles): ");
    scanf("%f", &miles);

//Calculate estimated time
    hours = miles / speed;

//Return to user
    printf("%s, your trip of %0.0f miles at %0.0f mph will take %2.2f hours\n", name, miles, speed, hours);

    return 0;
}
