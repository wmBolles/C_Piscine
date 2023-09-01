/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:01:05 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/01 23:01:05 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     check_if_alpha(char *str)
{
    if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        return 1;
    return 0;
}

int     ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return 1;
    while(*str)
    {
        if(check_if_alpha(str))
            str++;
        else
            return 0;
    }
    return 1;
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("AAAsadkhefibwefbiubwe7"));
    printf("%d\n", ft_str_is_alpha("llfhweif5iuf8"));
}
////////////////////////////////// good luck ///////////////////////////////////