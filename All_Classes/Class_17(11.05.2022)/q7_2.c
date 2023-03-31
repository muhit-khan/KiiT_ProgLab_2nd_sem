#include <stdio.h>

int fib(int n)
{
    if (n <= 1) 
    {
        return n;
    }
    int prev = 0, cur = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int new = prev + cur;
        prev = cur;
        cur = new;
    }
    return cur;
}

int main()    
{    
    int num;    
    printf("Enter the number of elements: ");
    scanf("%d",&num);  
    printf("%d\n",fib(num));
    return 0;  
 }    