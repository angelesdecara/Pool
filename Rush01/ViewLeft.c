/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ViewLeft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:53:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:19:25 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	viewleft(char *borde, int *sols,int f)
{
	int	vis;
	int	c;
	int	h;

	c = -1;
	h = sols[4 * f];
	vis = 1;
	while (++c < 4)
	{
		if (c > 0 && sols[4 * f + c] > h)
		{
			vis++;
			h = sols[4 * f + c];
		}
	}
	if (vis <= borde[9 + f] + '0')
	{
		//printf("looks good%d %c\n",vis,borde[9+f]);
		return 0;
	}
	return 1;
}
