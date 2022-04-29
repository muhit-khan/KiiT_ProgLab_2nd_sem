/* Prog_1 */

#include<stdio.h>
int main()
{
    int d, o, h;
    printf("Enter an decimal integer\t: ");
    scanf("%i", &d);
    printf("Enter an octal integer\t\t: ");
    scanf("%i", &o);
    printf("Enter an hexa-decimal integer\t: ");
    scanf("%i", &h);
    printf("\n\nInputed integer as decimal\t\t: %d\nInputed octal as decimal\t\t: %d\nInputed hexadecimal as decimal\t\t: %d", d, o, h);
    printf("\n\nInputed integer as octal\t\t: %o\nInputed octal as octal\t\t\t: %o\nInputed hexadecimal as octal\t\t: %o", d, o, h);
    printf("\n\nInputed integer as hexadecimal\t\t: %x\nInputed octal as hexadecimal\t\t: %x\nInputed hexadecimal as hexadecimal\t: %x", d, o, h);
    
    return 0;
}