#include <stdio.h>
int main(void){
   int num1;
   int num2;
   int sum;

   printf("Abbie Dyck,\n110046150,\n");

   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   printf("Sum of the entered numbers: %d\n", sum);

   printf("-----------------------------------------\n|\t\t\t\t\t|\n|\t\t%d + %d = %d\t\t|\n|\t\t\t\t\t|\n-----------------------------------------", num1, num2, sum);
   return 0;
}
