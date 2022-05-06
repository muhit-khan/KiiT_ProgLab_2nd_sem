#include<stdio.h>
int main()
{
    int a = 20, b = 80, tem;
    int *ap = &a, *bp = &b, *temp;
    *temp = *ap;
    *ap = *bp;
    *bp = *temp;

    printf("a = %d\n", *ap);
    printf("b = %d", *bp);

    return 0;
}