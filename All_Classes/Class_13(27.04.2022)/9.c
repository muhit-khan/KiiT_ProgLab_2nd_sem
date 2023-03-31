#include<stdio.h>
int main()
{
	int num,c=0, a[100];
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int k = 0; //array element position
    for(int i = 1; i<=num; i++)
    {
		if (num%i==0)
		{
			c=c+1;
		}
	}
    if(c==2)
        {
            printf("%d ", num);
            //a[k] = num;
            //k++;
        }
    /*int q = sizeof(a)/4;
    for(int p = 0; p<= q; p++)
	{
		printf("%d ", a[p]);
	}
	*/

    
    return 0;
}