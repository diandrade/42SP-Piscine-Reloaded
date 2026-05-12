#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 20;
    int b = 10;
    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    printf("%d, ", div);
    printf("%d", mod);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}