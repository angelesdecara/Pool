/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:35:54 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/29 00:05:24 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
int	testgood(char *str);
void    startdict(char  *str);

typedef struct	s_dict
{
	char	*numero;
	char	*nombre;
}	t_dict;
