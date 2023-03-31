//Q3_muhit
#include<stdio.h>
int main()
{
	int a[6], i, j, k;
	for(int i = 0; i < 6; i++)
	{
		printf("Input value-%d: ", i+1);
		scanf("%d", &a[i]);
	}
	 for(int i = 0; i < 6; i += 3)
	{
		j = i + 2;
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;	
	}
	printf("\nArray in new order: ");
	for(k = 0; k < 6; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");

	return 0;
}
