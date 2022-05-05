#include<stdio.h>
int main()
{
    int a=10,*p;
    int **q;   // Pointer to Pointer or Double Pointer
    int ***r; //Triple Pointer
    
    p=&a; //Address of a
    printf("\n Value of  A           : %d",a);
    printf("\n Address of  A         : %d",&a);
    printf("\n Value of  P           : %d",p);
    printf("\n Address of  P         : %d",&p);
    printf("\n P Dereferencing       : %d",*p);

    q=&p;//Address of p
    printf("\n Value of  P           : %d",p);
    printf("\n Address of  P         : %d",&p);
    printf("\n Value of  q           : %d",q);
    printf("\n Address of  q         : %d",&q);
    printf("\n **Q Dereferencing     : %d",**q);

    r=&q;//Address of q
    printf("\n Value of  q           : %d",q);
    printf("\n Address of  q         : %d",&q);
    printf("\n Value of  r           : %d",r);
    printf("\n Address of  r         : %d",&r);
    printf("\n ***r Dereferencing    : %d",***r);
 
    return 0;
}