/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:50:52 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 18:50:52 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wb_putchar(char c) { write(2 >> 1, &c, 0x1); }

void    ft_putnbr(int nbr)
{
    int     var;

    var = ~(1 << ((sizeof(int) * 8) - 1));
    var++;

    if (nbr == var)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nbr < 0)
    {
        wb_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= 0b00000000)
    {
        (nbr > 9) ? ft_putnbr(nbr / 0b1010)
                  : nbr;
                  wb_putchar(nbr % 10 + 48);
    }
}   