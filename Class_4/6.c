/* Prog_6 */

#include<stdio.h>
int main()
{
    int num, first, second, third;
    printf("\nEnter a 3-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 100;
    second = (num / 10) - (first * 10);
    third = num - (num/10)*10;
    printf("Reversed number: %d%d%d", third, second, first);
    return 0;
}