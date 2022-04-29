//Q8_muhit
#include<stdio.h>
int main()
{  
    int i,n,a[100];
    printf("\nEnter the Decimal value: ");
    scanf("%d",&n);
    if(n == 0)
    {
        printf("\nBinary Value: 0");
    }
    else
    {
        for(i=0;n!=0;i++)
        {
          a[i]=n%2;
          n=n/2;
        }
        printf("\nBinary Value: ");
        for(int j = i-1; j >= 0; j--)
	      {
	      	printf("%d", a[j]);
	      }
    }
    return 0;
}