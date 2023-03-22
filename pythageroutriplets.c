#include <stdio.h>
#include <math.h>

int main() {
    int A, m, n, o;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf(" %d\n", A);
    for (m = 1; m <= A; m++) {
        for (n = 1; n < m; n++) {
            o = sqrt(m * m + n * n);
            if (o > A) {
                break;
            }
            if (m * m + n * n == o * o) {
                printf("(%d,%d,%d), ", n, m, o);
            }
           
        }
    }
    printf("\n");
    return 0;
}
