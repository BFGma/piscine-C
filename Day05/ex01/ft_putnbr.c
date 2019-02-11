/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:11:22 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/04 14:29:48 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int				i;
	int				is_neg;
	int				check;
	unsigned int	nb_pr;

	i = 0;
	check = 1;
	is_neg = 0;
	nb_pr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_pr = nb * (-1);
		is_neg = 1;
	}
	while ((nb_pr / check) / 10 != 0)
	{
		check *= 10;
	}
	while (check > 0)
	{
		ft_putchar(nb_pr / check % 10 + '0');
		check /= 10;
	}
}
