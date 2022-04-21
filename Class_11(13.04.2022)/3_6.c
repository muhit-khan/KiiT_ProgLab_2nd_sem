//q_3.6
#include<stdio.h>
int main()
{
	int i, j, k;
    printf("*\n");
	for(i = 1; i <= 4; i++)
	{
        printf("*");
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }
		printf("*\n");
	}
    for(k = 1; k <= i+1; k++)
    {
        printf("*");
    }
	return 0;
}