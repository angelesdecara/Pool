/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:06:01 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 17:23:15 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("power 10 ^2 is %d\n",ft_recursive_power(10,2));
	printf("power 2 ^10 is %d\n",ft_recursive_power(2,10));
	printf("power -2 ^10  is %d\n",ft_recursive_power(-2,10));
	printf("power -3 ^3  is %d\n",ft_recursive_power(-3,3));
	printf("power 0 ^0  is %d\n",ft_recursive_power(0,0));
	printf("power 0 ^10  is %d\n",ft_recursive_power(0,10));
}*/
