/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:04:11 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/18 13:56:20 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	//char	a[]="ancDEa";
	char	a[]="DE192AA";
	printf("Before %s\n", a);
	printf("After %s\n", ft_strupcase(a));
}*/
