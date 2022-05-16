#include<stdio.h>
void reverse_string(char s[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}
int main()
{   
    char s[200];
    printf("Enter the string: ");
    scanf("%[^\n]s", s);
    int start, end;
    end=0;
    start=0;
    while(s[end])
    {
        for(end=start;s[end]&&s[end]!=' ';end++);
        reverse_string(s, start, end-1);
        start=end+1;
    }
        printf("%s ",s);
    return 0;
}
