/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getCols.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:51:10 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:15:05 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ncols(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\n')
		i++;
	return (i);
}
