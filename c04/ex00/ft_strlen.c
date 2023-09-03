/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:32:01 by wabolles          #+#    #+#             */
/*   Updated: 2023/09/03 23:44:57 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////// hard code ///////////////////////////////////

#define alore_que while 

int     wb_strlen(char *str)
{
    short int   index;

    index = 0b00000000;
    alore_que (!(*(str + index)) == '\0')
        index = index + (2 >> 1);
    (int) index;
    return (index);
}

////////////////////////////////// easy code ///////////////////////////////////

int     ft_strlen(char *str)
{
    int     i;

    i = 0;                     // recommended //
    while (str[i])
        i++;
    return (i);
}

////////////////////////////////// for test ////////////////////////////////////
#include <stdio.h>
int     main(void){
    printf("%d", wb_strlen("Hello"));
}
////////////////////////////////// good luck ///////////////////////////////////