/*-----------------------------------------------------------------------------
-					  		SE 185 Lab 08
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name:		James Mechikoff
- 	Section:	C
-	NetID:		jamesm47	
-	Date:		11/12/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-								Includes
-----------------------------------------------------------------------------*/


#include <stdio.h>
#include <math.h>
#include <ncurses/ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/*-----------------------------------------------------------------------------
-								Defines
-----------------------------------------------------------------------------*/
/* Mathmatical constants */
#define PI 3.14159
// Screen geometry
// Use ROWS and COLS for the screen height and width (set by system)
// MAXIMUMS
#define NUMCOLS 100
#define NUMROWS 80

// Character definitions taken from the ASCII table
#define AVATAR 'A'
#define WALL '*'
#define EMPTYSPACE ' '

// Number of samples taken to form an average for the gyroscope data
// Feel free to tweak this. you may actually want to use the moving averages
// code you created last week
#define NUM_SAMPLES 10

/*-----------------------------------------------------------------------------
-								Static Data
-----------------------------------------------------------------------------*/
/* 2D character array which the maze is mapped into */
char MAZE[NUMROWS][NUMCOLS];

/*-----------------------------------------------------------------------------
-								Prototypes
-----------------------------------------------------------------------------*/
// POST: Generates a random maze structure into MAZE[][]
//you will want to use the rand() function and maybe use the output %100.
//you will have to use the argument to the command line to determine how
//difficult the maze is (how many maze characters are on the screen).
void generate_maze(int difficulty);

// PRE: MAZE[][] has been initialized by generate_maze()
// POST: Draws the maze to the screen
void draw_maze(void);

// PRE: 0 < x < COLS, 0 < y < ROWS, 0 < use < 255
// POST: Draws character use to the screen and position x,y
void draw_character(int x, int y, char use);

// PRE: -1.0 < x_mag < 1.0
// POST: Returns tilt magnitude scaled to -1.0 -> 1.0
// you may want to reuse the roll function written in previous labs.
float calc_roll(float x_mag);

/*-----------------------------------------------------------------------------
-								Implementation
-----------------------------------------------------------------------------*/
/*	Main - Run with './ds4rd.exe -t -g -b' piped into STDIN */
int main(int argc, char* argv[])
{
	double gx, gy, gz;
	int difficulty = 0;
	int y_location = 0;
	int x = 50;
	int result = 1;
	int time;
	int t2;
	if (argc > 1) {
	sscanf(argv[1], "%d", &difficulty );
	}
	
	// setup screen
	initscr();
	refresh();
		// From 0 to 100
	
	// Generate and draw the maze, with initial avatar
	generate_maze(difficulty);
	draw_maze();
	
	scanf("%d, %lf, %lf, %lf,", &time, &gx, &gy, &gz);
	
	// Read gyroscope data to get ready for using moving averages.
	draw_character(50, 0, AVATAR);
	// Event loop

	do
	{
		// Read data, update average
		
		scanf("%d, %lf, %lf, %lf", &time, &gx, &gy, &gz);
		// Is it time to move? if so, then move avatar
		if(time - t2 > 200){
			t2 = time;
			
			if(calc_roll(gx) < -0.5 && MAZE[y_location][x + 1] != WALL && x < 99){
				if(MAZE[y_location + 1][x + 1] != WALL){
					y_location++;
					draw_character(x + 1, y_location, AVATAR);
					draw_character(x, y_location - 1, EMPTYSPACE);
					x++;
				}
				
				else{
					draw_character(x + 1, y_location, AVATAR);
					draw_character(x, y_location, EMPTYSPACE);
					x++;
				}
			}
			
			else if(calc_roll(gx) > 0.5 && MAZE[y_location][x - 1] != WALL && x > 0){
				
				if(MAZE[y_location + 1][x - 1] != WALL){
					y_location++;
					draw_character(x - 1, y_location, AVATAR);
					draw_character(x, y_location - 1, EMPTYSPACE);
					x--;
				}
				
				else{
					draw_character(x - 1, y_location, AVATAR);
					draw_character(x, y_location, EMPTYSPACE);
					x--;
				}
			}
			
			// 
			else if(MAZE[y_location + 1][x] == WALL && MAZE[y_location][x - 1] == WALL && MAZE[y_location][x + 1] == WALL){
				result = 0;
				break;
			}
			
			else if(MAZE[x][y_location + 1] != WALL){
				y_location++;
				draw_character(x, y_location, AVATAR);
				draw_character(x, y_location - 1, EMPTYSPACE);
			}
			
		}
	}
	
	while(y_location <= 80); // Change this to end game at right time
		// Print the win message
		endwin();
		
		if(result == 1){
			printf("YOU WIN!\n");
		}
		else{
			printf("YOU LOSE!\n");
		}
}	

// PRE: 0 < x < COLS, 0 < y < ROWS, 0 < use < 255
// POST: Draws character use to the screen and position x,y
//THIS CODE FUNCTIONS FOR PLACING THE AVATAR AS PROVIDED.
//
// 		>>>>DO NOT CHANGE THIS FUNCTION.<<<<

void draw_character(int x, int y, char use)
{
	mvaddch(y,x,use);
	refresh();
}

// POST: Generates a random maze structure into MAZE[][]
//you will want to use the rand() function and maybe use the output %100.
//you will have to use the argument to the command line to determine how
//difficult the maze is (how many maze characters are on the screen).
void generate_maze(int difficulty){
	int i = 0;
	int j = 0;
	
	for(i = 0; i < NUMCOLS; i++){
		for(j = 0; j < NUMROWS; j++){
			if(rand() % 100 >= difficulty){
				MAZE[i][j] = ' ';
			}
			
			else{
				MAZE[i][j] = '*';
			}
		}
	}
}

// PRE: MAZE[][] has been initialized by generate_maze()
// POST: Draws the maze to the screen
void draw_maze(){
	int i = 0;
	int j = 0;
	
	for(i = 0; i < NUMCOLS; i++){
		for(j = 0; j < NUMROWS; j++){
			draw_character(i, j, MAZE[i][j]);
		}
	}
}

// PRE: -1.0 < x_mag < 1.0
// POST: Returns tilt magnitude scaled to -1.0 -> 1.0
// you may want to reuse the roll function written in previous labs.
float calc_roll(float x_mag){
	if(x_mag <= 1.0 && x_mag >= -1.0){
		x_mag = (asin(x_mag) * (PI/2));
	}
	return x_mag;
}
