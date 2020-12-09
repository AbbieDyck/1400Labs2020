/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab8PartB.c	  **
** 	Version			:1				  **
** 	Date			:November 20, 2020**
****************************************/
#include <stdio.h>
long factorialCalc(int num){
	long factorial = 1;				//Sets factorial to 1
	for(int i  = 1; i <= num; i++){	//for loop to calculate the factorial
		factorial *= i;
	}
	return factorial;				//Returns the factorial

}

int main(void){

	printf("The factorial of 2 = %ld\n", factorialCalc(2));//Calls function for 2
	printf("The factorial of 3 = %ld\n", factorialCalc(3));//Calls function for 3
	printf("The factorial of 4 = %ld\n", factorialCalc(4));//Calls function for 4
	printf("The factorial of 5 = %ld\n", factorialCalc(5));//Calls function for 5
	printf("The factorial of 10 = %ld\n", factorialCalc(10));//Calls function for 10
	printf("The factorial of 15 = %ld\n", factorialCalc(15));//Calls function for 15

}
