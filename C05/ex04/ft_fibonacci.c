/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:26:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 13:42:28 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	i = 0;
	while (i < 10)
	{
		printf("%d\n",ft_fibonacci(i));
		i++;
	}
}*/
