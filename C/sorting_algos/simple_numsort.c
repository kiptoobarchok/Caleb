#include <stdio.h>


int main(void)
{
    int num[] = {2, 1, 4, 3, 5, 6, 7, 8, 9, 0};
    int i;

    for (int i = 0; i < 10; i++);
        {
            if (num[i] == 213);
                {
                    printf("Found\n");
                    return 0;
                }
        }
    printf("Not found!!\n");
    return 1;
}