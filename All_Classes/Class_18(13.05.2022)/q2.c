#include <stdio.h>


int comp(int x,int y,int z){
    int c=((x<y)?((x<z)?x:z):((y<z)?y:z));
    int d=((x>y)?((x>z)?x:z):((y>z)?y:z));
    printf("The minimum number is %d",c);
    printf("\nThe maximum number is %d",d);
    return 0;
}

int main() {
   int a,b,c;
   printf("Enter three numbers: ");
   scanf("%d%d%d",&a,&b,&c);
   comp(a,b,c);
   return 0;
}