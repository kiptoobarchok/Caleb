#include <stdio.h>
#define number_of_students 5

int main ()
{
	int input[number_of_students], age;

	for (age = 0; age < number_of_students; age++)
	{
		printf("The age of the 5 kids in an array index are as follows %d: ",age);
		scanf("%d", &input[number_of_students]);
	}
	return 0;
}
