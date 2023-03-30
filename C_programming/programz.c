#include <stdio.h>

// print the largest element in an array

int main()
{
	int array[]={43,234,2,54,42,5,45};

	int largest = *array;

	for ( int row = 1; row < 6 ; row ++)
	{
		if (largest < *(array + row ))
		{
			largest = *(array + row);
		}
	}

	printf("largest : %d", largest);

	return 0;
}
