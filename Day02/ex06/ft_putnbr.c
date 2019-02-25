/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:22:18 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/31 18:02:18 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int				check;
	int				i;
	int				is_neg;
	unsigned int	unsnb;

	is_neg = 0;
	i = 0;
	check = 1;
	unsnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		unsnb = nb * (-1);
		is_neg = 1;
	}
	while ((unsnb / check) / 10 != 0)
	{
		check *= 10;
	}
	while (check > 0)
	{
		ft_putchar('0' + unsnb / check % 10);
		check /= 10;
	}
}
