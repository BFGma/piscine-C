/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 00:11:33 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 00:18:07 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	count;

	count = 0;
	if (base % 2 == 1)
		base = base * 3 + 1;
	else if (base % 2 == 0)
		base /= 2;
	if (base > 1)
		count = ft_collatz_conjecture(base);
	return (count + 1);
}
