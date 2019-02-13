/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:23:25 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 20:54:58 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*sort1;
	t_list	*sort2;
	t_list	*cache;

	cache = 0;
	sort1 = *begin_list;
	while (sort1)
	{
		sort2 = *begin_list;
		while (sort2->next)
		{
			if ((*cmp)(sort2->data, sort2->next->data) > 0)
			{
				cache = sort2->data;
				sort2->data = sort2->next->data;
				sort2->next->data = cache;
			}
			sort2 = sort2->next;
		}
		sort1 = sort1->next;
	}
}
