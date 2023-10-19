#include <stdio.h>

// check the age of the user 
// decide if underage

int main()
{
	int age;
	
	printf("Enter the current age : \n");

	scanf("%d", &age);

	if (age >= 18)
	{
		printf(" You're eligible for voting\n");

	}
	else
	{
		printf("Sorry you are currently underage\n");
	}

	return 0;
}
