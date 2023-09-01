/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:59:42 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/30 01:59:42 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int rev;
	
	while(size >= 0)
	{
		i = 0;
		while(i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				rev = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = rev;
			}
			i++;
		}
		size--;
	}
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>
int main(void)
{
	int tab[5] = {1 ,4 ,5 ,2 ,3};
	ft_sort_int_tab(tab , 5);

	for (int i = 0; i <= 5; i++)
		printf("%d ", tab[i]);	
}
////////////////////////////////// good luck ///////////////////////////////////