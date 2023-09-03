/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:56:16 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:56:19 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puts(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i] && s2[i] == s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s, char **ss)
{
	char *swap;
	
	swap = *s;
	*s = *ss;
	*ss = swap;
}

int	main(int ac, char *av[])
{
	int	i;
	int b;

	i = 0;
	while (i < ac - 1)
	{
		if (ft_cmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 0;
		}
		i++;
	}
	b = 2 >> 1;
	while (b < ac)
	{
		ft_puts(av[b]);
		write(1, "\n", 1);
		b++;
	}
}
