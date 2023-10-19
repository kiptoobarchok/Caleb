#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
1. CREATE new File
2. DISPLAY RECORD
3. APPEND RECORD
4. NO OF RECORDS
5. SEARCH
6. UPDATE
7. DELETE
8. SORT BY TOTAL DESC ON SCREEN
9. SORT BY TOTAL DESC IN FILE
10. SORT BY NAME 
 */
typedef struct student{
	int age;
	char name[20];
	char school[100];
	struct subject{
		int score;
		char s_name[10];

	}sub[3];

}student;
//functions prototypes
void start(void);//starts the program
void create(void);// create a list 
void display(void);//displays the contents
void append(void);// add info to the list

int main()
{
	start();
	return 0;
}

void start()
{
	FILE *fptr ;
	fptr = fopen("read.txt", "wb");

	if (fptr == NULL)
	{
		printf("Error. File does not exist\n");
	}

	int choice;

	do
	{
		printf("\tEnter your choice:\t");

		printf("\n1.create\n");
		printf("\n2.display\n");
		printf("\n3.append\n");
		printf("\n4.exit\n");


    
     while(choice != 0);
     exit(1);	
    

}

	




