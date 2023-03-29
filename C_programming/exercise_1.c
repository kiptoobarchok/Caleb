#include <stdio.h>

void main(void);

void main()
{
	char row,col;

	for(row = 'a'; row < 'e'; row++)
	{
		for(col = 'a'; col <= row; col++)
		{
			printf("%c ", row);
		}

		printf("\n");
	}
}
