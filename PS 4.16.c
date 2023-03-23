#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[2] = {5, 10};

    printf("Original array: %d, %d\n", arr[0], arr[1]);

    swap(&arr[0], &arr[1]);

    printf("Modified array: %d, %d\n", arr[0], arr[1]);

    return 0;
}


Original array: 5, 10
Modified array: 10, 5
