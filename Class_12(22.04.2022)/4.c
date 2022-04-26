//q_4
#include<stdio.h>
int main()
{
	int i = 5, j=0, k, l;
	outer_loop:
		if(i%2 ==1)
		{
			inner_loop1:
				k = 1;
			{
				printf("%d ", j+k);
			}
				k++;
				if(k<=i)
					goto inner_loop1;
		}
		else
		{
			inner_loop2:
				l = i;
			{
				printf("%d ", j+l);
			}
				l--;
				if(l>=1)
					goto inner_loop2;
		}	
		printf("\n");
		i--;
		if(i>=1)
			goto outer_loop;	
	return 0;
}

//using_for_loop
/*
#include<stdio.h>
int main()
{
	int i, j=0, k, l;
	for(i = 5; i >= 1; i--)
	{
		if(i%2 ==1)
		{
			for(k=1; k<=i; k++)
			{
				printf("%d ", j+k);
			}
		}
		else if(i%2 ==0)
		{
			
			for(l=i; l>=1; l--)
			{
				
				printf("%d ", j+l);
			}
		}
		j = j + i;		
		printf("\n");		
	}
	return 0;
}
*/
