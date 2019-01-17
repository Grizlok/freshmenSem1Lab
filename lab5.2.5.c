/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* This program takes in a number from the user and checks if it is
 * a whole number. It also should print if the number is a
 * postive, negative, or zero number.
 * Ex.
 *      input:  num = 5
 *      output: 5 is a postive and 5 is non-negative and 5 is non-zero and 5 is a whole number.*/

int isPositive(int n);

int isNegative(int n);

int isZero(int n);

int main()
{
    int num;

    printf("Please type a number between -1000 and 1000: ");
    scanf("%d", &num);

	//if(num > 1000 | num < -1000) Or is || not |
    if(num > 1000 || num < -1000)
    {
        printf("Number is out of range!\n");
        return -1;
    }

    //if( ( isPositive(num) & !isNegative(num) ) | isZero(num) ) And is && not & and or is ||
	if( ( isPositive(num) && !isNegative(num) ) || isZero(num) )
    {
        printf("%d is a whole number.\n", num);
    }
    else
    {
        printf("%d is non-whole number.\n", num);
    }

    return 0;
}

int isPositive(int n)
{
    if(n>0)
    {
        printf("%d is postive and ", n);
        return 1;
    }
    else
    {
        printf("%d is non-postive and ", n);
        return 0;
    }
}

int isNegative(int n)
{
    if(n<0)
    {
        printf("%d is negative and ", n);
        return 1;
    }
    else
    {
        printf("%d is non-negative and ", n);
        return 0;
    }
}

int isZero(int n)
{
    if(n==0)
    {
        printf("%d is zero and ", n);
        return 1;
    }
    else
    {
        printf("%d is non-zero and ", n);
        return 0;
    }
}
