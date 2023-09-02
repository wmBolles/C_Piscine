int     check_print(char *str)
{
    if (*str >= 32 && *str <= 126)
        return 1;
    return 0;
}

int     ft_str_is_printable(char *str)
{
    if (*str == '\0')
        return 1;
    while(*str)
    {
        if(!check_print(str))
            return 0;
        str++;
    }
    return 1;
}
#include <stdio.h>

int main()
{
    printf("%d", ft_str_is_printable("\t\t\n"));
    printf("%d", ft_str_is_printable(""));
    printf("%d", ft_str_is_printable("hello;"));
}