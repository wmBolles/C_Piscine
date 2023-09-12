/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:15:37 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/10 23:15:43 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	display_bsq(t_params *par)
{
	int		a;
	int		b;

	a = par->max_i - par->max;
	while (a < par->max_i)
	{
		b = par->max_j - par->max;
		while (b < par->max_j)
		{
			par->map[a * (par->columns + 1) + b] = par->x;
			b++;
		}
		a++;
	}
	if (par->lines > 0 && par->columns > 0)
		ft_putstr(par->map);
	else
		ft_putstr_err("map error\n");
}
