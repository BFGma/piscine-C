/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:05:31 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/19 21:53:40 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map		*ft_map_check(char **doub)
{
	int		i;
	int		j;
	int		param_count;
	t_map	*map;

	i = 1;
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
	while (doub[i])
	{
		if (map->length == 0)
		{
			ft_error();
			map->error = 1;
			return (map);
		}
		if (ft_strlen(doub[1]) != ft_strlen(doub[i]))
		{
			ft_error();
			map->error = 1;
			return (map);
		}	
		j = 0;
		while (doub[i][j])
		{
			if (doub[i][j] != map->obstacle && doub[i][j] != map->empty)
			{
				ft_error();
				map->error = 1;
				return (map);
			}	
			j++;
		}
		i++;
	}
	if (i - 1 != map->lines)
	{
		ft_error();
		map->error = 1;
		return (map);
	}
	if (ft_dec_counter(map->lines) != ft_strlen(doub[0]))
	{
		ft_error();
		map->error = 1;
		return (map);
	}	
	return (map);
}
