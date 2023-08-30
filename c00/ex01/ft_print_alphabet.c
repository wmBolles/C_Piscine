s/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:17:45 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 03:17:45 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define tbe3 write

void    wb_putchar(char c)
{
    tbe3(2 >> 1, &c , 0x1);
}

void    ft_print_alphabet(void)
{
    char    a;

    a = 97;
    while (a <= 'z')
        wb_putchar(a++);
}

////////////////////////////////// for test ////////////////////////////////////
int     main(void)
{
    ft_print_alphabet();
    return (0);
}
////////////////////////////////// good luck ///////////////////////////////////