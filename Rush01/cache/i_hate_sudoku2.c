/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tharghaz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:48:48 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 15:18:16 by tharghaz         ###   ########.fr       */
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

int		solve(int **str, int x, int y)
{
	int value;
	int spotx;
	int spoty;

	value = 0;
	spotx = 0;
	spoty = 0;
	printf("mark1 ");
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
		if (solve(str, x, y))
			return (1);
		else
			return (0);
	printf("mark2 ");
	}
	if (str[x][y] == 0)
	{
		while (value < 10)
		{	
			
			if (!check_x(str, x, value) && !check_y(str, y, value) && !check_square(str, x, y, value))
			{
				printf("mark3 ");
				str[x][y] = value;
				printf("%d", str[x][y]);
				printf("\n");
				if (x == 8 && y == 8)
					return(1);
				if (x < 8)
					spotx = x + 1;
				else if ( y < 8)
					{
					spotx = 0;
					spoty = y + 1;
					}
				if (solve(str, spotx, spoty))
					return (1); 
			}
		value++;
		printf("%d ", value);
		}	
		printf("mark5");
		str[x][y] = 0;
		return (0);
	
	}	
printf("mark 4 ");
	return (0);	
}

int		check_x(int **str, int x, int value)
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


int		check_y(int **str, int y, int value)
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


int		check_square(int **str, int x, int y, int value)
{
	int i;
	int j;
	
	if (x < 3)
		x = 0;
	else if (x < 6)
		x = 3;
	else
		x = 6;
	if (y < 3)
		y = 0;
	else if (y < 6)
		y = 3;
	else
		y = 6;


	
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

int		main(int argc, char **argv)
{	
	int **str;
	int i = 0;
	int j = 0;

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
	printf("\n");
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
