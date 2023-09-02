/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:28 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:40:28 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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