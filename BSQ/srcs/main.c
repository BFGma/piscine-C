/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:02:02 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/20 22:46:17 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int fd;
	int i;

	i = 1;
	fd = 0;
	if (argc < 2)
	{
		if (read_map(fd))
			return (1);
	}
	else
	{
		while (i < argc)
		{
			errno = 0;
			if ((fd = open(argv[i++], O_RDONLY)) && fd != -1)
			{
				read_map(fd);
			}
			else
				ft_error();
			if (i < argc)
				write (1, "\n", 1);
		}
	}
	return (0);
}
