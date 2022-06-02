/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:07:22 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 22:28:19 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	index2cell(int	*borde)
{
	int	i;
	int	celda;

	i = *borde;
	// lookup table to map 1 2 3 4 to 1 2 3 4... 13 14 15 16, row right, to cells 4, 8, 12, 16
	if (i <= 4 && i >= 1)
		celda = (i - 1) % 4 + 1;
	if (i <= 8 && i >= 5)
		celda = (i - 1) % 4 + 13;
	if (i <= 12 && i >= 9)
		celda = 4 * ((i - 1) % 4) + 1;
	if (i <= 16 && i >= 12)
		celda = (i % 4) * 4;
	return(celda);
}
void	rcfour(int *borde, int *sol)
{
	if ((*borde - 1) / 8 < 1) //columna, saltos en 4
		changecol(borde, sol);
	if ((*borde - 1) / 8 >= 1) //fila, saltos en 1
		changerow(borde, sol);
}

int	main(int argc, char **argv)
{
	int solucion[16];
	int	posibles[16];
	int	i;
	char	*b;

	i = 0;
	while(i< 16)
	{
		solucion[i] = 0;
		posibles[i] = 4321;
		i++;
	}
	printf("n args %d\n", argc);
	printf("val args %s\n", argv[1]);

	b = argv[1];
	if(argc != 2 || testconditions(b) != 0)
	{	
		printf("Error in arguments");
	}
	else
	{
		printf("b %d\n",*b);
		starting(b,solucion);
		//update(solucion,posibles);
		solveScraper(b,solucion,0,0);
		printf("issafe %d\n",issafe(b, solucion, 9, 3));
		imprimesols(solucion);
	}
}
