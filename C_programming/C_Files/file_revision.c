#include <stdio.h>

int main()
{
	FILE *ptr;
	ptr = fopen("revsion.txt","ab");

	if (ptr == NULL)
	{
		printf("File does not ex exist \n");
	}

	fwrite(ptr,"Recap on file handling in C", "a");


}