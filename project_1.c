#include <stdio.h>

//This project is for a multiplication table 
// it calculates the multiplication of any number between 1 and 10

int main ()
{
	int number;
        int i;

	printf("enter the value to be multiplied : \n");
	scanf("%d", &number);

	printf("The multiplication table for the number %d is: \n", number);

	for ( i = 1 ; i <= 10; i++)
	{
		printf("%d * %d = %d\n", number,i,number * i );
	}

	return 0;
}
