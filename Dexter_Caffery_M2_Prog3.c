/*****************************************************
* filename: Dexter_Caffery_M2_Prog3.c
* Exercise: Module 2, Exercise 3
* Name: Dexter Caffery
* Date Created: October 29, 2013
*
* Description: This program converts seconds into
*              hours and minutes.
******************************************************/

#include <stdio.h>
int main(void)
{
//Initialize variables, minutes is floating point to display more accurately
    int seconds = 1;
    float minutes;
    int hours;

//Zero will make the loop end
    while(seconds > 0)
    {
        printf("Enter seconds (0 to exit): ");
        scanf("%d", &seconds);

//I tried using modulo for calculating minutes to display only under 60, but it wouldn't accept floating point numbers
//These equations work just as well (because hours is 'int', it can be used to subtract an even multiple of 60 for minutes)
        hours = seconds / 3600;
        minutes = (seconds - hours * 3600) / 60.0;

        printf("%d seconds is %d hours and %0.2f minutes\n", seconds, hours, minutes);
    }

    return 0;
}
