/*(18/03/2022) Assignment_4 */
#include<stdio.h>
int main()
{
    int h1, m1, h2, m2, m, h;
    printf("Enter first time\t:\t");
    scanf("%2d:%2d", &h1, &m1);
    printf("Enter second time\t:\t");
    scanf("%d:%d", &h2, &m2);
    if(m1>=m2)
    {
        m = m1 - m2;
    }
    else
    {
        m = (m1+60) - m2;
        h1 = h1-1;
    }
    if(h1>=h2)
    {
        h = h1 - h2;
    }
    else
    {
        h = h2 - h1;
    }
    printf("Difference between times:\t%d:%d",h, m );

    return 0;
}