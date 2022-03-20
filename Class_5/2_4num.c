/*(18/03/2022) Assignment_2(For 4 Numbers) */
#include<stdio.h>
int main()
{
    int a, b, c, d, ab_min, ab_max, cd_min, cd_max, min, max;
    printf("Enter first integer\t:\t");
    scanf("%d", &a);
    printf("Enter second integer\t:\t");
    scanf("%d", &b);
    printf("Enter third integer\t:\t");
    scanf("%d", &c);
    printf("Enter fourth integer\t:\t");
    scanf("%d", &d);
    
    ab_min = (a<b)?a:b;
    ab_max = (a>b)?a:b;
    cd_min = (c<d)?c:d;
    cd_max = (c>d)?c:d;
    min = (ab_min<cd_min)?ab_min:cd_min;
    max = (ab_max>cd_max)?ab_max:cd_max;

    printf("\n\nMinimum Value\t\t:\t%d\nMaximum Value\t\t:\t%d", min, max);
    return 0;
}