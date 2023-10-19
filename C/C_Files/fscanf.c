#include <stdio.h>

int main()
{
	FILE *fptr ;
	fptr = fopen("caleb.txt", "a+");
	char info[100];

	if (fptr == NULL)
	{
		printf("Error!file not found.\n");

	}

	else
	{
		fscanf(fptr, "%[^\n]s", info);
		printf("%s", info);

		fclose(fptr);
	}

	getchar();
	return 0;
}
