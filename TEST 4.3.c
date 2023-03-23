#include <stdio.h>

int n = sizeof(arr)/sizeof(arr[0]);
    int temp;

    printf("Original Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    for(int i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("\nReversed Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

sample test case:

Original Array: 16 18 27 16 23 21 19 
Reversed Array: 19 21 23 16 27 18 16 
