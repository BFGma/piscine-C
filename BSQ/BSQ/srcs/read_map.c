/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:53:24 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/18 22:36:36 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + sign * (*str - '0');
		str++;
	}
	return (result);
}

int		ft_symb_counter(char *argv)
{
	int		fd;
	int		i;
	char	buf;

	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1) != 0)
	{
		i++;
	}
	close(fd);
	return (i);
}

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
		if(*str == '\n')
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

t_map		*ft_map_check(char **doub)
{
	int		i;
	int		j;
	int		param_count;
	t_map 		*map;
		
	i = 1;
	
	map = (t_map *)malloc(sizeof(t_map));
	param_count = ft_strlen(doub[0]);
	map->lines = ft_atoi(doub[0]);
	map->length = ft_strlen(doub[1]) ;
	map->empty = doub[0][param_count - 3];
	map->fill = doub[0][param_count - 1];
	map->obstacle = doub[0][param_count - 2];
	while (doub[i])
	{
		if (ft_strlen(doub[1]) != ft_strlen(doub[i]))
			{
				printf(">(%d-%d)>>>%c<<<(%d,%d)", ft_strlen(doub[1]), ft_strlen(doub[i]),doub[i][j], i, j);
				write(2, "map1error\n", 10);
				exit (0);	
			}
		j = 0;
		while (doub[i][j])
		{	
			printf("%c", doub[i][j]);
			if (doub[i][j] != map->obstacle && doub[i][j] != map->empty)
			{
				printf(">>>%c<<<(%d,%d)", doub[i][j], i, j);
				write(2, "map2error\n", 10);
				exit (0);
			}
			j++;
		}
		i++;
	}
	doub[0][param_count - 3] = 0;
	if (i - 1 != map->lines)
		{
				write(2, "map3error\n", 10);
				exit (0);
		}
	if (ft_dec_counter(map->lines) != ft_strlen(doub[0]))
		{
				write(2, "map4error\n", 10);
				exit (0);
		}
	printf("%d-%d-%c-%c\n", map->lines, map->length, map->empty, map->obstacle);
	return (map);
}

void	ft_one_to_two(char *str)
{
	int i;
	int j;
	char **doub;
	int length;
	
	i = 0;
	j = 0;
	length = ft_rows_counter(str);
	doub = (char **)malloc(sizeof(char *) * length);
	while (i < length)
	{
		doub[i] = (char *)malloc(sizeof(char) * ft_line_counter(str));
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
	doub[i] = 0;
	omegalul(ft_map_check(doub), doub);
//	ft_map_check(doub);
//	return (doub);
}

char	*read_map(char *argv)
{
	int i;
	char buf;
	char *array;
	int fd;
	int j;

	j = 0;
	i = ft_symb_counter(argv);
	if (!(array =(char *)malloc(sizeof(char) * i)))
	{
		write(2, "map error\n", 10);
		exit (0);
	}
	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1) != 0 && j < i )
	{
		write(1, &buf, 1);
		array[j] = buf;
		j++;
	}
	close(fd);
	return (array);
}

int		main(int argc, char **argv)
{
	int i;
	char **str;
	struct s_map	*sets;

	i = 1;
	while (argc > 1)
	{	
		ft_one_to_two(read_map(argv[i]));
	//	omegalul(ft_one_to_two(read_map(argv[i])), (ft_get_sets(ft_one_to_two(read_map(argv[i])))));
		i++;
		argc--;
	}
	return (0);
}
