/* Prog_4 */

#include<stdio.h>
int main()
{
    int num, first, middle_3, last, last_4;
    printf("\nEnter a 5-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 10000;
    last_4 = num - first * 10000;
    printf("Three middle digits of given integer: %d\b ", last_4);
    return 0;
}