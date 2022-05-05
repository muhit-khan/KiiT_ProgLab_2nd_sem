#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, b[5];
    //lets inverse array 'a' and keep it to array 'b'
    for (int i = 4, j = 0; i >= 0; i--, ++j)
        b[j] = *(a + i);
    //now print the inversed array
    for (int k = 0; k < 5; ++k)
        printf("%d\n", *(b + k));
    return 0;
}