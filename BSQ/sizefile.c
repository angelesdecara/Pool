/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:22:20 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:05:19 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	sizefile(char *filename)
{
	char	*str;
	int		i;
	int		fd;
	char	a;

	i = 0;
	str = malloc(sizeof(a));
	fd = open(filename, O_RDONLY, 0);
	while (read(fd, str, 1))
		i++;
	free(str);
	close (fd);
	return (i + 1);
}
