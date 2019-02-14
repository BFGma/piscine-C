/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:00:42 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/14 19:48:26 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_cat_file(int ac, char **av)
{
	int		file;
	char	buff[30000];
	int		i;
	char	*name;
	ssize_t	toprint;

	i = 0;
	while (++i <= ac)
	{
		name = av[i];
		file = open(name, O_RDWR);
		if (file < 0)
		{
			write(2, "cat: ", 5);
			write(2, name, ft_strlen(name));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else
				write(2, ": No such file or directory\n", 28);
			continue ;
		}
		while ((toprint = read(file, &buff, 30000)))
			write(1, &buff, toprint);
		close(file);
	}
}

void	ft_write_now(void)
{
	char c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_write_now();
	else
		ft_cat_file(ac - 1, av);
	return (0);
}
