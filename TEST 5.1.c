1.Bubble sort is a straightforward sorting algorithm that checks and swaps elements if they
are not in the intended order. It compares two adjacent elements to find which one is
greater or lesser and switches them based on the given condition until the final place of the
element is found. Write a Program to sort the given numbers in an array using bubble
sort.
  
#include <stdio.h>

void bubble_sort(int arr[], int n);

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


output;

Enter the number of elements: 5
Enter the elements:
9 2 6 4 8 5
Sorted array:
2 4 6 8 9 
