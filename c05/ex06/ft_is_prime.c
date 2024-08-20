/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:50:05 by wabolles          #+#    #+#             */
/*   Updated: 2023/07/26 18:29:43 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	if (nb < 2)
		return (0);
	i = 0x2;
	while (i <= (nb / i) && i <= 46340)
	{
		if (nb % i == 0b0)
			return (0);
		i++;
	}
	return (1);
}