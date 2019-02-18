/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 15:05:31 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/17 15:39:39 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char **ft_one_to_two(char *str)
{
	int i;
	int j;
	char **doub;
	
	i = 0;
	j = 0;
	doub = (char **)malloc(63);
	while (i < 7)
	{
		doub[i] = (char *)malloc(sizeof(char) * 10);
		while (*str != '\n' && *str)
		{
			doub[i][j] = *str;
			str++;
			j++;
		}
		doub[i][j] = '\0';
		if (*str == '\n')
			str++;
		j = 0;
		i++;
	}
	return (doub);
}
