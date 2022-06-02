/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ViewTop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:13:51 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:17:44 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	viewtop(char	*borde, int *sols, int c)
{
	int	vis;
	int	f;
	int	h;

	f = -1;
	h = sols[c];
	vis = 1;
	while (++f < 4)
	{
		if (f > 0 && sols[4 * f + c] > h)
		{
			vis++;
			h = sols[4 * f + c];
		}
	}
	if ( vis <= borde[c])
	{
		return 0;
	}
	return 1;
}
