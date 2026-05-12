#include <unistd.h>

void    ft_putchar(char character);
void    ft_print_numbers(void);

int main(void)
{
    ft_print_numbers();
}

void    ft_putchar(char character)
{
    write(1, &character, 1);
}

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