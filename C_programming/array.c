#include <stdio.h>

//arrays are multiple variables stored in a single variable 
//how to declare variables in an array

int main()
{
	int age[] = {47,26,21,16};//preffered
	age[0]=48;

	printf("%d\n", age[0]);

	int height_feet[5];//array size and type cannot be changed 

	height_feet[0]=34;
	height_feet[1]=63;
	height_feet[2]=43;
	height_feet[3]=87;
	height_feet[4]=65;

	printf("%d\n", height_feet[2]);

	return 0;
}
