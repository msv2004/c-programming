write a program to display the diagonal elemetns in a matrix array and also find the sum of them

#include <stdio.h>

int main() {
   int rows, cols, i, j, sum=0;
   printf("Enter the number of rows in the matrix: ");
   scanf("%d", &rows);
   printf("Enter the number of columns in the matrix: ");
   scanf("%d", &cols);

   int matrix[rows][cols];

   printf("Enter the elements of the matrix:\n");

   for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   printf("The diagonal elements of the matrix are: ");

   for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
         if (i == j) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
         }
      }
   }

   printf("\nThe sum of the diagonal elements is: %d", sum);

   return 0;
}


OUTPUT:

Enter the number of rows in the matrix: 3
Enter the number of columns in the matrix: 3
Enter the elements of the matrix:

1 2 3
8 4 6
7 5 36
  
The diagonal elements of the matrix are: 1 4 36 
The sum of the diagonal elements is: 41
