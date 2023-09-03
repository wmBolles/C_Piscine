/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:41:32 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:41:35 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_base_len(char *base)
{
	size_t	i;

	i = 0b0;
	while (base[i])
		i++;
	return (i);
}

short	check_base(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = 0;
	while(base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = -0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value(char c ,char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return(-1);
}

int	ft_atoi(char *str, char *base)
{
	int	sign = 1;
	int	nb = 0;
	int	base_len;
	int	value;

	base_len = ft_base_len(base);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = get_value(*str, base);
		nb *= base_len;
		nb += value;
		str++;
	}
	return (sign * nb);
}


int	ft_atoi_base(char *str, char *base)
{
	int	atoi_nb;
	int	final_number;

	if (!check_base(base))
		return (0);
	atoi_nb = ft_atoi(str, base);
	return (atoi_nb); // just exemple you can return directly... 	
}
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base(" 		-+---+10110a567", "01"));
}
