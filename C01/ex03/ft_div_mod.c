/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:13:41 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/16 20:42:58 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>
int	main(void)
{
	int		x;
	int		y;
	int		d;
	int		r;
	char	a;

	x = 3;
	y = 5;
	ft_div_mod(x, y, &d, &r);
	a = d + '0';
	write(1, &a, 1);
	a = r + '0';
	write(1, &a, 1);
}*/
