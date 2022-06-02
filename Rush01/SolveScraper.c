/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SolveScraper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:39:14 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 22:52:45 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	solveScraper(char *borde, int *sol, int f, int c)
{
	int	num;

	if (f == 3 && c == 4)
		return 1;
	if (c == 4)
	{
		f++;
		c = 0;
	}
	if (sol[ 4 * f + c] > 0)
		return solveScraper(borde, sol, f, c + 1);
	num = -1;
	printf("sky try %d\n",4 * f + c + 1);
	while (++num < 4)
	{
		if (issafe(borde, sol, 4 * f + c , num) == 1)
		{
			sol[4 * f + c] = num;
			if (solveScraper(borde, sol, f, c) == 1)
				return 1;
		}
		sol[4 * f + c] = 0;
	}
	return 0;
}
