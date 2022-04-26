//q_3
#include<stdio.h>
int main()
{
	char i = 'A', j = 'Z';

    	X:
    		printf("%c ", i); 
    		i++;		
    		if(i<=j)
        		goto X;
	return 0;
}
