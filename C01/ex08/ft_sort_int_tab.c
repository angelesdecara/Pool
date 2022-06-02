/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:40:37 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/17 15:52:53 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 1;
	while (i < size)
	{
		temp = tab[i];
		j = i -1;
		while (j >= 0 && tab[j] > temp)
		{
			tab[j + 1] = tab[j];
			j = j -1;
		}
		tab[j + 1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	a[4] = {1000, 100, 30, 40};
	ft_sort_int_tab(a, 4);

	i=0;
	while (i < 4)
	{
		printf(" %d,", a[i]);
		i++;
	}
	printf("\n");
}*/
