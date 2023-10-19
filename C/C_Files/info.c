#include <stdio.h>

void main(void);

void main()
{
	FILE *fpointer ;
	fpointer = fopen("data.txt", "a+");

	int age;
	char name[100];
	char school[100];

	if (fpointer == NULL)
	{
		printf("Error file not found!!\n");
	}

	else 
	{
		printf("Enter your name :\n");
		fprintf(fpointer, "name : %s", name);
		fgets(name,sizeof(name),stdin);
		getchar();

		printf("Enter your age:\n");
		fprintf(fpointer, "age : %d", age);
		scanf("%d", &age);
		getchar();

		printf("Enter your school:\n");
		fprintf(fpointer, "school : %s", school);
		fgets(school,sizeof(school),stdin);

		fclose(fpointer);

	}


}