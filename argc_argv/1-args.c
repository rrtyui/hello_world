#include <stdio.h>
#include "main.h"


int main(int argc, char *argv[])
{
    int i;

    printf("%d\n",argc);

    for(i=0; i < argc - 2; i++)
    {
        printf("%s", argv[i]);
    }
    return (0);
}
