#include <stdio.h>

long long int fact(int n)
{
    long long int ans=1;
        for(int i=2;i<=n;i++) 
    ans*=i;
    return ans;
}

int main() 
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("%lld\n",fact(num));
    return 0;
}
