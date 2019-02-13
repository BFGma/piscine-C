/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:32:51 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 19:00:31 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*cache;
	t_list	*next;
	t_list	*list;

	next = 0;
	cache = 0;
	list = *begin_list;
	while (list)
	{
		next = list->next;
		list->next = cache;
		cache = list;
		list = next;
	}
	*begin_list = cache;
}
