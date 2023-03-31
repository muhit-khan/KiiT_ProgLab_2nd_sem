/*(23/03/2022) Assignment_6 */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int last_digit = num % 10;
    int rounded_num = (last_digit < 5)? (num - last_digit):(num - last_digit + 10);
    printf("Rounded numder: %d", rounded_num);
    return 0;
}