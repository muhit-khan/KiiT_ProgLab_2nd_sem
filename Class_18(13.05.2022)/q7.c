#include <stdio.h>
int fact(int n)
     {
		if (n==0 || n==1)
		return 1;
		else 
		{
			return n * fact(n-1);
			}
}
int fib(int n)
     {
		if (n==0 || n==1)
		return 1;
		else 
		{
			return fib(n-1)+fib(n-2);
			}
}

int main()
{
	int a =5;
	int n=fact(a); 
	printf("Factorial of 5 is: %d\n",n);
	int x;
	x=fib(7); 
	printf("Fibonaci of 8 is: %d",x);
	return 0;
}