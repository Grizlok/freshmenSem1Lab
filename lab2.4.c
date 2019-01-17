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

    /* Put your code after this line */
	
	double tempF = 72;
	double circ = 23.567;
	
	const double feetToMeters = .3048;
	
	int a = (6427 + 1725);
	int b = ((6971 * 3925)-95);
	double c = (79 + 12 / 5);
	double d = (3640.0 / 107.9);
	int e = ((22 / 3) * 3);
	int f = (22 / (3 * 3));
	double g = (22 / (3 * 3));
	double h = (22 /  3* 3);
	double i = ((22.0 / 3) * 3.0);
	int j = (22.0 / (3 * 3.0));
	double k = (22.0 / 3.0 * 3.0);
	double l = (pow((circ), 2) / (4*M_PI)); 
	
	/*I know that the formula for Area normally is A = pi 8 r^2,
	therefore I broke it back down with C = 2 pi r to what it was.
	For the actual coding formula, I was trying to recall what the 
	power and pi functions were. Thankfully c is pretty well documented
	and a simple search using resources online gave me how both functions work
	and helped show me a little bit more just what is included in the import statement
	#include <math.h>*/ 
	
	double m = (14 * feetToMeters);
	
	/* I had to learn this conversion ratio for my high school physics course.
	Using what I know about the conversion, I just wrote a constant and plugged in 14 times that constant.
	*/
	
	double n = ((tempF - 32) / 1.8);
	
	int answer = 1 + 2;
	

	printf("The output for these problems is: \n");
	printf("a = 6427 + 1725 = %d\n", a); // This line is okay.
	printf("b = (6971 * 3925)-95 = %d\n", b); // This line is okay.
	printf("c = 79 + 12 / 5 = %.2lf\n", c); //This one is wrong because I made it display only 2 digits. It should display 3.
	printf("d = 3640.0 / 107.9 = %.2lf\n", d); //Just like the last one, this ones issue is that ir rounds up to two digits because the question requested it.
	printf("e = (22 / 3) * 3 = %d \n", e); //This one is correct
	printf("f = 22 / (3 * 3) = %d \n", f); //This one should be outputted as a float.
	printf("g = 22 / (3 * 3) = %.2lf\n", g); //This one should have been displayed out past 2 decimals.
	printf("h = 22 /  3 * 3 = %.2lf\n", h);// This one is a ( ) problem, it is doing order of operations wrong.
	printf("i = (22.0 / 3) * 3.0 = %.2lf\n", i); //This one is correct, but does not need a float output.
	printf("j = 22.0 / (3 * 3.0) = %d\n", j); //This one should have been a float.
	printf("k = 22.0 / 3.0 * 3.0 = %.2lf\n", k); //Again this one is right, but does not need a float.
	printf("The area of circle l is %lf. \n", l); 
	printf("There are %lf meters in 14 feet.\n" ,m);
	printf("72 degrees Fahrenheit is %.2lf degrees centigrade.\n", n);
	
	printf("Answer Output: %d", answer);
	

    return 0;

}

