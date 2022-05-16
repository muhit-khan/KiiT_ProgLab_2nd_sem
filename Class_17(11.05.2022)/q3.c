#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[200],mid[100];
    int index = 0, i,j;
 
    printf("Enter the string: ");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' '){
            index=i+1;
            break;
    }
}
for(i=index,j=0;s[i]!=' ';i++,j++){
    mid[j]=s[i];
}

printf("The middle word: %s \nand lettercount: %d\n",mid,strlen(mid));
}
