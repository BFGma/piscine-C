/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:56:19 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/12 21:57:24 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_doop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * (-1);
	}
	else
		num = nb;
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int		ft_operat(char *operator)
{
	if (operator[1])
		return (10);
	if (operator[0] == '-')
		return (0);
	if (operator[0] == '+')
		return (1);
	if (operator[0] == '/')
		return (2);
	if (operator[0] == '%')
		return (3);
	if (operator[0] == '*')
		return (4);
	return (10);
}

int		ft_do_op(int a, int b, int operator)
{
	int	(*oper[5])(int, int);

	oper[0] = &ft_min;
	oper[1] = &ft_add;
	oper[2] = &ft_div;
	oper[3] = &ft_mod;
	oper[4] = &ft_mult;
	return ((*oper[operator])(a, b));
}

int		main(int argc, char **argv)
{
	int	result;
	int	oper;

	if (argc != 4)
		return (0);
	oper = ft_operat(argv[2]);
	if (oper == 10)
	{
		write(1, "0\n", 1);
		return (0);
	}
	else if (oper == 2 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (oper == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	result = ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), oper);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
