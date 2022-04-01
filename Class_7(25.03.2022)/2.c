/*(25/03/2022) Assignment_2 */
#include<stdio.h>
int main()
{
    int h1, m1, h2, m2, m, h, h24_1, h24_2, ampm1, ampm2, h_l, h_s;
    printf("################\tam = 1, pm = 0\t################\n");
    printf("Enter first time(hh:mm 1/0)\t:\t");
    scanf("%d:%d %d", &h1, &m1, &ampm1);
    printf("Enter second time(hh:mm 1/0)\t:\t");
    scanf("%d:%d %d", &h2, &m2, &ampm2);
    
    if(ampm1 == 1 && h1 == 12)
    {
        h24_1 = 0;
    }
    else if(ampm1 == 0 && h1 != 12)
    {
        h24_1 = h1 + 12; 
    }
    else
    {
        h24_1 = h1;
    }
        if(ampm2 == 1 && h2 == 12)
    {
        h24_2 = 0;
    }
    else if(ampm2 == 0 && h2 != 12)
    {
        h24_2 = h2 + 12; 
    }
    else
    {
        h24_2 = h2;
    }

    if(h24_1 > h24_2)
    {
        if(m1>=m2)
        {
            m = m1 - m2;
            h_l = h24_1;
            h_s = h24_2;
            h = h_l - h_s;
        }
        else
        {
            m = (m1+60) - m2;
            h1 = h24_1- 1;
            h_l = h1;
            h_s = h24_2;
            h = h_l - h_s;
        }
    printf("\n%d:%d %d is earlier.\n",h2, m2, ampm2==1?"AM":"PM");   
        
    }
    else
    {
        if(m2>=m1)
        {
            m = m2 - m1;
            h_l = h24_2;
            h_s = h24_1;
            h = h_l - h_s;
        }
        else
        {
            m = (m2+60) - m1;
            h2 = h24_2- 1;
            h_l = h2;
            h_s = h24_1;
            h = h_l - h_s;
        }
    printf("\n%d:%d %d is earlier \n",h1, m1, ampm1==1?"AM":"PM");
        
    }
    printf("Time Difference: %d:%d", h, m);
    
    return 0;
}