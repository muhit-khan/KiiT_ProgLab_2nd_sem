/*(25/03/2022) Assignment_4 */

#include<stdio.h> 
int main()
{
    int day1, mon1, year1,hour1,min1,ampm1, ampm2, fr1,
        day2, mon2, year2,hour2,min2,fr2;

    int day_diff, mon_diff, year_diff,cal1,cal2;         
    printf("Input date and time using following format: DD/MM/YYYY hh:mm 1/0\n");
    printf("######################   am = 1, pm = 0   ######################\n");
    printf("Input the Earlier date and time\t: ");
    scanf("%d/%d/%d %d:%d %d", &day1, &mon1, &year1,&hour1,&min1,&ampm1);
    printf("Input the Second date and time\t: ");
    scanf("%d/%d/%d %d:%d %d", &day2, &mon2, &year2,&hour2,&min2,&ampm2);
    if(ampm1 == 1)
    {
        fr1 = 0;
    }
    else
    {
        fr1 = 1;
    }
    if(ampm2 == 1)
    {
        fr2 = 0;
    }
    else
    {
        fr2 = 1;
    }

    if(day2 < day1)
    {      
        // borrow days from february
        if (mon2 == 3)
        {
            //  check whether year is a leap year
            if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) 
            {
                day2 += 29;
            }

            else
            {
                day2 += 28;
            }                        
        }

        // borrow days from April or June or September or November
        else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12) 
        {
           day2 += 30; 
        }

        // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
        else
        {
           day2 += 31;
        }

        mon2 = mon2 - 1;
    }

    if (mon2 < mon1)
    {
        mon2 += 12;
        year2 -= 1;
    }       

    day_diff = day2 - day1;
    mon_diff = mon2 - mon1;
    year_diff = year2 - year1;

 if(hour1==12 && fr1==0){
        hour1=0;
    }
    cal1=hour1*60+min1;
    if(fr1){
        cal1+=12*60;
    }
    if(hour2==12 && fr2==0){
        hour2=0;
    }
    cal2=hour2*60+min2;
    if(fr2){
        cal2+=12*60;
    }
    int hour_diff,min_diff;
    if(cal1<cal2) {
        hour_diff=(cal2-cal1)/60;
        min_diff=(cal2-cal1)%60;
    }
    else if(cal2<cal1){
        hour_diff=(cal1-cal2)/60;
        min_diff=(cal1-cal2)%60;
    }

    printf("\nDifference: %d years %02d months and %02d days and %02d hour %02d min.\n\n", year_diff, mon_diff, day_diff, hour_diff,min_diff);

    return 0; 
}
