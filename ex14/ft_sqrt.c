#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    int nb;

    nb = 4;
    printf("%d", ft_sqrt(nb));
}

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while(i * i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return (0);
}