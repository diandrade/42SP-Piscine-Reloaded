#include <stdio.h>
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
        printf("%d\n", range[i]);
        i++;
        min++;
    }
    range[i] = min;
    return (range);
}

int main(void)
{
    int i;
    int max = 16;
    int min = -10;
    int *arr = ft_range(min, max);
    int size = max - min + 1;

    i = 0;
    while(i < size)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}