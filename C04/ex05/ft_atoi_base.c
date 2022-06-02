/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:39:52 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 11:53:02 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	getsign(char *str)
{
	int	i;

	i = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		i *= (1 - *str % 43);
		str++;
		if ((*str >= 10 && *str <= 13) || *str == 32)
			return (0);
	}
	return (i);
}

int	validbase(char *str)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	n = 0;
	while (*(str + n) != '\0')
	{
		if (*(str + n) == 43 || *(str + n) == 45)
			return (0);
		n++;
	}
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n - 1)
		{
			if (*(str + i) == *(str + j))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (n);
}

int	inbase(char a, char *base)
{
	while (*base != '\0')
	{
		if (a == *base)
			return (1);
		base++;
	}
	return (0);
}

int	pot(int base, int exp)
{
	int	res;

	res = 1;
	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		res = res*base;
		exp--;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sig;
	int		res;
	int		i;
	int		j;
	int		n;

	res = 0;
	//if (*base == '\0' || *(base + 1) == '\0' || validbase(base) == 0)
	if ((validbase(base) == 0) || (getsign(str) == 0))
		return (0);
	sig = getsign(str);
	//while (*str == '+' || *str == '-' || (*str > 8 && *str < 14) || *str == 32)
	while (*str == 32 || (*str > 8 || *str < 14))
		str++;
	while (*str == '+' || *str == '-')
		str++;
	while (*str != '\0' && inbase(*str, base))
	{
		i = 0;
		while (*str != *(base + i))
			i++;
		str++;
	}
	n = validbase(str - i); //length string good
	while (i > 0)
	{
		j = 0;
		while(*(str - i) != *(base + j))
			j++;
		res = res + j * pot(validbase(base),n - i);
		i--;
	}
	res = 10 * res + i;
	//str++;
	return (sig * res);
}
/*
int	main(void)
{
	char base[]="0123456789abcdef";
	char a[]= "ab";

	printf("hola %s",base);
	printf("valid base? %d", validbase(base));
	printf("hola %s",a);
	printf("valid base? %d", validbase(a));
	printf("f %d\n",ft_atoi_base(a,base));
}*/
