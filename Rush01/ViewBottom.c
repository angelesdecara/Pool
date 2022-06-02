/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ViewTop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:13:51 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:20:05 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	viewbottom(char	*borde, int *sols, int c)
{
	int	vis;
	int	f;
	int	h;

	f = 3;
	h = sols[4 * f + c];
	vis = 1;
	while (--f > 0)
	{
		if (f < 3 && sols[4 * f + c] > h)
		{
			vis++;
			h = sols[4 * f + c];
		}
	}
	if ( vis <= borde[c+5] + '0')
	{
		return 0;
	}
	return 1;
}
