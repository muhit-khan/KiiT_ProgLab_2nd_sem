#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    int *d = &a, *e = &b, *f = &c;
 
    if(*d < *e && *d < *f)
        printf("a = %d is minimum", *d);
    else if(*e < *d && *e < *f)
        printf("b = %d is minimum", *e);
    else
        printf("c = %d is minimum", *f);

    return 0;
}