/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dict2Struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:25:04 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/29 15:56:09 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	startdict(char	*str)
{
	int		fichero;
	int		i;
	int		j;
	t_dict	*palabras;

	i = 0;
	palabras = malloc(sizeof(*palabras));
	fichero = open("numbers.dict", O_RDONLY, 0);
	if (fichero == -1)
		write (1, "Dict Error\n", 10);
	else
	{
		i = 0;
		while (read(fichero, str, 1) > 0)//&& *str != '\n')
		{
			write (1, str, 1);
			str++;
			i++;
		}
		write(1, (str - i ),i);
	}
	close (fichero);
	k = 0;
	j = 0;
	while (*(str - k) != '\0')
	{
		while (*(str - i - j) != '\n')
		{
			palabras->numero = (str - i - j);
			palabras->nombre = (str - i - j);
			j++;
		}
		k = j;
		write(1, palabras.numero, 100);
	}
	free(palabras); // temporary location!!
}
