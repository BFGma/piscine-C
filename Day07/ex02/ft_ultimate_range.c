/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:27:43 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/07 22:37:40 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	j = max - min;
	i = 0;
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (j <= 0)
	{
		range = 0;
		return (0);
	}
	while (j > 0)
	{
		range[0][i] = min;
		min++;
		i++;
		j--;
	}
	return (i);
}
