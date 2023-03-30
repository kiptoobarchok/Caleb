#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void start (void);
void check (void);
void table (void);
void input (void);

int main ()
{
	input();
	return 0;
}

typedef struct person 
{
	char name[100];
	char school[100];
	int age;
	long int mble_number;
	char email[100];
}person;

void input() // this fn prototype asks the user to enter info
{
	person person;

	person.name;
	person.school;
	person.age;
	person.email;
	person.mble_number;

	printf("enter name : ");
	scanf("%s", person.name);

	getchar();

	printf("Enter High School attended : ");
	scanf("%s",person.school);

	getchar();

	printf("Enter age : ");
	scanf("%d", &person.age);

	getchar();

	printf("enter current mobile number : ");
	scanf("%ld", &person.mble_number);

	getchar();

	printf("enter active email : ");
	scanf("%[^\n]s", person.email);

}

void check()
{
	input();

	if (age >= 18)
	{
		printf("You are eligible for voting\n");
	}
	else
	{
		printf("You are underage\n");
	}
}







