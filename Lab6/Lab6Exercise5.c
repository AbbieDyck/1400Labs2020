#include <stdio.h>

int main(void) {
   int number = 0;

   puts("Please input your number: ");
   scanf("%d", &number);

   switch(number){
      case 1:
         puts("Monday");
         break;
      case 2:
         puts("Tuesday");
         break;
      case 3:
         puts("Wednesday");
         break;
      case 4:
         puts("Thursday");
         break;
      case 5:
         puts("Friday");
         break;
      case 6:
         puts("Saturday");
         break;
      case 7:
         puts("Sunday");
         break;
      default:
         puts("Unknown day number. Please try again.");
         break;
   }
}
