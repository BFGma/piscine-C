/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 13:53:12 by peroyce           #+#    #+#             */
/*   Updated: 2019/02/19 21:01:42 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_result(char **str, t_map *sets)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < sets->lines)
	{
		write(1, &str[i][0], sets->length);
		write(1, "\n", 1);
		i++;
	}
}
