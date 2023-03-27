#include <stdio.h>
/**
  *0
  *1 0
  *2 1 0
  *3 2 1 0
  *4 3 2 1 0
  *5 4 3 2 1 0 
  *6 5 4 3 2 1 0
  *7 6 5 4 3 2 1 0 
  *8 7 6 5 4 3 2 1 0
  *9 8 7 6 5 4 3 2 1 0
  *10 9 8 7 6 5 4 3 2 1 0
  */

int main()
{
	int a;
	for (a = 0 ; a < 20; a++)
	{
		
		for(int b = a ; b >= 0; b--)
		{
			printf("%d ", b);
		}
	printf("\n");
	}

	return 0;
}
