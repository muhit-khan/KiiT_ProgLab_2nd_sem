/*(30/03/2022)  Assignment_02 */

#include <stdio.h>
int main ()
{
	int num, first_dig, second_dig, third_dig;

	printf("Enter the number: ");	
	scanf ("%d", &num);

	first_dig=num/100;
	second_dig=num/10-(first_dig*10);
	third_dig=num-(first_dig*100+second_dig*10);

	switch (first_dig)
	{
		case 0: printf("1st Digit: Zero\n");
			break;
		case 1: printf("1st Digit: One\n");
			break;
		case 2: printf("1st Digit: Two\n");
			break;
		case 3: printf("1st Digit: Three\n");
			break;
		case 4: printf("1st Digit: Four\n");
			break;
		case 5: printf("1st Digit: Five\n");
			break;
		case 6: printf("1st Digit: Six\n");
			break;
		case 7: printf("1st Digit: Seven\n");
			break;
		case 8: printf("1st Digit: Eight\n");
			break;
		default:printf("1st Digit: Nine\n");
	}

	switch (second_dig)
	{
		case 0: printf("2nd Digit: Zero\n");
			break;
		case 1: printf("2nd Digit: One\n");
			break;
		case 2: printf("2nd Digit: Two\n");
			break;
		case 3: printf("2nd Digit: Three\n");
			break;
		case 4: printf("2nd Digit: Four\n");
			break;
		case 5: printf("2nd Digit: Five\n");
			break;
		case 6: printf("2nd Digit: Six\n");
			break;
		case 7: printf("2nd Digit: Seven\n");
			break;
		case 8: printf("2nd Digit: Eight\n");
			break;
		default:printf("2nd Digit: Nine\n");
	}

	switch (third_dig)
	{
		case 0: printf("3rd Digit: Zero\n");
			break;
		case 1: printf("3rd Digit: One\n");
			break;
		case 2: printf("3rd Digit: Two\n");
			break;
		case 3: printf("3rd Digit: Three\n");
			break;
		case 4: printf("3rd Digit: Four\n");
			break;
		case 5: printf("3rd Digit: Five\n");
			break;
		case 6: printf("3rd Digit: Six\n");
			break;
		case 7: printf("3rd Digit: Seven\n");
			break;
		case 8: printf("3rd Digit: Eight\n");
			break;
		default:printf("3rd Digit: Nine\n");
	}

	return 0;
}
