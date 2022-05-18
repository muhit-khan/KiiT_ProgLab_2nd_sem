#include <stdio.h>


int comp(int x[],int y){
    int s=0;
    for(int i=0;i<y;i++){
        s+=x[i];
    }
    return s;
}

int main() {
    int n;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
       printf("Enter %d elements: ",i);
       scanf("%d",&a[i]);
   }
   printf("sum = %d",comp(a,n));
   return 0;
}