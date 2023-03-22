1)

#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str);

    printf("The reversed string is: %s\n", str);

    return 0;
}


2)
#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

3)
#include <stdio.h>

int main() {
    int rows = 5; 
    
    // loop for each row
    for (int i = 1; i <= rows; i++) {
        // loop for spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
      
        for (int k = 1; k <= i; k++) {
            if (k == i || k == 1 || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
       
        for (int l = i + 1; l <= rows; l++) {
            if (l == i + 1 || l == rows || i == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

4)
#include <stdio.h>

int main() {
    int n = 5; 
    
    
    for (int i = 1; i <= n; i++) {
       
        for (int j = i; j >= 1; j--) {
            printf("%d ", j); 
        }
        printf("\n"); 
    }
    
    return 0;
}

5)
#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = rows-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

6)
#include <stdio.h>

int isComposite(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }

    printf("Number of Composite Numbers = %d\n", count);

    return 0;
}

7)
#include <stdio.h>

int main() {
    int arr[] = {5, -3, 0, -8, 2, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    printf("Number of negative numbers in the array: %d\n", count);

    return 0;
}

8)
#include <stdio.h>

void reverse_array(int arr[], int size) {
  int i, j;
  for (i = 0, j = size - 1; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  printf("Original Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  reverse_array(arr, size);

  printf("\nReversed Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

9)
#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The original matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose of the matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

10)
#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];

    return j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


