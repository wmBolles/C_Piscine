/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 02:43:59 by wabolles          #+#    #+#             */
/*   Updated: 2023/07/17 02:48:50 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		sign;
	int		nb;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	nb = 0b00000000;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (sign * nb);
}
