/*****************************************************
* filename: Dexter_Caffery_M4_Prog3.c
* Exercise: Module 4, Exercise 3
* Name: Dexter Caffery
* Date Created: November 5, 2013
*
* Description: This program repeats a character a user defined
*              amount of times, using a separate function
******************************************************/

#include <stdio.h>

void repeat_character(char x, int y); //Declare repeat function
int main(void)
{
    char chr;
    int repeat;
    printf("Enter a character and a number: "); //User prompt
    
    while ((chr = getchar()) != '\n') //Set chr to the first character the user entered
    {
        scanf("%d", &repeat); //Set repeat var to the next integer
        repeat_character(chr, repeat); //Call function with the two variables in main
    }
    return 0;
}
void repeat_character(char x, int y)
{
    int start;
    for (start = 0; start < y; start++) //Print the first argument (character) the second argument (int) number of times
    {
        printf("%c ", x);
    }
    printf("\n"); //Newline as program ends
}
