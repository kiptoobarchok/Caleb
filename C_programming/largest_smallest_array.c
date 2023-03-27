#include <stdio.h>

//the program to find the smallest and largest element in an array

int main()
{
	int array[100] ,size_array, row;
	int min,max;

	printf("Enter size of array :\n");
	scanf("%d", &size_array);

	printf("Enter %d elements in the array : ", size_array);
	for (row = 0; row < size_array; row++)
	{
	scanf("%d", &array[row]);
	}

	min = max = array[0];

	for(row = 1;row < size_array; row++)
	{
	    if(array[row] > max)
	    {
	        max = array[row];
	    }
	}

	printf("The largest element in the array is : %d\n", max);
	printf("The smallest element in the array is : %d\n",min);

	return 0;
}
				
