/*-----------------------------------------------------------------------------
-					          SE 185 Lab 04
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:		James Mechikoff
- 	Section:	C
-	NetID:		726219551
-	Date:		9/18/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0

/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/
double mag(double x, double y, double z);
int close_to(double tolerance, double point, double value);
int endProgram(int b);
int funBut(int fB);

/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int main(void) {
    int t, b1, b2, b3, b4, fB;
    double ax, ay, az, gx, gy, gz;
	int orientation = -1;
	

    while (TRUE) {
        scanf("%d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d", &t, &ax, &ay, &az, &gx, &gy, &gz, &b1, &b2, &b3, &b4 );

        /* printf for observing values scanned in from ds4rd.exe, be sure to comment or remove in final program */
        //printf("Echoing output: %d, %lf, %lf, %lf, %lf, %lf, %lf, %d, %d, %d, %d \n", t, ax, ay, az, gx, gy, gz, b1, b2, b3, b4);

        /* It would be wise (mainly save time) if you copy your code to calculate the magnitude from last week
         (lab 3).  You will also need to copy your prototypes and functions to the appropriate sections
         in this program. */
			
		//printf("At %d ms, the acceleration's magnitude was: %f\n", t, mag(ax, ay, az));
		
		//printf("gx = %lf\n", gx);
		
		if(close_to(.05, 0.0, mag(ax, ay, az))){
			
			if(close_to(0.15,-1.0, gx) && orientation !=0){
				
				printf("RIGHT\n");
				
				orientation = 0;
				
			}
			else if(close_to(0.15,1.0,gx) && orientation != 1){
				
				printf("LEFT\n");
				
				orientation = 1;
				
			}
			else if(close_to(0.15,1.0, gy) && orientation !=2){
				
				printf("TOP\n");
				
				orientation = 2;
				
			}
			else if(close_to(0.15,-1.0,gy) && orientation !=3){
				
				printf("BOTTOM\n");
				
				orientation = 3;
				
			}
			else if(close_to(0.15,1.0, gz) && orientation !=4){
				
				printf("BACK\n");
				
				orientation = 4;
				
			}
			else if(close_to(0.15,-1.0,gz) && orientation !=5){
				
				printf("FRONT\n");
				
				orientation = 5;
				
			}
		}
		
		if(endProgram(b1)==TRUE){
			break;
		}
		
		if(funBut(b3) == 1){
			
			printf("Stop pressing X...\n");
			
		}
}
return 0;
}


/* Put your functions here */

int endProgram(int b){
	if (b == 1){
		return TRUE;
	} else {
		return FALSE;
	}
}
double mag(double x, double y, double z) {
    return sqrt(pow(x,2 ) + pow(y, 2) + pow(z, 2));
}

int close_to(double tolerance, double point, double value) {
	if(value <= point + tolerance && value >= point - tolerance){
		return 1;
	} 
	else {
		return 0;
	}
}

int funBut(int fB){
	if (fB == 1){
		
		return 1;
		
	}
}
	