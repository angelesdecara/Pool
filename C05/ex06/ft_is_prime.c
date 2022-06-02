/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:44:38 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 11:16:24 by angrodri         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	printf("root 3? %d\n ", floor_sqrt(3));
	printf("is 3 prime? %d\n ", ft_is_prime(3));
	printf("is 4 prime? %d\n ", ft_is_prime(4));
	printf("is 5 prime? %d\n ", ft_is_prime(5));
	printf("%d ", ft_is_prime(-2147483648));
	printf("%d ", ft_is_prime(-254));
	printf("%d ", ft_is_prime(254));
	printf("%d ", ft_is_prime(255));
	printf("%d ", ft_is_prime(270));
	printf("%d ", ft_is_prime(713));
	printf("%d ", ft_is_prime(0));
	printf("%d ", ft_is_prime(1));
	printf("%d ", ft_is_prime(2));
	printf("%d ", ft_is_prime(3));
	printf("%d ", ft_is_prime(4));
	printf("%d ", ft_is_prime(5));
	printf("%d ", ft_is_prime(6));
	printf("%d ", ft_is_prime(7));
	printf("%d ", ft_is_prime(8));
	printf("%d ", ft_is_prime(9));
	printf("%d ", ft_is_prime(1187));
	printf("%d ", ft_is_prime(37573));
	printf("%d ", ft_is_prime(37575));
	printf("%d ", ft_is_prime(1234572271));
	printf("%d ", ft_is_prime(2147483423));
	printf("%d ", ft_is_prime(2147483646));
	printf("%d ", ft_is_prime(2147483647));
	printf("------\n");
	printf("is 270 prime? %d\n",ft_is_prime(270));
	printf("nearest sqrt 99 is %d\n",floor_sqrt(99));
	printf("is 2 prime? %d\n",ft_is_prime(2));
	printf("is 22 prime? %d\n",ft_is_prime(22));
	printf("is 3 prime? %d\n",ft_is_prime(3));
	printf("is 5 prime? %d\n",ft_is_prime(5));
	printf("is 67 prime? %d\n",ft_is_prime(67));
	printf("is 77 prime? %d\n",ft_is_prime(77));
	printf("is 165569 prime? %d\n",ft_is_prime(165569));
	printf("is 165573 prime? %d\n",ft_is_prime(165573));
	   printf("is 2147483639 prime? %d\n",ft_is_prime(2147483639));
    printf("is 2147483645 prime? %d\n",ft_is_prime(2147483645));
	printf("is 2147483647 prime? %d\n",ft_is_prime(2147483647));
}*/
