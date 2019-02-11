/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:33:19 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/07 22:39:22 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src_copy;
	char	*start;
	int		i;

	i = 0;
	while (src[i])
		i++;
	src_copy = (char *)malloc(sizeof(*src) * i);
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
