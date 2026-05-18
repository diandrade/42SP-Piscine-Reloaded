void    ft_putchar(char c);

void    ft_print_numbers(void)
{
    int current_number;

    current_number = '0';
    while (current_number <= '9')
    {
        ft_putchar(current_number);
        current_number++;
    }
}