#include <stdio.h>

#include "main.h"


int main(int argc, char *argv[])
{
    int i;

    printf("%d\n",argc - 1);

    for(i=0; i < argc - 1; i++)
    {
        printf("%s", argv[i]);
    }
    return (0);
}
