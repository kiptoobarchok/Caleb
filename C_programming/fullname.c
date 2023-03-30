#include <stdio.h>

int main()
{
	char name[20];

	printf("Enter your full name :\n");

	scanf("%[^\n]%*c", name);

	printf("Hello %s\nWelcome to our homepage!\n", name);

	return 0;

}
