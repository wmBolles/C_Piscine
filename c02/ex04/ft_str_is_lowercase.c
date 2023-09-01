
int     check_lower(char *str)
{
    if (*str >= 'a' && *str <= 'z')
        return 1;
    return 0;
}

int     ft_str_is_lowercase(char *str)
{
    if (*str == '\0')
        return 1;
    while(*str)
    {
        if(!check_lower(str))
            return 0;
        str++;
    }
    return 1;
}
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_str_is_lowercase("abcdD"));
    printf("%d\n", ft_str_is_lowercase(""));
    printf("%d", ft_str_is_lowercase("abcd"));
}