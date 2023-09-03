/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:55:09 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:55:09 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_puts(char *str)
{
    while(*str)
        write(1, str++, 1);
}

int     main(int ac, char **av)
{
    if(ac == 1)
        ft_puts(av[0]);
    write(1, "\n", 1);
}