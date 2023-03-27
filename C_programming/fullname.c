#include <stdio.h>

int main()
{
	char name[20];

	printf("Enter your full name :\n");

	fgets(name, sizeof(name),stdin);

	printf("Hello %s\nWelcome to our homepage!\n", name);

	return 0;

}
