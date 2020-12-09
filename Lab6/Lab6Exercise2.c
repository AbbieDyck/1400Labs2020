#include <stdio.h>

int main(void){
	int number = 0;
	int isPrime  = 0;

	puts("Please input your number: ");
	scanf("%d", &number);

	for(int i = 2; i <= number / 2; i++){
		if (number % i == 0) {
			isPrime = 1;
	        break;
		}
	}

	if(isPrime == 0 && number > 1){
		printf("%d is a prime number", number);
	}else{
		printf("%d is not a prime number", number);
	}
}
