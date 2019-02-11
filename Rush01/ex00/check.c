/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:17:00 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 22:38:09 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_check_arguments(char **argv)
{
	int i;
	int j;
	int check;

	check = 0;
	i = 0;
	j = 0;
	while (i < 9)
	{
		if (argv[i][9])
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] != '.' && (argv[i][j] < '1' || argv[i][j] > '9'))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_check_same(int **str)
{
	int i;
	int j;
	int cache;

	cache = 0;
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (!ft_check_same_line(str, str[i][j], i, j) &&
					!ft_check_same_row(str, str[i][j], i, j))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_check_same_line(int **str, int v, int i, int j)
{
	int ch;

	ch = 0;
	while (ch < 9)
	{
		if (ch == j)
			ch++;
		if (v == str[i][ch])
			return (1);
		ch++;
	}
	return (0);
}

int		ft_check_same_row(int **str, int v, int i, int j)
{
	int ch;

	ch = 0;
	while (ch < 9)
	{
		if (ch == i)
			ch++;
		if (v == str[ch][j])
			return (1);
		ch++;
	}
	return (0);
}

int		**ft_char_to_int(char **argv)
{
	int i;
	int j;
	int **str;

	i = 0;
	str = (int **)malloc(9);
	while (i < 9)
	{
		str[i] = (int*)malloc(sizeof(int*) * 1000);
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				str[i][j] = 0;
			else
				str[i][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
	return (str);
}
