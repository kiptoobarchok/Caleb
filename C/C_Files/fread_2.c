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

	fread(name,sizeof(char),20,fp);
	printf("%s", name);


	fclose(fp);
}
	