/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:35:21 by tharghaz          #+#    #+#             */
/*   Updated: 2019/01/31 17:56:13 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char c_scode;

	c_scode = 'a';
	while (c_scode <= 'z')
	{
		ft_putchar(c_scode);
		c_scode++;
	}
}
