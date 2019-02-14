/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:31:12 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/14 18:15:07 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_open_file(char *name)
{
	int		ret;
	int		fd;
	char	buf[4097];

	fd = open(name, O_RDONLY);
	while ((ret = read(fd, buf, 4096)))
	{
		buf[4096] = '\0';
		ft_putstr(buf);
	}
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
}

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else if (ac == 2)
		ft_open_file(av[1]);
	return (0);
}
