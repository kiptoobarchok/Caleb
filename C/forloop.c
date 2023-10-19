#include <stdio.h>

int main()
{
	int number;
	printf("enter number : ");
        scanf("%d", &number);

	for ( number > 0 ; number < 20 ; number= number+2)
	{
		printf("%d\n", number);
	}
	return 0;
}
