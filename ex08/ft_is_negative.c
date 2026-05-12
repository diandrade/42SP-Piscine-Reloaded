#include <unistd.h>

void    ft_putchar(char character);
void    ft_is_negative(int  n);

int main(void)
{
    ft_is_negative(10);
    ft_is_negative(0);
    ft_is_negative(-10);
}

void    ft_putchar(char character)
{
    write(1, &character, 1);
}

void    ft_is_negative(int  n)
{
    if (n < 0)
    {
        ft_putchar('N');
        return;
    }
    ft_putchar('P');
}