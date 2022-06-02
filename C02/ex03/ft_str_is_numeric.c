/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:43:35 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 11:57:54 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = 1;
		else
			return (0);
		i++;
	}
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
//	char	a[] = "123!!!0";

	char a[] = "";
	printf("n =  %d\n", ft_str_is_numeric(a));
}*/
