#include <stdio.h>

void    low_to_upp(char *str)
{
    if (*str >= 'a' && *str <= 'z')
        str -= 32;
}

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}
int main()
{
    char str[] = "ifgfif";
    printf("%s\n", ft_strupcase(str));
}