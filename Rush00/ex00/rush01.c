/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:57:39 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/15 19:31:54 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i <= y && x > 0)
	{
		while (++j <= x)
		{
			if ((i == y && j == x && y != 1 && x > 1) || (j == 1 && i == 1))
				ft_putchar('/');
			if ((i == 1 && j == x && x > 1) || (j == 1 && i == y && y > 1))
				ft_putchar('\\');
			if (((i == 1 || i == y) && (j > 1 && j < x)))
				ft_putchar('*');
			if (((j == 1 || j == x) && (i > 1 && i < y)))
				ft_putchar('*');
			if ((j > 1 && j < x) && (i > 1 && i < y))
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j = 0;
	}
}
