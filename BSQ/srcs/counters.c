/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:06:27 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/19 20:07:08 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_line_counter(char *str)
{
	int size;

	size = 0;
	while (*str != '\n')
	{
		size++;
		str++;
	}
	return (size);
}

int		ft_rows_counter(char *str)
{
	int row;

	row = 0;
	while (*str)
	{
		if (*str == '\n')
			row++;
		str++;
	}
	return (row);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_dec_counter(int nbr)
{
	int dec;
	int count;

	count = 1;
	dec = 0;
	while (nbr / count > 0)
	{
		count *= 10;
		dec++;
	}
	return (dec);
}
