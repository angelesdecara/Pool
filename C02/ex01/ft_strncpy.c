/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:19:52 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/23 17:41:14 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[]="12345";
	char	b[] = "ta";
	
	printf("strc: %s %lu \n", strncpy(a,b ,6), strlen(a));
	printf("mine: %s  %lu\n", ft_strncpy(a, b , 6), strlen(a));
	printf("strc: %s\n", strncpy(a,b ,6));
}*/
