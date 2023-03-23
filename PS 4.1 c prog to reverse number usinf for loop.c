#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) 
    {
        reversed = reversed * 10 + num % 10;
    }
    printf("Reverse number: %d\n", reversed);
    return 0;
}


