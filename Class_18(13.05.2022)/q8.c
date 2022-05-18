#include <stdio.h>

int sum(int a){
    int b;
    if(a!=0){
        b=a%10;
        a/=10;
    }else{
        return 0;
    }
    return b+sum(a);
}

int main() {
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   int s=sum(x);
   printf("The sum of digits of number %d is %d",x,s);
   return 0;
}