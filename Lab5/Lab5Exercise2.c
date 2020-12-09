#include <stdio.h>

int main(void){
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num % 2 == 0){
		printf("%d if even", num);
	}else{
		printf("%d is odd", num);
	}


}
