#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

   build a address book that is able to 
     -view all contacts 
     -add contact 
     -update info about the contacts 
     -search for details in the book
     -remove a contact
     -delete all contacts 

*/

//function prototypes used 
void add();
void all_view();
void start ();
void remove_person();
void search();
void update();
void list ();
void clearbook();
void print_menu();
void take_input(person *p);

struct person
{
	char name[30];
	int age;
	long int number;
	char email[100];
	char school[100];
};

typedef struct person person;

//program starts here

int main()
{
	start();
	return 0;
}

//void start () starts the program 

void start()
{
	int choice;

	while(1)
	{
		print_menu();
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				add();
				getchar();
				getchar();
				break;

			case 2:
				remove_person();
				getchar();
				getchar();
				break;
			case 3:
				search();
				getchar();
				getchar();
				break;

			case 4:
				update();
				getchar();
				getchar();
				break;

			case 5:
				list();
				getchar();
				getchar();
				break;

			case 6:
				clearbook();
				getchar();
				getchar();
				break;

			default:

				system("clear");
				printf("Thanks for using info@keep\n");
				getchar();
				getchar();
				exit(1);
		}
	}
}

//This functions prints the menu

void print_menu()
{
	system("clear");
	printf("\t\t-----------------------------------------------------------------------------------------------\n");
	printf("\t\t|                                WELCOME TO info@keep                                         |\n");
	printf("\t\t-----------------------------------------------------------------------------------------------\n");
	printf("\t\t|\tCHOOSE:                                                                                    |\n");
	printf("\t\t|             1.Add personal info.                                                            |\n"); 
	printf("\t\t|             2.Remove person.                                                                |\n");
	printf("\t\t|             3.Search person.                                                                |\n");
	printf("\t\t|             4. Update person's info.                                                        |\n");
	printf("\t\t|             5.list all info.                                                                |\n");
	printf("\t\t|             6.clear all info!!.                                                             |\n");
	printf("\t\t|                                                                                             |\n");
	printf("\t\t|                                                                                             |\n");
	printf("\t\t|\tEnter your choice :                                                                        |\n");
	printf("\t\t|_____________________________________________________________________________________________|\n");

}

//This functions adds personal info 
void add()
{
	system("clear");
	FILE *fp;
	fp = fopen("infobook","ab+");
	if (fp == NULL)
	{
		printf("Error! File not found\n");
		printf("enter any key to continue...");
		return;
	}

	else 
	{
		person p;
		take_input(&p);
		fwrite(&p, sizeof(p),1,fp);
		fflush(stdin);
		fclose(fp);
		system("clear");
		printf("Add succesful\n");
		printf("press any to continue:...\n");
	}
}

void take_input(person p)
{
	system("clear");
	getchar();          //takes \n by previous functions so that scanset will work properlly
	printf("enter name : ");
	scanf("%[^\n]s", &p->name);

	printf("enter age : ");
	scanf("%d", &p->age);

	printf("enter number : ");
	scanf("%ld", &p->number);

	printf("enter email : ");
	scanf("%s", &p->email);

	printf("enter school : ");
	scanf("%[^\n]s", &p->school);
}


















