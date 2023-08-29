/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:46:42 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/29 18:46:42 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define Si if // oui je france bien !...

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    Si (b != 0) // don't do this if , due to moulinette .
    {
        *div = a / b;
        *mod = a % b;
    }
}

/*
#include <stdio.h>

int main(void)
{
    int a = 10 , b = 2, div , mod;
    ft_div_mod(a, b , &div, &mod);
    printf("%d, %d", div , mod);
}
*/