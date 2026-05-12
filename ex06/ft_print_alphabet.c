#include <unistd.h>

void    ft_print_alphabet(void);
void    ft_putchar(char letter);

int main(void)
{
    ft_print_alphabet();
}

void ft_print_alphabet(void)
{
    int current_letter;

    current_letter = 'a';
    while(current_letter <= 'z'){
        ft_putchar(current_letter);
        current_letter++;
    }
}

void    ft_putchar(char letter)
{
    write(1, &letter, 1);
}

