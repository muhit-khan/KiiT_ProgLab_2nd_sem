/*(30/03/2022)  Assignment_03 */
#include<stdio.h>
int main()
{
	int num, first_dig, second_dig;
	printf("Enter the number:\t ");
	scanf ("%d", &num);

	first_dig=num / 10;
	second_dig=num % 10;
	printf("You entered\t:\t ");
	if (num >10 && num <20)
	{
		switch(num)
		{
		case 11: printf("Eleven\n");
			break;
		case 12: printf("Twelve\n");
			break;
		case 13: printf("Thirteen\n");
			break;
		case 14: printf("Fourteen\n");
			break;
		case 15: printf("Fifteen\n");
			break;
		case 16: printf("Sixteen\n");
			break;
		case 17: printf("Seventeen\n");
			break;
		case 18: printf("Eighteen\n");
			break;
		case 19: printf("Nineteen\n");
			break;
		}
	}
	else if(num == 0)
	{
		printf("Zero");
	}
	else
	{
		switch (first_dig)
    	{
			case 2 : printf ("Twenty ");
				break;
			case 3 : printf ("Thirty ");
				break;
			case 4 : printf ("Fourty ");
				break;
			case 5 : printf ("Fifty ");
				break;
			case 6 : printf ("Sixty ");
				break;
			case 7 : printf ("Seventy ");
				break;
			case 8 : printf ("Eighty ");
				break;
			case 9 : printf ("Ninety ");
				break;
			default: printf (" ");
				break;
		}	
		switch (second_dig)
		{
			case 0 : printf (" ");
				break;
   			case 1 : printf ("One");
				break;
			case 2 : printf ("Two");
				break;
			case 3 : printf ("Three");
				break;
			case 4 : printf ("Four");
				break;
			case 5 : printf ("Five");
				break;
			case 6 : printf ("Six");
				break;
			case 7 : printf ("Seven");
				break;
			case 8 : printf ("Eight");
				break;
			case 9 : printf ("Nine");
				break;
		}		
	}	
	return 0;
}