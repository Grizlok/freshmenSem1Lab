/*-----------------------------------------------------------------------------
-                             SE 185 Lab 05
-             Developed for 185-Rursch by T.Tran and K.Wang
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> //Added for the random function
#include <time.h>

// / Prototypes */ Needs one more * in there
/* Prototypes */

//char AskToPlay(int timesPlayed);
char AskToPlay(int playedBefore);

void RunGame (int computerNum);

int SelectRandNum(); //Added for the prototype of the function

//int main() Needs to have a return in the main function
int main(void)
{
    char prompt = '-';
    int played = 0, computerGuess = 0;

    prompt = AskToPlay(played);
    played = 1;

    while(prompt == 'y')     /* This line does not contain an error */
    {
		//computerGuess == SelectRandNum();
        computerGuess = SelectRandNum();
        RunGame(computerGuess);
        prompt = AskToPlay(played);
    }
	
	//printf("\n\nThank you for playing.\n") Needs a Semicolin
    printf("\n\nThank you for playing.\n");
    return 0;
}


char AskToPlay(int playedBefore)
{
    char yesNo;
	
    if (playedBefore == 0)
    {
        printf("Do you want to play a game? (Enter y for yes and n for no) \n  ->");
		
		//scanf(" %c", yesNo); Did not have a & before which caused a segmentation fault.
        scanf(" %c", &yesNo);
		return yesNo;
		
    }
    else
    {
        printf("Do you want to play again?\n  ->");
        scanf(" %c", &yesNo);
		return yesNo;
    }
    
}

int SelectRandNum()
{
	
	//int c*mpGuess = 0; The variable is compGuess.
    int compGuess = 0;
    srand((int)time(0));
    compGuess = ((rand() % 100) + 1);
    return compGuess;
}


void RunGame (int computerNum)
{
    int number = 0, correct = 0;


    printf("\nYou are guessing a number.  The options are 1 through 100.\n\n");
    printf("What is your guess on what number I will select?\n  ->");
    scanf("%d", &number);

    while ((number < 1) || (number >100))    /* This line does not contain an error */
    {
        printf("\nYour number is not within the correct range of numbers.  Guess again\n  ->");
        scanf("%d", &number);
    }


    while (correct == 0)    /* This line does not contain an error */
    {

		//if (number == computerNum)
        if (number == computerNum)
        {
            printf("\nYou guessed the number correctly!\n");
			
			//printf("The number was %c\n\n", computerNum); It is displaying a number, not a character. Use %d instead of %c
            printf("The number was %d\n\n", computerNum);
            correct = 1;
        }
        //else if (number < computerNum); Remove the semicolin here for the conditional.
		else if (number < computerNum)
        {
            printf("\nYou guessed too low.  Enter another guess.\n  ->");
            scanf("%d", &number);
        }
        else
        {
            printf("\nYou guessed too high.  Enter another guess.\n  ->");
            scanf("%d", &number);
        }
    }
}



