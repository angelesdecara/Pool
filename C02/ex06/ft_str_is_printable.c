/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:48:58 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 12:47:27 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	isprint;

	i = 0;
	isprint = 1;
	while (str[i])
	{
		if (str[i] > 126 || str[i] < 32)
			return (0);
		i++;
	}
	return (isprint);
}
/*
#include<stdio.h>
#include <ctype.h>
int	main(void)
{
	int	i;


printf("ISRINTTTTT /- %d\n",	isprint(126));

	//char	a[] = "19nabuo3y";
	//char	a[] = "19na!\'3y";
	char	a[] = "19na!¢3y";
	printf("1 is printable %d\n %s\n", ft_str_is_printable(a), a);
	i = 0;
	while(a[i])
	{
		printf("1 is printable %d\n %c\n", isprint(a[i]), a[i]);
		i++;
	}
}*/
