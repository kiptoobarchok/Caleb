#include <stdio.h>

// while loop statements

int main ()
{
	int number;
	{
		printf("enter value :");
		scanf("%d", &number);
	}

	while (number <= 20)
	{
		printf("%d", number);
		number ++;
	}
	return 0;
}
