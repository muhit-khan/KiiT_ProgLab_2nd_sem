/* Prog_4 */

#include <stdio.h>
  
int main()
{
    int x, y, z;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of y: ");
    scanf("%d", &y);
    printf("Enter Value of z: ");
    scanf("%d", &z);
  
    int tmp_x = x;
    int tmp_y = y;
    int tmp_z = z;
    x = tmp_z;
    y = tmp_x;
    z = tmp_y;
  
    printf("\nAfter Interchange: x = %d, y = %d, z = %d", x, y, z);
    return 0;
}