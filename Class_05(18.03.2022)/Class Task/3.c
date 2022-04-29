/* (18/03/2022)Prog_3 */

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
    printf("Rearranged Integer: %d%d%d%d", fourth, third, second, first);
    return 0;
}