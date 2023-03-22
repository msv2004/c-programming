#include <stdio.h>
int main() {
    float a;
    printf("Enter the value:");
    scanf("%f",&a);

    if(a%2==0) {
        printf("It is a Even Number");
    }
    else {
        printf("It is a Odd number");
    }
    return 0;
}
