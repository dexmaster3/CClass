/*****************************************************
* filename: Dexter_Caffery_M5_Prog5.c
* Exercise: Module 5, Exercise 5
* Name: Dexter Caffery
* Date Created: November 7, 2013
*
* Description: This program reverses a user input string
******************************************************/

#include <stdio.h>
#include <string.h>

void reverse(char * strpoint);
int main(void)
{
    char string1[40];

    printf("Enter a string of characters:\n");
    gets(string1);                       //originally had scanf("%s", string1) here before, but it doesn't do whitespaces

    reverse(string1);                    //Call our reversing function

    printf("Now it is: %s\n", string1);

    return 0;
}
void reverse(char * strpoint)
{
    int letters, count;
    char hold;
    char *first, *last;

    letters = strlen(strpoint);   //From the string library, to give us the size of the string for the loops

    first = strpoint;             //Two variables for holding the string
    last = strpoint;

    for (count = 0; count < (letters - 1); count++)  //Get to the last value in the string
    {
        last++;
    }
    for (count = 0; count < (letters / 2); count++)  //We are only switching letters to the middle, because then it would
    {                                                //start to switch them back
        hold = *last;
        *last = *first;             //Switch the first and last letters
        *first = hold;
        first++;                    //then step one letter inwards, and repeat
        last--;
    }
}
