/***************************************
** Developer	:Abbie Dyck.          **
** Student ID	:110046150	      **
** Program Name	:palindrome.c	      **
** Version	:1		      **
** Date		:November 14, 2020    **
****************************************/

#include <stdio.h>

int main(void){
	int num;
	int starting;
	int reversed = 0;
	int a;
	int numCheck;

	while(1){
		printf("Enter an integer number: ");
	    numCheck = scanf("%d", &num);

	    while(getchar() != '\n');

	    if(numCheck == 0){
	    	continue;
	    }

	    if(num == 0){
	    	puts("Goodbye!");
	        break;
	    }else if(num < 0){
	    	num *= -1;
	    }

	    starting = num;
	    reversed = 0;

	    while(num != 0){
	    	a = num % 10;
	        reversed = reversed * 10 + a;
	        num = num / 10;
	    }

	    if(starting != reversed){
	    	printf("%d is not a Palindrome.\n", starting);
	    }else{
		    printf("%d is a Palindrome.\n", starting);
	    }
	}
}//End main()
