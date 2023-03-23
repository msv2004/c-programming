1.Write a program to find the number of composite numbers in an array of elements Sample Input:
Array of elements = {16, 18, 27, 16, 23, 21, 19}
Sample Output:
Number of Composite Numbers = 5
Test cases:
1.Array of elements = {26, 28, 37, 26, 33, 31, 29}
2. Array of elements = {1.6, 1.8, 2.7, 1.6, 2.3, 2.1, .19}
3. Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0}
4. Array of elements = {200, 180, 180, 270, 270, 270, 190, 200}
5. Array of elements = {100, 100, 100, 100, 100, 100, 100, 100}




CODING:



#include <stdio.h>
int isComposite(int n) {

    if (n <= 1) {

        return 0;

    }

    for (int i = 2; i <= n / 2; i++) {

        if (n % i == 0) {

            return 1;

        }

    }

    return 0;
}

int main() {

    int arr[] = {26, 28, 37, 26, 33, 31, 29};

    int size = sizeof(arr) / sizeof(arr[0]);

    int compositeCount = 0;
    for (int i = 0; i < size; i++) {

        if (isComposite(arr[i])) {

            compositeCount++;

        }

    }

    printf("Number of Composite Numbers = %d", compositeCount);

    return 0;

}

OUTPUT:
1.Array of elements = {26, 28, 37, 26, 33, 31, 29}
Number of Composite Numbers = 4
2.Array of elements = {1.6, 1.8, 2.7, 1.6, 2.3, 2.1, .19}
Number of Composite Numbers = 0
3.Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0}
Number of Composite Numbers = 7
4.Array of elements = {200, 180, 180, 270, 270, 270, 190, 200}
Number of Composite Numbers = 8
5.Array of elements = {100, 100, 100, 100, 100, 100, 100, 100}
Number of Composite Numbers = 8
