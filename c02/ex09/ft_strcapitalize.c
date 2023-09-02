/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:37:53 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:37:53 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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