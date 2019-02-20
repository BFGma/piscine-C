/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:05:31 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/20 20:55:53 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map		*ft_map_struct(char **doub)
{
	int		param_count;
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	map->error = 0;
	if (!doub[1])
	{
		ft_error();
		map->error = 1;
		return (map);
	}
	param_count = ft_strlen(doub[0]);
	map->length = ft_strlen(doub[1]);
	map->empty = doub[0][param_count - 3];
	map->fill = doub[0][param_count - 1];
	map->obstacle = doub[0][param_count - 2];
	doub[0][param_count - 3] = 0;
	map->lines = ft_atoi(doub[0]);
	if (ft_map_check(doub, map))
	{
		ft_error();
		map->error = 1;
		return (map);
	}
	return (map);
}

int			ft_map_check(char **doub, t_map *map)
{
	int i;
	int j;

	i = 1;
	while (doub[i])
	{
		if (map->length == 0 || map->empty == map->fill)
			return (1);
		if (ft_strlen(doub[1]) != ft_strlen(doub[i]))
			return (1);
		j = 0;
		while (doub[i][j])
		{
			if (doub[i][j] != map->obstacle && doub[i][j] != map->empty)
				return (1);
			j++;
		}
		i++;
	}
	if (i - 1 != map->lines || map->empty == map->obstacle)
		return (1);
	if (ft_dec_counter(map->lines) != ft_strlen(doub[0]) ||
		map->fill == map->obstacle)
		return (1);
	return (0);
}
