/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:26:02 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 16:57:11 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb >= 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("factorial %d\n",ft_iterative_factorial(4));

}*/
