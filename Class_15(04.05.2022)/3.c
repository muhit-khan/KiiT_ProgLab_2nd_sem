#include<stdio.h>
int main()
{
    int a = 20, b = 80;
    int *c = &a, * d = &b;
    int sum = *c + *d;
    printf("%d", sum);

    return 0;
}