/*(18/03/2022) Assignment_3 */

#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, middle_duo, extreme_duo, sq_middle_duo;
    char gd, bad;

    printf("\nEnter a 4-digit Integer: ");
    scanf("\n%d",&num);
    first = num / 1000;
    second = (num / 100) - (first * 10);
    third = (num / 10) - (first*100 + second*10);
    fourth = num - (num/10)*10;
    middle_duo = second * 10 + third;
    extreme_duo = first * 10 + fourth;
    sq_middle_duo = middle_duo * middle_duo; 

    if(sq_middle_duo == extreme_duo)
    {
        printf("\n%d is a good number.\n", num);
    }
    else
    {
        printf("\n%d is not a good number.\n", num);
    }
    return 0;
}