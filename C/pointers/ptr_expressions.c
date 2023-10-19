#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 1;
    float b = 3.14;
    char *name = "kiptoo";

    int *aa;
    aa = &a;

    printf("Value a: %d\n", a);
    printf("Address at a is [%p] and value a is [%d]\n", aa, *(aa));
    printf("float : %f\n", b);

    return (0);
}
