#include <stdio.h>

int fib(int n)
{
    if (n <= 1) 
    {
        return n;
    }
 
    int prev = 1, cur = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int new = prev + cur;
        prev = cur;
        cur = new;
    }
 
    return cur;
}

long long int fact(int n)
{
 long long int ans=1;
 for(int i=2;i<=n;i++) ans*=i;
 return ans;
}


double final(int n)
{
    double ans=0;
    for(int i=1,j=1;i<=n;i++,j+=2)
    {
        ans+=(double)(fib(i))/fact(j);
    }
    return ans;
}

int main()    
{    
    int num;    
    printf("Enter the number of elements: ");  
    scanf("%d",&num);  
    printf("The Final result is: %lf\n",final(num));
    return 0;  
}