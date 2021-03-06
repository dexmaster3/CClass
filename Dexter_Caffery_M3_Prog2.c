/*****************************************************
* filename: Dexter_Caffery_M3_Prog2.c
* Exercise: Module 3, Exercise 2
* Name: Dexter Caffery
* Date Created: October 31, 2013
*
* Description: This program promts user for dimentions of a rectangular
               prism, and outputs the volume/surface area.
******************************************************/

#include <stdio.h>

int main(void)
{
//Initialize variables as float to allow decimals
    float width, height, length;
    float surface, volume;

//Initial print statement here and at the end of loop, so loop doesn't all the way through if user inputs zero
    printf("Enter length (Zero to quit):\n        ");
    while (scanf("%f", &length), length > 0)
    {
        printf("Enter width:\n        ");
        scanf("%f", &width);
        printf("Enter height:\n        ");
        scanf("%f", &height);
//Math calculations
        surface = (2 * length * width) + (2 * length * height) + (2 * height * width);
        volume = length * width * height;
//Output
        printf("Prism surface area:\n      %4.4f\n", surface);
        printf("Prism volume:\n      %4.4f\n", volume);

        printf("Enter length (Zero to quit):\n        ");
//The whitespace in the strings is to make it somewhat more visually appealing
    }

    printf("Goodbye!\n");
    return 0;
}
