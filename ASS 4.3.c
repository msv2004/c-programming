#include <stdio.h>

int main() {
    int n, sum=0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {    // check if i is odd
            sum += i;   // add i to sum if it is odd
        }
    }
    
    printf("The sum of all odd numbers from 1 to %d is %d", n, sum);
    
    return 0;
}

op:
Enter the value of n: 78
The sum of all odd numbers from 1 to 78 is 1521
