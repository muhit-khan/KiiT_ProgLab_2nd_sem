/*(23/03/2022) Assignment_7(Real_numberer) */
#include<stdio.h>
int main()
{
    int n = 983.567;
    int byte1 = n & 0xff;
    int byte2 = (n >> 8) & 0xff;
    int byte3 = (n >> 16) & 0xff;
    int byte4 = (n >> 24) & 0xff;
    int byte5 = (n >> 32) & 0xff;
    int byte6 = (n >> 40) & 0xff;
    int byte7 = (n >> 47) & 0xff;
    int byte8 = (n >> 56) & 0xff;
  
    printf("1st byte(from left): %d \n2nd byte(from left): %d \n3rd byte(from left): %d \n4th byte(from left): %d \n5th byte(from left): %d \n6th byte(from left): %d\n7th byte(from left): %d\n8th byte(from left): %d", byte1, byte2, byte3, byte4, byte5, byte6, byte7, byte8);
    return 0;
}
