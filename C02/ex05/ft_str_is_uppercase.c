/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:35:23 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/18 13:57:57 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	lowcase;

	i = 0;
	lowcase = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lowcase *= lowcase;
		else
			lowcase = 0;
		i++;
	}
	return (lowcase);
}
/*
#include <stdio.h>
int	main(void)
{
	//char	a[] = "DABIWHIH";
	char	a[] = "DAB!WHIH";

	printf("%d\n", ft_str_is_uppercase(a));
}*/
