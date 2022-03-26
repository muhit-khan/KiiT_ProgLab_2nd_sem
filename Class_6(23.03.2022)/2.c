/*(23/03/2022) Assignment_2 */
#include<stdio.h>
int main()
{
    int a = 0x5B;
    int b = 0x64;
    int num = (b << 8) | a;
    printf("%x", num);
    return 0;
}