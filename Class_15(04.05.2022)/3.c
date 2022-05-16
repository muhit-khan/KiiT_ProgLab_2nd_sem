#include<stdio.h>
int main()
{
    int a = 11, b = 2;
    int *pa=&a,*pb=&b,*temp;
   
    temp = pa;
    pa = pb;
    pb = temp;

    printf("a = %d\n", *pa);
    printf("b = %d\n", *pb);

    return 0;
}