#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int nb; 
    
    nb = 10;
    printf("%d", ft_iterative_factorial(nb));
}

int ft_iterative_factorial(int nb)
{
    int totalsum;
    int i;

    i = 0;
    totalsum = 1;
    while (i < nb)
    {
        totalsum += totalsum * i;
        i++;
    }

    return totalsum;
}