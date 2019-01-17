/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: James Mechikoff
- 	Section: C
-	NetID: 726219551
-	Date: 9/4/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>


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
    int integerResult;
    double decimalResult;

    integerResult = 77 / 5;
    printf("The value of 77/5 is %d, using integer math\n", integerResult);
	/*This was formerly wrong because it was using a %lf instead of a %d for the second format.
	  The big difference between those two being that %d is a decimal vs &lf being Long Float.
	*/
    integerResult = 2 + 3;
    printf("The value of 2+3 is %d\n", integerResult);
	//This one was pretty simple, they just didn't declare what variable should be printed out for &d.
	
    decimalResult = 1.0 / 22.0;
    printf("The value 1.0/22.0 is %lf\n", decimalResult);
	// The difference in this one was the opposite of the first, where in it had a %d instead of a %lf.
	
    return 0;
}

