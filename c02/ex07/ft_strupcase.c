/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:34 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:40:34 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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