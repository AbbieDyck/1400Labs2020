/***************************************
** Developer	:Abbie Dyck	      **
** Student ID	:110046150	      **
** Program Name	:sequence.c	      **
** Version		:1	      **
** Date		:November 14, 2020    **
****************************************/


#include <stdio.h>
#include <math.h>

int main(void){
	int num;
	int factorial = 1;
	int try = 1;
	double total = 0;

	   while(try == 1){
	      printf("Please enter a positive integer value (between 1 and 7, inclusive): ");
	      scanf(" %d", &num);

	      if(num <= 0 || num >= 8){
	         puts("Invalid input.");
	         continue;
	      }

	      for(int x = 2; x <= (num+1); x++){
	         for(int y = 1; y <= x; y++){
	            factorial *= y;
	         }

	         total = total + 1/(double)factorial;

	         if(factorial == 2){
	        	 printf("1/2 ");
	         }else{
	        	 printf("+ 1/%d ", factorial);
	         }
	         factorial = 1;
	      }

	      printf("= %.3f\n", total);
	      total = 0;
	      printf("Would you want to try again? (1/yes, 0/no) ");
	      scanf("%d", &try);
	   }
	   puts("Goodbye!");
}//End main()
