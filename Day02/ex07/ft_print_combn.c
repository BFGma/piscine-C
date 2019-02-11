/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:53:10 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/30 22:09:28 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	int count;
	int last;

	last = 0;
	count = 1;
	while (n > 0)
	{
		count *= 10;
		n--;	
	}
	count -= 1;
	
}
