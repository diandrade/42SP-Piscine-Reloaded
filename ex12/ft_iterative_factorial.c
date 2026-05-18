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