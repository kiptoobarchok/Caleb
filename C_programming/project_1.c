#include <stdio.h>

//This project asks the user personal info 

void program_start();
void info_table();

int main()
{
	program_start();
	return 0;
}
void program_start()
{
	char full_name[100];
	char school_kcse[100];
	long int phone_number;

	int current_age;

	char current_school[100];

	char grade_achieved[3];

	printf("Enter your full name :\n");
	fgets(full_name, sizeof(full_name),stdin);

	printf("Hi %s What is your current age?\n",full_name);
	scanf("%d",&current_age);

	printf("at which school did you do KCSE:\n");
	scanf("%s", school_kcse);
	printf("wow you attended %s that's cool!",school_kcse);
	{

	printf("%s what grade did you attain at %s on your completion\n",full_name,school_kcse);
	fgets(grade_achieved, sizeof(grade_achieved),stdin);
	printf("congrats on getting %s",grade_achieved);
	}

	printf("\n");

	printf("%s what is your current phone number:",full_name);
	scanf("%ld",&phone_number);
	printf("%ld is saved to phone book is it ok with you\n", phone_number);



}


