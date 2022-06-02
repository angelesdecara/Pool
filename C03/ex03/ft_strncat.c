/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:00:54 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/23 12:43:09 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		j;
	char				*res;

	res = dest;
	i = 0;
	while (dest[i] != '\0')
	{
		res[i] = dest[i];
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "abc9173";
	char	b[] = "mi mama me mima";

	printf(" %s\n",ft_strncat(b, a, 20));
}*/
