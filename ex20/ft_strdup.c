#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);
char *ft_strcpy(char *src, char *dest);
int ft_srtlen(char *src);

int main(void)
{
    char*    src = "String";
    printf("%s", ft_strdup(src));
}

char *ft_strdup(char *src)
{
    char *dest = malloc((ft_srtlen(src) + 1) * sizeof(char)); 
    return (ft_strcpy(src, dest));
}

char *ft_strcpy(char *src, char *dest)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return (dest);
}

int ft_srtlen(char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        i++;
    }

    return (i);
}