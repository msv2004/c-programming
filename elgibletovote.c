#include <stdio.h>
int main() {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18){
    printf("You are elgible to vote");
    }
    else if(age<=0) {
        printf("Your Input is Wrongly Entered:");
    }

    else {
        printf("You are not eligble to vote upto: %d", 18-age);
    }
    return 0;
}
