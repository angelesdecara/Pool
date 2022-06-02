/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:44:06 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/21 23:18:17 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	testconditions(char	*argsv)
{
	int		size;
	char	*entrada;
	int		i;

	entrada = argsv;
	size = 0;
	while(*entrada != '\0')
	{
		size +=1;
		entrada++;
	}
	if (size != 31)
		return -1;
	entrada = argsv;
	i = 0;
	while (*entrada)
	{
		if (i % 2 == 0 && *entrada <= '4' && *entrada >= '0')
			return 0;
		else if (i % 2 == 1 && *entrada == ' ')
			return 0;
		else 
			return -1;
		i++;
		entrada++;
	}
	return 0;
}
