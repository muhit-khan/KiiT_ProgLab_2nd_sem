//Q2_muhit
#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the size of Array: ");
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		printf("Input value-%d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0;i< n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i = n-1;i>= 0; i--)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
