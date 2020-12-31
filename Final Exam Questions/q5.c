/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:q5.c	 		  **
** 	Version			:1				  **
** 	Date			:December 12, 2020**
****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int num;
	int placeholder;
	char keepGoing;

	do{
		printf("******\n"
			"Please enter a valid integer number (n): ");
		scanf("%d", &num);
		puts("******");
		if(num <= 0){
			puts("The input value is incorrect, please try again...");
			continue;
		}

		int number[num];


			srand(time(0));

			for(int i = 0; i < num; i++){
				number[i] = rand() % 1000 + 1;
			}
			for (int i = 0; i < num; ++i) {
				for (int j = i + 1; j < num; ++j) {
					if (number[i] < number[j]) {
						placeholder = number[i];
						number[i] = number[j];
						number[j] = placeholder;
					}
				}
			}
			printf("The output is: ");
			for (int i = 0; i < num; ++i) {
				if(i == (num - 1)){
					printf("%d", number[i]);
				}else{
					printf("%d, ", number[i]);
				}
			}
			puts("\n******\n"
				 "Do you want to continue? ");
			scanf("%s", &keepGoing);

	}while(keepGoing == 'Y');
	puts("Thanks!:)");

}
