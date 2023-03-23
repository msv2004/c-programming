#include <stdio.h>

int Composite(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 1;
    }
    return 0;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (Composite(arr[i])) {
            count++;
        }
    }

    printf("Number of Composite Numbers = %d\n", count);
    return 0;
}

Test cases:
1. {26, 28, 37, 26, 33, 31, 29}
Number of Composite Numbers = 4
