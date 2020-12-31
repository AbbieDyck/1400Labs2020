/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:q2.c	 		  **
** 	Version			:1				  **
** 	Date			:December 12, 2020**
****************************************/
#include <stdio.h>

int diff(int number);

int main(void){
	int num;
	float answer;

	puts("Please enter an integer number:");
	scanf("%d", &num);
	if(num > 10){
		answer = diff(num);
		printf("The output is: %.2f", answer);
	}else{
		puts("The output is: The number is too small.");
	}

}

int diff(int num){
	int hold, count = 0, p = 1, sum = 0;
	float answer = 0;

	while(num > 0){
		hold = num % 10;
		sum += hold;
		p *= hold;
		num /= 10;
		count++;
	 }

	answer /= count;
	answer = ((float) sum / count);
	return(p-answer);
}

