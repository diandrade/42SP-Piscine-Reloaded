#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    (void) argc;

    int value = atoi(argv[1]);
    printf("%d\n", ABS(value));
}