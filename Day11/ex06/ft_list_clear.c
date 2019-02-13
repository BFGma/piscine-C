/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:12:02 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 18:19:53 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *cache;

	list = *begin_list;
	while (list)
	{
		cache = list;
		free(list);
		list = cache->next;
	}
	*begin_list = 0;
}
