/* Prog_5 */

#include<stdio.h>
int main()
{
    int num, first, second, third, fourth;
    printf("\nEnter a 4-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 1000;
    second = (num / 100) - (first * 10);
    third = (num / 10) - (first*100 + second*10);
    fourth = num - (num/10)*10;
    printf("%d\n%d\n%d\n%d", first, second, third, fourth);
    return 0;
}