/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:45:21 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 16:56:54 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	numb;

	numb = 0;
	while (*argv[argc-1] != '\0')
	{
		numb += *argv[argc-1] - 48;
		argv[argc-1]++;
	}
	printf("factorial is %d\n",numb);
	printf("factorial is %d\n",ft_recursive_factorial(numb));
}*/
