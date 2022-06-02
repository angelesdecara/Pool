/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lectura.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:06:01 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/29 14:18:16 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>
int	main(int argc, char **argv)
{
	char *str;

	str = malloc(sizeof(*str));
	if (argc > 3 || argc == 1)
	{
		write (1, "Error", 5);
	}
	else
	{
		if (testgood(argv[1]) == 0)
			write(1, "Error", 5);
		else
		{
			// open dict file and allocate it to a structure
			// // open dict file and allocate it to a structure
			write(1,"is good\n",8);
			startdict(str);
		//first convert to long unsigned int argv[1]
		}
			//proceed;
	}
	//printf("%s\n", str);
	free(str);
}
