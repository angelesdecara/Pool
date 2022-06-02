/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:44:08 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 13:07:18 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	while (dest[i])
		i++;
	res = dest;
	j = 0;
	while (src[j])
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[10] = "abc113";
	char	b[] = "xy";

//	printf("strcat %s\n", strcat(a,b));
	printf("resultado %s\n", ft_strcat(a,b));
}*/
