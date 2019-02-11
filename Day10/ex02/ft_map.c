/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:10:41 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/11 17:16:40 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int *arr;
	int *cache;

	arr = (int *)malloc(sizeof(int) * length);
	cache = arr;
	while (length > 0)
	{
		*arr = f(*tab);
		length--;
		arr++;
		tab++;
	}
	return (cache);
}
