//q_2
#include<stdio.h>
int main()
{
	int i = 9, j = 2, n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
    	X:
    		printf("%d %d ", i, j); 
    		i = i +j;
    		j = i + j;		
    		if(j<=n)
        		goto X;
	return 0;
}
