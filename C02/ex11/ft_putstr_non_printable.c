/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:27:37 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 13:54:39 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}

char	*i2h(int	*entero, char *str)
{
	int		j;
	int		l;

	j = *entero;
	str[0] = '\\';
	l = 2;
	while (l != 0)
	{
		if (j % 16 < 10)
			str[l] = j + 48;
		else
			str[l] = j + 55;
		ft_strlowcase(&str[l]);
		j = j / 16;
		l--;
	}
	return (str);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a[3];
	int		j;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			j = str[i];
			write(1, i2h(&j, a), 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = {127,'\0'};//"Coucou\ntu vas bien ?";

	ft_putstr_non_printable("?");
	ft_putstr_non_printable("");
	printf("\n");
	ft_putstr_non_printable(a);
}*/
