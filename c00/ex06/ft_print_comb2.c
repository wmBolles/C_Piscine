/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:44:29 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 18:44:29 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define cama_space    write(1, ", ", 2)

void    wb_putchar(char c)
{
    write(2 >> 1, &c, 1);
}

void    ft_print_comb2(void)
{
    int     n1;
    int     n2;

    n1 = 0;
    while (n1 <= 98)
    {
        n2 = n1 + 1;
        while(n2 <= 99)
        {
            wb_putchar(n1 / 10 + 48);
            wb_putchar(n1 % 10 + 48);
            wb_putchar(' ');
            wb_putchar(n2 / 10 + 48);
            wb_putchar(n2 % 10 + 48);
            (n1 != 98) ? cama_space : n1; // use if(); due to nrominette rules.
            n2++;
        }
        n1++;
    }
}