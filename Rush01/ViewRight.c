/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ViewLeft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:53:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:20:09 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	viewright(char *borde, int *sols, int f)
{
	int	vis;
	int	c;
	int	h;

	c = 3;
	h = sols[4 * f + c];
	vis = 1;
	while (--c >= 0)
	{
		if (c < 3 && sols[4 * f + c] > h)
		{
			vis++;
			h = sols[4 * f + c];
		}
	}
	if (vis <= borde[13 + f] + '0')
	{
		return 0;
	}
	return 1;
}
