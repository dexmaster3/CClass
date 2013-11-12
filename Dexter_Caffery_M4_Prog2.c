/*****************************************************
* filename: Dexter_Caffery_M4_Prog2.c
* Exercise: Module 4, Exercise 2
* Name: Dexter Caffery
* Date Created: November 5, 2013
*
* Description: This program uses its own function to print
*              the value of two user defined numbers
******************************************************/

#include <stdio.h>

void print_doubles(double x,double y); //Declare function for later
int main(void)
{
    double val1, val2;
    printf("Enter two numeric values: ");
    scanf("%lf %lf", &val1, &val2);
    print_doubles(val1, val2);  //Call function, sending two arguments

    return 0;
}
void print_doubles(double x,double y)
{
    printf("The values you entered are: %lf and %lf\n", x, y); //Print the same values back to the user, function returns nothing
}
