/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:quadraic.c		  **
** 	Version			:1				  **
** 	Date			:November 14, 2020**
****************************************/
//
//#include <stdio.h>
//#include <math.h>
//
//int main(void){
//
//	int a, b, c, x = 0;
//	int answer = 0;
//
//	puts("Please enter four integer number for a, b, c, and x: ");
//	scanf("%d%d%d%d", &a, &b, &c, &x);
//
//	if(a >= 40000 || b >= 40000 || c>= 40000 || x>= 40000){
//		puts("Possible overflow.");
//	}else{
//		answer = a * pow(x, 2) + b * x + c;
//		printf("Q(%d) = %d * %d^2 + %d * %d + %d = %d", x, a, x, b, x, c, answer);
//	}
//}//End main()


/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:clc.c			  **
** 	Version			:3				  **
** 	Date			:December 4, 2020 **
****************************************/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

//Global variables to be used throughout the whole code
float a, b, c, d, e = 0.0;
int counter = 0;
float memory[500];


double getNum() {																			//Function to check if the user enters a valid number
	double num;
	int success;
	do {
		success = scanf("%lf", &num);														//Scan to see if its a number
		while (getchar() != '\n');															//While getchar is not a newline
		if (success == 0) {																	//If success is 0
			puts("The input entered is not a valid number. Please enter a valid number.");	//Print that you have not entered a number (otherwise its a number)
		}
	} while (success == 0);																	//Do this while success is 0
	return num;																				//Return num (which will now be a number)
}

void saveMemory(float answer){
	memory[counter] = answer;																//Takes in answer and saves it in a array called memory
	counter++;																				//Counter variable so the next answer can be saved in a different element
}

float partB(float firstNum, float secondNum, char operation){
	float answer = 0;

	if (operation == '+') {																	//If the operation is +
		answer = firstNum + secondNum;														//Add the two numbers
	} else if (operation == '-') {															//If the operation is -
		answer = firstNum - secondNum;														//Subtract the two numbers
	} else if (operation == '*') {															//If the operation is *
		answer = firstNum * secondNum;														//Multiply the two numbers
	} else if (operation == '/') {															//If the operation is /
		while (secondNum == 0) {
			puts("Please enter the second number (non-zero): ");
			secondNum = getNum();
		}
		answer = firstNum / secondNum;														//Divide the two numbers
	} else if (operation == '%') {															//If the operation is %
		while (secondNum == 0) {
			puts("Please enter the second number (non-zero): ");
			secondNum = getNum();
		}
		int fNum = firstNum;																//Parse to int
		int sNum = secondNum;																//Parse to int
		answer = fNum % sNum;																//Mod the two numbers
	} else if (operation == 'P') {															//If the operation is P (power)
		answer = pow(firstNum, secondNum);													//Pow the two numbers
	} else if (operation == 'X') {															//If the operation is x (maximum)
		if (firstNum >= secondNum) {														//If the first num is bigger than the second
			answer = firstNum;																//First num is max
		} else {
			answer = secondNum;																//Second num is max
		}
	} else if (operation == 'I') {															//If the operation is I (minimum)
		if (firstNum <= secondNum) {														//If the first num is smaller than the second
			answer = secondNum;																//First num is minimum
		} else {
			answer = firstNum;																//Second num is minimum
		}
	}
	saveMemory(answer);																		//Calls function to save the answer to memory
	return answer;
}

float partU(float uNum, char unaryOperator) {
	float answer = 0;

	if (unaryOperator == 's') {																//If operation is s (square root)
		while (uNum <= 0) {
			printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
			uNum = getNum();
		}
		answer = sqrt(uNum);																//Print the answer

	} else if (unaryOperator == 'l') {														//If operation is l (log)
		while (uNum <= 0) {
			printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
			uNum = getNum();
		}
		answer = log10(uNum);																//Print the answer

	} else if (unaryOperator == 'e') {														//If the operation is e (exponent)
		answer = exp(uNum);																	//Calculate and print answer
	} else if (unaryOperator == 'c') {														//If operation is c (ceiling)
		answer = ceil(uNum);																//Calculate and print answer
	} else if (unaryOperator == 'f') {														//If the operation is f (floor)
		answer = floor(uNum);																//Calculate and print answer
	}
	saveMemory(answer);																		//Calls function to save the answer to memory
	return answer;
}

