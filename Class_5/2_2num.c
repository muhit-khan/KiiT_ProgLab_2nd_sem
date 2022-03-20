/*(18/03/2022) Assignment_2(For 3 Numbers) */
#include<stdio.h>
int main()
{
    int a, b, c, min, max;
    printf("Enter first integer\t:\t");
    scanf("%d", &a);
    printf("Enter second integer\t:\t");
    scanf("%d", &b);
    printf("Enter third integer\t:\t");
    scanf("%d", &c);
    min = (a<b)?((a<c)?a:c):((b<c)?b:c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n\nMinimum Value\t\t:\t%d\nMaximum Value\t\t:\t%d", min, max);
    return 0;
}