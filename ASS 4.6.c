#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int a = 10;
    pid_t pid = fork();
    if (pid == 0) {
        a++;
        printf("Child process: a = %d\n", a);
        exit(0);
    } else if (pid > 0) {
        wait(NULL);
        printf("Parent process: a = %d\n", a);
    } else {
        perror("fork");
        exit(1);
    }
    return 0;
}


output;

Child process: a = 11
Parent process: a = 10
