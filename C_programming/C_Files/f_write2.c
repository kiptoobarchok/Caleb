#include <stdio.h>
#include <stdlib.h>

//asks the user to input name

int main()
{
	FILE *fp;
	fp = fopen("name.txt", "wb");

	char name[20];

	if (fp == NULL)
	{
		printf("Error !!File not found\n");
		exit(1);
	}

	printf("Enter your name:\n");
	scanf("%[^\n]s", name);
	printf("Name saved successfully\n");

	fwrite(name,sizeof(char),1,fp);
	fclose(fp);
}
	