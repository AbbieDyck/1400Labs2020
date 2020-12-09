/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:clc.c			  **
** 	Version			:1				  **
** 	Date			:October 20, 2020 **
****************************************/


#include <stdio.h>

int main(void){

	char option;
	int firstNum = 0;
	int secondNum = 0;
	char operation;
	int answer = 0;

	//The following is the welcome message to the user
	puts("Welcome to my Command-Line Calculator (CLC)\n"
	"Developer: Abbie Dyck \n"
	"Version: 1 \n"
	"Date: October 20, 2020 \n"
	"----------------------------------------------------------\n");
	//Ends the welcome message to the user

	//The following shows the options for the user
	puts("Select one of the following items:");
	puts("B) - Binary Mathematical Operations, such as addition and subtraction.\n"
		 "U) - Unary Mathematical Operations, such as square root, and log.\n"
		 "A) - Advances Mathematical Operations, using variables, arrays.\n"
		 "V) – Define variables and assign them values.\n"
		 "E) - Exit");
	//Ends the options for the user

	scanf("%c", &option);																//Scans for the users first option

	do{																					//Do while loop to check if the users input is E
		if(option == 'B'){																//If the user inputs B
			puts("Please enter the first number: ");
			scanf("%d", &firstNum);														//Scan for the first number

			puts("Please enter the operation ( + , - , * , / )");
			scanf(" %c", &operation);													//Scan for the operation

			puts("Please enter the second number: ");
			scanf(" %d", &secondNum);													//Scan for the second number

			if(operation == '+'){														//If the operation is +
				answer = firstNum + secondNum;											//Add the two numbers
			}else if(operation == '-'){													//If the operation is -
				answer = firstNum - secondNum;											//Subtract the two numbers
			}else if(operation == '*'){													//If the operation is *
				answer = firstNum * secondNum;											//Multiply the two numbers
			}else if(operation == '/'){													//If the operation is /
				answer = firstNum / secondNum;											//Divide the two numbers
			}//End if else

			printf("The result is %d\n", answer);

		}else if(option == 'U'){														//If the user inputs U
			puts("Sorry, at this time I don't have enough knowledge to serve you in this category.");
		}else if(option == 'A'){														//If the user inputs A
			puts("Sorry, at this time I don't have enough knowledge to serve you in this category.");
		}else if(option == 'V'){														//If the user inputs V
			puts("Sorry, at this time I don't have enough knowledge to serve you in this category.");
		}
		puts("Please select your option ( B , U , A , E , V )");
		scanf(" %c", &option);															//Scan for the users subsequent option

	}while(option != 'E');																//Continue the do while loop until the user enters E
	puts("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");
}//End main
