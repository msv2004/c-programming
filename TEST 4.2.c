2)Negative numbers in array

#include <stdio.h>

int main() {
    int arr[] = {-160, -160, -180, -270, -160, -230, -210, 1-90, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    
    printf("Number of negative numbers in array elements = %d", count);
    
    return 0;
}
