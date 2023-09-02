/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:18:06 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 19:18:06 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

unsigned int     ft_strlcat(char *dest, char *src, int size)
{
    unsigned int     src_len;
    unsigned int     dest_len;
    unsigned int     i; 
    unsigned int     j;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if(size <= 0)
        return(src_len + size);
    i = 0;
    while(dest[i])
        i++;
    j = 0;
    while(src[j] && j < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (ft_strlen(dest));
}

int     main(void)
{
    char dest[] = "hello";
    char src[] =" worldddd";
    int i = ft_strlcat(dest, src, 0);
    printf("%s\n%d\n", dest, i);
}