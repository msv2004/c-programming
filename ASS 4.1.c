1.	Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator ?:. How to find maximum between three numbers using conditional operator.


#include <stdio.h>

int main() {
   int num1, num2, num3, max;
   
   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);
   
   max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
   
   printf("The maximum of the three numbers is %d", max);
   
   return 0;
}
