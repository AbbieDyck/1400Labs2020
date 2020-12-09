#include <stdio.h>

int main(void){
	int number  = 0;
	int product = 0;

	puts("Please input your number: ");
	scanf("%d", &number);

	for(int i = 1; i <= 10; i++){
		product = number * i;
		printf("%d X %d = %d\n", number, i, product);
	}

}
