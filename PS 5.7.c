To write a c code to implement a function to compute power of a value

#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    
    for (int i = 0; i < abs(exponent); i++) {
        result *= base;
    }
    if (exponent < 0) {
        result = 1.0 / result;
    }
    
    return result;
}

int main() {
    printf("%f\n", power(2.0, 3)); 
    printf("%f\n", power(5.0, -2));
    
    return 0;
}

//OUTPUT:
8.000000
0.040000
