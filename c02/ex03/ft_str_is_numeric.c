/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:01:13 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/01 16:01:13 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    check_digit(char* str)
{
    if (*str >= 48 && *str <= '9')
        return 1;
    return 0;
}

int     ft_str_is_numeric(char *str)
{
    if (*str == '\0')
        return (1);
    while(*str)
    {
        if (!check_digit(str))
            return 0;
        str++;
    }
    return 1;
}

////////////////////////////////// for test ////////////////////////////////////

int main(void)
{
    char s1[] = "12345678";
    char s2[] = "12354a65";
    char s3[] = "";

    printf("%d\n%d\n%d", ft_str_is_numeric(s1),
                        ft_str_is_numeric(s2),
                        ft_str_is_numeric(s3));
}
////////////////////////////////// good luck ///////////////////////////////////