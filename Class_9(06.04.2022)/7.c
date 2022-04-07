/*(06/04/2022)  Assignment_07 */
#include<stdio.h>
int main()
{
	int n, fact = 1;
	printf("\nEnter an Integer\t\t:\t");
	scanf("%d", &n);
	while(n >= 1)
	{
		fact *= n;
		n--;
	}
	printf("Factorial of given number is\t:\t%d\n", fact);
	return 0;
}