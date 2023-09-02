/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:55:24 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:55:27 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_start(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		j++;
	}
}

void	print_end(int x)
{
	print_start(x);
}

void	print_middle(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		write(1, "columns and rows must be strictly positive", 42);
		return ;
	}
	print_start(x);
	ft_putchar('\n');
	i = 2;
	while (i <= y - 1)
	{
		print_middle(x);
		ft_putchar('\n');
		i++;
	}
	if (y == 1)
		return ;
	print_end (x);
	ft_putchar('\n');
}
