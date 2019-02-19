/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:53:24 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/19 22:17:35 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*merge(char *dest, char *source)
{
	while (*dest)
		dest++;
	while ((*dest = *source) != '\0')
	{
		dest++;
		source++;
	}
	return (dest);
}

char	*ft_concat(char *s1, char *s2)
{
	char	*cache;
	int		size;

	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1;
	cache = (char *)malloc(size);
	*cache = '\0';
	merge(cache, s1);
	merge(cache, s2);
	free(s1);
	return (cache);
}

void	ft_error(void)
{
	write(1, "map error\n", 10);
}

int		read_map(int fd)
{
	int		z;
	char	*array;
	char	buf[BUFF_SIZE + 1];

	array = (char *)malloc(sizeof(char));
	while ((z = read(fd, &buf, BUFF_SIZE)) && errno != EISDIR)
	{
		buf[z] = '\0';
		if (array)
			array = ft_concat(array, buf);
		else
			ft_error();
	}
	if (errno == EISDIR || buf[0] == '\0' || buf[z] == '\n')
	{	
		ft_error();
		return (1);
	}
	if (ft_one_to_two(array))
		return (1);
	return (0);
}
