#include<stdio.h>
int main()
{
	int n;
	float init, sum = 0;
	printf("Enter an final integer\t:\t");
	scanf("%d", &n);
	printf("\n");
	init = 3;
	while(init <= n)
	{
		sum += 1/init;
		init += 2;
	}
	printf("Summation is %.3f\n\n", sum);
	return 0;
}
