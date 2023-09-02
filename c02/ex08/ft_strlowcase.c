char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++; 
    }
    return str;
}
#include <stdio.h>

int main()
{
    char str[] = "HeLLo";
    printf("%s", ft_strlowcase(str));
}