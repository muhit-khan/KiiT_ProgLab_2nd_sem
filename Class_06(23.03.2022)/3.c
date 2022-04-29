/*(23/03/2022) Assignment_3 */
#include<stdio.h>
int main()
{
    int a = 0x5B;
    int b = 0x64;
    int a_B = (a & 0xF);
    int b_4 = (b & 0xF);
    int num1 = (b_4 << 4) | a_B;
    int num2 = (a_B << 4) | b_4;
    printf("Output1: %x\nOutput2: %x", num1, num2);
    return 0;
}