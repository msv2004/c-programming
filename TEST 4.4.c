4.The transpose of a matrix is found by interchanging its rows into columns or columns
into rows. Write a program to find the Transpose of a given Matrix. 
    
CODING:

#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
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

OUTPUT:

Enter the number of rows and columns of the matrix:
2 2
    
Enter the elements of the matrix:
8 9 4 5
    
The transpose of the matrix is:
8 4 
9 5 
