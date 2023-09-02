/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:12:22 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 19:12:22 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(dest[i])
        i++;
    while(src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>
int main()
{
    char src[] = " world";
    char dest[] = "he llo";
    char *str = ft_strcat(dest, src);
    printf("%s", str);
}