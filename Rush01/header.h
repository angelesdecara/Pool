/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:38:28 by angrodri          #+#    #+#             */
/*   Updated: 2022/05/22 23:20:54 by angrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	changecol(int *col, int *sol);
void	changerow(int *row, int *sol);
int	index2cell(int  *borde);
void	rcfour(int *borde, int *sol);
void	starting(char *borde, int *sol);
int	index2cell(int  *borde);
int	testconditions(char *argsv);
int power(int b, unsigned int e);
void	update(int  *sols, int *posibles);
void	imprimesols(int *sols);
int	issafe(char *borde, int	*sols,int	pos, int num);
int	solveScraper(char *borde, int *sol, int f, int c);
int	viewleft(char *borde, int *sols,int f);
int	viewright(char *borde, int *sols,int f);
int	viewtop(char *borde, int *sols,int f);
int	viewbottom(char *borde, int *sols,int f);
