/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:02:07 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/29 17:02:07 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int     swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>
int     main(void)
{
    int     value1 = 1, value2 = 2;
    ft_swap(&value1, &value2);
    printf("value1 = %d\nvalue2 = %d", value1, value2);
}