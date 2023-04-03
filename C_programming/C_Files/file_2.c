#include <stdio.h>
#include <stdlib.h>
int main()
{
        FILE * fp;
        char c;

        fp = fopen("caleb.txt" , "r");

        if (fp == NULL)
        {
                printf("File not found\n");
        }

        do  
        {
                c = getc(fp);
                printf("%c", c);
        }

        while ( c != EOF);

        fclose(fp);

        return 0;
}

