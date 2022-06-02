/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:05:46 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/17 12:40:07 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		first = *(tab + i);
		last = *(tab + size - i - 1);
		tab[i] = last;
		tab[size - i -1] = first;
		i++;
	}
	i = 0;
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	int	aver[5] = {9, 2, 3, 4, 0};

	i = 0;
	ft_rev_int_tab(aver, 5);
	while (i < 5)
	{
		printf("%d,", aver[i]);
		i++;
	}
}*/
