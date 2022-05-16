#include<stdio.h>
int main()
{
    int a[10];
    int m = 5;
    for (int i = 0, j = 0, k = 50; i < 10; i++, j++, k -= j)
    {
        if(i % 2)
            m += j;
        else
            m -= j;
       
        a[m-1] = k;
    }    
    for (int k = 0; k < 10; ++k){
        printf("%d ", *(a + k));
    }
    return 0;
}