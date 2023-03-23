#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 4

void matrix_multiply(int A[][COLS_A], int B[][COLS_B], int C[][COLS_B]) {
    int i, j, k;

    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            C[i][j] = 0;

            for (k = 0; k < COLS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[ROWS_A][COLS_A] = {{1, 2}, {3, 4}, {5, 6}};
    int B[ROWS_B][COLS_B] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int C[ROWS_A][COLS_B];
    int i, j;

    matrix_multiply(A, B, C);

    printf("Matrix A:\n");
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_A; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < ROWS_B; i++) {
        for (j = 0; j < COLS_B; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C = A * B:\n");
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



OUTPUT:
Matrix A:
1 2 
3 4 
5 6 

Matrix B:
1 2 3 4 
5 6 7 8 

Matrix C = A * B:
11 14 17 20 
23 30 37 44 
35 46 57 68 
