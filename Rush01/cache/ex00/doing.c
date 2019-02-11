/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcynthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:35:10 by pcynthia          #+#    #+#             */
/*   Updated: 2019/02/09 21:56:30 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		solve(int **sud, int x, int y);
int     check_square(int **sud, int x, int y, int value);
int     check_x(int **sud, int x, int value);
int     check_y(int **sud, int y, int value);
void	prints(int **sud);

int main(void)
{
	int x;
	int y;
	int **sud;
	
	sud = sudoku;
	x = 0;
	y = 0;
	prints(sudoku);
	solve(sud, x, y);
	prints(sud);
	return(0);

}

void	prints(int **sud)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			printf("%d", sud[i][j]);
			j++;
		}
	printf("\n");
	i++;
	}
	printf("\n");
}

int		solve(int **sud, int x, int y)
{
	int value;
	int spotx;
	int spoty;

	value = 1;
	spotx = 0;
	spoty = 0;
/*	if (sud[x][y] != 0)
	{	
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
		while (value < 10)
		{	
			if (!check_x(sud, x, value) && !check_y(sud, y, value) && !check_square(sud, x, y, value))
			{
				sud[x][y] = value;
				if (x == 8 && y == 8)
					return(10);
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
		}	*/
	return (1);
}

int		check_x(int **sud, int x, int value)/* checking all columns on matches*/
{
	int i;

	i = 0;
	while (i < 9)
		if (sud[x][i] == value)
			return (1);
	return (0);
}


int		check_y(int **sud, int y, int value)/*checking strings on matches*/
{
	int i;

	i = 0;
	while (i < 9)
		if (sud[i][y] == value)
			return (1);
	return (0);
}


int		check_square(int **sud, int x, int y, int value)/* put all cases of squares to anothe function*/
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















