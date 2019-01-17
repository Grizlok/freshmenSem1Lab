/*-----------------------------------------------------------------------------
-					          SE 185 Lab 06
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:		James Mechikoff
- 	Section:	C
-	NetID:		726219551
-	Date:		10/9/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

/*-----------------------------------------------------------------------------
-	                             Defines
-----------------------------------------------------------------------------*/
#define TRUE 1
#define FALSE 0


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/
int startB(int b);

/*-----------------------------------------------------------------------------
-							  Implementation
-----------------------------------------------------------------------------*/
int main()
{

int t, b1, b2, b3, b4, gNum;
int startPrint, tR,currentTime, sI,  starting, begin, rng, tR2 = 0;
int check1 = 0;
int check2 = 0;
int check3 = 0;
int check4 = 0;
int check5 = 0;
int points = 0;
int tDif1 = 0;
int rt = 4000;

srand(time(NULL));

int win = 1;

	while(win == 1){
		
		scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
			
		if(startPrint == 0){
			
			printf("Please Press Circle - O - to Start! \n");
			startPrint = 1;
			
		}
		
		//printf("%d \n", check1);
		
		if(check1 == 0){
			
			//printf("Hi \n");
			
			if(startB(b2) == 1){
				
				starting = 1;
				check1 = 1;
				
			}
		}
		
		
		if(b1 == 1 && b3 == 1){
			
			if(check5 == 0){
				printf("Cheat mode engaged, adding 30 second!");
				rt = rt + 30000;
				check5 = 1;
			}
			
		}
		
		if(starting == 1){
		
			if(begin ==0){
			
				if (sI == 0){
						
					printf("Starting!\n");
					begin = 1;
					sI = 1;

				}	
				
			} else {
				
				switch(rng){
					case 0:
					
						if(check4 == 0){
							printf("Press...: \n");
							check4 = 1;
						}
						
						check2 = 0;
						tR2 = 0;
						tDif1 = t; 
						
						
						if(check3 == 0){
							
							if(tR == 0){
								tDif1 = t;
								tR = 1;
							}
							
								rng = rand() % 4 + 1;
								check3 == 1;
						}
						
						break;
						
					case 1:

						if(check2 == 0){
							
							printf(" Square! [] \n");
							printf("You have %d milliseconds!\n", rt);
							check4 = 0;
							tR = 0;
							check2 = 1;
						}
						
						if(t - tDif1 < rt){
							
							if(tR2 == 0){
								
								tDif1 = t;
								tR2 = 1;
								
							}
							
							if(t - tDif1 > 250){
								if(b4 == 1){
									
									if(check4 == 0){
										printf("Nice work!\n");
										check4 = 1;
									}
									points++;
									
									rt = rt - 100;
									
									check3 == 0;
									

										rng = 0;

								}else if(b1 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b2 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b3 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}
							}
							
						}else{
							
							printf("Sorry, you took to long. try again! \n");
							
							printf("Your score was: %d", points);
							
							win = 0;
							
						}
						
						
						break;
						
					case 2:
					
						if(check2 == 0){
							
							printf(" X! \n");
							printf("You have %d milliseconds!\n", rt);
							check4 = 0;
							tR = 0;
							check2 = 1;
						}
						
						if(t - tDif1 < rt){
							
							if(tR2 == 0){
								
								tDif1 = t;
								tR2 = 1;
								
							}
							
							if(t - tDif1 > 250){
								if(b3 == 1){
									
									if(check4 == 0){
										printf("Nice work!\n");
										check4 = 1;
									}
									
									points++;
									
									rt = rt - 100;
									
									check3 == 0;
									
									tDif1 = t;
									

										rng = 0;
								}else if(b1 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b2 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b4 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}
							}
						}else{
							
							printf("Sorry, you took to long. try again! \n");
							
							printf("Your score was: %d", points);
							
							win = 0;
							
						}
						
						
						break;
						
					case 3:

						if(check2 == 0){
							
							printf(" Circle! O \n");
							printf("You have %d milliseconds!\n", rt);
							check4 = 0;
							tR = 0;
							check2 = 1;
						}
						
						if(t - tDif1 < rt){
							
							if(tR2 == 0){
								
								tDif1 = t;
								tR2 = 1;
								
							}
							
							if(t - tDif1 > 250){
								if(b2 == 1){
									
									if(check4 == 0){
										printf("Nice work!\n");
										check4 = 1;
									}
									
									points++;
									
									rt = rt - 100;
									
									check3 == 0;
									
									rng = 0;

								}else if(b1 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b3 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b4 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}
							}
							
						}else{
							
							printf("Sorry, you took to long. try again! \n");
							
							printf("Your score was: %d", points);
							
							win = 0;
							
						}
						
						break;
						
					case 4:
					

						if(check2 == 0){
							
							printf(" Triangle! △ \n");
							printf("You have %d milliseconds!\n", rt);
							check4 = 0;
							tR = 0;
							check2 = 1;
						}
						
						
						if(t - tDif1 < rt){
							
							if(tR2 == 0){
								
								tDif1 = t;
								tR2 = 1;
								
							}
							
							if(t - tDif1 > 250){
							
								if(b1 == 1){
									
									if(check4 == 0){
										printf("Nice work!\n");
										check4 = 1;
									}
									points++;
									
									rt = rt - 100;
									
									check3 == 0;
									
										rng = 0;

								}else if(b2 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b3 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}else if(b4 == 1){
									
									printf("Wrong button! \n");
									printf("Your score was: %d", points);
									win = 0;
									
								}
							}
							
						}else{
							
							printf("Sorry, you took to long. try again! \n");
							
							printf("Your score was: %d", points);
							
							win = 0;
							
						}
						
						break;
				
				}
				
				
			
			}	
		}
	}

	return 0;
}

int startB(int b){
	
	if(b == 1){
		
		return 1;
		
	}else {
		
		return 0;
		
	}
	
}
