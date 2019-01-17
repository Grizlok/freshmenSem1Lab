/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* This progam calculates the sum of 1 to x, where x is a user input */

int sum_funct(int n);

//int main();
//The above statement is unneeded.

int main()
{
    int input;

    printf("Please input a number from to sum up to: ");

    scanf("%d", &input);

    printf("The sum of 1 to %d is %d\n", input, sum_funct(input));

}

//int main(){printf("Sum is 32!\n");}
//The above statement is unneeded.

int sum_funct(int n)
{
    return (n*(n+1))/2;
}
