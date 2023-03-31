#include <stdio.h>

void sum(int a){
    int b,c=1,d=a/10;
    while(d!=0){
        c*=10;
        d/=10;
    }
    if(a>=10){
        b=a/c;
        a%=c;
        printf("%d ",b);
        sum(a);
    }else{
        printf(" %d",a);
    }
}

int main() {
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   printf("The digits in %d is :\n",x);
   sum(x);
   return 0;
}