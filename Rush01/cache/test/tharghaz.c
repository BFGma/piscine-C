/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tharghaz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:48:48 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 10:32:10 by pcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		check_x(int **str, int i, int j);
int		check_y(int **str, int i, int j);
int		check_square(int **str, int i, int j, int v);

int		ft_check_arguments(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if (argv[i][9])
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] != '.' && (argv[i][j] < '1' || argv [i][j] > '9'))
				return (1);
			j++;	
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (argv[i][j])
		{
			printf("%c ", argv[i][j++]);
		}
		j = 0;
		i++;
		printf("\n");
	}
	return (0);
}


int		**check_pointer(char **argv)
{
	int i;
	int j;
	int **str;

	i = 0;
	str = (int **)malloc(9);
	while (i < 9)
	{
		str[i] = (int*)malloc(sizeof(int*) * 100);

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

int		solve(int **sud, int x, int y)
{
	int value;
	int spotx;
	int spoty;

	value = 1;
	spotx = 0;
	spoty = 0;
	if (sud[x][y] != 0)
	{	
		if (x == 8 && y == 8)
			return (1);
		if (x < 8)
			x++;
		else
		{
			x = 0;
			y++;
		}
		if (solve(sud, x, y))
			return (1);
		else
			return (0);
	}
	if (sud[x][y] == 0)
	{
		while (value < 10)
		{	
			if (!check_x(sud, x, value) && !check_y(sud, y, value) && !check_square(sud, x, y, value))
			{
				sud[x][y] = value;
				if (x == 8 && y == 8)
					return(1);
				if (x < 8)
					spotx = x + 1;
				else
				{
					spotx = 0;
					spoty = y + 1;
				}
				if (solve(sud, spotx, spoty))
					return (1);
			}
			value++;
		}	
		sud[x][y] = 0;
			return (0);
	}
}

int		check_x(int **sud, int x, int value)
{
	int i;

	i = 0;
	while (i < 9)
		if (sud[x][i++] == value)
			return (1);
	return (0);
}


int		check_y(int **sud, int y, int value)
{
	int i;

	i = 0;
	while (i < 9)
		if (sud[i++][y] == value)
			return (1);
	return (0);
}


int		check_square(int **sud, int x, int y, int value)
{
	int i;
	int j;

	j = 0;
	i = 0;
	
	if (x < 3)
		x = 0;
	else if (x < 6)
		x = 3;
	else
		x = 6;
	if (y < 3)
		x = 0;
	else if (x < 6)
		y = 3;
	else
		y = 6;

	while (i < x + 3)
	{	
		while (j < y + 3)
		{	
			if (sud[i][j] == value)
				return (1);
			j++;
		}
		i++;	
	}
	return (0);
}

int		main(int argc, char **argv)
{	
	int **str;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;

	if (argc == 10)
	{
		argv++;
		if(ft_check_arguments(argv))
		{
			write(1, "Error\n", 6);	
			return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	str = check_pointer(argv);
	while (i < 9)
	{
		while (j<9)
		{
			printf("%d ", str[i][j++]);
		}
		j = 0;
		i++;
		printf("\n");
	}
	printf("\n\n\n");
	solve(str, 0, 0);
	i = 0;
	while (i < 9)
	{
		while (j<9)
		{
			printf("%d ", str[i][j++]);
		}
		j = 0;
		i++;
		printf("\n");
	}
	return (0);
}
