/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contact_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:10:38 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/07 22:36:20 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int size;

	size = 0;
	i = 0;
	j = 0;
	while (++i < argc)
	{
		while (argv[i][j])
		{
			j++;
			size++;
		}
		size++;
		j = 0;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*end;
	char	*save;
	int		b;

	b = 0;
	i = 1;
	j = 0;
	end = (char*)malloc(sizeof(char) * ft_strlen(argc, argv));
	save = end;
	while (argc > 1)
	{
		while (argv[i][j])
			end[b++] = argv[i][j++];
		j = 0;
		argc--;
		if (argc == 1)
			end[b] = '\0';
		else
			end[b++] = '\n';
		i++;
	}
	return (save);
}
