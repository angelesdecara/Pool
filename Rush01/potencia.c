/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   potencia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:23:53 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 13:52:21 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	power(int b, unsigned int e)
{
	int	base;

	if (e == 0)
		return 1;
	base = power(b, e/2);
	if (e %2 == 0)
		return base*base;
	else
		return base*base*b;
}
