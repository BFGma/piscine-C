/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 09:45:42 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/17 12:40:58 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/eval_expr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

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

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_operation(int a, int b, char oper)
{
	if (oper == '+')
		return (a + b);
	else if (oper == '-')
		return (a - b);
	else if (oper == '*')
		return (a * b);
	else if (oper == '/')
		return (a / b);
	else if (oper == '%')
		return (a % b);
	return (0);
}
