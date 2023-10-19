#include <stdio.h>


int main()
{

	FILE *example;
	
	example = fopen("filename_1.txt","w");
	fclose(example);

	return 0;
}
