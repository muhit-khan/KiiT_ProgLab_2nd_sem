/*(25/03/2022) Assignment_3(For 6 Numbers) */


#include<stdio.h>
    int main(){
    int n1,n2,n3,n4,n5,n6,large2,learge3,largest,secondlargest=0,thirdlargest=0,temp=0;
    printf("Enter first integer\t:\t");
    scanf("%d", &n1);
    printf("Enter second integer\t:\t");
    scanf("%d", &n2);
    printf("Enter third integer\t:\t");
    scanf("%d", &n3);
    printf("Enter fourth integer\t:\t");
    scanf("%d", &n4);
    printf("Enter fifth integer\t:\t");
    scanf("%d", &n5);
    printf("Enter sixth integer\t:\t");
    scanf("%d", &n6);
    largest=n1;
    temp=n2;
     if (temp >= largest){
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = temp;
            } 
        else if (temp >= secondlargest){
                thirdlargest = secondlargest;
                secondlargest = temp;
            } 
            else if (temp > thirdlargest){
                thirdlargest = temp;
        }

        temp=n3;

        if (temp >= largest){
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = temp;
            } 
        else if (temp >= secondlargest){
                thirdlargest = secondlargest;
                secondlargest = temp;
            } 
            else if (temp > thirdlargest){
                thirdlargest = temp;
        }

        temp=n4;
        if (temp >= largest){
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = temp;
            } 
        else if (temp >= secondlargest){
                thirdlargest = secondlargest;
                secondlargest = temp;
            } 
            else if (temp > thirdlargest){
                thirdlargest = temp;
        }
        temp=n5;
        if (temp >= largest){
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = temp;
            } 
        else if (temp >= secondlargest){
                thirdlargest = secondlargest;
                secondlargest = temp;
            } 
            else if (temp > thirdlargest){
                thirdlargest = temp;
        }
        temp=n6;
        if (temp >= largest){
                thirdlargest = secondlargest;
                secondlargest = largest;
                largest = temp;
            } 
        else if (temp >= secondlargest){
                thirdlargest = secondlargest;
                secondlargest = temp;
            } 
            else if (temp > thirdlargest){
                thirdlargest = temp;
        }

        printf("Second and Third Largest Numbers are: %d and %d",secondlargest,thirdlargest);
    

    return 0;
}
