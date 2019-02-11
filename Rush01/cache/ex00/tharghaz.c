/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tharghaz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:48:48 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 10:19:32 by pcynthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_check_arguments(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if (argv[i][9])
			return ;
		while (argv[i][j])
		{
			if (argv[i][j] != '.' && (argv[i][j] < '1' || argv [i][j] > '9'))
			   return ;
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
}


int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		argv++;
		ft_check_arguments(argv);
	}
	return (0);
}
