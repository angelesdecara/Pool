/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:43:31 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 12:30:23 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned char	*i2h(int	*entero, unsigned char	*str)
{
	int	resto;
	int	l;

	resto = *entero;
	while (resto != 0)
	{
		l = resto % 16;
		if (l < 10)
			*str++ = l + 48;
		else
			*str++ = l + 55;
		resto = resto / 16;
	}
	return (str);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	char				*p;
	unsigned char		r;
	int					l;
	char				*x;

	p = addr;
	x = (char *) &p[0];
	l = *x;
	i2h(&l, &r);
	i = 0;
	while (i < size)
	{
		i++;
	}
	if (size == 0)
		return (0);
	return (addr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a;
	char	*x;
	int		i;

	a = 'B';
	x = (char *)&a;
	i = x[0];
	printf("i = %d\n", i);
	printf("a = %c\n", a);
	ft_print_memory(&x, 10);
}*/
