/*(23/03/2022) Assignment_7(Integer) */
#include<stdio.h>
int main()
{
    int n = 259;
    int byte1 = n & 0xff;
    int byte2 = (n >> 8) & 0xff;
    int byte3 = (n >> 16) & 0xff;
    int byte4 = (n >> 24) & 0xff;
  
    printf("1st byte(from right): %d \n2nd byte(from right): %d \n3rd byte(from right): %d \n4th byte(from right): %d", byte1, byte2, byte3, byte4);
    return 0;
}
