/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:22:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/25 12:06:23 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lenstr(char	*str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	sizedest = lenstr(dest);
	sizesrc = lenstr(src);
	i = 0;
	if (size < sizedest)
		return (size + sizesrc);
	if (size == 0)
		return (sizesrc);
	while (*(src + i) != '\0' && i + 1 < size - sizedest)
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{

	//char s5[] = "very biggg dfgdfgdfgdfgdfgdfgdfgfdgfd";
	//char d5[15] = "dest98765a";
	char s3[] = "aaaaaaaaaa"; // len is 10
	char d3[] = "0123456789--";

	printf("%d dest= %s\n",lenstr(d3),d3);
  //printf("d5 %s, b %s, strlcat %lu\n",d3,s3,strlcat(d3,s3,6));
	printf("d5 %s, b %s, ft_strlcat %u\n",d3,s3,ft_strlcat(d3,s3,6));
	printf("%d afterdest= %s\n",lenstr(d3),d3);
	printf("%d src %s\n",lenstr(s3),s3);
}*/
