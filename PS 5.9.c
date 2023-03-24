Program to add two numbers using functions with no arguments and no return
  
  #include <stdio.h>

void add_numbers() {
    float num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of %f and %f is %f\n", num1, num2, sum);
}

int main() {
    add_numbers();
    return 0;
}

//OUTPUT:

Enter the first number: 12
Enter the second number: 23
The sum of 12.000000 and 23.000000 is 35.000000
