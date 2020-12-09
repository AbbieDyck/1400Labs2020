#include <stdio.h>

int main(void){
	int num1;
	int num2;
	int num3;

	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 >= num2 && num1 >= num3){
		if(num2 >= num3){
			printf("The largest number is %d and the smallest is %d", num1,num3);
		}
		else{
			printf("The largest number is %d and the smallest is %d",num1, num2);
		}
	}else if(num2 >= num1 && num2 >= num3){
		if(num1 >= num3){
			printf("The largest number is %d and the smallest is %d", num2, num3);
		}else{
			printf("The largest number is %d and the smallest is %d", num2, num1);
		}
	}else{
		if(num1 >= num2){
			printf("The largest number is %d and the smallest is %d", num3, num2);
		}else{
			printf("The largest number is %d and the smallest is %d", num3, num1);
		}
	}

}
