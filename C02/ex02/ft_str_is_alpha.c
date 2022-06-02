/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:08:31 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 11:56:21 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
				alpha = 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
				alpha = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	i = 0;
	if (!str[i])
		alpha = 1;
	return (alpha);
}
/*
#include <stdio.h>
int	main(void)
{
	//char	a[] = "abc782in2"; 

//	char	a[] = "nsmalwWA";

//	char a[] = "i!alwWA";

char a[]="";
	printf("%d\n", ft_str_is_alpha(a));
}*/
