#include <stdio.h>

int main(void){
	int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
	int answer;
	int checkNum;


	printf("Enter the first twelve digits of ISBN-13: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);


	answer = ((num0 +num2 +num4 + num6 + num8 + num10) + 3*(num1 + num3 + num5 + num7 + num9 + num11));
	checkNum = 10 - (answer % 10);


	printf("Check digit: %d", checkNum);
}
