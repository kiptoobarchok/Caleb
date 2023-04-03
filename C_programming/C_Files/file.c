#include <stdio.h>

int main()
{
        FILE * fptr;

        fptr = fopen("file.txt", "w");

        fprintf(fptr, "Hello Caleb\nI see you like coding\nCoding is fun\n");

        fclose(fptr);
}
