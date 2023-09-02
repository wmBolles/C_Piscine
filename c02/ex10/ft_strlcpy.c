/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:48 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:40:48 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}  

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    src_len;
    unsigned int    i;

    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    else
    {
        i = 0;
        while(src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (src_len);
}

////////////////////////////////// for test ////////////////////////////////////
int main(void)
{
    char dest[] = "empty";
    char src[] = "not empty";

    printf("%d", ft_strlcpy(dest, src, 3));
}
////////////////////////////////// good luck ////////////////////////////////////