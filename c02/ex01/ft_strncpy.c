/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:44:35 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/01 15:44:35 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    short int i;

    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

////////////////////////////////// for test ////////////////////////////////////

#include <stdio.h>

int main()
{
    char dest[] = "hrrry";
    char src[] = "hello world";
    printf("%s", ft_strncpy(dest, src, 10));
    return 0;
}
////////////////////////////////// good luck ///////////////////////////////////