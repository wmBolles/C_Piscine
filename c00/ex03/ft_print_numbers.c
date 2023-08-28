/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:25:05 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 03:25:05 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wb_putchar(char c) { write(2 >> 1, &c, 0x1); }

void    ft_print_numbers(void)
{
    short   nb;

    nb = ~(1);
    while (nb <= 9) {
        wb_putchar(nb + 48);
        nb += 0b00000001;
    }
}