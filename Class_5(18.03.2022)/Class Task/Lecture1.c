#include<stdio.h>
int main()
{
    int a, b, c, d;
    a = 2;
    b = 3;
    c = 5;
    d = ((b<c) && (a = 5));
    printf("%d\t%d\t%d\t%d",a, b, c, d);
    return 0;
}