void partA(char secondOption){
	float firstNum, uNum, answer = 0.0;
	float secondNum = 0.0;
	char operation, unaryOperator, variableOption;

	if (secondOption == 'b') {																//If the user inputs B
		puts("Please enter the first number or a variable name ('a' to 'e'):");
		if (scanf("%f", &firstNum)) {														//Scan to see if they enter a number
		} else if (scanf(" %c", &variableOption)) {											//or a variable
			if (variableOption == 'a') {													//If user enters a
				firstNum = a;
			} else if (variableOption == 'b') {												//If user enters b
				firstNum = b;
			} else if (variableOption == 'c') {												//If user enters c
				firstNum = c;
			} else if (variableOption == 'd') {												//If user enters d
				firstNum = d;
			} else if (variableOption == 'e') {												//If user enters e
				firstNum = e;
			}
		}
		puts("Please enter the operation ( + , - , * , / , %, P (for power), X (for maximum), I (for minimum) )");
		scanf(" %c", &operation);															//Scan for the operation


		puts("Please enter the second number or a variable name ('a' to 'e'):");
		if (scanf("%f", &firstNum)) {														//Scan to see if they enter a number
		} else if (scanf(" %c", &variableOption)) {											//or a variable
			if (variableOption == 'a') {													//If the user enters a
				secondNum = a;
			} else if (variableOption == 'b') {												//If the user enters b
				secondNum = b;
			} else if (variableOption == 'c') {												//If the user enters c
				secondNum = c;
			} else if (variableOption == 'd') {												//If the user enters d
				secondNum = d;
			} else if (variableOption == 'e') {												//If the user enters e
				secondNum = e;
			}
		}
		answer = partB(firstNum, secondNum, operation);										//Calls function b to do math
		saveMemory(answer);																	//Calls function to save the answer to memory

		printf("The result is:\t%.2f\n", answer);											//Prints answer
		firstNum = 0;
		secondNum = 0;
		answer = 0;

	} else if (secondOption == 'u') {														//If the user inputs U
		puts("Please enter the first number or a variable name ('a' to 'e'):");
		if (scanf("%f", &uNum)) {															//Scan to see if they enter a number
		} else if (scanf(" %c", &variableOption)) {											//or a variable
			if (variableOption == 'a') {													//If the user enters a
				uNum = a;
			} else if (variableOption == 'b') {												//If the user enters b
				uNum = b;
			} else if (variableOption == 'c') {		  										//If the user enters c
				uNum = c;
			} else if (variableOption == 'd') {												//If the user enters d
				uNum = d;
			} else if (variableOption == 'e') {												//If the user enters e
				uNum = e;
			}
		}
		puts("Please enter a unary operator\n"
		 	 "S) - Square Root.\n"
			 "L) - Logarithm.\n"
			 "E) - Exponent.\n"
			 "C) - Smallest integer value greater than or equal to x.\n"
			 "F) - Largest integer value smaller than or equal to x.");
		scanf(" %c", &unaryOperator);														//Scans for the users option
		unaryOperator = tolower(unaryOperator);												//tolower so user can enter upper or lower case letters

		answer = partU(uNum, unaryOperator);												//Calls function u to do math
		saveMemory(answer);																	//Calls function to save the answer to memory

		printf("The result is:\t%.2f\n", answer);											//Prints answer

	} else if (secondOption == 'e') {														//If the user enters e, it exits

	} else {																				//Otherwise they have not entered a valid option
		puts("Invalid input. Please try again.");
	}
}

int partV(char variableOption, float variableValue){

	if (variableOption == 'a') {															//If the user enters a

		a = variableValue;																	//Assign to a
	} else if (variableOption == 'b') {														//If the user enters b
		b = variableValue;																	//Assign to b
	} else if (variableOption == 'c') {														//If the user enters c
		c = variableValue;																	//Assign to c
	} else if (variableOption == 'd') {														//If the user enters d
		d = variableValue;																	//Assign to d
	} else if (variableOption == 'e') {														//If the user enters e
		e = variableValue;																	//Assign to e
	} else {																				//Else its not a valid variable
		puts("The variable you have entered is invalid. Please enter a different variable.");
		return 0;																			//Returns 0 if the input is invalid so it can loop again
	}
	printf("Variable %c is set to:\t%.2f\n", variableOption, variableValue);				//Lets the user know what the variable has been saved to
	return 1;																				//Returns 1 so the loop can exit
}

void printMemory(){
	int num = 0;
	char exit = 'Y';
	if(counter == 0) puts("There is no memory saved.");										//If the counter is 0 print out that there is no memory saved
	else{
		do{																					//While the is memory, keep looping until the user wants to exit
			printf("There are %d items available. Please enter which item you'd like to see, or 0 for all.\n", counter);
			scanf("%d", &num);																//Scans for the element the user would like to see
			if(num == 0){																	//If the number is 0, then print out all saved memory
				puts("Saved memory: ");
				for(int i = 0; i < counter; i++){
					printf("[%.2f]", memory[i]);
				}
				puts(" ");
			}else{																			//Otherwise, print out the specific element they'd like to see
				printf("Item %d is [%.2f]\n", num, memory[num -1]);
			}
			puts("Would you like to see another item? (Y/Yes, E /Exit)");					//Ask if they'd like to see another element
			scanf(" %c", &exit);
			exit = tolower(exit);															//tolower so it'll exit if they enter 'E' or 'e'

		}while(exit != 'e');																//Exit if the user enters 'e'
	}
}

