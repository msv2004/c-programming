Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:. How to check alphabets using conditional operator in C programming.
  
 code:
#include <stdio.h>

int main() {
   char input;

   printf("Enter a character: ");
   scanf("%c", &input);

   (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z') ? printf("%c is an alphabet\n", input) : printf("%c is not an alphabet\n", input);

   return 0;
}

Enter a character: p123
p is an alphabet
