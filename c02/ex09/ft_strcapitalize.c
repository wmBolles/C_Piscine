

char    *ft_strcapitalize(char *str)
{
    int check;
    int i;

    check = 1;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (check == 1)
            {
                str[i] -= 32;
            }
            check >>= 1;
        }
        else if (str[i] >= '0' && str[i] <= '9')
           check = 0;
        else
            check = 2 >> 1; 
        i++;
    }
    return str;
}
#include <stdio.h>

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}