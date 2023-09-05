/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:32:00 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/05 11:32:17 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	static int	cache[100] = {0};
	
	if (index <= 1)
		return (index);
	if (cache[index] == 0)
		cache[index] = fib(index - 1) + fib(index - 2);
	return (cache[index]);
}
