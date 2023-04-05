#include <stdio.h>
#include <stdlib.h>

//writes elements of an array to a file

int main()
{
	FILE *file_pointer;
	int array[10],col;

	file_pointer = fopen("myarray.txt", "wb");

	if (file_pointer == NULL)
	{
		printf("Error!File does not exist\n");
		exit(1);
	}
	printf("Enter array elements :\n");
		
    for (col = 0; col < 10; col++)
	{
		scanf("%d", &array[col]);
	}

	fwrite(array, sizeof(int), 10, file_pointer);
	fclose(file_pointer);


}