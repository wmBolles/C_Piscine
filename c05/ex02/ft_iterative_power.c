/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:28:01 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/05 11:30:06 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	p = nb;
	while (++i < power)
		p = p * nb;
	return (p);
}
