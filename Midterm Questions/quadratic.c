/***************************************
** Developer	:Abbie Dyck	      **
** Student ID	:110046150	      **
** Program Name	:quadraic.c	      **
** Version	:1		      **
** Date		:November 14, 2020    **
****************************************/

#include <stdio.h>
#include <math.h>

int main(void){

	int a, b, c, x = 0;
	int answer = 0;

	puts("Please enter four integer number for a, b, c, and x: ");
	scanf("%d%d%d%d", &a, &b, &c, &x);

	if(a >= 40000 || b >= 40000 || c>= 40000 || x>= 40000){
		puts("Possible overflow.");
	}else{
		answer = a * pow(x, 2) + b * x + c;
		printf("Q(%d) = %d * %d^2 + %d * %d + %d = %d", x, a, x, b, x, c, answer);
	}
}//End main()
