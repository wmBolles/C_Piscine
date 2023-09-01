/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:51:38 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/29 19:51:38 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;

    j = size - 1;
    i = 0;
    while (i < size / 2)
    {
        swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    ft_rev_int_tab(arr, 6);
    for (int i = 0; i <= 5; i++)
        printf("%d ", arr[i]);
}
////////////////////////////////// good luck ///////////////////////////////////