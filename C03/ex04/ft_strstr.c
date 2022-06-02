/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:44:02 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/24 18:13:25 by angrodri         ###   ########.fr       */
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

void	inc2int1(int *i, int *j)
{
	*i = *i + 1;
	*j = *j + 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		sizetofind;

	sizetofind = lenstr(to_find);
	if (sizetofind == 0)
		return (str);
	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		if (*(str + i) == *(to_find + j))
		{
			while (*(to_find + j) == *(str + i) && j < sizetofind)
			{
				inc2int1(&i, &j);
			}
			if (j == sizetofind)
				return (str + i - j);
			else
				i = i - j;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[]= "marioooola abcio2992";
	char	b[]="ooola";

	printf("%s\n",ft_strstr(a,b));
	printf("%s\n",strstr(a,b));
}*/
