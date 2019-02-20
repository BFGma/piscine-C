/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_to_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:03:54 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/20 12:45:45 by peroyce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_one_to_two(char *str)
{
	int		i;
	int		j;
	int		length;
	char	**doub;

	i = 0;
	length = ft_rows_counter(str);
	doub = (char **)malloc(sizeof(char *) * (length + 1));
	while (i < length)
	{
		j = 0;
		doub[i] = (char *)malloc(sizeof(char) * (ft_line_counter(str) + 1));
		while (*str != '\n' && *str)
		{
			doub[i][j++] = *str;
			str++;
		}
		doub[i++][j] = '\0';
		if (*str == '\n')
			str++;
	}
	doub[i] = 0;
	if (omegalul(ft_map_struct(doub), &(doub[1])))
		return (1);
	return (0);
}
