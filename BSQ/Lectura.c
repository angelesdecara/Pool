/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lectura.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:27:50 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 14:43:22 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**mapa(int nmapas, char **nommapas)
{
	char	*str;
	int		fd;
	int		i;
	char	**mapa;

	i = 1;
	if (nmapas == 0)
	{
		str=malloc(sizeof(char));
		fd = open("localcopy", O_RDWR);
		while(read(0, str, 1))
		{
			write(fd, str, 1);
		}
		close(fd);
		free(str);
		str = malloc(sizefile("localcopy") * sizeof(char));
		mapa = mapaFromStr("localcopy", str);
	}
	else
	{
		while (i < nmapas)
		{
			str = malloc(sizefile(nommapas[i]) * sizeof(char));
			mapa = mapaFromStr(nommapas[i], str);
			i++;
		}
	}
	return (mapa);
}
