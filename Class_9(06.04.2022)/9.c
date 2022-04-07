/*(06/04/2022)  Assignment_09 */
#include<stdio.h>
int main()
{
	int n, init = 2, x, y;
    float  fact_DENO = 1.0, fact_NUME = 1.0, sum=0;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    while(n >= init)
    {
        y = n - 1;
        while(y)
        {
            fact_NUME*=y;
            y--;
        }
        
        x = n;
        while(x)
        {
            fact_DENO*=x;
            x--;
        }
        sum += fact_NUME/fact_DENO;
        n -= 2;
        fact_NUME = 1;
        fact_DENO = 1;
    }
    printf("Summation is = %.3f",sum);
	return 0;
}