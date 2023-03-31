#include<stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter the size of Array: ");
	scanf("%d", &n);
	int a[n];
    for(i = 50, j = 49,  k = 0, l = n; i > j; i -= 2, j -= 2, k++, l--)
    {
        a[k] = i;
        a[l] = j;
    }
        
    for(int p = 0; p<= n; p++)
	{
		printf("%d ", a[p]);
	}
	printf("\n");

    return 0;
}