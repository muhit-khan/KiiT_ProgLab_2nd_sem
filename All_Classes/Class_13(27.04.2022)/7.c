//Q7_muhit
#include<stdio.h>
int main()
{
	int a[7], i, j;
	for(int i = 0; i < 7; i++)
	{
		printf("Input value-%d: ", i+1);
		scanf("%d", &a[i]);
	}
	 
	 	for(int i = 0, j = 4; i < 3; i++, j++)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	printf("\nArray in new order: ");
	for(int i = 0; i < 7; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}