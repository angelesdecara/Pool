/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:02:16 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/16 18:13:47 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*function that prints all digits in increasing order*/
void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
