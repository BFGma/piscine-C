/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:23:54 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/31 17:56:40 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char c_scode;

	c_scode = 'z';
	while (c_scode >= 'a')
	{
		ft_putchar(c_scode);
		c_scode--;
	}
}
