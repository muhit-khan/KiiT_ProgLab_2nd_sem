#include <stdio.h>
#include <stdlib.h>
// function to calculate current age
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
int main() {
   int present_date = 21;
   int present_month = 9;
   int present_year = 2019;
   int birth_date = 25;
   int birth_month = 9;
   int birth_year = 1996;
   age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
   return 0;
}

/*
int main()
{
    int cd, cm, cy, dd, dm, dy, sd, sm, sy;
    printf("\nWhat's the date today?(dd,mm,yyyy)\t:\t ");
    scanf("%d/%d/%d", &cd,&cm,&cy);
    printf("Enter DOB(dd,mm,yyyy)\t\t\t:\t ");
    scanf("%d/%d/%d", &dd,&dm,&dy);
    printf("\nYour DOB\t\t\t\t:\t %d/%d/%d", dd, dm, dy);
    float dob_in_days = dy * 365 + dm * 30 + dd;
    float cd_in_days = cy * 365 + cm * 30 + cd; 
    sy = (cd_in_days - dob_in_days)/365;
    sm = ((cd_in_days - dob_in_days) - sy*365)/12;
    sd = (cd_in_days - dob_in_days) - ((sy * 365) + (sm * 30));
    printf("\nYour Age\t\t: %d,%d,%d", sd, sm, sy);
    return 0;
}
*/