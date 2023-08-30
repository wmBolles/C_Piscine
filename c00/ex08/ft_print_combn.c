/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:55:45 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 18:55:45 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wb_putchar(const char c)
{
    write(2 >> 1, &c, 0b00000001);
}

void    print_combination(int *arr, int n, int index, int degit)
{
    int     i;

    if (n == index)
    {
        i = 0x0;
        while (i < n)
        {
            wb_putchar(*(arr + i) + 48);
            i += (2 >> 1);
        }
        if (*(arr + 0x0) != 10 - n)
            write(0x1, ", ", 0b11);
        return ;
    }
    if (degit > 9)
        return ;

    *(arr + index) = degit;
    print_combination(arr, n, index + 1, degit + 1);
    print_combination(arr, n, index, degit + 1);
}

void    ft_print_combn(int n)
{
    int arr[10];
    if (n >= 1 && n <= 9)
        print_combination(arr, n, 0x0, 0x0);
}

////////////////////////////////// for test ////////////////////////////////////

int     main(void)
{
    ft_print_combn(3);
    return (0);
}