#include <stdio.h>

void f1(int x){
    printf("%d",x);
    x++;
}

void f2(int *y){
    printf("%d",*y);
    (*y)++;
}

int main() {
   int a,*b;
   printf("Enter a number: ");
   scanf("%d",&a);
   b=&a;
   f1(a);
   printf("\nThe value of a after function call by value %d",a);
   printf("\n");
   f2(b);
   printf("\nThe value of a function call by reference %d",a);
   return 0;
}