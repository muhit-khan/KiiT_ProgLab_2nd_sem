#include<stdio.h>
struct teacher
{
    char teach_name[20];
    struct student
    {
        char stu_name[20];
        int sub[3];
    }stu1, stu2, stu3;
};
/*int max(int *arr[])
{
    int max_mark = 0;
    for(int i = 0; i< 18; i++)
    {
        if(arr[i] > max_mark)
            max_mark = arr[i];
    }
    return max_mark;
}*/
int avg(int sub1, int sub2, int sub3)
{
    int avg_mark = (sub1 +sub2 + sub3)/3;
    return avg_mark;
}

int main()
{
    struct teacher teach1 = {"Dr. Samaresh",{"Harry", {10, 20, 30}},{"Thomas", {20, 30, 40}},{"Mark",{ 30, 40, 50}}};
    struct teacher teach2 = {"Dr. Amulya",{"Ricky", {40, 50, 60}},{"James", {50, 60, 70}},{"Maddy",{ 60, 70, 80}}};
    int harry_avg = avg(teach1.stu1.sub[0], teach1.stu1.sub[1], teach1.stu1.sub[2]);
    int thomas_avg = avg(teach1.stu2.sub[0], teach1.stu2.sub[1], teach1.stu2.sub[2]);
    int mark_avg = avg(teach1.stu3.sub[0], teach1.stu3.sub[1], teach1.stu3.sub[2]);
    int samaresh_avg = avg(harry_avg, thomas_avg, mark_avg);

    int ricky_avg = avg(teach2.stu1.sub[0], teach2.stu1.sub[1], teach2.stu1.sub[2]);
    int james_avg = avg(teach2.stu2.sub[0], teach2.stu2.sub[1], teach2.stu2.sub[2]);
    int maddy_avg = avg(teach2.stu3.sub[0], teach2.stu3.sub[1], teach2.stu3.sub[2]);
    int amulya_avg = avg(ricky_avg, james_avg, maddy_avg);
    
    int all_marks[] =  {teach1.stu1.sub[0], teach1.stu1.sub[1], teach1.stu1.sub[2], teach1.stu2.sub[0], teach1.stu2.sub[1], teach1.stu2.sub[2], teach1.stu3.sub[0], teach1.stu3.sub[1], teach1.stu3.sub[2], teach2.stu1.sub[0], teach2.stu1.sub[1], teach2.stu1.sub[2], teach2.stu2.sub[0], teach2.stu2.sub[1], teach2.stu2.sub[2], teach2.stu3.sub[0], teach2.stu3.sub[1], teach2.stu3.sub[2]};
    int max_mark = 0;
    for(int i = 0; i< 18; i++)
    {
        if(all_marks[i] > max_mark)
            max_mark = all_marks[i];
    }

    printf("Average mark under Dr. Samaresh: %d\nAverage mark under Dr. Amulya: %d\n", samaresh_avg, amulya_avg);
    printf("Highest mark overall: %d", max_mark);
    return 0;
}