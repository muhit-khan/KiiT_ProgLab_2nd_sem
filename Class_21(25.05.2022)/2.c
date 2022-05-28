#include<stdio.h>
union num
{
    float f;
    char c[4];
}n1, n2;
int main()
{
    union num;
    n1.f = 222.0;
    n2.f = 333.0;
    printf("\nNumbers before interchange: %.3f & %.3f", n1.f, n2.f);

    char temp1 = n1.c[1];
    n1.c[1] = n2.c[2];
    n2.c[2] = temp1;

    char temp2 = n1.c[2];
    n1.c[2] = n2.c[1];
    n2.c[1] = temp2;

    printf("\nNumbers after interchange: %.3f & %.3f", n1.f, n2.f);
    return 0;
}
