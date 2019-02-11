/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_hate_sudoku1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 22:22:38 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 22:38:12 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_solve2(int **str, int x, int y)
{
	if (str[x][y] != 0)
	{
		if (x == 8 && y == 8)
			return (1);
		if (x < 8)
			x++;
		else if (y < 8)
		{
			x = 0;
			y++;
		}
		if (ft_solve(str, x, y))
			return (1);
		else
			return (0);
	}
	return (0);
}

int		ft_solve3(int **str, int x, int y, int value)
{
	int spoty;
	int spotx;

	spotx = 0;
	spoty = 0;
	while (++value < 10)
		if (!ft_check_x(str, x, value) && !ft_check_y(str, y, value)
					&& !ft_check_square(str, x, y, value))
		{
			str[x][y] = value;
			if (x == 8 && y == 8)
				return (1);
			if (x < 8)
				spotx = x + 1;
			else if (y < 8)
			{
				spotx = 0;
				spoty = y + 1;
			}
			if (ft_solve(str, spotx, spoty))
				return (1);
		}
	str[x][y] = 0;
	return (0);
}

int		ft_doing_well(int **str)
{
	if (!ft_check_same(str))
	{
		ft_error();
		return (0);
	}
	if (ft_check_length(str))
	{
		ft_error();
		return (0);
	}
	ft_solve(str, 0, 0);
	if (ft_check_solution(str))
	{
		ft_error();
		return (0);
	}
	ft_print_solution(str);
	return (1);
}

int		ft_check_length(int **str)
{
	int i;
	int j;
	int num;

	num = 0;
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (str[i][j] >= 1 && str[i][j] <= 9)
				num++;
			j++;
		}
		j = 0;
		i++;
	}
	if (num > 16)
		return (0);
	return (1);
}
