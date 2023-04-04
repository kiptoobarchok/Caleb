#include <stdio.h>
#include <stdlib.h>
int main()
{
        FILE * fp;

        fp = fopen("caleb.txt" , "a");

        fprintf(fp, "caleb is a programmer\n");

        if (fp == NULL)
        {
                printf("Error. File not found\n");
        }

        

        fclose(fp);

        return 0;
}

