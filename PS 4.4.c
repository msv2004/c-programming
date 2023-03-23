#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // element not found
}

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);
    if (result == -1)
        printf("Element not found in the array\n");
    else
        printf("Element found at position %d in the array\n", result+1);
    return 0;
}


op

Enter the size of the array: 7
Enter the sorted elements of the array: 10
28
12
15
33
122
11
Enter the element to search: 15
Element found at position 4 in the array
msv
