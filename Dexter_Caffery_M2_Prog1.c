/*****************************************************
* filename: Dexter_Caffery_M2_Prog1.c
* Exercise: Module 2, Exercise 1
* Name: Dexter Caffery
* Date Created: October 27, 2013
*
* Description: This program demonstrates a while loop to
*              print numbers one through ten.
******************************************************/

#include <stdio.h>
int main(void)
{
//Initialize number var at zero
    int num = 0;
    
//Use while to count up; add +1 before the print fucntion because var starts at zero
    while(num < 10)
    {
        ++num;
        printf("num is: %d currently\n", num);
    }

    return 0;
}
