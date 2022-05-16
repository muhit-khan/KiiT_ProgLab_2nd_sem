#include<stdio.h>
#include <ctype.h>

void modified_string_one(char s[], int start, int end)
{
    char temp;
    int i=0;
    while(start<=end)
    {
        int j=0;

        if(j%2==0){
            s[start+i]=toupper(s[start+i]);
        }
        else{
            s[start+i]=tolower(s[start+i]);
        }
        start++;
        end--;
        i++;
    }
}

void modified_string_two(char s[], int start, int end)
{
    char temp;
    int i=0;
    while(start<=end)
    {
       

        if(i==0){
            s[start+i]=toupper(s[start+i]);
        }
        else{
            s[start+i]=tolower(s[start+i]);
        }
        start++;
        end--;
       i++;
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
        modified_string_one(s, start, end-1);
        start=end+1;
    }
    printf("%s \n",s);

    end=0;
    start=0;
    while(s[end])
    {
        for(end=start;s[end]&&s[end]!=' ';end++);
        modified_string_two(s, start, end-1);
        start=end+1;
    }
    printf("%s ",s);
    return 0;
}