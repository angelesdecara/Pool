/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:55:51 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 17:22:53 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("10 ^2 %d\n",ft_iterative_power(10,2));
	printf("2 ^10  %d\n",ft_iterative_power(2, 10));
	printf("0 ^10  %d\n",ft_iterative_power(0, 10));
	printf("0 ^0  %d\n",ft_iterative_power(0, 0));
	printf("-2 ^10  %d\n",ft_iterative_power(-2, 10));
	printf("-3 ^3  %d\n",ft_iterative_power(-3, 3));
}*/
