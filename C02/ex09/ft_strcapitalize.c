/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:19:13 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/20 12:44:23 by angrodri         ###   ########.fr       */
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

int	alphanum(char str)
{
	int	t;

	t = 1;
	if (str >= 'a' && str <= 'z')
		t = 1;
	else if (str >= 'A' && str <= 'Z')
		t = 1;
	else if (str >= '0' && str <= '9')
		t = 1;
	else
		t = 0;
	return (t);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (alphanum(str[i]) == 1)
		{
			ft_strupcase(&str[i]);
			j = i + 1;
			while (alphanum(str[j]) == 1)
			{
				ft_strlowcase(&str[j]);
				j++;
			}
			i = j;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
        char a[]="salut, comment tu vas" ;
		char	b[]="? 42mots quarante-deux; cinquante+et+un";
        printf("Before %s\n \n", a);
        printf("After %s\n \n", ft_strcapitalize(a));
}*/
