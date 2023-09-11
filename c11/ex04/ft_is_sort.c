/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:04:56 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/11 23:04:58 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length == 0 || length == 1)
		return (1);
	if (f(tab[0], tab[length - 1]) < 0)
	{
		while (i < length - 1)
		{
			if (!(f(tab[i], tab[i + 1]) <= 0))
				return (0);
			i++;
		}
	}
	else
	{
		i = length - 1;
		while (i > 0)
		{
			if (!(f(tab[i], tab[i - 1]) <= 0))
				return (0);
			i--;
		}
	}
	return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int erreur;

	i = 0;
	erreur = 0;
	if (length < 2)
		return (1);
	while (i < length - 1 && !erreur)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			erreur = 1;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}


/* ************************************************************************** */
/* ************************************************************************** */
