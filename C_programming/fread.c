#include <stdio.h>
#include <stdlib.h>

//writes elements of an array to a file

int main()
{
	FILE *file_pointer;
	int array[10],col;

	file_pointer = fopen("myarray.txt", "rb");

	if (file_pointer == NULL)
	{
		printf("Error!File does not exist\n");
	
	}
	fread(array, sizeof(int), 10, file_pointer);
	printf("The array elements are :\n");
	for (col = 0; col < 10; col++)
	{
		
		printf("\n%d", array[col]);
	}

	
	fclose(file_pointer);


}