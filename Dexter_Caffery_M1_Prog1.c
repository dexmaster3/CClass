/*****************************************************
* filename: Dexter_Caffery_M1_Prog1.c
* Exercise: Module 1, Exercise 1
* Name: Dexter Caffery
* Date Created: October 1, 2013
*
* Description: This program converts age in years to
*              days and displays both values
******************************************************/
#include <stdio.h>
int main(void)
{
    int ageyear, ageday;
    ageyear = 24;

    ageday = ageyear * 365;

    printf("I am %d years old which is also %d days old!", ageyear, ageday);

    return 0;
}
