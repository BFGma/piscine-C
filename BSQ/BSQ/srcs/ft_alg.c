/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:29:41 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/18 21:46:51 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	omegalul(char **str, t_map *sets)
{
	int		**str2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str2 = (int **)malloc(sizeof(int *) * sets->lines);
	while(i < sets->lines)
	{
		str2[i] = (int *)malloc(sizeof(int) * sets->length);
		while (j < sets->length)
		{
			if (str[i][j] == sets->obstacle)
				str2[i][j] = 0;
			else
				str2[i][j] = 1;
			j++;
			if (i > 0)
				break ;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (i < sets->lines)
	{
		while (j < sets->length)
		{
			printf("%d", str2[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}				
	omegalul2(str, str2, sets);
}

int		ft_min(int	a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	return (c);
}

void	omegalul2(char **str, int **str2, t_map *sets)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < sets->lines)
	{
		while (j < sets->length)
		{
			if (str[i][j] == sets->obstacle)
				str2[i][j] = 0;
			else
				str2[i][j] = ft_min(str2[i - 1][j], str2[i][j - 1], str2[i - 1][j - 1]) + 1;
			j++;
		}
		j = 1;
		i++;
	}
	i = 0;
	j = 0;
	while (i < sets->lines)
	{
		while (j < sets->length)
		{
			printf("%d", str2[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	omegalul3(str, str2, sets, 0);
}

void	omegalul3(char **str, int **str2, t_map *sets, int value)
{
	int i;
	int j;
	int i_b;
	int j_b;

	i = 0;
	j = 0;
	while (i < sets->lines)
	{
		while (j < sets->length)
		{
			if (str2[i][j] > value)
			{
				i_b = i;
				j_b = j;
				value = str2[i][j];
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("(%d,%d), %d\n", i_b, j_b, value);
	sets->cache = value;
	omegalul4(str, sets,  i_b, j_b);
}
void	omegalul4(char **str, t_map *sets, int i_b, int j_b)
{
	int i;
	int j;

	i = i_b;
	j = j_b;
	while (i > (i_b - sets->cache))
	{
		while (j > (j_b - sets->cache))
		{
			str[i][j] = sets->fill;
			j--;
		}
		j = j_b;
		i--;
	}
	i = 0;
	while (i < sets->lines)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
