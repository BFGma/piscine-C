/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:45:03 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/31 18:01:25 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_putchar('0' + n1 / 10);
			ft_putchar('0' + n1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + n2 / 10);
			ft_putchar('0' + n2 % 10);
			if (n1 + n2 < 197)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
