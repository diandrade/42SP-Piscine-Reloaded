void    ft_putchar(char letter);

void ft_print_alphabet(void)
{
    int current_letter;

    current_letter = 'a';
    while(current_letter <= 'z'){
        ft_putchar(current_letter);
        current_letter++;
    }
}

