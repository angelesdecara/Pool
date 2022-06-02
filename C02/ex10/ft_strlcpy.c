/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:57:14 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 12:48:26 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[40];
	char	b[] = "Hello there, Venus";// "10098888";

	printf("strlcpy %lu %s %s\n", strlcpy(a, b, 0), a, b);
	printf("\n");
	printf("mine %u %s %s\n", ft_strlcpy(a, b, 0), a, b);

	return(0);
}*/
