/*(30/03/2022)  Assignment_01 */
#include<stdio.h>
int main()
{
	int day_num;
	printf("Please enter the day number\t:\t ");
	scanf("%d", &day_num);
	switch (day_num)
	{
		case 1: printf("Monday");
					break;
		case 2: printf("Tuesday");
					break;
		case 3: printf("Wednesday");
					break;
		case 4: printf("Thursday");
					break;
		case 5: printf("Friday");
					break;
		case 6: printf("Saturday");
					break;
		case 7: printf("Sunday");
					break;
		default: printf("Please enter 1-7 as day number"); 
	}

	return 0;
}
