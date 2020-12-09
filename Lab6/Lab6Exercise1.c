#include <stdio.h>

int main(void){
	int values[10];
	int sum = 0;

	puts("Please enter 10 numbers: ");

	for(int i = 0; i < 10; i++){
		scanf("%d", &values[i]);
	}
	sum = values[0] + values[1] + values[2] + values[3] + values[4] + values[5] + values[6] + values[7] + values[8] + values[9];
	float average = (float) sum/10;

	printf("The sum of all the numbers is %d\n", sum);
	printf("The average of all the numbers is %f", average);


}
