/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:41:32 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:41:32 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    check_is_no_printabel(char *s)
{
    if (*s < 32 || *s > 126)
        return 1;
    else
        return 0;
}

void ft_putstr_non_printable(char *str)
{
    while (*str)
    {
        if(check_is_no_printabel(str))
        {
            ft_putchar('\\');
            ft_putchar(HEXA[*str / 16]);
            ft_putchar(HEXA[*str % 16]);
        }
        else
            ft_putchar(*str);
        str++;
    }
}

////////////////////////////////// for test ////////////////////////////////////
#include<stdio.h>

int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}
////////////////////////////////// for test ////////////////////////////////////