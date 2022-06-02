/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:31:29 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/16 18:07:08 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n)
{
	char	a;
	char	b;
	int		i;
	int		j;
	int		contador;

	i = 0;
// last one will be 9, penultimate 8, second from end 8 and so on...
	j = 0;
	contador = 1;
	while (++i < n)
		contador = contador * (contador-1); // n * (n - 1) /2;
	b = j + '0';
	while (++i < contador)
	{
		// need to loop n times to write 0-9 (or 1-9) each time and before that a string with 0 or 01 or 012...
		//i = i * 10; // has to go 0 - 9, in 1 1-9, ....

		while (++j <= 9)
		{
			write(1, &b, 1);	
			a = j + '0';
			write(1, &a, 1);	
			write(1, ", ", 2);
		}
		j = i + 1;
		b = j + '0';
	}
}

int	main(void)
{
	ft_print_combn(3);
}
