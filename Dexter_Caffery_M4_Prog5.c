/*****************************************************
* filename: Dexter_Caffery_M4_Prog5.c
* Exercise: Module 4, Exercise 5
* Name: Dexter Caffery
* Date Created: November 5, 2013
*
* Description: This program uses pointers to have a function
*              change and return to values that were entered by the user
******************************************************/

#include <stdio.h>

void max_value(int * x, int * y); //This function takes two arguments that are pointers
int main(void)
{
    int num1, num2; //Two standard int variables within main
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    max_value(&num1, &num2); //Using the address operators to transmit the variables addresses (not the actual variable)
    printf("Both values are now: %d %d\n", num1, num2); /* Final print statement uses standard variable
                                                           names because they have been altered by the function */
    return 0;
}
void max_value(int * x, int * y) //Only takes pointers as arguments (which is why the addresses were sent)
{
    if (*x > *y) {
        *y = *x;   //If the value lying at the address of the first argument is bigger than the
    }              //value lying at the second argument's address: then set it equal to the bigger one
    else if (*y > *x) {
        *x = *y;   //Same concept, but reversed
    }
    else
        printf("Both values are already equal!\n"); //In case the entered values were equal (only other option)
}
