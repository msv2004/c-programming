predicct the output or errors for the following

code: msv
#include <stdio.h>
int main()
{
    char s[]={'a','b','c','\n','c','\0'};
    char *p,*str,*str1;
    p=&s[3];
    str=p;
    str1=s;
    printf("%d",++*p+ ++*str1-32);
    return 0;
}

op
77
