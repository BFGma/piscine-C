/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 01:19:41 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 01:54:28 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	char h;

	h = '\n';
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &h, 1);
}

int		ft_check_params(char *check)
{
	int flag;
	char *str1;
	char *str2;
	char *str3;
	
	str1 = "Bauer";
	flag = 0;
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{	
		if (ft_check_params(argv[i]));
		{
			ft_putstr("Alert!!!");
			return (0);
		}
			i++;
	}
	return (0);
}
