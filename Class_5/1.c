/*(18/03/2022) Assignment_1 */
#include<stdio.h>
int main()
{
    int a, b, min;
    printf("Enter first integer\t:\t");
    scanf("%d", &a);
    printf("Enter second integer\t:\t");
    scanf("%d", &b);
    min = (a<b)?a:b;
    printf("Minimum Value\t\t:\t%d", min);
    return 0;
}