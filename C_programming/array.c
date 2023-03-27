#include <stdio.h>

//arrays are multiple variables stored in a single variable 
//how to declare variables in an array

int main()
{
	int array[3][3] = {{13,24,376},{34,65,76},{879,28,19}};

	printf("%d\n", array[2][2]);//access an element in an array

	for (int array_row = 0;array_row < 3; array_row++)//print all the elements in an array
	{
		for(int array_col = 0; array_col < 3;array_col++)
		{
			printf("%d\n",array[array_row][array_col]);
		}
	}

	return 0;
}
