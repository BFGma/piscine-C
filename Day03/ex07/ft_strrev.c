/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:19:26 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/01 11:36:21 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int length;
	int cache;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (i < length - 1)
	{
		cache = str[i];
		str[i] = str[length - 1];
		str[length - 1] = cache;
		i++;
		length--;
	}
	return (str);
}
