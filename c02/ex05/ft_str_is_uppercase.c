/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:25 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:40:25 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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