/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:	James Mechikoff
- 	Section:C
-	NetID:	726219551
-	Date:	9/8/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-							 Implementation
-----------------------------------------------------------------------------*/
int main()
{
    double a, b, c;
    double filler;
    /* Put your code after this line */
	
	printf("Please input A: ");
	scanf("%lf", &a);
	
	printf("Please input B: ");
	scanf("%lf", &b);
	
	
	c = pow(a,2.0) + pow(b,2.0);
	
	printf("%lf Squared + %lf Squared = %lf Squared \n", a,b,c);

    /*  This next line will calculate the square root of whatever value is
        inside the parenthesis and assigns it to the variable filler. */
    filler = sqrt(c);
	
	printf("Square root of c is %lf", filler);


    return 0;


}

