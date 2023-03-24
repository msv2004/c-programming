Find out the error and show the output 

#include <stdio.h>
#include

void main()
{
    char str[50];
    int i, length = 0;
    clrscr();
    printf("Enter the string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    printf("Length of the string is %d", length);
    return 1;
}
mistake vundi copy cheyakandi bro!
