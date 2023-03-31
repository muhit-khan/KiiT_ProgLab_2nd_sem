#include<stdio.h>

void sum(int x[4][3], int *y){
        for(int i=0;i<4;i++){
                int s=0;
                for(int j=0;j<3;j++){
                        s+=x[i][j];
                }
                y[i]=s;
        }
}

int main(){
        int a[4][3]={{1,2,3},{2,3,4},{4,5,6},{3,5,7}};
        int b[4];
        sum(a,b);
        printf("%d",*b);
        printf("\n%d",*b+1);
        printf("\n%d",*b+2);
        printf("\n%d",*b+3);
        return 0;
}