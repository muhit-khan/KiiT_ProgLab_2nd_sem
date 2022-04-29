/*(23/03/2022) Assignment_4 */
#include<stdio.h>
int main()
{
    int a = 0x46;
    int b = 0x39;
    int a_4 = a >> 4;
    int a_6 = (a & 0xF);
    int b_3 = b >> 4;
    int b_9 = (b & 0xF);
    int num = ((a_4 << 12) | (b_9 << 8)) | ((b_3 << 4) | a_6);
    printf("Shuffled number: %x", num);
    //printf("%x %x %x %x", a_4, a_6, b_3, b_9);
    return 0;
}