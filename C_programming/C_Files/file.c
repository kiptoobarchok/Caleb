#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr;

	*fptr = fopen("test.txt","r");
        char line[100];

	while (!feof(fptr))
	{
		fgets(line,100,fptr);
		puts(line);
	}

	}



	fclose(fptr);

	return 0;
}


