#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "Strini";
    char str2[] = "String";
    printf("%d", ft_strcmp(str1, str2));
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}