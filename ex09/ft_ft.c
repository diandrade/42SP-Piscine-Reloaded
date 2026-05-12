#include <stdio.h>

void    ft_ft(int *nbr);

int main(void)
{
    int main_number;
    main_number = 0;

    ft_ft(&main_number);

    printf("%d", main_number);
}

void    ft_ft(int *nbr)
{
    *nbr = 42;
}
