3.Write a program to reverse an array
Sample Input:
Array of elements = {16, 18, 27, 16, 23, 21, 19}
Sample Output:
Reverse Array elements = {19, 21 23, 16, 27, 18, 16}
Test cases:
1.Array of elements = {26, 28, 37, 26, 33, 31, 29}
2. Array of elements = {1.6, 1.8, 2.7, 1.6, 2.3, 2.1, .19}
3. Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0}
4. Array of elements = {200, 180, 180, 270, 270, 270, 190, 200}
5. Array of elements = {100, 100, 100, 100, 100, 100, 100, 100} 
CODING:
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, n;
    printf("Enter the size of the array: ");

    scanf("%d", &n);    
    printf("Enter %d elements in the array: ", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");

    for(i=0; i<n; i++)

    {
        printf("%d ", arr[i]);
    }
    printf("\nReversed array: ");

    for(i=n-1; i>=0; i--)

    {
        printf("%d ", arr[i]);
    }
    return 0;

}

OUTPUT:

a.)Enter the size of the array: 7
Enter 7 elements in the array: 26 28 37 26 33 31 29
Original array: 26 28 37 26 33 31 29 
Reversed array: 29 31 33 26 37 28 26 
    
b.)Enter the size of the array: 7
Enter 7 elements in the array: 1.6 1.8 2.7 1.6 2.3 2.1 
19Original array: 1 0 0 0 0 0 0 
Reversed array: 0 0 0 0 0 0 1 
    
c.)Enter the size of the array: 9
Enter 9 elements in the array:  0 160 180 270 160 230 210 19 
Original array: 0 160 180 270 160 230 210 19 0 
Reversed array: 0 19 210 230 160 270 180 160 0 
    
d.)Enter the size of the array: 8
Enter 8 elements in the array: 200 180 180 270 270 270 190 200
Original array: 200 180 180 270 270 270 190 200 
Reversed array: 200 190 270 270 270 180 180 200 
    
e.)Enter the size of the array: 8
Enter 8 elements in the array: 100 100 100 100 100 100 100 100
Original array: 100 100 100 100 100 100 100 100 
Reversed array: 100 100 100 100 100 100 100 100 
