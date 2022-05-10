//q2_muhit
#include <stdio.h>  
#include <string.h>  
int main()  
{
    char str1[11], temp;
    int i, j =0;
    printf (" Enter a string of 10 character: ");
    scanf( "%s", str1);
    for(i = 0, j = strlen(str1) - 1; i <j; i++, j--)
    {
        temp = str1[j];
        str1[j] = str1[i];
        str1[i] = temp;
    }
    printf(" The reversed of the string: %s", str1);
    return 0;
}