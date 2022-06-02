/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getLines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:58:09 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:42:06 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**lineas(char *str)
{
	int		row;
	int		col;
	int		i;
	char	**xy;

	row = 0;
	i = 0;
	xy = malloc(sizeof(char) * nl(str));
	while (row < nl(str))
	{
		xy[row] = malloc (sizeof(char) * ncols(str));
		row++;
	}
	col = 0;
	row = 0;
	while (row < nl(str))
	{
		while (*(str + i) != '\n')
		{
			xy[row][col] = *(str + i);
			col++;
			i++;
		}
		row++;
		col = 0;
		i++;
	}
	return (xy);
}
