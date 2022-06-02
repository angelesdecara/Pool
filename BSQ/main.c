/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:02:41 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:35:27 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("size is %d\n",sizefile(argv[i]));
		mapa(argc,argv);
		i++;
	}
}
