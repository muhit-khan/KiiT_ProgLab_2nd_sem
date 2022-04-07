/*(06/04/2022)  Assignment_02 */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int a = 1;
	while(a < 11)
	{
		
		printf("%d x %d = %d\n", a, n, a*n);
		a++;
	}
	

	return 0;
}
