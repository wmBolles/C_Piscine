/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:04:03 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/11 23:04:12 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}