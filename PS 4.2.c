write a program in c such that the program will read the elemets of a one dimensional array, then compares the elements and finds which the largest two elements are in a given array.???
  
  
  #include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

       
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 1, 24, 15, 13, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);

    selectionSort(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);

    printf("\nThe two largest numbers are: %d and %d\n", arr[n-1], arr[n-2]);

    return 0;
}


o/p

Original array: 
1 24 15 13 10 

Sorted array in Ascending order: 
1 10 13 15 24 

The two largest numbers are: 24 and 15
