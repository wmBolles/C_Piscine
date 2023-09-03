/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:55:45 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:55:45 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_puts(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char    *strrev(char *str)
{
    int len;
    int i;
    char swap;

    len = ft_strlen(str) - 1;
    i = 0;
    while (i < len)
    {
        swap = str[len];
        str[len] = str[i];
        str[i] = swap;
        len--;
        i++;
    }
    return str;
}
#include <stdio.h>
int main(int ac, char **av)
{
    int i;

    if (ac > 1)
    {
        i = 1;
        while(i < ac)
        {
            ft_puts(strrev(av[i]));
            write(1, "\n", 1);
            i++;
        }
    }
}