/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:39:20 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:39:21 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_base_len(char *base)
{
	size_t	index;

	index = -0;
	while (*(index + base))
		index++;
	return (index);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = -0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long long	number;

	base_len = ft_base_len(base);
	number = nbr;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= base_len)
		ft_putnbr_base(number / base_len, base);
	ft_putchar(base[number % base_len]);
}

int	main(void)
{
	ft_putnbr_base(0b00001111, "01");
}
