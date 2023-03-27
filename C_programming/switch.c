#include <stdio.h>

// use switch statement in replace of if else statements 

int main()
{
	int day;
	printf("enter the number of the day in a week: \n");
	scanf("%d", &day);

	switch ( day )
	{
		case 1: 
		printf("%d : is sunday\n", day);
		break;

		case 2:
		printf("%d : is monday\n", day);
		break;

		case 3:
                printf("%d : is tuesday\n", day);
                break;

		case 4:
                printf("%d : is wednesday\n", day);
                break;

		case 5:
                printf("%d : is thursday\n", day);
                break;

		case 6: 
                printf("%d : is friday\n", day);
                break;

		case 7:
                printf("%d : is saturday\n", day);
		break;

		default : 
		printf("There are only 7 days in a week\n");
	}

	return 0;
}
