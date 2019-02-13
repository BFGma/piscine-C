/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:49:50 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 20:49:31 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*cache;
	int			i;

	i = 1;
	list = NULL;
	while (ac > i)
	{
		cache = ft_create_elem(av[i]);
		cache->next = list;
		list = cache;
		i++;
	}
	return (list);
}
