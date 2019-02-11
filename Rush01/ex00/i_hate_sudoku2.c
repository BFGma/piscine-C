/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_hate_sudoku2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:17:34 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 22:38:11 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_solve(int **str, int x, int y)
{
	int value;
	int spotx;
	int spoty;

	value = 0;
	spotx = 0;
	spoty = 0;
	if (ft_solve2(str, x, y))
		return (1);
	if (str[x][y] == 0)
	{
		if (ft_solve3(str, x, y, value))
			return (1);
	}
	return (0);
}

int		ft_check_x(int **str, int x, int value)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (str[x][i] == value)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_y(int **str, int y, int value)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (str[i][y] == value)
			return (1);
		i++;
	}
	return (0);
}

int		ft_get_square(int x)
{
	if (x < 3)
		return (0);
	else if (x < 6)
		return (3);
	else
		return (6);
}

int		ft_check_square(int **str, int x, int y, int value)
{
	int i;
	int j;

	x = ft_get_square(x);
	y = ft_get_square(y);
	i = x;
	while (i < x + 3)
	{
		j = y;
		while (j < y + 3)
		{
			if (str[i][j++] == value)
				return (1);
		}
		i++;
	}
	return (0);
}
