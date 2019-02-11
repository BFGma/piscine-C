/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 09:41:46 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 09:55:18 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int cache;
	int i;

	i = 0;
	cache = tab[i];
	while (length > 0)
	{
		if (tab[i] > cache)
		{
			cache = tab[i];
		}
		i++;
		length--;
	}
	return (cache);
}
