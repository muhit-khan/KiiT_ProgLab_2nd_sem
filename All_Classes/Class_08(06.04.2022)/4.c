#include<stdio.h>
int main()
{
	int init, final, sum = 0;
	printf("Enter an initial integer:\t");
	scanf("%d", &init);
	printf("Enter an final integer\t:\t");
	scanf("%d", &final);
	printf("\n\n");
	while(init < final+1)
	{
		if(init % 2 == 0)
		{
			sum += init;
		}
		init++;
	}
	printf("Summation is %d\n\n", sum);
	return 0;
}
