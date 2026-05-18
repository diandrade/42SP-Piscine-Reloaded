#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *range = malloc((max - min + 1) * sizeof(int));

    if (min >= max)
    {
        return NULL;
    }

    i = 0;
    while (min < max)
    {
        range[i] = min;
        i++;
        min++;
    }
    range[i] = min;
    return (range);
}