/* Prog_5 */

#include<stdio.h>
int main()
{
    float a, b, c, a_disc,b_disc, c_disc;
    printf("Enter value of 1st item: ");
    scanf("%f", &a);
    printf("Percentage of discount on 1st item: ");
    scanf("%f", &a_disc);
    printf("Enter value of 2nd item: ");
    scanf("%f", &b);
    printf("Percentage of discount on 2nd item: ");
    scanf("%f", &b_disc);
    printf("Enter value of 3rd item: ");
    scanf("%f", &c);
    printf("Percentage of discount on 3rd item: ");
    scanf("%f", &c_disc);
    float a_fianl = a - a*a_disc/100;
    float b_final = b - b*b_disc/100;
    float c_final = c - c*c_disc/100;
    float total_final = a_fianl + b_final + c_final;
    printf("No.  Details\tReg. Price\tDiscount\tFinal Price");
    printf("\n--   -------\t----------\t--------\t-----------");
    printf("\n1.  1st item\tINR %.2f\t%.2f%%\t\tINR %.2f", a, a_disc, a_fianl);
    printf("\n2.  2nd item\tINR %.2f\t%.2f%%\t\tINR %.2f", b, b_disc, b_final);
    printf("\n3.  3rd item\tINR %.2f\t%.2f%%\t\tINR %.2f", c, c_disc, c_final);
    printf("\n----------------------------------------------------------");
    printf("\n\t\t\t\tTotal\t\tINR %.2f", total_final);

    return 0;
}


