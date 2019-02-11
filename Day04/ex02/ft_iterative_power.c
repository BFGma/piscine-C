/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:19:19 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/02 18:30:10 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int bn;

	bn = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (power > 1)
	{
		nb *= bn;
		power--;
	}
	return (nb);
}
