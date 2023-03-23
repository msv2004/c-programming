2.Write a program to print the number of negative numbers in an array of numbersSample Input:
Array of elements = {16, -18, 27, -16, 23, -21, 19}
Sample Output:
Number of negative numbers in Array elements = 3
Test cases:
1.Array of elements = {-26, 28, 37, -26, 33, -31, -29}
2. Array of elements = {1.6, 1.8, 2.7, -1.6, 2.3, -2.1, .19}
3. Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0}
4. Array of elements = {-16, 2.8, -7, -1.5, 2.8, -2.8, -.19}
5. Array of elements = {-160, -160, -180, -270, -160, -230, -210, 1-90, 0}


CODING:

#include <stdio.h>

int main() {

    int arr[] = {-26, 28, 37, -26, 33, -31, -29};

    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] < 0) {

            count++;

        }

    }

    printf("Number of negative numbers in Array elements = %d\n", count);

    return 0;
}

Output:
1.Array of elements = {-26, 28, 37, -26, 33, -31, -29}
Number of negative numbers in Array elements = 4
2.Array of elements = {1.6, 1.8, 2.7, -1.6, 2.3, -2.1, .19}
Number of negative numbers in Array elements = 2
3.Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0}
Number of negative numbers in Array elements = 0
4. Array of elements = {-16, 2.8, -7, -1.5, 2.8, -2.8, -.19}
Number of negative numbers in Array elements = 4
5.Array of elements = {-160, -160, -180, -270, -160, -230, -210, 1-90, 0}
Number of negative numbers in Array elements = 8
