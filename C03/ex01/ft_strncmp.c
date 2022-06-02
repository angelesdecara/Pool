/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:31:58 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/26 18:57:22 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ns1;
	int	ns2;

	ns1 = 0;
	ns2 = 0;
	while ((*s1 != '\0' || *s2 != '\0' ) && n > 0)
	{
		ns1 += *s1;
		ns2 += *s2;
		if (ns1 > ns2)
			return (ns1 - ns2);
		else if (ns2 > ns1)
			return (ns1 - ns2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[]="b";
	char b[]="abcd";

	printf("mine 2 %d\n",ft_strncmp(a,b,2));
	printf("strncmp 2 %d\n",strncmp(a,b,2));
	printf("mine 4 %d\n",ft_strncmp(a,b,4));
	printf("strncmp 4  %d\n",strncmp(a,b,4));
}*/
