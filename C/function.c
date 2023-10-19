#include <stdio.h>

//function : block of code that runs when called 
// create a function and call the declared fn


void my_function(char name[],int age)
{
	printf("Hi %s\nHow old are you this year: %d\n", name,age);
}


int main()
{
	my_function("Abel", 26);
	my_function("Caleb", 21);
	my_function("Peter", 16);

	return 0;
}