void zeroMemory(){
	for(int i = 0; i <= counter - 1; i++){													//For loop to go through and zero all the memory in the array
			memory[i] = 0;
	}
	puts("The memory has been erased.");													//Print that the memory has been erased
	counter = 0;																			//Sets counter to zero so new memory will start at 0

}

char menuSelect(){
	char option;
	//The following shows the options for the user
	puts("Select one of the following items:");
	puts("B) - Binary Mathematical Operations, such as addition and subtraction.\n"
		 "U) - Unary Mathematical Operations, such as square root, and log.\n"
		 "A) - Advances Mathematical Operations, using variables, arrays.\n"
		 "V) – Define variables and assign them values.\n"
		 "M) - Memory.\n"
		 "R) - Erase memory.\n"
		 "E) - Exit");
	//Ends the options for the user

	scanf("%c", &option);																	//Scans for the users first option
	return (tolower(option));																//Changes option to lowercase

}

int main(void) {

	//Variables
	char option;
	char secondOption;
	float firstNum = 0.0;
	float secondNum = 0.0;
	char operation;
	float answer = 0.0;
	float uNum = 0.0;
	char unaryOperator;
	char variableOption;
	float variableValue = 0.0;
	int done;

	//The following is the welcome message to the user
	puts("Welcome to my Command-Line Calculator (CLC)\n"
		 "Developer: Abbie Dyck \n"
		 "Version: 3 \n"
		 "Date: December 2, 2020 \n"
		 "----------------------------------------------------------\n");
	//Ends the welcome message to the user

	option = menuSelect();																	//Runs function to get option from user

	do{																						//Do while loop to check if the users input is E
		if (option == 'b') {																//If the user inputs b

			puts("Please enter the first number: ");
			firstNum = getNum();															//Function getNum to make sure the input is valid

			puts("Please enter the operation ( + , - , * , / , %, P (for power), X (for maximum), I (for minimum) )");
			scanf(" %c", &operation);														//Scan for the operation

			puts("Please enter the second number: ");
			secondNum = getNum();															//Function getNum to make sure the input is valid

			answer = partB(firstNum, secondNum, operation);									//Calls function b to do math
			printf("The result is:\t%.2f\n", answer);										//Prints answer

			firstNum = 0;
			secondNum = 0;
			answer = 0;

		} else if (option == 'u') {															//If the user inputs a
			puts("Please enter a number: ");
			uNum = getNum();																//Function getNum to make sure the input is valid

			puts("Please enter a unary operator\n"
				 "S) - Square Root.\n"
				 "L) - Logarithm.\n"
				 "E) - Exponent.\n"
				 "C) - Smallest integer value greater than or equal to x.\n"
			     "F) - Largest integer value smaller than or equal to x.");
			scanf(" %c", &unaryOperator);
			unaryOperator = tolower(unaryOperator);											//tolower so user can enter upper or lower case

			answer = partU(uNum, unaryOperator);											//Calls function u to do math
			printf("The result is:\t%.2f\n", answer);

			uNum = 0;
			answer = 0;

		} else if (option == 'a') {															//If the user inputs a
			do{
				puts("Select one of the following items:\n"
					 "B) - Binary Mathematical Operations, such as addition and subtraction.\n"
					 "U) - Unary Mathematical Operations, such as square root, and log.\n"
					 "E) - Exit and back to the main menu");
				scanf(" %c", &secondOption);
				secondOption = tolower(secondOption);										//tolower so user can enter upper or lower case

				partA(secondOption);														//Calls function a which either calls function b or u
			}while(secondOption != 'e');													//Loops while the user doesn't want to exit

		} else if (option == 'v') {															//If the user inputs V
			do{
				puts("Please enter the name of the variable ( A single character between 'a' and 'e' ):");
				scanf(" %c", &variableOption);
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();													//Function getNum to make sure the input is valid

				done = partV(variableOption, variableValue);								//Calls function v to save the number to the variable
			}while(done == 0);																//Loops if the user enters a invalid option

		} else if(option == 'm'){															//If the user inputs m
			printMemory();																	//Call function that prints the memory

		} else if(option == 'r'){															//If the user inputs r
			zeroMemory();																	//Calls the function that zeros the memory

		}
		puts("Please select your option ( B , U , A , E , V , M , R )");					//Scans for option
		scanf(" %c", &option);
		option = tolower(option);															//Changes option to lowercase

	} while (option != 'e');																//Continue the do while loop until the user enters E or e

	for(int i = 0; i <= counter - 1; i++){													//For loop to go through and zero all the memory in the array so it'll be empty
		memory[i] = 0;
	}

	puts("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");	//Thank you message
}//End main
