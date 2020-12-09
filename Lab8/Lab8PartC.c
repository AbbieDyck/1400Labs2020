/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab8PartC.c	  **
** 	Version			:1				  **
** 	Date			:November 18, 2020**
****************************************/
#include <stdio.h>
void decimalToBinary(int num){
	int binaryNum[32];
	int counter = 0;
	printf("The decimal number %d in binary is ", num);


	while(num > 0){							//Code below calcs the decimal num to binary
		binaryNum[counter] = num % 2;
		num = num / 2;
		counter++;
	}
	for(int x = counter - 1; x >= 0; x--){	//For loop to save the number into the array
		printf("%d", binaryNum[x]);
	}
	puts("");								//Prints a blank line

}

int main(void){

	decimalToBinary(1);//Runs the function for 1
	decimalToBinary(2);//Runs the function for 2
	decimalToBinary(10);//Runs the function for 10
	decimalToBinary(1001);//Runs the function for 1001
	decimalToBinary(90250);//Runs the function for 90250

}
