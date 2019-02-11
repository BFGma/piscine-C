/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:39:01 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/07 22:37:58 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int *arr_copy;

	if (max - min <= 0)
	{
		arr = 0;
		return (arr);
	}
	arr = (int*)malloc(sizeof(int) * (max - min));
	arr_copy = arr;
	while (max - min > 0)
	{
		*arr = min;
		min++;
		arr++;
	}
	arr = arr_copy;
	return (arr);
}
