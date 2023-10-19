#include <stdio.h>

/**
  *count alphabet
  *syntax
  *a 
  a b
  a b c
  a b c d 
  a b c d e
  a b c d e f 
  a b c d e f g 
  a b c d e f g h 
  a b c d e f g h i
  a b c d e f g h i j
  */

int main()
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z'; alpha++)
	{
		for(char aphla = alpha ;aphla >= 'a' ; aphla --)
		{
			printf("%c ", aphla);
		}
		printf("\n");
	}
	return 0;
}
