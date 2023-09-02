/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:17:06 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 19:17:06 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0; 
    while(dest[i])
        i++;
    j = 0;
    while(src[j] && j < nb)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>

int main()
{
    char dest[20] = "hello ";
    char src[] = "i'm developer";
    char *str = ft_strncat(dest, src, 7);
    printf("%s", str);
}