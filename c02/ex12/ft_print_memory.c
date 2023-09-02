/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:41:43 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/02 18:46:04 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"
typedef unsigned char my_byte;

void	ft_puts(char *str, int size)
{
	while (*str && size-- > 0)
	{
		if (*str < 32 || *str > 126)
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strhex(char *str,int size)
{
	int	i;

	i = 1;
	while (*str && size > 0)
	{
		ft_putchar(HEXA[*str / 16]);
		ft_putchar(HEXA[*str % 16]);
		if ((i % 2) == 0)
			ft_putchar(' ');
		i++;
		str++;
		size--;
	}
	ft_putchar(' ');
}

void	print_adrrs(void *s)
{
	my_byte 	*ptr;
	short int	i;

	ptr = (my_byte *)&s;
	i = 7;
	while (i >= 0)
	{
		ft_putchar(HEXA[*(ptr + i) / 16]);
		ft_putchar(HEXA[*(ptr + i) % 16]);
		i--;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void 	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size == 1)
		return(addr);
	else
	{
		print_adrrs(addr);
		ft_strhex(addr, size);
		ft_puts(addr, size);
	}
	return(addr);
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>

int	main(void)
{
	char str[] = "Bonjour les amin---";
	char str2[] = "ches...c est  fo---";
	char str3[] = "u.tout.ce qu on ---";
	char str4[] = "peut faire avec.---";
	char str5[] = "..print_memory..----";
	char str6[] = "..lol.lol. .";
	char over[] = "i'm wassim bolles a full stack developer...";
	char no_printabel[] = "app\tlication\nprogrammer...";

	ft_print_memory(over, 6);
	ft_print_memory(no_printabel, 16);
	//ft_print_memory((char *)str, 16);
	//ft_print_memory((char *)str2, 16);
	//ft_print_memory((char *)str3, 16);
	//ft_print_memory((char *)str4, 16);
	//ft_print_memory((char *)str5, 16);
	//ft_print_memory((char *)str6, 16);
	return(0);
}
////////////////////////////////// good luck ////////////////////////////////////