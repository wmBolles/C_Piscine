/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:14:29 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/10 23:15:09 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 16384

typedef struct	s_params
{
	int		lines;
	int		columns;
	int		max;
	int		max_i;
	int		max_j;
	char	p;
	char	o;
	char	x;
	char	*map;
	int		**tab;
}				t_params;

void			ft_putstr(char *str);
void			ft_putstr_err(char *str);
int				ft_strlen(char *str);
int				ft_strlen_nl(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strjoin(char *s1, char *s2);
int				is_numeric(char *str);
int				ft_min(int a, int b, int c);
int				ft_atoi(char *str);
int				is_valid(t_params *par, char *map);
int				parse_map(t_params *par);
void			display_bsq(t_params *par);

#endif
