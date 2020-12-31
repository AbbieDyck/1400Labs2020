/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:q1.c	 		  **
** 	Version			:1				  **
** 	Date			:December 12, 2020**
****************************************/
#include <stdio.h>

int main(void){
	int numArr[30];
	int num, correct = 0, counter = 0, output = 1;
	char comma;

	puts("My Name is: Abbie Dyck\n"
		 "***********\n"
		 "Please enter 10 integer numbers separated by comma, press ""Enter"" after that: ");



	   while (counter < 10) {
		   correct = scanf("%d", &num);
	      if (correct == 0) {
	         scanf("%c", &comma);
	         continue;
	      }
	      numArr[counter] = num;
	      counter++;
	   }

	   for (int x = 1; x < 10; x+= 2){
		   if (numArr[x] % 2 == 0 && numArr[x] != 0){
			   output *= numArr[x];
		   }
	   }

	   printf("********"
	          "\nThe output is: %d"
	          "\n********", output);
}
