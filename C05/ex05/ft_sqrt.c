/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:42:59 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 11:18:55 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned long int	mid;
	unsigned long int	start;
	unsigned long int	end;
	unsigned long int	num;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	num = (unsigned long int) nb;
	start = 0;
	end = num;
	while (start <= end)
	{
		mid = (end + start) / 2;
		if (mid * mid == num)
			return (mid);
		if (mid * mid > num)
			end = mid;
		else
			start = mid;
		if (end - start == 1)
			return (0);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
//	printf("sqrt of 10 is %d\n",ft_sqrt(10));
//	printf("sqrt of -10 is %d\n",ft_sqrt(-10));
//	printf("sqrt of 0 is %d\n",ft_sqrt(0));
//	printf("sqrt of 1 is %d\n",ft_sqrt(1));
//	printf("sqrt of 9 is %d\n",ft_sqrt(9));
//	printf("sqrt of 121 is %d\n",ft_sqrt(121));
//	printf("sqrt of 1024 is %d\n",ft_sqrt(1024));
//	printf("sqrt of 124 is %d\n",ft_sqrt(124));
//	printf("sqrt of  44435556is %d\n",ft_sqrt(44435556));
//	printf("sqrt of  2147483647s %d\n",ft_sqrt(2147483647));
	printf("sqrt of 2147395600  %d\n",ft_sqrt(2147395600));
//	printf("sqrt 400 is %d\n",ft_sqrt(400));
}*/
