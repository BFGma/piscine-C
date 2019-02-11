/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 17:35:38 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/02 17:53:13 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		nb = 2;
	while (i < (nb / 2) + 1)
	{
		if ((nb % i) == 0)
			nb = ft_find_next_prime(nb + 1);
		i++;
	}
	return (nb);
}
