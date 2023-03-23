#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    
    printf("Enter a Integer: ");
    scanf("%d", &n);
    
    while (i <= n) {
        sum += i;
        i++;
    }
    
    printf("The sum of the first %d natural numbers is %d\n", n, sum);
    
    return 0;
}



OP

Enter a Integer:10

The sum of firs 10 natural number is 55
