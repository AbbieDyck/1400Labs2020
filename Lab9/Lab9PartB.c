/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab9PartB.c	  **
** 	Version			:1				  **
** 	Date			:November 27, 2020**
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	int num[30], guess;										//Generates a array with a size of 30

	for(int i = 0; i < 30; i++){							//Populates the array with random numbers from 0 - 20
		num[i] = rand() % 21;
	}
	puts("Enter a number: ");								//Asks the user to enter a number
	scanf("%d", &guess);									//This number will be used to see how many times its in the array
	int freq = 0;

	printf("Array:");
	for(int i = 0; i < 30; i++){							//Prints the array
		printf("[%d] ", num[i]);
	}

	for(int i = 0; i < 30; i++){							//Calculates how many times the number the user entered is in the array
		if(num[i] == guess){								//If the number is equal to the guess
			freq++;											//Add one
		}
	}
	printf("\nThe frequency of %d is %d", guess, freq);	//Print the final frequency
}
