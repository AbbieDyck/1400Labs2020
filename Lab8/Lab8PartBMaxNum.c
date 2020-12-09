/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab8PartBMaxNum.c**
** 	Version			:1				  **
** 	Date			:November 18, 2020**
****************************************/
#include <stdio.h>

int findMax(){
	int res = 2;
	long long int factorial = 2; //64 bit

	while(1){
		if(factorial < 0){		//If the factorial is 0 break because numbers 0 or less dont have factorials
			break;				//Breaks
		}
	res++; 	//Calculates the max number
	factorial = factorial * res;
	}
	return res - 1; //Returns the max num
}

int main(void){
	printf("Maximum value of a integer: %d\n", findMax()); //Runs the function and prints the output
}
