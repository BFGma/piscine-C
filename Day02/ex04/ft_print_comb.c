/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:42:54 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/31 18:00:17 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int count;
	int last;

	last = 0;
	count = 0;
	while (count <= 999)
	{
		if (count / 100 < (count % 100) / 10 && count % 100 / 10 < count % 10)
		{
			if (last == 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
				last = 0;
			}
			ft_putchar('0' + count / 100);
			ft_putchar('0' + (count % 100) / 10);
			ft_putchar('0' + count % 10);
			last = 1;
		}
		count++;
	}
}
