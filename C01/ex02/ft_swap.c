/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:36:42 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/16 19:43:33 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <unistd.h>
int	main(void)
{
	int		x;
	int		y;
	char	a;
	char	b;

	x = 3;
	y = 5;
	ft_swap(&x, &y);
	a = x + '0';
	b = y + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}*/
