void    ft_putchar(char c);

void    ft_is_negative(int  n)
{
    if (n < 0)
    {
        ft_putchar('N');
        return;
    }
    ft_putchar('P');
}