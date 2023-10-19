#include <stdio.h>

int main ()
{
	int count;
	printf("enter number : ");
	scanf("%d", &count);

	do
	{
		printf("%d\n", count);
		count++;
	}
	while ( count < 20);

	return 0;
}
