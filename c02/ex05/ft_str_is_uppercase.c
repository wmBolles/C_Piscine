int     check_upper(char *str)
{
    if (*str >= 'A' && *str <= 'Z')
        return 1;
    return 0;
}

int     ft_str_is_uppercase(char *str)
{
    if(*str == '\0')
        return 1;

    while(*str)
    {
        if(!check_upper(str))
            return 0;
        str++;
    }
    return 1;
}
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("dkdjhid"));
    printf("%d\n", ft_str_is_uppercase("WEEWF"));
    printf("%d\n", ft_str_is_uppercase("EWFEW5"));
}