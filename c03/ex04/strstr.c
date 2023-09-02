/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:15:47 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 19:15:47 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char   *ft_strstr(char *str, char *to_find)
{
    int     i;

    while(*str)
    {
        i = 0;
        while(str[i] == to_find[i])
        {
            if(to_find[i + 1] == '\0')
                return str;
            i++;
        }
        str++;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char str[] = "hello world , i hope you are good...!";
    char to_find[] = "world";
    char *result = ft_strstr(str, to_find);
    printf("%s", result);
}