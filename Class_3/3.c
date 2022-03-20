/* Prog_3 */

#include <stdio.h>
  
int main()
{
    int a, b;
    printf("Enter Value of a: ");
    scanf("%d", &a);
    printf("\nEnter Value of b: ");
    scanf("%d", &b);
  
    int c = a;
    a = b;
    b = c;
  
    printf("\nAfter Interchange: a = %d, b = %d", a, b);
    return 0;
}