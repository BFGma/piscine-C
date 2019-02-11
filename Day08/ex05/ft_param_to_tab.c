/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 13:50:29 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 15:03:49 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	char	*src_copy;
	char	*start;
	int		i;

	i = 0;
	while (src[i])
		i++;
	src_copy = (char*)malloc(sizeof(*src) * (i + 1));
	start = src_copy;
	while (i > 0)
	{
		*src_copy = *src;
		src++;
		src_copy++;
		i--;
	}
	*src_copy = '\0';
	src_copy = start;
	return (src_copy);
}

int						ft_arg_size(char *str)
{
	int		length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*per;

	i = 0;
	per = (struct s_stock_par*)malloc(sizeof(struct s_stock_par*) * (ac + 1));
	while (i < ac)
	{
		per[i].size_param = ft_arg_size(av[i]);
		per[i].str = av[i];
		per[i].copy = (char*)malloc(sizeof(char) * (i + 1));
		per[i].copy = ft_strdup(av[i]);
		per[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	per[i].str = 0;
	return (per);
}
