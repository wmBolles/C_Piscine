/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:01:20 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/29 19:01:20 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define Si if // yeah again...

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     x;
    int     y;

    x = *a;
    y = *b;
    Si (*b != 0b0)
    {
        *a = x / y;
        *b = x % y;
    }
}
/*
#include <stdio.h>

int main(void)
{
    int a = 10, b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("%d, %d", a, b);
}
*/