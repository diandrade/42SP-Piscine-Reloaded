#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    int nb;

    nb = 10;
    printf("%d", ft_recursive_factorial(nb));
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }

    else if (nb == 1 || nb == 0)
    {
        return (1);
    }

    else
    {
        return (ft_recursive_factorial(nb - 1) * nb);
    }
    
}