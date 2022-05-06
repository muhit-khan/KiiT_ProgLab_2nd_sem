#include<stdio.h>
int main()
{
    int a = 4;
    char b = 'c';
    int *c = &a;
    int *d = &b; 

    printf("a = %d\n", a);
    printf("c = %c\n", b);
    printf("*c = %d\n", *c);
    printf("*d = %d\n", *d);
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%p\n", c);
    printf("%p\n", d);
    return 0;
} 