//q_3.4
#include<stdio.h>
int main()
{
	int i, j, k = 10;
	for(i = 1; i <= 4; i++)
	{
		//printf("%d ", k);
		for(j = 1; j <= i; j++)
		{
			printf("%d   ", k);
			k--;
		}
		printf("\n");
		//k++;	
	}
	return 0;
}
