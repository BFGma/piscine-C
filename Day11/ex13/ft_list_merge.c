/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:04:47 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 20:57:23 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*cache;

	if (!*begin_list1)
		*begin_list1 = begin_list2;
	else
	{
		cache = *begin_list1;
		while (cache->next)
			cache = cache->next;
		cache->next = begin_list2;
	}
}
