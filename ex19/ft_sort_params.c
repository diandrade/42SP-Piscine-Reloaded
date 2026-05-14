#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_print_params(int argc, char** argv)
{
    int i;
    int j;

    j = 1;
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;    
    }
}

int main(int argc, char** argv)
{
    int j;
    char*   temp;

    j = 2;
    while(j < argc + 1)
    {
        if (ft_strcmp(argv[j], argv[j - 1]) > 0)
        {
            temp = argv[j];
            argv[j] = argv[j - 1];
            argv[j - 1] = temp;
        }
        j++;
    }
    ft_print_params(argc, argv);
}