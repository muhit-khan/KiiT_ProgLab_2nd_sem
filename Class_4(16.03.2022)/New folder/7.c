/* Prog_7 */

#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, fifth;
    printf("\nEnter a 5-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 10000;
    second = (num / 1000) - first*10;
    third = (num / 100) - (first*100 + second*10);
    fourth = (num / 10) - (first*1000 + second*100 + third*10);
    fifth = num - (num/10)*10;
    printf("%d\n%d\n%d\n%d\n%d", first, second, third, fourth, fifth);
    return 0;
}