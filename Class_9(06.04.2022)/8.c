#include<stdio.h>
int main()
{
	int n, s = 2, fact = 1,x;
    float  sum=0;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    while(n>=2)
    {
        x=n;
        while(x)
        {
            fact*=x;
            x--;
        }
        sum+=1.0/fact;
        n--;
        fact=1;
    }
    printf("Summation is = %.3f",sum);
	return 0;
}