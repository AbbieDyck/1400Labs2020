#include <stdio.h>

int main(void){
	int num1;
	int num2;
	int answer;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	answer = num1 % num2;

	printf("Reminder of %d divided by %d is %d", num1, num2, answer);

}
