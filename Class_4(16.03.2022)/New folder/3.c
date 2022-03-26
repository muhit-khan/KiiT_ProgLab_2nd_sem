/* Prog_3 */

#include<stdio.h>
int main()
{
    float num, dec;
    int integer;
    printf("\nEnter a Real number with 2 decimal digit: ");
    scanf("\n%f",&num);
    integer = num;
    dec = num - integer;
    printf("\n Inputed number\t: %.2f", num);
    printf("\n Integer part\t: %i", integer);
    printf("\n Decimal part\t: %.0f", dec * 100);
}