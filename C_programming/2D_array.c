#include <stdio.h>

//visualize and print out a 2D array

int main()
{
	int a[2][3]={1,2,3,4,5,6};
	
        for (int i=0; i < 2; i++)
	{
		for (int b = 0; b<3; b++)
		{
			printf("%d\n", a[i][b]);
		}
	}

		return 0;
}
