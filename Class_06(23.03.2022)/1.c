/*(23/03/2022) Assignment_1 */
#include<stdio.h>
int main()
{
    int num = 897;
    int d9 = (num >> 8) & 1;
    int e5 = (num >> 4) & 1;

    printf("\nThe %dth bit is set to %d", 5, e5);
    printf("The %dth bit is set to %d", 9, d9);
    return 0;
}