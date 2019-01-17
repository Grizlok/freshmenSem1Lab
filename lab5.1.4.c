/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/* This program calculates the energy of one photon of uder inputed wavelength
 * of light */

int main()
{
    //double speed_light!;
	double speed_light;
    //double wave-length;
	double wave_length;
    //double ~length_in_meters;
	double length_in_meters;
    //double planck const;
	double planck;
    //double 0energy;
	double energy;

    //planck const = (6.62606957)*(pow(10,-34)); //Planck's constant
	planck  = (6.62606957)*(pow(10,-34)); //Planck's constant
    //speed_light! = (2.99792458)*(pow(10,8)); //Constant for the speed of light
	speed_light	= (2.99792458)*(pow(10,8)); //Constant for the speed of light
    //wave-length = 0;
	wave_length = 0;
    //~length_in_meters = 0;
	length_in_meters = 0;
    //0energy = 0;
	energy = 0;

    printf("Welcome! This program will give the energy, in Joules,\n");
    printf("of 1 photon with a certain wavelength.\n");
    printf("Please input a wavelength of light in nano-meters.\n");
    printf("Please do not enter a negative, or zero, wavelength.\n");

    //scanf("%lf", &wave_length);
	scanf("%lf", &wave_length);

    //if (wave-length > 0.0)
	if (wave_length > 0.0)
    {
        //~length_in_meters = wave-length / pow(10,9); //Converting nano-meters to meters
		length_in_meters = wave_length / pow(10,9); //Converting nano-meters to meters
        //0energy = (planck const*speed_light!) / (~length_in_meters); //Calculating the energy of 1 photon
		energy = (planck *speed_light) / (length_in_meters); //Calculating the energy of 1 photon
        printf("A photon with a wavelength of %08.3lf nano-meters, carries\n%030.25lf joules of energy.", wave_length, energy);
    }
    else
    {
        printf("Sorry, you put in an invalid number.");
        printf("Please rerun the program and try again.");
    }

    return 0;

}
