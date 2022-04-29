/* Prog_1 */

#include<stdio.h>
int main()
{
    char a;
    int b;
    short int c;
    long int d;
    long long int e;
    float f;
    double g;
    long double h;
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%hd",&c);
    scanf("%ld",&d);
    scanf("%lld",&e);
    scanf("%f",&f);
    scanf("%lf",&g);
    scanf("%Lf",&h);
    printf("%c\t%d\t%hd\t%ld\t%lld\t%f\t%lf\t%Lf", a,b,c,d,e,f,g,h);
    return 0;
}