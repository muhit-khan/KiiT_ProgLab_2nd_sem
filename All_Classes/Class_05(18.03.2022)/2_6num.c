/*(18/03/2022) Assignment_2(For 6 Numbers) */
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, abc_min, abc_max, def_min, def_max, min, max;
    printf("Enter first integer\t:\t");
    scanf("%d", &a);
    printf("Enter second integer\t:\t");
    scanf("%d", &b);
    printf("Enter third integer\t:\t");
    scanf("%d", &c);
    printf("Enter fourth integer\t:\t");
    scanf("%d", &d);
    printf("Enter fifth integer\t:\t");
    scanf("%d", &e);
    printf("Enter sixth integer\t:\t");
    scanf("%d", &f);

    abc_min = (a<b)?((a<c)?a:c):((b<c)?b:c);
    abc_max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    def_min = (d<e)?((d<f)?d:f):((e<f)?e:f);
    def_max = (d>e)?((d>f)?d:f):((e>f)?e:f);
    
    min = (abc_min<def_min)?abc_min:def_min;
    max = (abc_max>def_max)?abc_max:def_max;


    printf("\n\nMinimum Value\t\t:\t%d\nMaximum Value\t\t:\t%d", min, max);
    return 0;
}