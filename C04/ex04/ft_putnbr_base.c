/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:05:27 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 11:14:07 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	lenstr(char	*str)
{
	int	b;

	b = 0;
	while (*str != '\0')
	{
		str++;
		b++;
	}
	return (b);
}

int	testbase(char	*str)
{
	int		i;
	int		j;
	char	*repeats;

	i = 0;
	while (*str != '\0')
	{
		if (*str == 43 || *str == 45)
			return (0);
		str++;
	}
	repeats = str;
	j = 1;
	while (i < lenstr(str) - 1)
	{
		j = i + 1;
		while (j < lenstr(str))
		{
			if (*(str + i) == *(repeats + j))
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

void	resto(unsigned int nbr, char *b)
{
	int	base;

	base = lenstr(b);
	if (nbr == 0)
		write(1, "", 1);
	else
	{
		resto(nbr / base, b);
		write(1, b + nbr % base, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int					b;
	unsigned int		aux;
	int					len;

	len = 0;
	b = lenstr(base);
	if (b >= 2 && testbase(base) != 0)
	{
		aux = nbr;
		if (nbr < 0)
			aux = -nbr;
		if (nbr == 0)
			write(1, base, 1);
		resto(aux, base);
	}
}
/*
int	main(void)
{
	char	base[] = "gtaio luSnemf";
//	char	base[]="0123456789abcdef";
	int		i;

	i=0;
	i = 233988;
	//i = 2147483647; //- 1; //233988;
	//while ( i< 30)
	//{
		ft_putnbr_base(i,base);
	//	write(1,"\n",1);
//		i++;
//	}
}*/
