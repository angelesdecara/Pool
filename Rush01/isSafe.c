/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isSafe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:22:04 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:21:14 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
int	issafe(char *borde, int	*sols,int	pos, int num)
{
	int	f;
	int	c;

	f = -1;
	c = pos % 4;
	while (++f < 4)
		if (sols[4 * f + c] == num)
			return 0;
	c = -1;
	f = pos / 4;
	while (++c < 3)
		if (sols[4 * f + c] == num)
			return 0;
	f = pos / 4 ;
	if (viewleft(borde, sols, f) == 0)
		return 0;
	if (viewright(borde, sols, f) == 0)
		return 0;
	if (viewtop(borde, sols, c) == 0)
		return 0;
	if (viewbottom(borde, sols, c) == 0)
		return 0;
	return 1;
}
