/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:16:30 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 22:38:14 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

int		ft_check_solution(int **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (str[i][j] == 0)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	ft_print_solution(int **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar('0' + str[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int **str;
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 10)
	{
		argv++;
		if (ft_check_arguments(argv))
		{
			ft_error();
			return (0);
		}
	}
	else
	{
		ft_error();
		return (0);
	}
	str = ft_char_to_int(argv);
	ft_doing_well(str);
	return (0);
}
