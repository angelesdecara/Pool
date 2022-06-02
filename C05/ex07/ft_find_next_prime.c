/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:44:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 12:24:07 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	floor_sqrt(int nb)
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
		if (mid * mid < num)
			start = mid;
		if (end - start == 1)
			return (start);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	aux;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	aux = 3;
	while (aux < floor_sqrt(nb) + 1)
	{
		if (nb % aux == 0)
			return (0);
		aux = aux + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		if (nb % 2 == 0)
		{
			nb = nb +1;
			return (ft_find_next_prime(nb));
		}
		else
		{
			nb = nb + 2;
			return (ft_find_next_prime(nb));
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	       printf("next prime to 4 is %d\n",ft_find_next_prime(4));
        printf("next prime to 11 is %d\n",ft_find_next_prime(11));
        printf("next prime to 1001 is %d\n",ft_find_next_prime(1001));
        printf("next prime to 1000001 is %d\n",ft_find_next_prime(1000001));
        printf("next prime to 100000001 is %d\n",ft_find_next_prime(100000001));
        printf("next prime to 214748217 is %d\n",ft_find_next_prime(214748217));
}*/
