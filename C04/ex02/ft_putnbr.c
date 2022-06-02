/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:48:18 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 11:15:08 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			a;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		a = nb + 48;
		write(1, &a, 1);
	}
}
/*
int     main(void)
{
        ft_putnbr(-2147483648);
		write(1,"\n",1);
        ft_putnbr(-2147483647);
		write(1,"\n",1);
        ft_putnbr(2147483647);
		write(1,"\n",1);
        ft_putnbr(0);
		write(1,"\n",1);
		ft_putnbr(8449000);
		write(1,"\n",1);
		ft_putnbr(10);
		ft_putnbr(3);
}*/
