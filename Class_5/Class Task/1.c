/* (18/03/2022)Prog_1 */

#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, first_duo, second_duo, sum;
    printf("\nEnter a 4-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 1000;
    second = (num / 100) - (first * 10);
    third = (num / 10) - (first*100 + second*10);
    fourth = num - (num/10)*10;
    first_duo = first*10 + second;
    second_duo = third*10 + fourth;
    sum = first_duo + second_duo;
    printf(" %d + %d = %d", first_duo, second_duo, sum);
    return 0;
}