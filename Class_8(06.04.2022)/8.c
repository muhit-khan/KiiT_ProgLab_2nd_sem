#include<stdio.h>
int main()
{
	int n, s = 2, fact = 1, sum;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    while(s <= n)
    {
        while(s >= 1)
        {
            fact = fact * s;
            s--;
        }
        sum += 1/fact;
        s++;
    }
    printf("%d",sum);
	return 0;
}