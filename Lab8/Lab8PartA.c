/***************************************
**	Developer		:Abbie Dyck		  **
** 	Student ID		:110046150		  **
** 	Program Name	:Lab8PartA.c	  **
** 	Version			:1				  **
** 	Date			:November 20, 2020**
****************************************/
#include <stdio.h>
#include <math.h>
double finalArea;

double area(int radius){
	const float Pi = 3.14159;		//Constant number for PI

	finalArea = Pi * pow(radius,2);	//Calculates the area of the circle
	return finalArea;				//Returns the area
}

int main(void){
	int radius = 0;

	puts("Enter a radius: ");		//Ask user for a radius
	scanf("%d", &radius);			//Scan

	finalArea = area(radius);		//Calls the function

	printf("The area of the circle with a radius of %d is: %f", radius, finalArea);	//Prints the area

}
