/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salarak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 12:00:58 by salarak           #+#    #+#             */
/*   Updated: 2019/02/17 13:12:26 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);
int		ft_putchar(char c);

int		ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	res = 0;
	neg = 0;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
				|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-res);
	return (res);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
