/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:57:57 by angrodri          #+#    #+#             */
/*   Updated: 2022/06/01 18:16:00 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		sizefile(char *filename);
char	**mapa(int nmapas, char **nommapas);
char	**mapaFromStr(char *name, char *str);
char	**lineas(char *str);
int		nl(char *str);
int		ncols(char *str);
#endif
