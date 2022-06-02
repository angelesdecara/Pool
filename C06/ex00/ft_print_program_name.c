/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:13:05 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/30 21:23:43 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (*argv[0] != '\0' && argc)
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}
