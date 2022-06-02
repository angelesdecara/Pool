/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StartBasic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:30:54 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 13:18:35 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//void	starting(int *borde, int *entrada, int *sol)
void	starting(char *b, int *sol)
{
	int     i;
	int     j;

	i = 1;
	while(*b != '\0')
	{
		if( *b <= '4' && *b >= '1')
		{
			if (*b == '1')
			{
				j = *b - '0';
				sol[index2cell(&i) - 1]= 4;
				//printf("b = 1? %d\n",j);
				//printf("index %d w \n",index2cell(&i)-1);
				//printf("changed %d\n",sol[index2cell(&i)-1]);
			}
			else if (*b == '4')
			{
				rcfour(&i, sol);
			}
			j =0;
			while(j<16)
			{
				//printf("i %d, b %c j %d sol[j] %d\n",i,*b,j,sol[j]);
				j++;
			}
			i++;
			}
		b++;
	}
}
