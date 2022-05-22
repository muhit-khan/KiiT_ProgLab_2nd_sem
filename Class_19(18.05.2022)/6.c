#include<stdio.h>
int main()
{
    struct student
    {
        char name[30];
        int roll, marks[3];
    }s;
    printf("Enter student's name: ");
    scanf("%s",s.name);
    printf("Enter student's roll: ");
    scanf("%d",&s.roll);
    int total_mark=0;
    for(int i=1; i<=3; i++)
    {
        printf("Enter student's mark for subject-%d: ", i);
        scanf("%d", &s.marks[i]);
        total_mark = total_mark + s.marks[i];
    }
    int avg_mark = total_mark/3;
    printf("\nName: %s\nRoll: %d\nAverage Marks: %d", s.name, s.roll, avg_mark);
    return 0;   
}