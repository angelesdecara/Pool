/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Str2Mapa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:15:51 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:34:40 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**mapaFromStr(char *name, char *str)
{
	int		i;
	int		fd;
	int		j;
	int		k;
	char	**mapa;

	i = 0;
	fd = open(name, O_RDONLY, 0);
	while (read(fd, str, 1) > 0)
	{
		i++;
		str++;
	}
	j = 0;
	while (*(str - i + j) != '\n')
	{
		str++;
		j++;
	}
	k = 0;
	mapa = lineas(str - i + j + 1);
	close(fd);
	return (mapa);
}
