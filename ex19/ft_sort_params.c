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
    int i;
    char*   temp;

    j = 1;
    while(j < argc)
    {
        i = 1;
        while(i < argc)
        {
            if (ft_strcmp(argv[j], argv[i]) < 0)
            {
                temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
            i++;
        }
        j++;
    }
    ft_print_params(argc, argv);
}