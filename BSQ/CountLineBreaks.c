/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CountLineBreaks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:10:01 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:15:38 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	nl(char	*str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '\n')
			n++;
		i++;
	}
	return (n);
}
