/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:01:31 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 17:01:31 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wb_putchar(char c)
{
    write(1, &c , 1);
}

void    ft_print_comb(void)
{
    int     n1;
    int     n2;
    int     n3;

    n1 = 0;
    while (n1 <= 7)
    {
        n2 = n1 + 1;
        while (n2 <= 8)
        {
            n3 = n2 + 1;
            while (n3 <= 9)
            {
                wb_putchar(n1 + 48);
                wb_putchar(n2 + 48);
                wb_putchar(n3 + 48);
                if (n1 != 7)
                    write(1, ", ", 2);
                n3++;
            }
            n2++;
        }
        n1++;
    }
}

int main(void)
{
    ft_print_comb();
}