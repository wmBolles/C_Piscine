/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:33:57 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/04 23:35:53 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char		*ft_strdup(char *src)
{
	int		l;
	char	*dest;

	l = ft_strlen(src);
	if ((dest = malloc(sizeof(*src) * (l + 1))) == ((void *)0))
		return (((void *)0));
	while (l >= 0)
	{
		dest[l] = src[l];
		l--;
	}
	return (dest);
}