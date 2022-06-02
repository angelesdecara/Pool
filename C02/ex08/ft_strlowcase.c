/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:04:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/18 13:59:53 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int	main(void)
{
	//char	a[]="ancDEa";
	char	a[]="DE192AAiZ";
	printf("Before %s\n", a);
	printf("After %s\n", ft_strlowcase(a));
}*/
