/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab9PartA.c	  **
** 	Version			:1				  **
** 	Date			:November 27, 2020**
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(0));
	unsigned int counter, arrayLength;

	puts("Please enter how long you'd like the array to be: ");
	scanf("%d", &arrayLength);										//Asks for length of the array

	int num[arrayLength];											//Creates a array with the size specified from the user
	int temp;

	printf("Before: ");
	for(int i = 0; i < arrayLength; i++){							//For loop to populate the array
		num[i] = rand() % 100;										//Populates the array with random numbers (I moded by 100 so the numbers aren't ridiculous)
		printf("[%d]", num[i]);										//Prints out the array before sorting
	}
	clock_t t = clock();											//Allows me to use time
	do{
		counter = 0;												//Counter to make sure it sorts all the elements
		for(int i = 0; i < (arrayLength - 1); i++){					//Bubble sorts the array
			if(num[i] > num[(i + 1)]){
				temp = num[i];
				num[i] = num[(i + 1)];
				num[(i + 1)] = temp;
				counter++;
			}
		}
	}while(counter > 0);											//Makes sure every element has been sorted
	t = clock() - t;												//Calculates time

	printf("\nAfter : ");											//Prints the array after sorting
	for(int i = 0; i < arrayLength; i++){
		printf("[%d]", num[i]);
	}
	printf("\nTime Elapsed: %fs", (((double)t) / CLOCKS_PER_SEC));	//Prints the time taken to sort
}
