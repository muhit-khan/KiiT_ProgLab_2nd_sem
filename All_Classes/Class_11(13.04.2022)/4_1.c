//q_4.1
#include<stdio.h>
int main()
{
    int i, j, k, n = 5, m = 1;
    for(i = 3; i >= 1; i--)
    {
        for(j = n; j >= 1; j--)
        {
            printf("* ");
        }
        n = n - 2;
        printf("\n");
        for(k = 0; k < m; k++)
        {
            printf("  ");
        }
        m++;
    }
	return 0;
}