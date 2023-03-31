//q_3.4
#include<stdio.h>
int main()
{
	int i, j;
	for(i = 1; i <= 5; i++)
	{
		if(i % 2 != 0)
		{
			for(j = 1; j <= i; j++)
			{
				printf("%d   ", j);
			}
		}
		else if(i % 2 == 0)
		{
			for(j = 1; j <= i; j++)
			{
				printf("*   ");
			}
		}
		printf("\n");
	}
	return 0;
}