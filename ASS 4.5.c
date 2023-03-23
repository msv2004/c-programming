#include <stdio.h>

int tmp = 20;

void func();

int main() {
    printf("%d ", tmp);
    func();
    printf("%d ", tmp);
    return 0;
}

void func() {
    int tmp = 10;
    printf("%d ", tmp);
}



output:

20 1020 
