#include <stdio.h>

int main()
{
        FILE * fptr;
        fptr = fopen("file.txt", "a");

        fprintf(fptr, "\nCoding has a lot of potential.Good choice.\n");

        fclose(fptr);
}
