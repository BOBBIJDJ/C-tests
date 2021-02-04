#include <stdio.h>

int main()
{
    int i = 0;

    char * a = "*";
    char * b = "*        *";

    for (i=0;i<10;i++)
    {
        printf(a);
    }
    printf("\n");

    for (i=0;i<3;i++)
    {
        printf(b);
        printf("\n");
    }

    for (i=0;i<10;i++)
    {
        printf(a);
    }

    return 0;
}