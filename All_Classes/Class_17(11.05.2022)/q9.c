#include <stdio.h>

void star(){
    for(int i=3;i>=0;i--){
        for(int j=i;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }
    printf("ABC\n");
}

void hash(){
    for(int i=2;i>=0;i--){
        for(int j=i;j>=0;j--){
            printf("# ");
        }
        printf("\n");
    }
    printf("DEF\n");
}

void equ(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=i;j++){
            printf("= ");
        }
        printf("\n");
    }
    printf("pqr\n");
}
void star_two(){
    for(int i=1;i>=0;i--){
        for(int j=i;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }
    
}

int main(){
    star();
    hash();
    equ();
    star_two();
return 0;
}