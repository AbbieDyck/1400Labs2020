/***************************************
 **	Developer		:Abbie Dyck		  **
 ** 	Student ID		:110046150		  **
 ** 	Program Name	:clc.c			  **
 ** 	Version			:2				  **
 ** 	Date			:November 20, 2020**
 ****************************************/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

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
	float a, b, c, d, e = 0.0;
	char variableOption;
	float variableValue = 0.0;

	//The following is the welcome message to the user
	puts("Welcome to my Command-Line Calculator (CLC)\n"
		 "Developer: Abbie Dyck \n"
		 "Version: 2 \n"
		 "Date: November 15, 2020 \n"
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

	scanf("%c", &option);																	//Scans for the users first option

	do{																						//Do while loop to check if the users input is E
		if (option == 'B' || option == 'b') {												//If the user inputs B
			puts("Please enter the first number: ");
			firstNum = getNum();

			puts("Please enter the operation ( + , - , * , / , %, P (for power), X (for maximum), I (for minimum) )");
			scanf(" %c", &operation);														//Scan for the operation
			if (operation == '+') {															//If the operation is +
				puts("Please enter the second number: ");
				secondNum = getNum();
				answer = firstNum + secondNum;												//Add the two numbers
			} else if (operation == '-') {													//If the operation is -
				puts("Please enter the second number: ");
				secondNum = getNum();
				answer = firstNum - secondNum;												//Subtract the two numbers
			} else if (operation == '*') {													//If the operation is *
				puts("Please enter the second number: ");
				secondNum = getNum();
				answer = firstNum * secondNum;												//Multiply the two numbers
			} else if (operation == '/') {													//If the operation is /
				puts("Please enter the second number (non-zero): ");
				secondNum = getNum();
				while (secondNum == 0) {
					puts("Please enter the second number (non-zero): ");
					secondNum = getNum();
				}
				answer = firstNum / secondNum;												//Divide the two numbers
			} else if (operation == '%') {													//If the operation is %
				puts("Please enter the second number (non-zero): ");
				secondNum = getNum();
				while (secondNum == 0) {
					puts("Please enter the second number (non-zero): ");
					secondNum = getNum();
				}
				int fNum = firstNum;														//Parse to int
				int sNum = secondNum;														//Parse to int
				answer = fNum % sNum;														//Mod the two numbers
			} else if (operation == 'P') {													//If the operation is P (power)
				puts("Please enter the second number: ");
				secondNum = getNum();
				answer = pow(firstNum, secondNum);											//Pow the two numbers
			} else if (operation == 'X') {													//If the operation is x (maximum)
				puts("Please enter the second number: ");
				secondNum = getNum();
				if (firstNum >= secondNum) {												//If the first num is bigger than the second
					answer = firstNum;														//First num is max
				} else {
					answer = secondNum;														//Second num is max
				}
			} else if (operation == 'I') {													//If the operation is I (minimum)
				puts("Please enter the second number: ");
				secondNum = getNum();
				if (firstNum <= secondNum) {												//If the first num is smaller than the second
					answer = secondNum;														//First num is minimum
				} else {
					answer = firstNum;														//Second num is minimum
				}
			}

			printf("The result is:\t%.2f\n", answer);
			//Zeros all variables
			option = ' ';
			firstNum = 0;
			secondNum = 0;
			answer = 0;

		} else if (option == 'U' || option == 'u') {										//If the user inputs U
			puts("Please enter a number: ");
			uNum = getNum();

			puts("Please enter a unary operator\n"
				 "S) - Square Root.\n"
				 "L) - Logarithm.\n"
				 "E) - Exponent.\n"
				 "C) - Smallest integer value greater than or equal to x.\n"
			     "F) - Largest integer value smaller than or equal to x.");
			scanf(" %c", &unaryOperator);

			if (unaryOperator == 'S' || unaryOperator == 's') {								//If operation is s (square root)
				if (uNum >= 0) {															//If num is greater than zero
					printf("The result is %.2f\n", sqrt(uNum));								//Print the answer
				} else {
					printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
					continue;
				}
			} else if (unaryOperator == 'L' || unaryOperator == 'l') {						//If operation is l (log)
				if (uNum >= 0) {															//If num is greater than zero
					printf("The result is %.2f\n", log10(uNum));							//Print the answer
				} else {
					printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
					continue;
				}
			} else if (unaryOperator == 'E' || unaryOperator == 'e') {						//If the operation is e (exponent)
				printf("The result is %.2f\n", exp(uNum));									//Calculate and print answer
			} else if (unaryOperator == 'C' || unaryOperator == 'c') {						//If operation is c (ceiling)
				printf("The result is %f\n", ceil(uNum));									//Calculate and print answer
			} else if (unaryOperator == 'F' || unaryOperator == 'f') {						//If the operation is f (floor)
				printf("The result is %f\n", floor(uNum));									//Calculate and print answer
			}
			//Zero variable
			uNum = 0;

		} else if (option == 'A' || option == 'a') {										//If the user inputs A
			puts("Select one of the following items:\n"
				 "B) - Binary Mathematical Operations, such as addition and subtraction.\n"
				 "U) - Unary Mathematical Operations, such as square root, and log.\n"
				 "E) - Exit and back to the main menu");
			scanf(" %c", &secondOption);

			if (secondOption == 'B' || secondOption == 'b') {								//If the user inputs B
				puts("Please enter the first number or a variable name ('a' to 'e'):");
				if (scanf("%f", &firstNum)) {												//Scan to see if they enter a number
				} else if (scanf(" %c", &variableOption)) {									//or a variable
					if (variableOption == 'a') {											//If user enters a
						firstNum = a;
					} else if (variableOption == 'b') {										//If user enters b
						firstNum = b;
					} else if (variableOption == 'c') {										//If user enters c
						firstNum = c;
					} else if (variableOption == 'd') {										//If user enters d
						firstNum = d;
					} else if (variableOption == 'e') {										//If user enters e
						firstNum = e;
					}else{																	//Else its not a valid variable
						puts("Please pick a different variable.");
						continue;
					}
				}
				puts("Please enter the operation ( + , - , * , / , %, P (for power), X (for maximum), I (for minimum) )");
				scanf(" %c", &operation);													//Scan for the operation

				puts("Please enter the second number or a variable name ('a' to 'e'):");
				if (scanf("%f", &firstNum)) {												//Scan to see if they enter a number
				} else if (scanf(" %c", &variableOption)) {									//or a variable
					if (variableOption == 'a') {											//If the user enters a
						secondNum = a;
					} else if (variableOption == 'b') {										//If the user enters b
						secondNum = b;
					} else if (variableOption == 'c') {										//If the user enters c
						secondNum = c;
					} else if (variableOption == 'd') {										//If the user enters d
						secondNum = d;
					} else if (variableOption == 'e') {										//If the user enters e
						secondNum = e;
					}else{																	//Else its not a valid variable
						puts("Please pick a different variable.");
						continue;
					}
				}
				if (operation == '+') {														//If the operation is +
					answer = firstNum + secondNum;											//Add the two numbers
				} else if (operation == '-') {												//If the operation is -
					answer = firstNum - secondNum;											//Subtract the two numbers
				} else if (operation == '*') {												//If the operation is *
					answer = firstNum * secondNum;											//Multiply the two numbers
				} else if (operation == '/') {												//If the operation is /
					while (secondNum == 0) {
						puts("Please enter the second number (non-zero): ");
						scanf("%f", &secondNum);
					}
					answer = firstNum / secondNum;											//Divide the two numbers
				} else if (operation == '%') {												//If the operation is %
					while (secondNum == 0) {
						puts("Please enter the second number (non-zero): ");
						scanf("%f", &secondNum);
					}
					int fNum = firstNum;													//Parse to int
					int sNum = secondNum;													//Parse to int
					answer = fNum % sNum;													//Mod the two numbers
				} else if (operation == 'P') {												//If the operation is P
					answer = pow(firstNum, secondNum);										//Pow the two numbers
				} else if (operation == 'X') {												//If the operation is X
					if (firstNum >= secondNum) {											//If the first num is bigger than the second
						answer = firstNum;													//First num is max
					} else {
						answer = secondNum;													//Second num is max
					}
				} else if (operation == 'I') {												//If the operation is I (minimum)
					if (firstNum <= secondNum) {											//If the first num is smaller than the second
						answer = secondNum;													//First num is minimum
					} else {
						answer = firstNum;													//Second num is minimum
					}
				}

				//Zero all variables
				printf("The result is:\t%.2f\n", answer);
				option = ' ';
				firstNum = 0;
				secondNum = 0;
				answer = 0;

			} else if (secondOption == 'U' || secondOption == 'u') {						//If the user inputs U
				puts("Please enter the first number or a variable name ('a' to 'e'):");
				if (scanf("%f", &uNum)) {													//Scan to see if they enter a number
				} else if (scanf(" %c", &variableOption)) {									//or a variable
					if (variableOption == 'a') {											//If the user enters a
						uNum = a;
					} else if (variableOption == 'b') {										//If the user enters b
						uNum = b;
					} else if (variableOption == 'c') {		  								//If the user enters c
						uNum = c;
					} else if (variableOption == 'd') {										//If the user enters d
						uNum = d;
					} else if (variableOption == 'e') {										//If the user enters e
						uNum = e;
					}else{																	//Else its not a valid variable
						puts("Please pick a different variable.");
						continue;
					}
				}
				puts("Please enter a unary operator\n"
				 	 "S) - Square Root.\n"
	 				 "L) - Logarithm.\n"
 					 "E) - Exponent.\n"
					 "C) - Smallest integer value greater than or equal to x.\n"
					 "F) - Largest integer value smaller than or equal to x.");
				scanf(" %c", &unaryOperator);

				if (unaryOperator == 'S' || unaryOperator == 's') {							//If the operation is s (square root)
					if (uNum >= 0) {														//If the num is greater than zero
						printf("The result is %.2f\n", sqrt(uNum));							//print the answer
					} else {
						printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
						continue;
					}
				} else if (unaryOperator == 'L' || unaryOperator == 'l') {					//If the operation is l (log)
					if (uNum >= 0) {														//If the num is greater than zero
						printf("The result is %.2f\n", log10(uNum));						//Print the answer
					} else {
						printf("The number %.2f is a invalid input. Please enter a different number.\n", uNum);
						continue;
					}
				} else if (unaryOperator == 'E' || unaryOperator == 'e') {					//If the operation is e (exponent)
					printf("The result is %.2f\n", exp(uNum));								//Calculate and print answer
				} else if (unaryOperator == 'C' || unaryOperator == 'c') {					//If the operation is c (ceiling)
					printf("The result is %f\n", ceil(uNum));								//Calculate and print answer
				} else if (unaryOperator == 'F' || unaryOperator == 'f') {					//If the operation is f (floor)
					printf("The result is %f\n", floor(uNum));								//Calculate and print answer
				}
				uNum = 0;
				continue;

			} else if (secondOption == 'E' || secondOption == 'e') {

			} else {
				puts("Invalid input. Please try again.");
			}

		} else if (option == 'V' || option == 'v') {										//If the user inputs V
			puts("Please enter the name of the variable ( A single character between 'a' and 'e' ):");
			scanf(" %c", &variableOption);

			if (variableOption == 'a') {													//If the user enters a
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();													//Get the number
				a = variableValue;															//Assign to a
			} else if (variableOption == 'b') {												//If the user enters b
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();													//Get the number
				b = variableValue;															//Assign to b
			} else if (variableOption == 'c') {												//If the user enters c
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();													//Get the number
				c = variableValue;															//Assign to c
			} else if (variableOption == 'd') {												//If the user enters d
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();													//Get the number
				d = variableValue;															//Assign to d
			} else if (variableOption == 'e') {												//If the user enters e
				puts("Please enter a value to assign to the variable: ");
				variableValue = getNum();
				e = variableValue;															//Assign to e
			} else {																		//Else its not a valid variable
				puts("The variable you have entered is invalid. Please enter a different variable.");
				continue;
			}
			printf("Variable %c is set to:\t%.2f\n", variableOption, variableValue);
			variableOption = ' ';
			variableValue = 0;
		}
		puts("Please select your option ( B , U , A , E , V )");							//Scans for option
		scanf(" %c", &option);
		option = tolower(option);															//Changes option to lowercase

	} while (option != 'e');																//Continue the do while loop until the user enters E or e
	puts("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");	//Thank you message
}//End main
