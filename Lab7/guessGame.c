/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:guessGame.c	  **
** 	Version			:1				  **
** 	Date			:November 13, 2020**
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/***************************************
**	Function Name :checkNum 		  **
** 	Purpose 	  :The purpose of this**
**  function is to check to see if the**
** 	user guessed the right number, or **
**  if it was too high or low. 		  **
****************************************/
int checkNum(int guess, int correct){
	if(guess < correct){								//Checks to see if the guess is too low
		puts("Too low...");
		return 0;
	}else if(guess > correct){							//Checks to see if the guess is too high
		puts("Too high...");
		return 0;
	}else{												//Otherwise the guess is correct
		printf("Correct, the number was %d", correct);
		return 1;
	}
}//Ends checkNum function

int main(void){
	time_t t;											//Time to be used for srand
	srand((unsigned) time(&t));							//Allows the number for srand to be random based off the time

	int goal 		= rand() % 50 +1;					//Integer goal to keep track of the random number produced by the code
	int counter 	= 0;
	int guess 		= 0;
	int isFinished	= 0;

	while(counter != 10){								//While to keep track of the users guesses, if it passes 10, they loose and the game 'quits'
		puts("Enter your guess (between 1 and 50): ");	//Asks user for their guess
		scanf("%d", &guess);

		counter += 1;									//Counter to keep track of how many guesses have been made
		isFinished = checkNum(guess, goal);				//Calls the function to see if they got it right, returns a 1 or 0
		if(isFinished == 1){							//If loop to check if the user has gotten it right from info the function returns
			break;
		}else if(isFinished == 0 && counter == 10){		//Else if to see if the user is out of guesses
			printf("Sorry, the number was %d.", goal);
		}
	}
}//Ends main
