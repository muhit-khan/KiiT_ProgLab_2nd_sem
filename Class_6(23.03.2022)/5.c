/*(23/03/2022) Assignment_5 */
#include<stdio.h>
int main()
{
    int a = 0x5A34BDA2;
    int ext_right_duo = a & 0xFF;
    int mid_right_duo = (a>>8) & 0xFF;
    int mid_left_duo = (a>>16) & 0xFF;
    int ext_left_duo = (a>>24) & 0xFF;
    printf("%x%x%x%x", ext_left_duo, mid_right_duo, mid_left_duo, ext_right_duo);
    return 0;
}