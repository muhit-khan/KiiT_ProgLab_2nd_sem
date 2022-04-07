#include<stdio.h>
int main()
{
	int init, final, n;
	printf("Enter an initial integer:\t");
	scanf("%d", &init);
	printf("Enter an final integer\t:\t");
	scanf("%d", &final);
	printf("\n\n");
	while(init < final+1)
	{
		if(init % 7 == 0 && init % 8 == 0)
		{
			printf("\t\t\t\t%d is devided by both 7 and 8\n", init);
		}
		init++;
	}
	

	return 0;
}
