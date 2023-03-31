
#include<stdio.h>
int numb(char a[],int *count){
    for (int i=0; a[i]!='\0'; i++){
        *count = *count+1;
    }
}
int main(){
    char c[30];
    int count=0;
    scanf("%[^\n]s",c);
    numb(c,&count);
    printf("%d",count);
    
}