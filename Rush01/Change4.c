/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Start4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:18:48 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 12:04:51 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	changecol(int *col, int *sol)
{
	int	i;
	int	j;
	int	k;

	i = *col;
	i = index2cell(&i);
	k = 1;
	if ((*col - 1) / 4 > 1)
		k = -1;
	j = 1;
	while (j <= 4)
	{
		sol[i + k * (j - 1) * 4 - 1] = j;
		//printf("celda %d, valor%d",i + k * (j-1) * 4,j);
		//printf("changed, pos %d, sol[po] %d\n",i + k * (j - 1) * 4 - 1,sol[i + k * (j - 1) * 4 - 1]);
		j++;
	}
	j = 0;
	while (j < 16)
	{
		//printf("in changecol, i %d, sol[i] %d\n",j,sol[j]);
		j++;
	}
}
void	changerow(int *row, int *sol)
{
	int	i;
	int	j;
	int	k;

	i = *row;
	i = index2cell(&i);
	k = 1;
	if ((*row -1) / 12 > 1)
	   k = -1;
	j = 1;
	while (j <= 4)
	{
		sol[i + k * (j - 1) - 1] = j;
		j++;
	}
}
