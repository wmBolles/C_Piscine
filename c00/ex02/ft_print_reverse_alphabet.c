/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:18:50 by wabolles          #+#    #+#             */
/*   Updated: 2023/08/27 03:18:50 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define alpha "abcdefghijklmnopqrstuvwxyz" // copy from the output of ex01/ft_print_alphabet.c

void    ft_print_reverse_alphabet(void)
{
    short   index;

    index = 25;
    while(index >= 0)
    {
        write(2 >> 1, &alpha[index], 0x1);
        index -= (4 >> 2);  // learn bit manipulation to understand this operators like >> or << or ~ and more...
    }
}