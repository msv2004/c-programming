program to swap two numbers using call by value
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1 = 5, num2 = 7;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(num1, num2);
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
//OUTPUT:
Before swapping: num1 = 5, num2 = 7
Inside swap function: a = 7, b = 5
After swapping: num1 = 5, num2 = 7
