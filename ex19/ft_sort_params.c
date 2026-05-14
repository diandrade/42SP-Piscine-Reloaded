#include <unistd.h>

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
    int i;
    int j;

    j = 1;
    while()
    {
        
        while()
        {

        }
    }
    ft_print_params(argc, argv);
}