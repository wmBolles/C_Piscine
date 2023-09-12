/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:28:19 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/12 15:28:25 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H
# define BUFFSIZE 4097

void	print_map(int **final, char *map);
int		**find_square(int **grid, int x, int y);
int		*convert_row(char *row, int x, char empty, char obstacle);
char	**split_rows(char *map, int x, int y);
int		**build_grid(int **grid, char *map, int x, int y);

#endif
