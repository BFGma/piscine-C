/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 09:52:57 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/17 12:41:09 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/eval_expr.h"

char	*ft_delete_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	return (str2);
}

int		ft_get_next_num(char **str)
{
	int		num;
	int		flag;

	num = 0;
	flag = 1;
	if (*str[0] == '+' || *str[0] == '-')
	{
		if (*str[0] == '-')
			flag = -1;
		*str = *str + 1;
	}
	if (*str[0] == '(')
	{
		*str = *str + 1;
		num = ft_prepare_operation(str);
		if (*str[0] == ')')
			*str = *str + 1;
	}
	while ('0' <= *str[0] && *str[0] <= '9')
	{
		num = (num * 10) + *str[0] - '0';
		*str = *str + 1;
	}
	return (flag * num);
}

int		ft_prepare_highest(char **str)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = ft_get_next_num(str);
	while (*str[0] == '*' || *str[0] == '/' || *str[0] == '%')
	{
		oper = *str[0];
		*str = *str + 1;
		num2 = ft_get_next_num(str);
		num1 = ft_operation(num1, num2, oper);
	}
	return (num1);
}

int		ft_prepare_operation(char **str)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = ft_get_next_num(str);
	while (*str[0] && *str[0] != ')')
	{
		oper = *str[0];
		*str = *str + 1;
		if (oper == '+' || oper == '-')
			num2 = ft_prepare_highest(str);
		else
			num2 = ft_get_next_num(str);
		num1 = ft_operation(num1, num2, oper);
	}
	return (num1);
}

int		eval_expr(char *str)
{
	if (!*str)
		return (0);
	str = ft_delete_whitespaces(str);
	return (ft_prepare_operation(&str));
}
