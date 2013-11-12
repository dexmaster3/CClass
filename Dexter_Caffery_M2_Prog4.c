/*****************************************************
* filename: Dexter_Caffery_M2_Prog4.c
* Exercise: Module 2, Exercise 4
* Name: Dexter Caffery
* Date Created: October 29, 2013
*
* Description: This program gets a price from the user and
*              adds a tax, showing result as dollar/cent
******************************************************/

//Be sure to include math.h for rounding functions
#include <stdio.h>
#include <math.h>
#define TAX .056
int main(void)
{

//dollar variable needs to be int to truncate it - floor() could also work
    float price;
    int dollar;
    float cent;

    printf("Enter an item price: ");
    scanf("%f", &price);

//cent is originally a decimal, and is multiplied by 100 to convert it out of decimals
//I didn't see a way in the text or online to print only the decimals of a float, so this was my solution to get your suggested output
    dollar = price + price * TAX;
    cent = ((price + price * TAX) - dollar) * 100;

    printf("Item price of $%0.2f with sales tax is %d dollars and %g cents\n", price,dollar, round(cent));

    return 0;
}
