//q_1_goto
#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	i = n;
    	X:
    		printf("%d ", i);
    		i--;
    	if(i>=1)
        	goto X;
	return 0;
}
