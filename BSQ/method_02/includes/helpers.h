/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmbolles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:28:05 by wmbolles          #+#    #+#             */
/*   Updated: 2023/09/12 15:28:06 by wmbolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPERS_H
# define FT_HELPERS_H

int		get_max_size(int **grid, int col, int row, int size, int xmax, int ymax);
int		find_max(int **final, int *row, int *col, int x, int y);
char	get_char(char *map, int y, int pos);
int		find_y(char *map);
int		find_x(char *map);

#endif
