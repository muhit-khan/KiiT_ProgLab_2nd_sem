/* (18/03/2022)Prog_2 */

#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, middle_duo, mult, sub;
    printf("\nEnter a 4-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 1000;
    second = (num / 100) - (first * 10);
    third = (num / 10) - (first*100 + second*10);
    fourth = num - (num/10)*10;
    mult = first * fourth;
    middle_duo = second*10 + third;
    sub = middle_duo - mult;
    printf(" %d - (%d x %d) = %d", middle_duo, first, fourth, sub);
    return 0;
}