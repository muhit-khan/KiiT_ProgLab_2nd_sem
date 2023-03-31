#include<stdio.h>

int dis(int a, int b)
{
    if(a+b < 100)
    {
        printf("%d ",a+b);
        dis(b,a+b);
    }
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d %d ",x,y);
    dis(x,y);
}

//AJAY