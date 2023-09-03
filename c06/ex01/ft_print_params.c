/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:55:40 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:55:40 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_puts(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int     main(int ac, char **av)
{
    int i;

    if (ac > 1)
    {
        i = 1;
        while (i < ac)
        {
            ft_puts(av[i]);
            write(1, "\n", 1);
            i++;
        }
        return 0;
    }
}