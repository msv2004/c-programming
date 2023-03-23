print the following hill pattern 


#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%c ", 'A' + j);
        }
        for (int j = n - i - 2; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}


op
A B C D E D C B A
 A B C D C B A
  A B C B A
   A B A
    A 
