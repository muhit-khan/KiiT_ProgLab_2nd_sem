/*(18/03/2022) Assignment_4 */
#include<stdio.h>
int main()
{
    int h1, m1, h2, m2, m, h;
    printf("Enter first time\t:\t");
    scanf("%2d:%2d", &h1, &m1);
    printf("Enter second time\t:\t");
    scanf("%d:%d", &h2, &m2);
    m=m1-m2;
    m=(m>=0)?(m):(m1+60-m2);
    h=(m<0)?((h1-1)-h2):h1-h2;
    h =(h<0)?(h+24):h;
    printf("Difference between times:\t%d:%d",h, m );

    return 0;
}