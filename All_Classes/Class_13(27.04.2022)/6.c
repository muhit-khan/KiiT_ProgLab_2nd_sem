//Q6_muhit
#include<stdio.h>
int main()
{
	int a[9], i, j;
	for(int i = 0; i < 9; i++)
	{
		printf("Input value-%d: ", i+1);
		scanf("%d", &a[i]);
	}
	 
	 	for(int i = 0, k = 3; i < 9; i += k, k++)
		{
			
			j = i + 1;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	printf("\nArray in new order: ");
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
