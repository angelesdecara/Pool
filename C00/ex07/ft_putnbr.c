/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:11:10 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/16 18:18:29 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		a;
	long int	j;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	while (nb >= 10)
	{
		j = 10;
		while (j * 10 < nb)
			j = j * 10;
		a = (int) nb / j + '0';
		write(1, &a, 1);
		nb = nb - ((int) nb / j) * j;
	}
	a = nb % 10 + '0';
	write(1, &a, 1);
}
/*
int	main(void)
{
	ft_putnbr(2147483646);
}*/
